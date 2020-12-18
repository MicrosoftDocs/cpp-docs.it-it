---
title: Gestire le librerie con vcpkg
description: Informazioni su come gestire le librerie usando vcpkg in Windows, macOS e Linux.
ms.date: 12/11/2020
ms.technology: cpp-ide
ms.openlocfilehash: 88f8bc1cff7b4b04f5e38b5018676e313383733f
ms.sourcegitcommit: 2b2c3fa9244e31db35ea33554dea0efcab490f3c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/18/2020
ms.locfileid: "97684270"
---
# <a name="manage-libraries-with-vcpkg"></a>Gestire le librerie con vcpkg

Dopo aver [installato vcpkg](install-vcpkg.md), è possibile usarlo per ottenere e compilare le librerie nel computer locale.

## <a name="search-the-list-of-available-libraries"></a>Eseguire ricerche nell'elenco delle librerie disponibili

### <a name="windows"></a>[Windows](#tab/windows)

Per visualizzare i pacchetti disponibili, digitare **`vcpkg search`** al prompt dei comandi.

Questo comando enumera i file di controllo nelle *`vcpkg/ports`* sottocartelle. Verrà visualizzato un elenco simile al seguente:

```cmd
ace       6.4.3   The ADAPTIVE Communication Environment
anax      2.1.0-1 An open source C++ entity system. \<https://github...
antlr4    4.6-1   ANother Tool for Language Recognition
apr       1.5.2   The Apache Portable Runtime (APR) is a C library ...
asio      1.10.8  Asio is a cross-platform C++ library for network ...
assimp    3.3.1   The Open Asset import library
atk       2.24.0  GNOME Accessibility Toolkit
...
```

È possibile filtrare in un modello, ad esempio **`vcpkg search ta`** :

```cmd
botan       2.0.1      A cryptography library written in C++11
portaudio   19.0.6.00  PortAudio Portable Cross-platform Audio I/O API P...
taglib      1.11.1-2   TagLib Audio Meta-Data Library
```

### <a name="install-a-library-on-your-local-machine"></a>Installare una libreria nel computer locale

Dopo avere ottenuto il nome di una libreria usando **`vcpkg search`** , usare **`vcpkg install`** per scaricare la libreria e compilarla. vcpkg usa il portfile della libreria nella directory *ports* . Se non si specifica una tripletta, vcpkg installa e compila per la tripletta predefinita per la piattaforma di destinazione: x86-Windows, x64-Linux. cmake o x64-OSX. CMake.

Per le librerie di Linux, vcpkg dipende dal fatto che gcc sia installato o meno nel computer locale. In macOS, vcpkg USA Clang.

Quando portfile specifica le dipendenze, vcpkg le Scarica e le installa. Dopo il download, vcpkg compila la libreria usando lo stesso sistema di compilazione usato dalla libreria. I progetti CMake e (in Windows) MSBuild sono la scelta preferita, ma sono supportati anche MAKE e qualsiasi altro sistema di compilazione. Se vcpkg non riesce a trovare il sistema di compilazione specificato nel computer locale, lo Scarica e lo installa.

```cmd
> vcpkg install boost:x86-windows

The following packages will be built and installed:
    boost:x86-windows
  * bzip2:x86-windows
  * zlib:x86-windows
Additional packages (*) will be installed to complete this operation.
```

Per i progetti CMake, usare `CMAKE_TOOLCHAIN_FILE` per rendere disponibili le librerie con `find_package()` . Ad esempio, in Linux o macOS:

```cmd
cmake .. -DCMAKE_TOOLCHAIN_FILE=vcpkg/scripts/buildsystems/vcpkg.cmake
```

In Windows:

```cmd
cmake .. -DCMAKE_TOOLCHAIN_FILE=vcpkg\scripts\buildsystems\vcpkg.cmake
```

Alcune librerie includono opzioni installabili. Ad esempio, quando si cerca la libreria CURL, viene visualizzato anche un elenco delle opzioni supportate tra parentesi quadre:

```cmd
> vcpkg search curl
curl                 7.68.0-3         A library for transferring data with URLs
curl[tool]                            Builds curl executable
curl[non-http]                        Enables protocols beyond HTTP/HTTPS/HTTP2
curl[http2]                           HTTP2 support
curl[ssl]                             Default SSL backend
curl[ssh]                             SSH support via libssh2
curl[openssl]                         SSL support (OpenSSL)
curl[winssl]                          SSL support (Secure Channel / "WinSSL")
curl[mbedtls]                         SSL support (mbedTLS)
curl[sectransp]                       SSL support (sectransp)
curl[c-ares]                          c-ares support
curl[sspi]                            SSPI support
curl[brotli]                          brotli support (brotli)
curlpp               2018-06-15-3     C++ wrapper around libcURL
```

