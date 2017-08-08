#include <sys/endian.h>

#define cpu_to_le16(x) htole16(x)
#define cpu_to_le32(x) htole32(x)
#define cpu_to_le64(x) htole64(x)
#define le16_to_cpu(x) le16toh(x)
#define le32_to_cpu(x) le32toh(x)
#define le64_to_cpu(x) le64toh(x)
#define cpu_to_be16(x) htobe16(x)
#define cpu_to_be32(x) htobe32(x)
#define cpu_to_be64(x) htobe64(x)
#define be16_to_cpu(x) be16toh(x)
#define be32_to_cpu(x) be32toh(x)
#define be64_to_cpu(x) be64toh(x)
