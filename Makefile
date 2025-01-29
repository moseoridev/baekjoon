# 현재 디렉토리에서 숫자로만 이루어진 실행 파일 찾기
BINARIES := $(shell find . -maxdepth 1 -type f -regex './[0-9]+')

.PHONY: clean
clean:
	rm -f $(BINARIES)
