#! /bin/bash
: '
myname='szy Hello world!'
echo $myname
'


:<<EOF
#测试for循环
for file in $(ls); do
    echo ${file}
done
EOF

:<<EOF
#测传递试传参数
echo "被执行的文件名是 $0"
echo "第一个参数是 $1"
echo "第二个参数是 $2"
EOF


: '
#测试运算符
a=2
b=33
#val=`expr $a + $b`
echo "两数之和为 : $val"
'

:<<EOF
#测试 printf
printf "%-10s %-8s %-4s\n" 姓名 性别 体重kg  
printf "%-10s %-8s %-4.2f\n" 郭靖 男 66.1234 
printf "%-10s %-8s %-4.2f\n" 杨过 男 48.6543 
printf "%-10s %-8s %-4.2f\n" 郭芙 女 47.9876
EOF


:<<EOF
#测试test
num1=100
num2=100
if test ${num1} -eq ${num2}
then
    echo '两个数相等！'
else
    echo '两个数不相等！'
fi
EOF

: '
a=0
until [ ! $a -lt 10 ]
do
   echo $a
   a=$[$a+1] 
done
'


: '
#测试case语句
echo '输入 a 到 d 之间的数字:'
echo '你输入的数字为:'
read aNum
case $aNum in
    a)  echo '你选择了 a'
	echo 'hiahia'
    ;;
    b)  echo '你选择了 b'
    ;;
    c)  echo '你选择了 c'
    ;;
    d)  echo '你选择了 d'
    ;;
    *)  echo '你没有输入 a 到 d 之间的数字'
    ;;
esac
'


: '
#测试含参，带返回值
funWithReturn(){
    echo "这个函数会对输入的两个数字进行相加运算..."
    echo "你输入第一个数字是: $1 "
    #read aNum
    echo "你输入第二个数字是: $2 "
    #read anotherNum
    return $[$1+$2]
}
funWithReturn 31 12
echo "输入的两个数字之和为 $? !"
'


#: '
#测试文件包含
. ./fun_add.sh
fun_add 12 24
echo $?
#'







