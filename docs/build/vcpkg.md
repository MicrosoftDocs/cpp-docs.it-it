---
title: 'vcpkg: gestione C++ pacchetti per Windows, Linux e MacOS'
description: vcpkg è una gestione pacchetti da riga di comando che semplifica notevolmente l'acquisizione e l'installazione di librerie Open C++ source in Windows, MacOS e Linux.
ms.date: 01/10/2020
ms.technology: cpp-ide
ms.assetid: f50d459a-e18f-4b4e-814b-913e444cedd6
ms.openlocfilehash: 7c3dddd62a66c746d92d2f931b97e354ee27d75f
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79417264"
---
# <a name="vcpkg-a-c-package-manager-for-windows-linux-and-macos"></a>vcpkg: gestione C++ pacchetti per Windows, Linux e MacOS

vcpkg è una gestione pacchetti da riga di comando C++per. Semplifica notevolmente l'acquisizione e l'installazione di librerie di terze parti in Windows, Linux e MacOS. Se un progetto usa librerie di terze parti, è consigliabile usare vcpkg per installarle. vcpkg supporta sia librerie open source che proprietarie. Tutte le librerie nel catalogo di Windows per vcpkg sono state testate per la compatibilità con Visual Studio 2015, Visual Studio 2017 e Visual Studio 2019. Tra i cataloghi Windows e Linux/MacOS, vcpkg supporta ora più di 1900 librerie. La community di C++ aggiunge continuamente altre librerie a entrambi i cataloghi.

## <a name="simple-yet-flexible"></a>Semplice ma flessibile

Basta un unico comando per scaricare le origini e compilare una libreria. vcpkg è a sua volta un progetto open source, disponibile in GitHub. È possibile personalizzare i cloni di vcpkg privati nel modo desiderato. Ad esempio, specificare librerie diverse o versioni diverse di librerie rispetto a quelle disponibili nel catalogo pubblico. È possibile avere più cloni di vcpkg in un singolo computer. Ognuno di essi può essere impostato per produrre una raccolta personalizzata di librerie, con le opzioni di compilazione preferite. Ogni clone è un ambiente indipendente che contiene una copia propria di vcpkg.exe che opera solo sulla gerarchia specifica. vcpkg non viene aggiunto a nessuna variabile di ambiente e non ha alcuna dipendenza dal registro di sistema di Windows o da Visual Studio.

## <a name="sources-not-binaries"></a>Origini, non file binari

Per le librerie nel catalogo di Windows, vcpkg Scarica le origini anziché i file binari<sup>1</sup>. Compila tali origini usando la versione più recente di Visual Studio a disposizione. In C++è importante che il codice dell'applicazione e le librerie usate siano compilati dallo stesso compilatore e dalla versione del compilatore. Con vcpkg è possibile evitare, o almeno ridurre notevolmente, il rischio di file binari non corrispondenti e i problemi correlati. Nei team standardizzati in una versione specifica di un compilatore, un membro del team può usare vcpkg per scaricare le origini e compilare un set di file binari. Quindi, possono usare il comando Export per comprimere i file binari e le intestazioni per altri membri del team. Per altre informazioni, vedere [Esportare file binari compilati e intestazioni](#export_binaries_per_project) di seguito.

È anche possibile creare un clone vcpkg con librerie private nella raccolta Ports. Aggiungere una porta per il download dei file binari e delle intestazioni predefiniti. Quindi, scrivere un file portfile. CMake che copia semplicemente i file nel percorso preferito.

<sup>1</sup> *Nota: le origini non sono disponibili per alcune librerie proprietarie. In questi casi, vcpkg Scarica i file binari predefiniti compatibili.*

## <a name="installation"></a>Installazione

