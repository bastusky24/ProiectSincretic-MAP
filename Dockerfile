FROM --platform=linux/amd64 alpine:latest  

WORKDIR /queens

COPY main.c .

RUN apk add --no-cache build-base

RUN gcc -o queens main.c

CMD [ "./queens" ]