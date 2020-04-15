---
title: "vcpkg: un gestore di pacchetti di C' per Windows, Linux e MacOS"
description: vcpkg è un gestore di pacchetti della riga di comando che semplifica notevolmente l'acquisizione e l'installazione di librerie open-source di C, su Windows, MacOS e Linux.
ms.date: 01/10/2020
ms.technology: cpp-ide
ms.assetid: f50d459a-e18f-4b4e-814b-913e444cedd6
ms.openlocfilehash: 9dbeba1f55164ace01fb8bb26155dd9319ba62db
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81335404"
---
# <a name="vcpkg-a-c-package-manager-for-windows-linux-and-macos"></a>vcpkg: un gestore di pacchetti di C' per Windows, Linux e MacOS

vcpkg è un gestore di pacchetti della riga di comando per C. Semplifica notevolmente l'acquisizione e l'installazione di librerie di terze parti su Windows, Linux e MacOS. Se un progetto usa librerie di terze parti, è consigliabile usare vcpkg per installarle. vcpkg supporta sia librerie open source che proprietarie. Tutte le librerie nel catalogo di Windows per vcpkg sono state testate per la compatibilità con Visual Studio 2015, Visual Studio 2017 e Visual Studio 2019. Tra i cataloghi Windows e Linux/MacOS, vcpkg ora supporta oltre 1900 librerie. La community di C++ aggiunge continuamente altre librerie a entrambi i cataloghi.

## <a name="simple-yet-flexible"></a>Semplice ma flessibile

Basta un unico comando per scaricare le origini e compilare una libreria. vcpkg è a sua volta un progetto open source, disponibile in GitHub. È possibile personalizzare i tuoi cloni vcpkg privati nel modo che ti piace. Ad esempio, specificare librerie diverse o versioni diverse di librerie rispetto a quelle presenti nel catalogo pubblico. È possibile avere più cloni di vcpkg su un singolo computer. Ognuna di esse può essere impostata per produrre una raccolta personalizzata di librerie, con le opzioni di compilazione preferite. Ogni clone è un ambiente indipendente che contiene una copia propria di vcpkg.exe che opera solo sulla gerarchia specifica. vcpkg non viene aggiunto ad alcuna variabile di ambiente e non ha alcuna dipendenza dal Registro di sistema di Windows o Visual Studio.

## <a name="sources-not-binaries"></a>Origini, non file binari

Per le librerie nel catalogo di Windows, vcpkg scarica le origini anziché i file binari<sup>1</sup>. Compila tali origini usando la versione più recente di Visual Studio a disposizione. Nel linguaggio C, è importante che sia il codice dell'applicazione che tutte le librerie utilizzate vengano compilate dallo stesso compilatore e dalla stessa versione del compilatore. Con vcpkg è possibile evitare, o almeno ridurre notevolmente, il rischio di file binari non corrispondenti e i problemi correlati. Nei team standardizzati in una versione specifica di un compilatore, un membro del team può utilizzare vcpkg per scaricare origini e compilare un set di file binari. Quindi possono utilizzare il comando export per comprimere i file binari e le intestazioni per gli altri membri del team. Per altre informazioni, vedere [Esportare file binari compilati e intestazioni](#export_binaries_per_project) di seguito.

È inoltre possibile creare un clone vcpkg con librerie private nell'insieme ports. Aggiungere una porta che scarichi i file binari e le intestazioni predefiniti. Quindi, scrivere un file portfile.cmake che copia semplicemente i file nella posizione preferita.

<sup>1</sup> *Nota: le sorgenti non sono disponibili per alcune librerie proprietarie. In questi casi, vcpkg scarica i file binari predefiniti compatibili.*

## <a name="installation"></a>Installazione