Clonare il repository vcpkg da GitHub: [https://github.com/Microsoft/vcpkg](https://github.com/Microsoft/vcpkg). È possibile scaricarlo nel percorso di cartella preferito.

Eseguire il programma di avvio automatico nella cartella radice:

- **bootstrap-vcpkg.bat** (Windows)
- **./bootstrap-vcpkg.sh** (Linux, MacOS)

## <a name="search-the-list-of-available-libraries"></a>Eseguire ricerche nell'elenco delle librerie disponibili

Per visualizzare i pacchetti disponibili, al prompt dei comandi digitare: **vcpkg search**

Questo comando consente di enumerare i file di controllo nelle sottocartelle vcpkg/ports. Verrà visualizzato un elenco simile al seguente:

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

È possibile usare criteri per filtrare i risultati, ad esempio **vcpkg search ta**:

```cmd
botan       2.0.1      A cryptography library written in C++11
portaudio   19.0.6.00  PortAudio Portable Cross-platform Audio I/O API P...
taglib      1.11.1-2   TagLib Audio Meta-Data Library
```

### <a name="install-a-library-on-your-local-machine"></a>Installare una libreria nel computer locale

Dopo avere ottenuto il nome di una libreria tramite **vcpkg search**, è possibile usare **vcpkg install** per scaricare la libreria e compilarla. vcpkg usa il file portfile della libreria nella directory ports. Se non si specifica alcuna tripletta, vcpkg esegue installazione e compilazione per la tripletta predefinita per la piattaforma di destinazione: x86-windows, x64-linux.cmake o x64-osx.cmake.

Per le librerie di Linux, vcpkg dipende dal fatto che gcc sia installato o meno nel computer locale. In MacOS, vcpkg usa Clang.

Quando portfile specifica le dipendenze, vcpkg le Scarica e le installa. Dopo il download, vcpkg compila la libreria usando lo stesso sistema di compilazione usato dalla libreria. Sono preferibili i progetti MSBuild e (per Windows), ma è supportata la creazione di qualsiasi altro sistema di compilazione. Se vcpkg non riesce a trovare il sistema di compilazione specificato nel computer locale, lo Scarica e lo installa.

```cmd
> vcpkg install boost:x86-windows

The following packages will be built and installed:
    boost:x86-windows
  * bzip2:x86-windows
  * zlib:x86-windows
Additional packages (*) will be installed to complete this operation.
```

Per i progetti CMAKE, usare CMAKE_TOOLCHAIN_FILE per rendere disponibili le librerie con `find_package()`. Ad esempio:

```cmd
cmake .. -DCMAKE_TOOLCHAIN_FILE=vcpkg/scripts/buildsystems/vcpkg.cmake (Linux/MacOS)
cmake .. -DCMAKE_TOOLCHAIN_FILE=vcpkg\scripts\buildsystems\vcpkg.cmake (Windows)
```

## <a name="list-the-libraries-already-installed"></a>Elencare le librerie già installate

Dopo aver installato alcune librerie, è possibile usare l' **elenco vcpkg** per visualizzare le informazioni disponibili:

```cmd
> vcpkg list

boost:x86-windows       1.64-3   Peer-reviewed portable C++ source libraries
bzip2:x86-windows       1.0.6-1  High-quality data compressor.
cpprestsdk:x86-windows  2.9.0-2  C++11 JSON, REST, and OAuth library The C++ REST ...
openssl:x86-windows     1.0.2k-2 OpenSSL is an open source project that provides a...
websocketpp:x86-windows 0.7.0    Library that implements RFC6455 The WebSocket Pro...
zlib:x86-windows        1.2.11   A compression library
```

## <a name="integrate-with-visual-studio-windows"></a>Integrare con Visual Studio (Windows)

### <a name="per-user"></a>Per utente

Eseguire **vcpkg integrate install** per configurare Visual Studio per individuare tutti i file di intestazione e i file binari di vcpkg in base ai singoli utenti. Non è necessario modificare manualmente i percorsi di directory di VC + +. Se sono presenti più cloni, il clone da cui viene eseguito questo comando diventa il nuovo percorso predefinito.

A questo punto è possibile #include intestazioni semplicemente digitando la cartella o l'intestazione e il completamento automatico assiste l'utente. Non sono necessari ulteriori passaggi per il collegamento alle librerie o l'aggiunta di riferimenti a progetti. La figura seguente mostra come Visual Studio trova le intestazioni azure-storage-cpp. vcpkg inserisce le intestazioni nella sottocartella **\installed**, partizionata in base alla piattaforma di destinazione. Il diagramma seguente mostra l'elenco dei file di inclusione nella sottocartella **\was** per la libreria:

![vcpkg e IntelliSense](media/vcpkg-intellisense.png "vcpkg e IntelliSense")

### <a name="per-project"></a>Per progetto

Se è necessario usare una versione specifica di una libreria diversa dalla versione nell'istanza attiva di vcpkg, attenersi alla procedura seguente:

1. Creare un nuovo clone di vcpkg
1. Modificare il portfile per la libreria per ottenere la versione necessaria
1. Eseguire **vcpkg install \<libreria>** .
1. Usare **vcpkg integrate project** per creare un pacchetto NuGet che fa riferimento a tale libreria per progetti specifici.

## <a name="integrate-with-visual-studio-code-linuxmacos"></a>Integrare con Visual Studio Code (Linux/MacOS)

Eseguire **vcpkg integrate install** per configurare Visual Studio Code in Linux/MacOS. Questo comando imposta il percorso dell'integrazione vcpkg e Abilita IntelliSense nei file di origine.

## <a name="target-linux-from-windows-via-wsl"></a>Linux come destinazione da Windows via WSL

È possibile creare file binari Linux in un computer Windows usando il sottosistema Windows per Linux o WSL. Seguire le istruzioni per [impostare WSL in Windows 10](/windows/wsl/install-win10) e configurarlo con il [estensione di Visual Studio per Linux](https://blogs.msdn.microsoft.com/vcblog/2017/02/08/targeting-windows-subsystem-for-linux-from-visual-studio/). È bene inserire tutte le librerie compilate per Windows e Linux nella stessa cartella. Sono accessibili da Windows e WSL.

## <a name="export_binaries_per_project"></a> Esportare i file binari compilati e le intestazioni

È inefficiente fare in modo che tutti gli utenti del team scarichino e creino librerie comuni. Un singolo membro del team può usare il comando **vcpkg Export** per creare un file zip comune con i file binari e le intestazioni oppure un pacchetto NuGet. Quindi, è facile condividerlo con altri membri del team.

## <a name="updateupgrade-installed-libraries"></a>Aggiornare le librerie installate

Il catalogo pubblico è sempre aggiornato con le versioni più recenti delle librerie. Per determinare quali librerie locali non sono aggiornate, usare **vcpkg update**. Quando si è pronti per aggiornare la raccolta Ports alla versione più recente del catalogo pubblico, eseguire il comando di **aggiornamento vcpkg** . Scarica e ricompila automaticamente una o tutte le librerie installate che non sono aggiornate.

Per impostazione predefinita, il comando **upgrade** elenca solo le librerie che non sono aggiornate senza però aggiornarle. Per aggiornare effettivamente le librerie, usare l'opzione **--No-Dry-Run** .

```cmd
  vcpkg upgrade --no-dry-run
```

### <a name="upgrade-options"></a>Opzioni di aggiornamento

- **--no-dry-run**: esegue l'aggiornamento; se omesso, il comando elenca solo i pacchetti non aggiornati.
- **--keep-going**: continua l'installazione di pacchetti, anche in caso di errore di uno di essi.
- **--triplet \<t>** : imposta la tripletta predefinita per i pacchetti non qualificati.
- **--vcpkg-root\<percorso>** : specifica la directory vcpkg da usare al posto della directory corrente o della directory dello strumento.

### <a name="upgrade-example"></a>Esempio di aggiornamento

L'esempio seguente illustra come aggiornare solo le librerie specificate. vcpkg esegue automaticamente il pull delle dipendenze secondo necessità.

```cmd
c:\users\satyan\vcpkg> vcpkg upgrade tiny-dnn:x86-windows zlib
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

Digitare **vcpkg remove** per rimuovere una libreria installata. Se sono presenti altre librerie che dipendono da essa, viene chiesto di eseguire di nuovo il comando con **--recurse**, che determina la rimozione di tutte le librerie downstream.

## <a name="customize-vcpkg"></a>Personalizzare vcpkg

È possibile modificare il clone di vcpkg nei modi preferiti. È anche possibile creare più cloni vcpkg, quindi modificare il portfile in ognuno di essi. Si tratta di un modo semplice per ottenere versioni specifiche della libreria o per specificare parametri della riga di comando specifici. In un'azienda, ad esempio, i singoli gruppi di sviluppatori potrebbero lavorare sul software con un set di dipendenze specifiche del gruppo. La soluzione consiste nel configurare un clone di vcpkg per ogni team. Modificare quindi i cloni per scaricare le versioni della libreria e impostare le opzioni di compilazione necessarie per ogni team.

## <a name="uninstall-vcpkg"></a>Disinstallare vcpkg

È sufficiente eliminare la directory vcpkg. L'eliminazione di questa directory Disinstalla la distribuzione di vcpkg e tutte le librerie installate da vcpkg.

## <a name="send-feedback-about-vcpkg"></a>Inviare commenti e suggerimenti su vcpkg

Usare il comando **vcpkg contact --survey** per inviare a Microsoft commenti e suggerimenti su vcpkg, inclusi i report sui bug e suggerimenti per le funzionalità.

## <a name="the-vcpkg-folder-hierarchy"></a>Gerarchia delle cartelle di vcpkg

Tutti i dati e le funzionalità di vcpkg sono inclusi in una singola gerarchia di directory, detta "istanza". Non esistono impostazioni del Registro di sistema o variabili di ambiente. È possibile avere un numero qualsiasi di istanze di vcpkg in un computer che non interferiscono tra loro.

Il contenuto di un'istanza di vcpkg è:

- buildtrees - contiene le sottocartelle delle origini da cui viene compilata ogni libreria.
- docs - documentazione ed esempi.
- downloads - copie memorizzate nella cache di qualsiasi origine o strumento scaricato. vcpkg cerca innanzitutto quando si esegue il comando di installazione.
- installed - contiene le intestazioni e i file binari per ogni libreria installata. Quando si esegue l'integrazione con Visual Studio, si dice essenzialmente di aggiungere questa cartella ai percorsi di ricerca.
- packages - cartella interna per la gestione temporanea tra installazioni.
- ports - file che descrivono ogni libreria nel catalogo, la versione e la posizione di download. È possibile aggiungere port personalizzati all'occorrenza.
- scripts - script (cmake, powershell) usati da vcpkg.
- toolsrc - codice sorgente C++ per vcpkg e i componenti correlati.
- triplets - contiene le impostazioni per ogni piattaforma di destinazione supportata (ad esempio, x86-windows o x64-uwp).

## <a name="command-line-reference"></a>Riferimenti alla riga di comando

|Comando|Descrizione|
|---------|---------|
|**ricerca vcpkg \[Pat]**|Cerca i pacchetti disponibili da installare|
|**vcpkg install \<pacchetto>...**|Installa un pacchetto|
|**vcpkg remove \<pacchetto>...**|Disinstalla un pacchetto|
|**vcpkg remove --outdated**|Disinstalla tutti i pacchetti non aggiornati|
|**vcpkg list**|Elenca i pacchetti installati|
|**vcpkg update**|Visualizza l'elenco di pacchetti per l'aggiornamento|
|**vcpkg upgrade**|Ricompila tutti i pacchetti non aggiornati|
|**file \<hash vcpkg > \[ALG]**|Esegue l'hashing di un file con un algoritmo specifico, per impostazione predefinita SHA512|
|**vcpkg integrate install**|Rende i pacchetti installati disponibili per tutti gli utenti. Sono richiesti privilegi di amministratore per il primo utilizzo|
|**vcpkg integrate remove**|Rimuove l'integrazione per tutti gli utenti|
|**vcpkg integrate project**|Genera un pacchetto NuGet di riferimento per l'uso in singoli progetti di Visual Studio|
|**vcpkg Export \<pkg >... \[opt]...**|Esporta un pacchetto|
|**vcpkg edit \<pacchetto>**|Apre un port per la modifica (usa %EDITOR%, impostazione predefinita 'code')|
|**vcpkg creare \<pkg > \<URL > \[ArchiveName]**|Crea un nuovo pacchetto|
|**vcpkg cache**|Elenca i pacchetti compilati memorizzati nella cache|
|**vcpkg version**|Visualizza le informazioni sulla versione|
|**vcpkg contact --survey**|Visualizza informazioni di contatto per l'invio di commenti e suggerimenti.|

### <a name="options"></a>Opzioni

|Opzione|Descrizione|
|---------|---------|
|**--triplet \<t>**|Specifica la tripletta dell'architettura di destinazione (impostazione predefinita: `%VCPKG_DEFAULT_TRIPLET%`, vedere anche **vcpkg help triplet**)|
|**--vcpkg-root \<percorso>**|Specifica la directory radice di vcpkg (impostazione predefinita: `%VCPKG_ROOT%`)|