In questo caso, le parentesi quadre **`[`** e **`]`** sono valori letterali, non metacaratteri.

È possibile specificare un'opzione specifica da installare nella riga di comando. Per installare le librerie per curl usando il back-end SSL predefinito per Windows, ad esempio, usare il **`vcpkg install curl[ssl]:x86-windows`** comando. Il comando installa tutti i prerequisiti richiesti, inclusa la libreria principale, se necessario:

```cmd
> vcpkg list
curl:x86-windows            7.68.0-3   A library for transferring data with URLs
curl[non-http]:x86-windows             Enables protocols beyond HTTP/HTTPS/HTTP2
curl[ssl]:x86-windows                  Default SSL backend
curl[sspi]:x86-windows                 SSPI support
curl[winssl]:x86-windows               SSL support (Secure Channel / "WinSSL")
zlib:x86-windows            1.2.11-6   A compression library
```

### <a name="macos"></a>[macOS](#tab/macos)

Per visualizzare i pacchetti disponibili, passare alla directory radice vcpkg e immettere **`./vcpkg search`** nel terminale.

Questo comando enumera i file di controllo nelle *`vcpkg/ports`* sottocartelle. Verrà visualizzato un elenco simile al seguente:

```Terminal
ace       6.4.3   The ADAPTIVE Communication Environment
anax      2.1.0-1 An open source C++ entity system. \<https://github...
antlr4    4.6-1   ANother Tool for Language Recognition
apr       1.5.2   The Apache Portable Runtime (APR) is a C library ...
asio      1.10.8  Asio is a cross-platform C++ library for network ...
assimp    3.3.1   The Open Asset import library
atk       2.24.0  GNOME Accessibility Toolkit
...
```

È possibile filtrare in un modello, ad esempio **`vcpkg search ta`** :

```Terminal
botan       2.0.1      A cryptography library written in C++11
portaudio   19.0.6.00  PortAudio Portable Cross-platform Audio I/O API P...
taglib      1.11.1-2   TagLib Audio Meta-Data Library
```

### <a name="install-a-library-on-your-computer"></a>Installare una libreria nel computer

Dopo avere ottenuto il nome di una libreria usando **`vcpkg search`** , usare **`vcpkg install`** per scaricare la libreria e compilarla. vcpkg usa il portfile della libreria nella directory *ports* . Se non si specifica una tripletta, vcpkg installa e compila per la tripletta predefinita per la piattaforma di destinazione: x86-Windows, x64-Linux. cmake o x64-OSX. CMake.

Per le librerie di Linux, vcpkg dipende dal fatto che gcc sia installato o meno nel computer locale. In macOS, vcpkg USA Clang.

Quando portfile specifica le dipendenze, vcpkg le Scarica e le installa. Dopo il download, vcpkg compila la libreria usando lo stesso sistema di compilazione usato dalla libreria. I progetti CMake e (in Windows) MSBuild sono la scelta preferita, ma sono supportati anche MAKE e qualsiasi altro sistema di compilazione. Se vcpkg non riesce a trovare il sistema di compilazione specificato nel computer locale, lo Scarica e lo installa.

```Terminal
$ ./vcpkg install boost

The following packages will be built and installed:
    boost:x86-macos
  * bzip2:x86-macos
  * zlib:x86-macos
Additional packages (*) will be installed to complete this operation.
```

Per i progetti CMake, usare `CMAKE_TOOLCHAIN_FILE` per rendere disponibili le librerie con `find_package()` . Ad esempio:

```Terminal
cmake .. -DCMAKE_TOOLCHAIN_FILE=./vcpkg/scripts/buildsystems/vcpkg.cmake
```

Alcune librerie includono opzioni installabili. Ad esempio, quando si cerca la libreria CURL, viene visualizzato anche un elenco delle opzioni supportate tra parentesi quadre:

```cmd
> vcpkg search curl
curl                 7.68.0-3         A library for transferring data with URLs
curl[tool]                            Builds curl executable
curl[non-http]                        Enables protocols beyond HTTP/HTTPS/HTTP2
curl[http2]                           HTTP2 support
curl[ssl]                             Default SSL backend
curl[ssh]                             SSH support via libssh2
curl[openssl]                         SSL support (OpenSSL)
curl[winssl]                          SSL support (Secure Channel / "WinSSL")
curl[mbedtls]                         SSL support (mbedTLS)
curl[sectransp]                       SSL support (sectransp)
curl[c-ares]                          c-ares support
curl[sspi]                            SSPI support
curl[brotli]                          brotli support (brotli)
curlpp               2018-06-15-3     C++ wrapper around libcURL
```

In questo caso, le parentesi quadre **`[`** e **`]`** sono valori letterali, non metacaratteri.

