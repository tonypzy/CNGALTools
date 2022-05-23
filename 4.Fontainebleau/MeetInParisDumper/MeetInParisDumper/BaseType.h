
#ifdef _WIN64
	/// <summary>
	/// 无符号8字节整数
	/// </summary>
	typedef unsigned long long UInteger;
	/// <summary>
	/// 有符号8字节整数
	/// </summary>
	typedef long long SInteger;
#else
	/// <summary>
	/// 无符号4字节整数
	/// </summary>
	typedef unsigned long UInteger;
	/// <summary>
	/// 有符号4字节整数
	/// </summary>
	typedef long SInteger;
#endif