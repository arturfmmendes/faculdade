/*Um provedor de acesso à Internet mantém o seguinte cadastro de clientes: código do cliente, 
e-mail, número de  horas  de  acesso, página  (S-sim ou  N-não).  

Elaborar  um  algoritmo  que calcule  e mostre um  relatório contendo o valor a pagar  por cada cliente, sabendo-se 

as  primeiras  20  horas  de  acesso  é  R$35,00  e  as  
horas  que  excederam  tem  o  custo  de R$2,50 por hora. 
Para os clientes que têm página, adicionar R$40,00. Inserir um conjunto de 
registros (máximo 500).*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro{
    int codigo;
    char *email;
    float hrsAcesso;
    char pagina;
}cadastro;

float calculaPreco(cadastro cliente);

int main(void)
{
    cadastro clientes[] = {
    
        {
            724,
            "rqowhsg@gmail.com",
            91.4,
            'N'
        },
        {
            289,
            "pzmcgfm@gmail.com",
            72.8,
            'N'
        },
        {
            495,
            "zjtmelb@gmail.com",
            58.6,
            'N'
        },
        {
            891,
            "nbbdogv@gmail.com",
            62.4,
            'N'
        },
        {
            878,
            "uzutcru@gmail.com",
            69.5,
            'N'
        },
        {
            421,
            "kobgbxs@gmail.com",
            92.3,
            'S'
        },
        {
            839,
            "lcmqbkx@gmail.com",
            05.2,
            'N'
        },
        {
            348,
            "soyvleg@gmail.com",
            88.9,
            'S'
        },
        {
            411,
            "cnsxwyv@gmail.com",
            03.4,
            'S'
        },
        {
            124,
            "sabxmme@gmail.com",
            08.6,
            'S'
        },
        {
            634,
            "krbjevl@gmail.com",
            23.2,
            'S'
        },
        {
            163,
            "gppfrxi@gmail.com",
            67.1,
            'N'
        },
        {
            562,
            "eevxdpi@gmail.com",
            43.2,
            'S'
        },
        {
            812,
            "tfqjloc@gmail.com",
            09.1,
            'N'
        },
        {
            923,
            "tbzzotq@gmail.com",
            48.9,
            'N'
        },
        {
            221,
            "gyuzuir@gmail.com",
            76.4,
            'N'
        },
        {
            773,
            "ydqhtiy@gmail.com",
            52.1,
            'N'
        },
        {
            821,
            "plnmbhs@gmail.com",
            79.8,
            'N'
        },
        {
            581,
            "hlipowq@gmail.com",
            98.8,
            'N'
        },
        {
            618,
            "cszxevn@gmail.com",
            84.4,
            'S'
        },
        {
            623,
            "vvefyrj@gmail.com",
            21.3,
            'S'
        },
        {
            528,
            "yulskmi@gmail.com",
            94.8,
            'S'
        },
        {
            442,
            "mnxlaqk@gmail.com",
            30.8,
            'S'
        },
        {
            178,
            "yjeezex@gmail.com",
            05.3,
            'N'
        },
        {
            748,
            "frovxgz@gmail.com",
            49.2,
            'S'
        },
        {
            512,
            "ksgxzeo@gmail.com",
            00.3,
            'N'
        },
        {
            165,
            "zxezpux@gmail.com",
            98.0,
            'N'
        },
        {
            629,
            "peryvlk@gmail.com",
            57.0,
            'N'
        },
        {
            965,
            "vaghphk@gmail.com",
            94.9,
            'N'
        },
        {
            569,
            "jhgqxwu@gmail.com",
            38.7,
            'N'
        },
        {
            179,
            "zrmocry@gmail.com",
            61.4,
            'N'
        },
        {
            214,
            "tsnrfqw@gmail.com",
            81.4,
            'N'
        },
        {
            789,
            "wwwmdkh@gmail.com",
            48.6,
            'S'
        },
        {
            618,
            "sogehwz@gmail.com",
            91.2,
            'N'
        },
        {
            969,
            "iybbrdz@gmail.com",
            40.5,
            'S'
        },
        {
            835,
            "ydkdvro@gmail.com",
            75.4,
            'N'
        },
        {
            988,
            "lrprova@gmail.com",
            06.8,
            'S'
        },
        {
            119,
            "xskerwy@gmail.com",
            05.9,
            'S'
        },
        {
            569,
            "qfbkzuv@gmail.com",
            44.8,
            'N'
        },
        {
            311,
            "nepasqb@gmail.com",
            03.8,
            'N'
        },
        {
            295,
            "zyolxsf@gmail.com",
            18.8,
            'S'
        },
        {
            717,
            "dmultmi@gmail.com",
            47.5,
            'N'
        },
        {
            918,
            "mrjcafz@gmail.com",
            17.4,
            'N'
        },
        {
            516,
            "knzdmgj@gmail.com",
            96.5,
            'N'
        },
        {
            934,
            "tlyvqkz@gmail.com",
            62.7,
            'S'
        },
        {
            551,
            "nwvflha@gmail.com",
            31.0,
            'N'
        },
        {
            427,
            "bhfvgaa@gmail.com",
            56.2,
            'N'
        },
        {
            651,
            "eengxct@gmail.com",
            92.4,
            'N'
        },
        {
            292,
            "xdlhmtg@gmail.com",
            64.3,
            'S'
        },
        {
            161,
            "tpnqddp@gmail.com",
            27.0,
            'N'
        },
        {
            111,
            "mmwjgrc@gmail.com",
            23.0,
            'N'
        },
        {
            111,
            "jncaivb@gmail.com",
            32.2,
            'S'
        },
        {
            188,
            "ngwlkbj@gmail.com",
            62.8,
            'N'
        },
        {
            511,
            "gvioijc@gmail.com",
            37.5,
            'S'
        },
        {
            662,
            "lfpqokh@gmail.com",
            88.1,
            'S'
        },
        {
            954,
            "vjxvrfr@gmail.com",
            05.9,
            'S'
        },
        {
            957,
            "axhwfev@gmail.com",
            75.5,
            'N'
        },
        {
            416,
            "poxdzoo@gmail.com",
            46.2,
            'S'
        },
        {
            719,
            "zmesboz@gmail.com",
            85.6,
            'N'
        },
        {
            449,
            "efldycm@gmail.com",
            27.6,
            'N'
        },
        {
            763,
            "qoyhgbh@gmail.com",
            32.6,
            'S'
        },
        {
            191,
            "fbdcksq@gmail.com",
            45.8,
            'N'
        },
        {
            598,
            "lagnosw@gmail.com",
            50.2,
            'S'
        },
        {
            172,
            "aybbqdi@gmail.com",
            22.4,
            'N'
        },
        {
            199,
            "pmmdgcn@gmail.com",
            29.7,
            'S'
        },
        {
            515,
            "pivsqny@gmail.com",
            86.7,
            'S'
        },
        {
            631,
            "rqeibol@gmail.com",
            28.5,
            'N'
        },
        {
            517,
            "qlbpgmr@gmail.com",
            49.1,
            'N'
        },
        {
            837,
            "jfnkoqf@gmail.com",
            34.2,
            'S'
        },
        {
            533,
            "cxzwgrg@gmail.com",
            23.8,
            'S'
        },
        {
            768,
            "nrhypkw@gmail.com",
            80.1,
            'S'
        },
        {
            636,
            "pwixhsd@gmail.com",
            34.9,
            'S'
        },
        {
            451,
            "sfhjdoq@gmail.com",
            41.4,
            'S'
        },
        {
            517,
            "tookali@gmail.com",
            46.9,
            'S'
        },
        {
            163,
            "maqdyoh@gmail.com",
            90.6,
            'S'
        },
        {
            822,
            "bkavgmz@gmail.com",
            33.4,
            'N'
        },
        {
            188,
            "rfradsd@gmail.com",
            43.0,
            'S'
        },
        {
            875,
            "abozlsn@gmail.com",
            65.8,
            'N'
        },
        {
            369,
            "pvuupls@gmail.com",
            98.7,
            'S'
        },
        {
            476,
            "axhtrth@gmail.com",
            42.7,
            'N'
        },
        {
            871,
            "jsqntdr@gmail.com",
            67.6,
            'N'
        },
        {
            517,
            "vuwjjee@gmail.com",
            32.5,
            'S'
        },
        {
            481,
            "pzkcekz@gmail.com",
            39.0,
            'N'
        },
        {
            277,
            "cmiqgyo@gmail.com",
            91.6,
            'S'
        },
        {
            363,
            "mphpkkz@gmail.com",
            95.2,
            'N'
        },
        {
            115,
            "mfjgzax@gmail.com",
            53.2,
            'S'
        },
        {
            298,
            "qdvszdr@gmail.com",
            47.5,
            'S'
        },
        {
            154,
            "zunxrll@gmail.com",
            70.0,
            'N'
        },
        {
            677,
            "yklkheb@gmail.com",
            18.4,
            'S'
        },
        {
            488,
            "rgaegfz@gmail.com",
            84.5,
            'N'
        },
        {
            987,
            "jztcxoc@gmail.com",
            18.2,
            'N'
        },
        {
            511,
            "gwohwvz@gmail.com",
            65.4,
            'S'
        },
        {
            484,
            "cqqlvxm@gmail.com",
            76.1,
            'S'
        },
        {
            657,
            "bsmjrfx@gmail.com",
            33.7,
            'N'
        },
        {
            158,
            "xikkdxg@gmail.com",
            16.7,
            'N'
        },
        {
            734,
            "tzkqouy@gmail.com",
            85.4,
            'S'
        },
        {
            934,
            "gfuedsz@gmail.com",
            21.2,
            'S'
        },
        {
            469,
            "urkilyj@gmail.com",
            36.9,
            'N'
        },
        {
            843,
            "sptfhkr@gmail.com",
            97.8,
            'N'
        },
        {
            325,
            "eolrznz@gmail.com",
            84.3,
            'S'
        },
        {
            531,
            "epuoqdg@gmail.com",
            76.0,
            'S'
        },
        {
            325,
            "inoncmr@gmail.com",
            18.8,
            'N'
        },
        {
            973,
            "ieoemsy@gmail.com",
            51.7,
            'N'
        },
        {
            433,
            "yaobazf@gmail.com",
            86.7,
            'N'
        },
        {
            717,
            "ygcyzqc@gmail.com",
            23.9,
            'N'
        },
        {
            678,
            "sqdzszl@gmail.com",
            85.8,
            'N'
        },
        {
            159,
            "oosocoo@gmail.com",
            67.0,
            'N'
        },
        {
            134,
            "jdzhdhk@gmail.com",
            34.1,
            'S'
        },
        {
            552,
            "lmsnixp@gmail.com",
            86.5,
            'S'
        },
        {
            618,
            "jxoggte@gmail.com",
            62.4,
            'S'
        },
        {
            538,
            "mjjgzhf@gmail.com",
            62.4,
            'S'
        },
        {
            277,
            "cvceyzf@gmail.com",
            06.1,
            'N'
        },
        {
            349,
            "kjrpqsc@gmail.com",
            23.4,
            'S'
        },
        {
            417,
            "vutwpbi@gmail.com",
            18.4,
            'N'
        },
        {
            886,
            "ioagluy@gmail.com",
            33.2,
            'S'
        },
        {
            332,
            "jpmqeoy@gmail.com",
            35.2,
            'S'
        },
        {
            956,
            "wyusofx@gmail.com",
            06.4,
            'S'
        },
        {
            815,
            "jmnsiak@gmail.com",
            85.7,
            'N'
        },
        {
            337,
            "ryouqtz@gmail.com",
            52.7,
            'S'
        },
        {
            676,
            "sallpzk@gmail.com",
            79.0,
            'N'
        },
        {
            698,
            "xcxmtre@gmail.com",
            90.1,
            'S'
        },
        {
            845,
            "lydwouc@gmail.com",
            14.3,
            'S'
        },
        {
            858,
            "kypqcio@gmail.com",
            93.7,
            'N'
        },
        {
            151,
            "bmbfpqr@gmail.com",
            60.3,
            'N'
        },
        {
            687,
            "eodtuoo@gmail.com",
            91.5,
            'N'
        },
        {
            138,
            "ndjgzap@gmail.com",
            16.9,
            'S'
        },
        {
            391,
            "xkqlifs@gmail.com",
            54.0,
            'N'
        },
        {
            136,
            "aavuull@gmail.com",
            44.2,
            'S'
        },
        {
            267,
            "mriorxj@gmail.com",
            53.7,
            'S'
        },
        {
            699,
            "sersayx@gmail.com",
            78.0,
            'S'
        },
        {
            154,
            "ouhaowv@gmail.com",
            50.6,
            'N'
        },
        {
            472,
            "uzvxyat@gmail.com",
            11.0,
            'S'
        },
        {
            191,
            "dvzymvp@gmail.com",
            43.7,
            'S'
        },
        {
            355,
            "avefitz@gmail.com",
            03.3,
            'S'
        },
        {
            321,
            "duwatej@gmail.com",
            23.8,
            'S'
        },
        {
            139,
            "gtmwshe@gmail.com",
            80.0,
            'N'
        },
        {
            539,
            "biiqmab@gmail.com",
            65.8,
            'S'
        },
        {
            697,
            "paciicb@gmail.com",
            65.5,
            'S'
        },
        {
            933,
            "txrgpua@gmail.com",
            72.3,
            'S'
        },
        {
            252,
            "csqfwdo@gmail.com",
            80.4,
            'S'
        },
        {
            969,
            "tlotvyi@gmail.com",
            02.2,
            'N'
        },
        {
            959,
            "qqxmvmc@gmail.com",
            81.0,
            'N'
        },
        {
            122,
            "yladury@gmail.com",
            06.4,
            'N'
        },
        {
            679,
            "xmxyxrs@gmail.com",
            83.2,
            'S'
        },
        {
            882,
            "ulwhahf@gmail.com",
            05.9,
            'N'
        },
        {
            696,
            "wxajqny@gmail.com",
            73.0,
            'N'
        },
        {
            362,
            "gejbxtg@gmail.com",
            79.2,
            'N'
        },
        {
            141,
            "cewgugg@gmail.com",
            68.1,
            'N'
        },
        {
            921,
            "heiqbqh@gmail.com",
            76.2,
            'S'
        },
        {
            174,
            "uodwfgw@gmail.com",
            27.1,
            'S'
        },
        {
            714,
            "lejkztf@gmail.com",
            64.0,
            'S'
        },
        {
            852,
            "hipxqac@gmail.com",
            24.0,
            'S'
        },
        {
            251,
            "nkfoqaa@gmail.com",
            86.0,
            'S'
        },
        {
            935,
            "fowpfkk@gmail.com",
            59.2,
            'S'
        },
        {
            521,
            "mddwkvs@gmail.com",
            20.8,
            'N'
        },
        {
            443,
            "vsuhdfd@gmail.com",
            53.0,
            'N'
        },
        {
            611,
            "qiajote@gmail.com",
            22.3,
            'N'
        },
        {
            198,
            "jrtwrhn@gmail.com",
            42.5,
            'N'
        },
        {
            525,
            "mloffvv@gmail.com",
            39.2,
            'S'
        },
        {
            314,
            "cyumajp@gmail.com",
            50.0,
            'N'
        },
        {
            916,
            "yqdpavl@gmail.com",
            01.4,
            'N'
        },
        {
            318,
            "vmmwygx@gmail.com",
            10.6,
            'S'
        },
        {
            417,
            "lysqdyn@gmail.com",
            20.6,
            'N'
        },
        {
            311,
            "mqpripb@gmail.com",
            67.1,
            'N'
        },
        {
            918,
            "vhptbkd@gmail.com",
            47.9,
            'S'
        },
        {
            564,
            "eegxmzp@gmail.com",
            67.0,
            'N'
        },
        {
            558,
            "xogeqqf@gmail.com",
            68.9,
            'N'
        },
        {
            793,
            "hbsywya@gmail.com",
            62.8,
            'N'
        }
    };

    int tamClientes = sizeof(clientes) / sizeof(clientes[0]);
    
    //calcaular de um cliente
    for (int i = 0; i < tamClientes; i++)
    {
        printf("Cliente %d => %0.2f\n", clientes[i].codigo, calculaPreco(clientes[i]));
    }
}

float calculaPreco(cadastro cliente){

    float precoFinal = 35.0;

    if (cliente.hrsAcesso > 20) precoFinal += 2.5 * ((int) cliente.hrsAcesso - 20.0);

    if (cliente.pagina == 'S') precoFinal += 40.0;

    return precoFinal;
}


