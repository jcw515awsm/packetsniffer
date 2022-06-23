

sock_raw = socket(AF_INET , SOCK_RAW , IPPROTO_TCP);
while(1)
{
data_size = recvfrom(sock_raw, buffer , 65536 , 0 , &saddr , &saddr_size);

