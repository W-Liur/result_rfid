/*
 * =====================================================================================
 *
 *       Filename:  riders.h
 *
 *    Description:  用户名单预置表
 *
 *        Version:  1.0
 *        Created:  2018年12月17日 12时40分52秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include "global.h"
#define _PATH_START		"/home/pi/autoresult_nespi_001.txt"
#define _PATH_END		"/home/pi/end_result_superpi_002.txt"

HIBPRiderInfo riders[] = {
    {1,     "丁再刚                      ", "勇峰自行车公园                           ",             EBIKE },
    {2,     "楼文钧                      ", "假日单车山地队                           ",             EBIKE },
    {3,     "章子俊                      ", "石舌章队                                 ",             EBIKE },
    {4,     "刘卓                        ", "虬龙科技                                 ",             EBIKE },
    {5,     "姜波                        ", "轻蜂摩嗨                                 ",             EBIKE },
    {6,     "姚路                        ", "轻蜂                                     ",             EBIKE },
    {7,     "王蒙                        ", "杭州Trek                                 ",             EBIKE },
    {8,     "仰海龙                      ", "蛟龙                                     ",             EBIKE },
    {101,   "雷星                        ", "HangZhou Giant Racing                    ",             MAN   },
    {102,   "吴超                        ", "长沙顺时针车队                           ",             MAN   },
    {103,   "周小焜                      ", "长沙CYCGO速行俱乐部                      ",             MAN   },
    {104,   "唐梦麒                      ", "北京GDR Racing Team                      ",             MAN   },
    {105,   "周吉强                      ", "假日单车山地队                           ",             MAN   },
    {106,   "周晓龙                      ", "双轮汇SLH Racing                         ",             MAN   },
    {107,   "方子凡                      ", "双轮汇SLH Racing                         ",             MAN   },
    {108,   "黄立观                      ", "个人                                     ",             MAN   },
    {109,   "梅雨龙                      ", "假日单车山地队                           ",             MAN   },
    {110,   "马琰                        ", "假日单车山地队                           ",             MAN   },
    {111,   "孙祺龙                      ", "假日单车山地队                           ",             MAN   },
    {112,   "杜芳旭                      ", "CYCGO速行车队 兼长沙迪卡侬旗舰店运动大使 ",             MAN   },
    {113,   "俞斌                        ", "鬼魅仔车队                               ",             MAN   },
    {114,   "金鑫越                      ", "上虞跳跳驴                               ",             MAN   },
    {115,   "杨琦                        ", "27Bike上海能量x生滑                      ",             MAN   },
    {116,   "黄选锦                      ", "骑行家                                   ",             MAN   },
    {117,   "Baillod Yves Laurent Gabriel", "上海魅力单车                             ",             MAN   },
    {118,   "Eric Loriot                 ", "27Bike上海能量x生滑                      ",             MAN   },
    {119,   "Ammon Lewis                 ", "27Bike上海能量x生滑                      ",             MAN   },
    {120,   "Nicolas Thiry               ", "27Bike上海能量x生滑                      ",             MAN   },
    {121,   "Boris Boullot               ", "27Bike上海能量x生滑                      ",             MAN   },
    {122,   "Erik                        ", "Team Fuzzy Balls                         ",             MAN   }, 
    {123,   "Jethro Kang                 ", "Rehau                                    ",             MAN   }, 
    {124,   "谭钊                        ", "长沙半小时车队                           ",             MAN   },
    {125,   "洪辉熊                      ", "长沙半小时车队                           ",             MAN   },
    {126,   "周王忍                      ", "长沙半小时车队                           ",             MAN   },
    {127,   "徐鑫                        ", "长沙半小时车队                           ",             MAN   },
    {128,   "欧阳一茗                    ", "长沙半小时车队                           ",             MAN   },
    {129,   "周吉吉                      ", "长沙半小时车队                           ",             MAN   },
    {130,   "李祖彜/Barry Lee            ", "西虹试飞客队                             ",             MAN   },
    {131,   "邓科                        ", "西虹试飞客队                             ",             MAN   },
    {132,   "刘智豪                      ", "西虹试飞客队                             ",             MAN   },
    {133,   "黄浩                        ", "天空穿越车队                             ",             MAN   },
    {134,   "周鹰                        ", "天空穿越车队                             ",             MAN   },
    {135,   "黄乐                        ", "天空穿越车队                             ",             MAN   },
    {136,   "许中柱                      ", "天空穿越车队                             ",             MAN   },
    {137,   "李俊                        ", "天空穿越车队                             ",             MAN   },
    {138,   "王舒                        ", "上海魅力单车                             ",             MAN   },
    {139,   "马凌轩                      ", "上海魅力单车                             ",             MAN   },
    {140,   "彭先元                      ", "上海魅力单车                             ",             MAN   },
    {141,   "许皓                        ", "上海魅力单车                             ",             MAN   },
    {142,   "罗磊                        ", "蓝色单车                                 ",             MAN   },
    {143,   "周智文                      ", "蓝色单车                                 ",             MAN   },
    {144,   "陈南剑                      ", "蜗牛队                                   ",             MAN   },
    {145,   "张代行                      ", "蜗牛队                                   ",             MAN   },
    {146,   "陈曦                        ", "阿里天驱                                 ",             MAN   },
    {147,   "陈一栋                      ", "HIBP                                     ",             MAN   },
    {148,   "喻杰                        ", "HangZhou Giant                           ",             MAN   },
    {149,   "马力                        ", "漫奇车队                                 ",             MAN   },
    {150,   "王国栋                      ", "Byron                                    ",             MAN   },
    {151,   "应明浩                      ", "HIBP                                     ",             MAN   },
    {201,   "张佳莉                      ", "鬼魅仔车队                               ",             WOMAN },
    {202,   "浦慧菁                      ", "西虹试飞客队                             ",             WOMAN },
    {203,   "陈海玲                      ", "27Bike上海能量x生滑                      ",             WOMAN },
    {204,   "李爱芹                      ", "27Bike上海能量x生滑                      ",             WOMAN },
    {301,   "窦安强                      ", "上海魅力单车                             ",             TASTE }, 
    {401,   "骆沙舟                      ", "假日单车山地队                           ",             MASTER},
    {402,   "王杜                        ", "天空穿越车队                             ",             MASTER},
    {403,   "陈海川                      ", "西虹试飞客队                             ",             MASTER},
    {404,   "高一洋                      ", "上海魅力单车                             ",             MASTER},
    {405,   "戴乐鸣                      ", "上海魅力单车                             ",             MASTER},
    {406,   "肖辉                        ", "长沙CYCGO速行俱乐                        ",             MASTER},
    {407,   "ASH/阿什                    ", "HIBP                                     ",             MASTER},
    {408,   "刘怡                        ", "省级机关自行车队                         ",             MASTER},
    {409,   "Ian Douglas-Jones           ", "Team Fuzzy Balls                         ",             MASTER}, 
    {410,   "Johannes                    ", "Team Fuzzy Balls                         ",             MASTER}, 
    {411,   "Andreas                     ", "Team Fuzzy Balls                         ",             MASTER}, 
    {412,   "林世忠                      ", "西虹试飞客队                             ",             MASTER},
    {413,   "朱嘉钧                      ", "27Bike上海能量x生滑                      ",             MASTER},
    {414,   "肖庆                        ", "上海魅力单车                             ",             MASTER},
    {415,   "彭惟礼                      ", "上海魅力单车                             ",             MASTER},
    {416,   "严俊                        ", "上海魅力单车                             ",             MASTER},
    {417,   "周辰烨                      ", "上海魅力单车                             ",             MASTER},
    {418,   "唐陈                        ", "上海魅力单车                             ",             MASTER},
    {419,   "朱陈华                      ", "上海魅力单车                             ",             MASTER},
    {420,   "徐煜寰                      ", "上海魅力单车                             ",             MASTER},
    {421,   "周炅闻                      ", "天空穿越车队                             ",             MASTER},
    {422,   "谢东珂                      ", "雪天车队                                 ",             MASTER},
    {423,   "夏永照                      ", "西虹试飞客队                             ",             MASTER},
    {424,   "林正峯                      ", "西虹试飞客队                             ",             MASTER},
    {425,   "周军                        ", "西虹试飞客队                             ",             MASTER},
    {426,   "顾春华                      ", "西虹试飞客队                             ",             MASTER},
    {427,   "苏涵宇                      ", "西虹试飞客队                             ",             MASTER},
    {428,   "张亮                        ", "闪电中国杭州中老年扛车队                 ",             MASTER},
    {429,   "宋舒波                      ", "假日单车山地队                           ",             MASTER},
    {430,   "范旻                        ", "省级机关自行车队                         ",             MASTER},
    {431,   "沈振亮                      ", "27Bike上海能量x生滑                      ",             MASTER},
    {432,   "陈黎升                      ", "鬼魅仔车队                               ",             MASTER},
    {433,   "Woon Hon Siong              ", "鬼魅仔车队                               ",             MASTER},
    {434,   "李程                        ", "省直机关自行车队                         ",             MASTER}, 
    {435,   "吴双                        ", "假日单车山地队                           ",             MASTER},
};