È possibile specificare un'opzione specifica da installare nella riga di comando. Ad esempio, per installare le librerie per curl usando il back-end SSL predefinito, usare il **`./vcpkg install curl[ssl]`** comando. Il comando installa eventuali prerequisiti necessari, inclusa la libreria principale, se necessario.

### <a name="linux"></a>[Linux](#tab/linux)

Per visualizzare i pacchetti disponibili, passare alla directory radice vcpkg nella shell, quindi immettere **`./vcpkg search`** .

Questo comando enumera i file di controllo nelle *`vcpkg/ports`* sottocartelle. Verrà visualizzato un elenco simile al seguente:

```shell
ace       6.4.3   The ADAPTIVE Communication Environment
anax      2.1.0-1 An open source C++ entity system. \<https://github...
antlr4    4.6-1   ANother Tool for Language Recognition
apr       1.5.2   The Apache Portable Runtime (APR) is a C library ...
asio      1.10.8  Asio is a cross-platform C++ library for network ...
assimp    3.3.1   The Open Asset import library
atk       2.24.0  GNOME Accessibility Toolkit
...
```

È possibile filtrare in un modello, ad esempio **`./vcpkg search ta`** :

```shell
botan       2.0.1      A cryptography library written in C++11
portaudio   19.0.6.00  PortAudio Portable Cross-platform Audio I/O API P...
taglib      1.11.1-2   TagLib Audio Meta-Data Library
```

### <a name="install-a-library-on-your-linux-machine"></a>Installare una libreria nel computer Linux

Dopo avere ottenuto il nome di una libreria usando **`./vcpkg search`** , usare **`/vcpkg install`** per scaricare la libreria e compilarla. vcpkg usa il portfile della libreria nella *`ports`* Directory. Se non si specifica una tripletta, vcpkg installa e compila per la tripletta predefinita per la piattaforma di destinazione, ad esempio x64-Linux. CMake.

Per le librerie di Linux, vcpkg dipende dal fatto che gcc sia installato o meno nel computer locale.

Quando portfile specifica le dipendenze, vcpkg le Scarica e le installa. Dopo il download, vcpkg compila la libreria usando lo stesso sistema di compilazione usato dalla libreria. I progetti CMake sono preferiti, ma sono supportati con qualsiasi altro sistema di compilazione. Se vcpkg non riesce a trovare il sistema di compilazione specificato nel computer locale, lo Scarica e lo installa.

```shell
$ ./vcpkg install boost:x64-linux

The following packages will be built and installed:
    boost:x64-linux
  * bzip2:x64-linux
  * zlib:x64-linux
Additional packages (*) will be installed to complete this operation.
```

Per i progetti CMake, usare `CMAKE_TOOLCHAIN_FILE` per rendere disponibili le librerie con `find_package()` . Ad esempio:

```shell
cmake .. -DCMAKE_TOOLCHAIN_FILE=./vcpkg/scripts/buildsystems/vcpkg.cmake
```

Alcune librerie includono opzioni installabili. Ad esempio, quando si cerca la libreria CURL, viene visualizzato anche un elenco delle opzioni supportate tra parentesi quadre:

```cmd
> vcpkg search curl
curl                 7.68.0-3         A library for transferring data with URLs
curl[tool]                            Builds curl executable
curl[non-http]                        Enables protocols beyond HTTP/HTTPS/HTTP2
curl[http2]                           HTTP2 support
curl[ssl]                             Default SSL backend
curl[ssh]                             SSH support via libssh2
curl[openssl]                         SSL support (OpenSSL)
curl[winssl]                          SSL support (Secure Channel / "WinSSL")
curl[mbedtls]                         SSL support (mbedTLS)
curl[sectransp]                       SSL support (sectransp)
curl[c-ares]                          c-ares support
curl[sspi]                            SSPI support
curl[brotli]                          brotli support (brotli)
curlpp               2018-06-15-3     C++ wrapper around libcURL
```

In questo caso, le parentesi quadre **`[`** e **`]`** sono valori letterali, non metacaratteri.

È possibile specificare un'opzione specifica da installare nella riga di comando. Ad esempio, per installare le librerie per curl usando il back-end SSL predefinito, usare il **`./vcpkg install curl[ssl]`** comando. Il comando installa eventuali prerequisiti necessari, inclusa la libreria principale, se necessario.

---

## <a name="list-the-libraries-already-installed"></a>Elencare le librerie già installate

Dopo aver installato alcune librerie, è possibile usare **`vcpkg list`** il comando in Windows per visualizzare le informazioni disponibili. I comandi di Linux e macOS sono analoghi.

```cmd
> vcpkg list

boost:x86-windows       1.64-3   Peer-reviewed portable C++ source libraries
bzip2:x86-windows       1.0.6-1  High-quality data compressor.
cpprestsdk:x86-windows  2.9.0-2  C++11 JSON, REST, and OAuth library The C++ REST ...
openssl:x86-windows     1.0.2k-2 OpenSSL is an open source project that provides a...
websocketpp:x86-windows 0.7.0    Library that implements RFC6455 The WebSocket Pro...
zlib:x86-windows        1.2.11   A compression library
```

