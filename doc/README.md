SWI Core
=====================

Setup
---------------------
[SWI Core](http://swinca.io/wallet) is the original SWI client and it builds the backbone of the network.

Running
---------------------
The following are some helpful notes on how to run SWI on your native platform.

### Unix

Unpack the files into a directory and run:

- bin/32/swi-qt (GUI, 32-bit) or bin/32/swid (headless, 32-bit)
- bin/64/swi-qt (GUI, 64-bit) or bin/64/swid (headless, 64-bit)

### Windows

Unpack the files into a directory, and then run swi-qt.exe.

### OSX

Drag SWI-Qt to your applications folder, and then run SWI-Qt.

### Need Help?

* See the documentation at the [SWI Wiki](https://en.bitcoin.it/wiki/Main_Page) ***TODO***
for help and more information.

Building
---------------------
The following are developer notes on how to build SWI on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OSX Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The Swi repo's [root README](https://github.com/swincacoin/swicoin-core/blob/master/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://dev.visucore.com/bitcoin/doxygen/) ***TODO***
- [Translation Process](translation_process.md)
- [Unit Tests](unit-tests.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Dnsseed Policy](dnsseed-policy.md)

### Resources

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)

License
---------------------
Distributed under the [MIT/X11 software license](http://www.opensource.org/licenses/mit-license.php).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
