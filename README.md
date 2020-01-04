# php-sm3
a php extension for sm3(实现sm3算法的php扩展)
### 安装步骤
1. `git clone`该项目到你的linux php源码ext目录下.
2. 进入sm3扩展目录，执行`/usr/local/php/bin/phpize`
3. `./configure --with-php-config=/usr/local/php/bin/php-config --enable-sm3`
4. `make && make install`
5. 添加扩展到你的php.ini文件 `extension=sm3.so`
6. 测试`/usr/local/php/bin/php -r "var_dump(sm3('abc'));"
`输出`string(64) "66c7f0f462eeedd9d1f2d46bdc10e4e24167c4875cf2f7a2297da02b8f4ba8e0"`
### 备注
1.  forked from [luzhuqun/php-sm3](https://github.com/luzhuqun/php-sm3)
