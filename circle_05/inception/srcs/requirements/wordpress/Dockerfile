FROM debian:buster

RUN  apt-get update && \
	apt-get -y install wget tar sudo php7.3-fpm php7.3-mysql mariadb-client

# conf 복사 및 쉘 복사
COPY /tools/setting.sh /
COPY /conf/www.conf /etc/php/7.3/fpm/pool.d/www.conf

# wordpress CLI 설치 이후에 권한변경 이후 이동
RUN wget https://raw.githubusercontent.com/wp-cli/builds/gh-pages/phar/wp-cli.phar && \
	chmod +x wp-cli.phar && mv wp-cli.phar /usr/bin/wp

# working dir 위치 설정
WORKDIR /var/www/html/

# 해당 wordpress /run/php 생성 이후 setting.sh 등록 /run/php 경로 안 만들면 파일 생성 못함
RUN mkdir -p /run/php && \
	chmod +x /setting.sh


EXPOSE 9000


ENTRYPOINT [ "sh", "-c", "/setting.sh" ]