## <a name="target-linux-from-windows-via-wsl"></a>Linux come destinazione da Windows via WSL

È possibile creare file binari Linux in un computer Windows usando il sottosistema Windows per Linux o WSL. Seguire le istruzioni per [configurare WSL in Windows 10](/windows/wsl/install-win10). Quindi, configurarlo con l' [estensione di Visual Studio per Linux](https://devblogs.microsoft.com/cppblog/targeting-windows-subsystem-for-linux-from-visual-studio/). È bene inserire tutte le librerie compilate per Windows e Linux nella stessa cartella. Sono accessibili da Windows e WSL.

## <a name="export-compiled-binaries-and-headers"></a><a name="export_binaries_per_project"></a> Esportare i file binari compilati e le intestazioni

È inefficiente fare in modo che tutti gli utenti del team scarichino e creino librerie comuni. Un singolo membro del team può usare il **`vcpkg export`** comando per creare un file zip comune dei file binari e delle intestazioni oppure un pacchetto NuGet. Quindi, è facile condividerlo con altri membri del team.

## <a name="updateupgrade-installed-libraries"></a>Aggiornare le librerie installate

Il catalogo pubblico è sempre aggiornato con le versioni più recenti delle librerie. Per determinare quali librerie locali non sono aggiornate, usare **`vcpkg update`** . Quando si è pronti per aggiornare la raccolta Ports alla versione più recente del catalogo pubblico, eseguire il **`vcpkg upgrade`** comando. Scarica e ricompila automaticamente una o tutte le librerie installate che non sono aggiornate.

Per impostazione predefinita, il **`vcpkg upgrade`** comando elenca solo le librerie che non sono aggiornate, ma non le aggiorna. Per aggiornare effettivamente le librerie, utilizzare l' **`--no-dry-run`** opzione.

```cmd
> vcpkg upgrade --no-dry-run
```

### <a name="upgrade-options"></a>Opzioni di aggiornamento

- **`--no-dry-run`**  Eseguire l'aggiornamento; Quando non è specificato, il comando elenca solo i pacchetti non aggiornati.
- **`--keep-going`**  Continuare l'installazione dei pacchetti anche se si verifica un errore.
- **`--triplet <t>`**  Imposta la tripletta predefinita per i pacchetti non qualificati.
- **`--vcpkg-root <path>`**  Specificare la directory vcpkg da usare anziché la directory corrente o la directory degli strumenti.

### <a name="upgrade-example"></a>Esempio di aggiornamento

Nell'esempio seguente viene illustrato come aggiornare solo le librerie specificate in Windows. I comandi di Linux e macOS sono analoghi. vcpkg esegue automaticamente il pull delle dipendenze secondo necessità.

```cmd
c:\users\username\vcpkg> vcpkg upgrade tiny-dnn:x86-windows zlib
The following packages are up-to-date:
   tiny-dnn:x86-windows

The following packages will be rebuilt:
    * libpng[core]:x86-windows
    * tiff[core]:x86-windows
      zlib[core]:x86-windows
Additional packages (*) will be modified to complete this operation.
If you are sure you want to rebuild the above packages, run this command with the --no-dry-run option.
```

## <a name="contribute-new-libraries"></a>Contribuire con nuove librerie

È possibile includere qualsiasi libreria nella raccolta di port privata. Per suggerire una nuova libreria per il catalogo pubblico,effettuare la segnalazione nella [pagina dei problemi vcpkg di GitHub](https://github.com/Microsoft/vcpkg/issues).

## <a name="remove-a-library"></a>Rimuovere una libreria

Digitare **`vcpkg remove`** per rimuovere una libreria installata. Se sono presenti altre librerie che dipendono da essa, viene chiesto di eseguire di nuovo il comando con **`--recurse`** , che determina la rimozione di tutte le librerie downstream.

## <a name="see-also"></a>Vedere anche

[vcpkg: Gestione pacchetti C++ per Windows, Linux e macOS](./vcpkg.md)\
[vcpkg su GitHub](https://github.com/Microsoft/vcpkg)\
[Installare vcpkg](install-vcpkg.md)\
[Integrare vcpkg](integrate-vcpkg.md)\
[informazioni di riferimento sulla riga di comando vcpkg](vcpkg-command-line-reference.md)\
[Guida introduttiva](https://github.com/microsoft/vcpkg/blob/master/docs/index.md)\
[Domande frequenti](https://github.com/microsoft/vcpkg/blob/master/docs/about/faq.md)\
[Esempio di installazione e uso dei pacchetti: SQLite](https://github.com/microsoft/vcpkg/blob/master/docs/examples/installing-and-using-packages.md)
