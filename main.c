/*********************************************************************************************************
** 文   件   名: hello.c
**
** 创   建   人: 齐鲁桐
**
** 文件创建日期: 2018 年 2 月 22 日
**
** 描        述: 测试
*********************************************************************************************************/
/*********************************************************************************************************
  相关头文件
*********************************************************************************************************/
#include <stdio.h>                                                       /* 标准库                       */

#include "data_struct.h"
/*********************************************************************************************************
  宏定义
*********************************************************************************************************/

/*********************************************************************************************************
  全局变量
*********************************************************************************************************/

/*********************************************************************************************************
** 函数名称: 主函数
** 功能描述:
** 输　入  :
** 输　出  :
** 全局变量:
** 调用模块:
*********************************************************************************************************/
int main(int argc, char *argv[])
{
    HashMap map = hashmap_create();//创建哈希map

    printf("size : %d\n", map->size);
    printf("listsize : %d\n", map->listSize);

    map->put(map, "aaa", "111");
    map->put(map, "bbb", "222");
    map->put(map, "ccc", "333");
    map->put(map, "ddd", "444");
    map->put(map, "EEE", "444");
    map->put(map, "FFF", "444");
    map->put(map, "GGG", "444");
    map->put(map, "HHH", "444");


    printf("size : %d\n", map->size);
    printf("listsize : %d\n", map->listSize);
    printf("aaa : %s\n", (STRING)map->get(map, "aaa"));

    map->put(map, "III", "444");

    printf("size : %d\n", map->size);
    printf("listsize : %d\n", map->listSize);

    map->remove(map, "III");
    map->remove(map, "ddd");

    printf("size : %d\n", map->size);
    printf("listsize : %d\n", map->listSize);

    map->put(map, "dfgfd", "444");
    map->put(map, "faf", "444");
    map->put(map, "wqr", "444");
    map->put(map, "qwrwq", "444");
    map->put(map, "HqrqwHH", "444");
    map->put(map, "zvx", "444");
    map->put(map, "HHH", "555");

    HashMapIterator iterator = hashmap_iterator(map);
    while (hashmap_hasNext(iterator)) {
        iterator = hashmap_next(iterator);
        printf("{ key: %s, value: %s, hashcode: %d }\n",
            (STRING)iterator->entry->key, (STRING)iterator->entry->value, iterator->hashCode);
    }
    printf("size : %d\n", map->size);
    printf("listsize : %d\n", map->listSize);
    hashmap_delete(map);  //销毁

    return 0;
}

/*********************************************************************************************************
  END
*********************************************************************************************************/