Clonare il repository vcpkg [https://github.com/Microsoft/vcpkg](https://github.com/Microsoft/vcpkg)da GitHub: . È possibile scaricarlo nel percorso di cartella preferito.

Eseguire il programma di avvio automatico nella cartella radice:

- **bootstrap-vcpkg.bat** (Windows)
- **./bootstrap-vcpkg.sh** (Linux, MacOS)

## <a name="search-the-list-of-available-libraries"></a>Eseguire ricerche nell'elenco delle librerie disponibili

Per visualizzare i pacchetti disponibili, al prompt dei comandi digitare: **vcpkg search**

Questo comando consente di enumerare i file di controllo nelle sottocartelle vcpkg/ports. Vedrai un annuncio come questo:

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

Quando il file di porta specifica le dipendenze, vcpkg le scarica e le installa. Dopo il download, vcpkg compila la libreria utilizzando lo stesso sistema di compilazione utilizzato dalla libreria. CMake e (in Windows) i progetti MSBuild sono preferiti, ma MAKE è supportato, insieme a qualsiasi altro sistema di compilazione. Se vcpkg non riesce a trovare il sistema di compilazione specificato nel computer locale, lo scarica e lo installa.

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

Dopo aver installato alcune librerie, è possibile utilizzare **l'elenco vcpkg** per vedere cosa si ha:

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

Eseguire **vcpkg integrate install** per configurare Visual Studio per individuare tutti i file di intestazione e i file binari vcpkg in base all'utente. Non c'è bisogno di modificare manualmente i percorsi delle directory VC. Se si dispone di più cloni, il clone da cui si esegue questo comando diventa la nuova posizione predefinita.

Ora puoi #include intestazioni semplicemente digitando la cartella / intestazione e il completamento automatico ti assiste. Non sono necessari ulteriori passaggi per il collegamento alle librerie o l'aggiunta di riferimenti a progetti. La figura seguente mostra come Visual Studio trova le intestazioni azure-storage-cpp. vcpkg inserisce le intestazioni nella sottocartella **\installed**, partizionata in base alla piattaforma di destinazione. Il diagramma seguente mostra l'elenco dei file di inclusione nella sottocartella **\was** per la libreria:

![vcpkg e IntelliSense](media/vcpkg-intellisense.png "vcpkg e IntelliSense")

### <a name="per-project"></a>Per progetto

Se è necessario utilizzare una versione specifica di una libreria diversa da quella nell'istanza vcpkg attiva, attenersi alla seguente procedura:

1. Creare un nuovo clone di vcpkg
1. Modificare il portfile per la libreria per ottenere la versione necessaria
1. Eseguire **vcpkg install \<libreria>**.
1. Usare **vcpkg integrate project** per creare un pacchetto NuGet che fa riferimento a tale libreria per progetti specifici.

## <a name="integrate-with-visual-studio-code-linuxmacos"></a>Integrare con Visual Studio Code (Linux/MacOS)

Eseguire **vcpkg installare l'installazione** per configurare visual Studio Code su Linux/MacOS. Questo comando imposta il percorso dell'elenco vcpkg e abilita IntelliSense nei file di origine.

## <a name="target-linux-from-windows-via-wsl"></a>Linux come destinazione da Windows via WSL

È possibile produrre file binari Linux in un computer Windows utilizzando il sottosistema Windows per Linux o WSL. Seguire le istruzioni per [impostare WSL in Windows 10](/windows/wsl/install-win10) e configurarlo con il [estensione di Visual Studio per Linux](https://blogs.msdn.microsoft.com/vcblog/2017/02/08/targeting-windows-subsystem-for-linux-from-visual-studio/). Va bene mettere tutte le librerie costruite per Windows e Linux nella stessa cartella. Sono accessibili sia da Windows che da WSL.

## <a name="export-compiled-binaries-and-headers"></a><a name="export_binaries_per_project"></a> Esportare i file binari compilati e le intestazioni

È inefficiente fare in modo che tutti i membri di un team scarichino e creino librerie comuni. Un singolo membro del team può utilizzare il comando **vcpkg export** per creare un file zip comune dei file binari e delle intestazioni o un pacchetto NuGet. Quindi, è facile condividerlo con altri membri del team.

## <a name="updateupgrade-installed-libraries"></a>Aggiornare le librerie installate

Il catalogo pubblico viene aggiornato con le versioni più recenti delle librerie. Per determinare quali librerie locali non sono aggiornate, usare **vcpkg update**. Quando si è pronti per aggiornare la raccolta di porte alla versione più recente del catalogo pubblico, eseguire il comando **vcpkg upgrade.** Scarica e ricostruisce automaticamente tutte le librerie installate non aggiornate.

Per impostazione predefinita, il comando **upgrade** elenca solo le raccolte non aggiornate; non li aggiorna. Per aggiornare effettivamente le librerie, utilizzare l'opzione **--no-dry-run.**

```cmd
  vcpkg upgrade --no-dry-run
```

### <a name="upgrade-options"></a>Opzioni di aggiornamento

- **--no-dry-run**: esegue l'aggiornamento; se omesso, il comando elenca solo i pacchetti non aggiornati.
- **--keep-going**: continua l'installazione di pacchetti, anche in caso di errore di uno di essi.
- **--triplet \<t>**: imposta la tripletta predefinita per i pacchetti non qualificati.
- **--vcpkg-root\<percorso>**: specifica la directory vcpkg da usare al posto della directory corrente o della directory dello strumento.

### <a name="upgrade-example"></a>Esempio di aggiornamento

L'esempio seguente illustra come aggiornare solo le librerie specificate. vcpkg estrae automaticamente le dipendenze in base alle esigenze.

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

Digitare **vcpkg remove** per rimuovere una libreria installata. Se da essa dipendono altre librerie, viene chiesto di eseguire nuovamente il comando con **--recurse**, che determina la rimozione di tutte le librerie downstream.

## <a name="customize-vcpkg"></a>Personalizzare vcpkg

È possibile modificare il clone di vcpkg nei modi preferiti. È anche possibile creare più cloni vcpkg, quindi modificare i file di porta in ciascuno di essi. Si tratta di un modo semplice per ottenere versioni specifiche della libreria o per specificare particolari parametri della riga di comando. Ad esempio, in un'azienda, singoli gruppi di sviluppatori potrebbero lavorare su software con un set di dipendenze specifiche per il proprio gruppo. La soluzione è quella di impostare un clone di vcpkg per ogni team. Quindi, modificare i cloni per scaricare le versioni della libreria e impostare le opzioni di compilazione necessarie per ogni team.

## <a name="uninstall-vcpkg"></a>Disinstallare vcpkg

Basta eliminare la directory vcpkg. L'eliminazione di questa directory comporta la disinstallazione della distribuzione vcpkg e di tutte le librerie installate da vcpkg.

## <a name="send-feedback-about-vcpkg"></a>Inviare commenti e suggerimenti su vcpkg

Usare il comando **vcpkg contact --survey** per inviare a Microsoft commenti e suggerimenti su vcpkg, inclusi i report sui bug e suggerimenti per le funzionalità.

## <a name="the-vcpkg-folder-hierarchy"></a>Gerarchia delle cartelle di vcpkg

Tutti i dati e le funzionalità di vcpkg sono inclusi in una singola gerarchia di directory, detta "istanza". Non esistono impostazioni del Registro di sistema o variabili di ambiente. È possibile avere un numero qualsiasi di istanze di vcpkg in un computer e non interferiranno tra loro.

Il contenuto di un'istanza di vcpkg è:

- buildtrees - contiene le sottocartelle delle origini da cui viene compilata ogni libreria.
- docs - documentazione ed esempi.
- downloads - copie memorizzate nella cache di qualsiasi origine o strumento scaricato. vcpkg cerca qui prima quando si esegue il comando di installazione.
- installed - contiene le intestazioni e i file binari per ogni libreria installata. Quando si esegue l'integrazione con Visual Studio, si sta essenzialmente dicendo che aggiungere questa cartella ai relativi percorsi di ricerca.
- packages - cartella interna per la gestione temporanea tra installazioni.
- ports - file che descrivono ogni libreria nel catalogo, la versione e la posizione di download. È possibile aggiungere port personalizzati all'occorrenza.
- scripts - script (cmake, powershell) usati da vcpkg.
- toolsrc - codice sorgente C++ per vcpkg e i componenti correlati.
- triplets - contiene le impostazioni per ogni piattaforma di destinazione supportata (ad esempio, x86-windows o x64-uwp).

## <a name="command-line-reference"></a>Riferimenti alla riga di comando

|Comando|Descrizione|
|---------|---------|
|**vcpkg \[ricerca pat]**|Cerca i pacchetti disponibili da installare|
|**vcpkg install \<pacchetto>...**|Installa un pacchetto|
|**vcpkg remove \<pacchetto>...**|Disinstalla un pacchetto|
|**vcpkg remove --outdated**|Disinstalla tutti i pacchetti non aggiornati|
|**vcpkg list**|Elenca i pacchetti installati|
|**vcpkg update**|Visualizza l'elenco di pacchetti per l'aggiornamento|
|**vcpkg upgrade**|Ricompila tutti i pacchetti non aggiornati|
|**file hash \<vcpkg> \[alg]**|Esegue l'hashing di un file con un algoritmo specifico, per impostazione predefinita SHA512|
|**vcpkg integrate install**|Rende i pacchetti installati disponibili per tutti gli utenti. Sono richiesti privilegi di amministratore per il primo utilizzo|
|**vcpkg integrate remove**|Rimuove l'integrazione per tutti gli utenti|
|**vcpkg integrate project**|Genera un pacchetto NuGet di riferimento per l'uso in singoli progetti di Visual Studio|
|**esportazione vcpkg \<pkg>... \[opt]...**|Esporta un pacchetto|
|**vcpkg edit \<pacchetto>**|Apre un port per la modifica (usa %EDITOR%, impostazione predefinita 'code')|
|**vcpkg \<create pkg \< \[> URL> archivename]**|Crea un nuovo pacchetto|
|**vcpkg cache**|Elenca i pacchetti compilati memorizzati nella cache|
|**vcpkg version**|Visualizza le informazioni sulla versione|
|**vcpkg contact --survey**|Visualizza informazioni di contatto per l'invio di commenti e suggerimenti.|

### <a name="options"></a>Opzioni

|Opzione|Descrizione|
|---------|---------|
|**--triplet \<t>**|Specifica la tripletta dell'architettura di destinazione (impostazione predefinita: `%VCPKG_DEFAULT_TRIPLET%`, vedere anche **vcpkg help triplet**)|
|**--vcpkg-root \<percorso>**|Specifica la directory radice di vcpkg (impostazione predefinita: `%VCPKG_ROOT%`)|
