
__kernel
void rsha256_kernel(__global uint* hash, __global const uint* num_iters)
{
	const uint id = get_global_id(0);
	
	uint msg[16];
	__attribute__((opencl_unroll_hint(8)))
	for(int i = 0; i < 8; ++i) {
		msg[i] = sha_pack_u32(hash[id * 8 + i]);
	}
	msg[8] = sha_pack_u32(0x80);
	
	__attribute__((opencl_unroll_hint(6)))
	for(int i = 9; i < 15; ++i) {
		msg[i] = 0;
	}
	msg[15] = 256;
	
	uint state[8];
	
	for(uint k = 0; k < num_iters[id]; ++k)
	{
		__attribute__((opencl_unroll_hint(8)))
		for(int i = 0; i < 8; ++i) {
			state[i] = h_init[i];
		}
		sha256(msg, state);
		
		__attribute__((opencl_unroll_hint(8)))
		for(int i = 0; i < 8; ++i) {
			msg[i] = state[i];
		}
	}
	
	__attribute__((opencl_unroll_hint(8)))
	for(int i = 0; i < 8; ++i) {
		hash[id * 8 + i] = sha_pack_u32(state[i]);
	}
}