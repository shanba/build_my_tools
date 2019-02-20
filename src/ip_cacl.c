void ipvalue_to_ipaddr(unsigned int ip_value,char *ip_addr)
{
    sprintf(ip_addr,"%d.%d.%d.%d\0",
            (ip_value>>24)&0x000000ff,
            (ip_value>>16)&0x000000ff,
            (ip_value>>8)&0x000000ff,
            (ip_value&0x000000ff));
}

unsigned int ipaddr_to_ipvalue(char *ip_addr)
{
    unsigned int ip_value;
    char *p;
    char buf[4],i=0;

    p = strtok(ip_addr,".");
    while((p)&&(i<4))
    {
        buf[i] = atoi(p);
        p = strtok("",".");
        i++;
    }
    ip_value = buf[0]<<24 | buf[1]<<16 | buf[2]<<8 | buf[3];
    return ip_value;
}
