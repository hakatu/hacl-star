.PHONY: ci

all: ci
#
# Includes
#
ifneq ($(FSTAR_HOME),)
include Makefile.include
endif

#
# CI
#

CC = $(GCC)

ci: .clean-git
	$(MAKE) -C lib
	$(MAKE) -C specs all verify
	$(MAKE) -C code/sha3
	$(MAKE) -C code/blake2s
	$(MAKE) -C code/chacha20 all verify
	$(MAKE) -C code/poly1305
	$(MAKE) -C code/chacha20poly1305
	$(MAKE) -C code/curve25519
	$(MAKE) -C code/experimental/aes-gcm
	$(MAKE) -C code/frodo/spec
	$(MAKE) -C code/frodo/code TARGET=
	# $(MAKE) extract-specs
	# $(MAKE) extract-all
	# $(MAKE) -C code clean-c
	# $(MAKE) -C code extract-c
	# $(MAKE) -C providers/
	# $(MAKE) -C providers/test
	# $(MAKE) -C secure_api runtime_switch verify # test both extraction & verification
	# $(MAKE) test-all
	# $(MAKE) build-make
	# $(MAKE) package

#
# Clean
#

.clean-git:
	git reset HEAD --hard
	git clean -xfd

clean-base:
	rm -rf *~ *.tar.gz *.zip
	rm -rf snapshots/hacl-c/*.o
	rm -rf snapshots/hacl-c/libhacl*

clean: clean-base
	$(MAKE) -C specs clean
	$(MAKE) -C code clean

# Colors
NORMAL="\\033[0;39m"
CYAN="\\033[1;36m"
