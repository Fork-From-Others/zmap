ZMap是一个开源网络扫描工具，可以帮助研究人员快速的进行全网检测。只需要一台机器和足够上行网络速度，就可以以达到千兆以太网的理论值速度并在45分钟内扫描全网络IPv4地址。

基本选项

这些选项是在扫描中最常用的

-p, –target-port=port

需要扫描的TCP 端口号 (比如443)

-o, –output-file=name

将扫描结果输出到文件

-b, –blacklist-file=path

黑名单文件，即排除在扫描范围外的地址。在conf/blacklist.example文件中有实例，每同一行写一个网段，比如192.168.0.0/16。

扫描选项

-n, –max-targets=n

检测的上限范围，可以是一个数字如-n 10000，也可以是扫描地址空间中的百分比 

-N, –max-results=n

接收到一定数量的结果后退出扫描

-t, –max-runtime=secs

最大扫描（发包）时间

-r, –rate=pps

设置发包速率（packets/sec）

-B, –bandwidth=bps

设置发包带宽（bits/second

-c, –cooldown-time=secs

接受返回的时间(default=8)

-e, –seed=n

选择地址的排列序号

–shards=n

Split the scan up into N shards/partitions among different instances of zmap (default=1). When sharding, –seed is required

切分扫描。与–seed参数配合使用

-T, –sender-threads=n

发包的线程数 (默认为1)

-P, –probes=n

送达每个IP的探测器数量(默认为1)

网络选项

-s, –source-port=port|range

发包的源端口(s)

-S, –source-ip=ip|range

发包的源IP，也可以是IP地址段

-G, –gateway-mac=addr

发包的网关MAC地址

-i, –interface=name

网络端口

探测器选项

ZMap允许用户定义和编写自己的探测器模块。

–list-probe-modules

列出可用的探测器模块

-M, –probe-module=name

选择探测器模块 (默认为tcp_synscan)

–probe-args=args

设置探测器模块的参数

–list-output-fields

列出所选择的探测器模块

输出选项

ZMap 允许用户定义和编写自己的输出模块。输出模块负责处理探测器模块的返回结果并且展示给用户。

–list-output-modules

列出所有输出模块

-O, –output-module=name

设置输出模块

–output-args=args

设置输出模块的参数

-f, –output-fields=fields

列出所选择的输出模块

–output-filter

输出模块过滤器

附加选项

-C, –config=filename

读一个配置文件，其中可以包含特殊的选项

-q, –quiet

安静模式

-g, –summary

在扫描结束后，打印配置和结果汇总

-v, –verbosity=n

log的等级 (0-5, 默认为3)

-h, –help

显示帮助

-V, –version

打印版本
