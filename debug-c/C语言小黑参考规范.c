#include <stdio.h>

/*
 * 多行注释方法
 * 命名规范太多，这里就不说了，这次 debug 也不做要求
 * 每行代码长度要求小于 120 个字符，超过进行换行
 * 所有的缩进使用四个空格，使用 tab 进行需要需要进行设置，tab 转化为 4 个空格，好好设置一下 VIM
 * 代码要多注释，最好每个函数可以进行说明，debug 不做要求
 * 函数头部应进行注释，列出：函数的目的/功能、输入参数、输出参数、返回值、调用关系（函数、表）等。debug 不做要求
 * 每个函数参数个数，不允许超过 5 个， debug 不做要求
 * 每个函数的代码长度，不允许超过 50 行， debug 不做要求
 * if、while、for 之类的，嵌套不允许超过 四层，debug 不作要求
 * a = i++; 这类操作也不要有，不要写黑科技，代码是用来读的，不是用来秀操作的
 * 头文件的顺序也是有要求的，以及文件的时候，避免出现相互依赖 这次 debug 不涉及
 * 所有指针申请的空间，都需要释放，释放完之后，需要将指针的值修改为空
 * assert() 函数使用时候慎重，真正运行起来的代码，是不可以有 assert 的
 * 少用全局变量，这次 debug 不做要求
 * 函数内不要开过大的数组，函数的空间有限，可以 malloc
 * 圈复杂度：一个函数里面不要有太多的 if、for。这样逻辑太复杂，这次 debug 不做要求
 * 这里说明一下，代码不换行的愿意，屏幕长度有限，希望可以在一个屏幕内看到更多的代码
 * 一般都是  x > 0 或者 x < 5，变量在左边
 * 除非是：  0 < x && x < 5
 * if、for、while 所有的代码 {} 是必须要的，即使只有一行代码，也需要，并且也需要换行
 * 位运算 >>、<< 要求变量是 unsigned 类型
 * 多余的注释代码请删掉（不用的）
 */


int Cal(int a, int b)
{
    int c = a + b; // 工程上，从安全角度，还会要求 if 判断，a + b 是否会溢出
    return c;
}

// 工程上对于字符串的处理一定要慎重。
// 一般字符串传入，都是需要带上长度
// 如果仅仅只是输出之类，可以不带，根据 `\0`
char* Get(char c[], int cnt) 
{
    scanf("%s", c); // 工程上，scanf 的调用也是需要判断返回值得
    return c;
}

int main()
{
    int a = 0;
    int b = 0; // 不建议 int a = 0, b = 0; 为什么不能这么写的原因，我也不记得了
    printf("%d\n", Cal(a, b));

    if (a == b) {
        printf("YES");
    } else {
        printf("NO");
    }

    for (int i = 0; i < 255; i++) { // 工程上 255， 这里是不对的，这个称谓魔鬼数字，需要 define，这次 debug 不做要求
        printf("%d\n", i); 
    }

    char c[101];
    memset(c, 0, sizeof(c)); // 工程上是要求 if 判断 memset 的返回值得，这次 debug 不做要求
    Get(c, 101);
    
    int d; // 工程上，不建议 d 进行赋值，无意义
    scanf("%d", &d);
    for (int i = 0; i < d; i++) { // 工程上要求，使用 d ，一定要判断 d 的取值范围
        printf("%c", c[i]);
    }
    return 0;
}

/*
 * 代码质量保证优先原则
 * （1）正确性，指程序要实现设计要求的功能。
 * （2）稳定性、安全性，指程序稳定、可靠、安全。
 * （3）可测试性，指程序要具有良好的可测试性。
 * （4）规范/可读性，指程序书写风格、命名规则等要符合规范。
 * （5）全局效率，指软件系统的整体效率。
 * （6）局部效率，指某个模块/子模块/函数的本身效率。
 * （7）个人表达方式/个人方便性，指个人编程习惯。
 */