---
title: vcpkg - Gestione pacchetti per C++ per Windows | Microsoft Docs
description: vcpkg è un'utilità di gestione di pacchetti dalla riga di comando che semplifica notevolmente l'acquisizione e installazione delle librerie C++ open source in Windows.
keywords: vcpkg
author: mikeblome
ms.author: mblome
ms.date: 04/06/2018
ms.technology:
- cpp-ide
ms.tgt_pltfrm: windows
ms.assetid: f50d459a-e18f-4b4e-814b-913e444cedd6
ms.topic: conceptual
dev_langs:
- C++
ms.workload:
- cplusplus
ms.openlocfilehash: c67b7fce0567c2c6daf18b625a2b759c31d0b040
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="vcpkg-c-package-manager-for-windows"></a>vcpkg: gestione pacchetti per C++ per Windows

vcpkg è un'utilità di gestione di pacchetti dalla riga di comando che semplifica notevolmente l'acquisizione e installazione di librerie di terze parti in Windows. Se un progetto usa librerie di terze parti, è consigliabile usare vcpkg per installarle. vcpkg supporta sia librerie open source che proprietarie. Tutte le librerie nel catalogo pubblico di vcpkg sono state testate per la compatibilità con Visual Studio 2015 e Visual Studio 2017. A gennaio 2018 il catalogo includeva più di 600 librerie e la community di C++ aggiunge continuamente altre librerie.

## <a name="simple-yet-flexible"></a>Semplice ma flessibile

Basta un unico comando per scaricare le origini e compilare una libreria. vcpkg è a sua volta un progetto open source, disponibile in GitHub. È possibile personalizzare i cloni privati nel modo preferito, ad esempio specificando librerie diverse o versioni diverse di librerie, rispetto a quelle disponibili nel catalogo pubblico. È possibile creare più cloni di vcpkg in un singolo computer e ognuno potrà produrre set personalizzati di librerie e/o opzioni di compilazione e così via. Ogni clone è un ambiente indipendente che è possibile gestire con Xcopy e contiene una copia propria di vcpkg.exe che opera solo sulla gerarchia specifica. vcpkg non viene aggiunto ad alcuna variabile di ambiente e non ha dipendenze dal Registro di sistema di Windows o da Visual Studio.

## <a name="sources-not-binaries"></a>Origini e non file binari

Per le librerie nel catalogo pubblico, vcpkg scarica origini anziché i file binari[1]. Queste origini vengono compilate con Visual Studio 2017 o Visual Studio 2015, se non è installata la versione 2017. In C++ è molto importante che tutte le librerie usate siano compilate con lo stesso compilatore e la stessa versione del compilatore del codice dell'applicazione che si collega a tali librerie. Con vcpkg è possibile evitare, o almeno ridurre notevolmente, il rischio di file binari non corrispondenti e i problemi correlati. In team che usano una versione specifica del compilatore Visual C++ come standard, un solo membro del team può usare vcpkg per scaricare le origini e compilare un set di file binari, quindi usare il comando di esportazione per comprimere i file binari e le intestazioni per gli altri membri del team. Per altre informazioni, vedere Esportare file binari compilati e intestazioni di seguito.

Se si crea un clone di vcpkg con librerie private nella raccolta di port, è possibile aggiungere un port che scarica file binari precompilati e intestazioni, quindi scrivere un file portfile.cmake che copia semplicemente questi file nella posizione desiderata.

[1] *Nota: per alcune librerie proprietarie, le origini non sono disponibili. In questi casi, vcpkg scaricherà file binari precompilati compatibili.*

## <a name="installation"></a>Installazione

Clonare il repository vcpkg da GitHub: https://github.com/Microsoft/vcpkg. È possibile scaricarlo nel percorso di cartella preferito.

Eseguire il programma di avvio automatico nella cartella radice: **bootstrap-vcpkg.bat**.

## <a name="basic-tasks"></a>Attività di base

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

Dopo avere ottenuto il nome di una libreria tramite **vcpkg search**, è possibile usare **vcpkg install** per scaricare la libreria e compilarla. vcpkg usa il file portfile della libreria nella directory ports. Se non viene specificata una tripletta, vcpkg eseguirà l'installazione e la compilazione per x86-windows. Se il file portfile specifica dipendenze, vcpkg scaricherà e installerà anche le dipendenze. Dopo aver completato il download, vcpkg compila la libreria con qualsiasi sistema di compilazione usato dalla libreria. I file di progetto CMake e MSBuild sono la scelta preferita, ma sono supportati anche MAKE e qualsiasi altro sistema di compilazione. Se vcpkg non trova il sistema di compilazione specificato nel computer locale, lo scarica e installa.

```cmd
> vcpkg install boost:x86-windows

The following packages will be built and installed:
    boost:x86-windows
  * bzip2:x86-windows
  * zlib:x86-windows
Additional packages (*) will be installed to complete this operation.
```

## <a name="list-the-libraries-already-installed"></a>Elencare le librerie già installate

Dopo aver installato alcune librerie, è possibile usare **vcpkg list** per controllare quali sono disponibili:

```cmd
> vcpkg list

boost:x86-windows       1.64-3   Peer-reviewed portable C++ source libraries
bzip2:x86-windows       1.0.6-1  High-quality data compressor.
cpprestsdk:x86-windows  2.9.0-2  C++11 JSON, REST, and OAuth library The C++ REST ...
openssl:x86-windows     1.0.2k-2 OpenSSL is an open source project that provides a...
websocketpp:x86-windows 0.7.0    Library that implements RFC6455 The WebSocket Pro...
zlib:x86-windows        1.2.11   A compression library
```

## <a name="integrate-with-visual-studio"></a>Integrazione con Visual Studio

### <a name="per-user"></a>Per utente

Eseguire **vcpkg integrate install** per configurare Visual Studio per individuare tutti i file di intestazione e i file binari vcpkg per ogni utente, senza dover modificare manualmente i percorsi di directory di VC++. Se sono stati creati più cloni, il clone da cui si esegue questo comando diventa il nuovo percorso predefinito.

È ora possibile usare #include per le intestazioni, digitando semplicemente cartella/intestazione. La funzionalità di completamento automatico faciliterà questa operazione. Non sono necessari ulteriori passaggi per il collegamento alle librerie o l'aggiunta di riferimenti a progetti. La figura seguente mostra come Visual Studio trova le intestazioni azure-storage-cpp. vcpkg inserisce le intestazioni nella sottocartella **\installed**, partizionata in base alla piattaforma di destinazione. Il diagramma seguente mostra l'elenco dei file di inclusione nella sottocartella **\was** per la libreria:

![Integrazione di Intellisense in vcpkg](media/vcpkg-intellisense.png "vcpkg e Intellisense")

### <a name="per-project"></a>Per progetto

Se è necessario usare una versione specifica di una libreria, diversa dalla versione nell'istanza attiva di vcpkg, eseguire questi passaggi:

1. Creare un nuovo clone di vcpkg
1. Modificare il portfile per la libreria per ottenere la versione necessaria
1. Eseguire **vcpkg install \<libreria>**.
1. Usare **vcpkg integrate project** per creare un pacchetto NuGet che fa riferimento a tale libreria per progetti specifici.

## <a name="export-compiled-binaries-and-headers"></a>Esportare i file binari compilati e le intestazioni

Richiedere a tutti i membri di un team di scaricare e compilare le librerie può non essere una soluzione efficiente. Un singolo membro del team può farsi carico di questo compito e quindi usare **vcpkg export** per creare un file ZIP con i file binari e le intestazioni, facilmente condivisibile con gli altri membri del team.

## <a name="updateupgrade-installed-libraries"></a>Aggiornare le librerie installate

Il catalogo pubblico viene mantenuto aggiornato con le versioni più recenti delle librerie. Per determinare quali librerie locali non sono aggiornate, usare **vcpkg update**. Quando si è pronti per aggiornare la raccolta di port alla versione più recente del catalogo pubblico, eseguire il comando **vcpkg upgrade** per scaricare e ricompilare automaticamente una o tutte le librerie installate che non sono aggiornate.

Per impostazione predefinita, il comando **upgrade** elenca solo le librerie che non sono aggiornate senza però aggiornarle. Per eseguire l'aggiornamento, usare l'opzione **--no-dry-run**.

```cmd
  vcpkg upgrade --no-dry-run
```

### <a name="upgrade-options"></a>Opzioni di aggiornamento

- **--no-dry-run**: esegue l'aggiornamento; se omesso, il comando elenca solo i pacchetti non aggiornati.
- **--keep-going**: continua l'installazione di pacchetti, anche in caso di errore di uno di essi.
- **--triplet \<t>**: imposta la tripletta predefinita per i pacchetti non qualificati.
- **--vcpkg-root\<percorso>**: specifica la directory vcpkg da usare al posto della directory corrente o della directory dello strumento.

### <a name="upgrade-example"></a>Esempio di aggiornamento

### <a name="per-project"></a>Per progetto

Se è necessario usare una versione specifica di una libreria, diversa dalla versione nell'istanza attiva di vcpkg, eseguire questi passaggi:

1. Creare un nuovo clone di vcpkg
1. Modificare il portfile per la libreria per ottenere la versione necessaria
1. Eseguire **vcpkg install \<libreria>**.
1. Usare **vcpkg integrate project** per creare un pacchetto NuGet che fa riferimento a tale libreria per progetti specifici.

## <a name="export-compiled-binaries-and-headers"></a>Esportare i file binari compilati e le intestazioni

Richiedere a tutti i membri di un team di scaricare e compilare le librerie può non essere una soluzione efficiente. Un singolo membro del team può farsi carico di questo compito e quindi usare **vcpkg export** per creare un file ZIP con i file binari e le intestazioni, facilmente condivisibile con gli altri membri del team.

## <a name="updateupgrade-installed-libraries"></a>Aggiornare le librerie installate

Il catalogo pubblico viene mantenuto aggiornato con le versioni più recenti delle librerie. Per determinare quali librerie locali non sono aggiornate, usare **vcpkg update**. Quando si è pronti per aggiornare la raccolta di port alla versione più recente del catalogo pubblico, eseguire il comando **vcpkg upgrade** per scaricare e ricompilare automaticamente una o tutte le librerie installate che non sono aggiornate.

Per impostazione predefinita, il comando **upgrade** elenca solo le librerie che non sono aggiornate senza però aggiornarle. Per eseguire l'aggiornamento, usare l'opzione **--no-dry-run**.

```cmd
  vcpkg upgrade --no-dry-run
```

### <a name="upgrade-options"></a>Opzioni di aggiornamento

- **--no-dry-run**: esegue l'aggiornamento; se omesso, il comando elenca solo i pacchetti non aggiornati.
- **--keep-going**: continua l'installazione di pacchetti, anche in caso di errore di uno di essi.
- **--triplet \<t>**: imposta la tripletta predefinita per i pacchetti non qualificati.
- **--vcpkg-root\<percorso>**: specifica la directory vcpkg da usare al posto della directory corrente o della directory dello strumento.

### <a name="upgrade-example"></a>Esempio di aggiornamento

L'esempio seguente illustra come aggiornare solo le librerie specificate. Si noti che vcpgk inserisce automaticamente le dipendenze se necessario.

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

Digitare **vcpkg remove** per rimuovere una libreria installata. Se sono presenti altre librerie dipendenti, verrà richiesto di eseguire nuovamente il comando con **--recurse**, in modo che vengano rimosse tutte le librerie downstream.

## <a name="customize-vcpkg"></a>Personalizzare vcpkg

È possibile modificare il clone di vcpkg nei modi preferiti. Si possono creare più cloni di vcpkg e modificare i portfile in ognuno, per ottenere versioni specifiche di librerie o specificare parametri della riga di comando. Ad esempio, in un'organizzazione, è possibile che un gruppo di sviluppatori lavori a software con un set di dipendenze mentre un altro gruppo usa un set diverso. È possibile configurare due cloni di vcpkg e modificare ognuno in modo da scaricare le versioni delle librerie, le opzioni di compilazione e altri elementi in base alle specifiche esigenze.

## <a name="uninstall-vcpkg"></a>Disinstallare vcpkg

È sufficiente eliminare la directory.

## <a name="send-feedback-about-vcpkg"></a>Inviare commenti e suggerimenti su vcpkg

Usare il comando **--survey** per inviare a Microsoft commenti e suggerimenti su vcpkg, inclusi i report sui bug e suggerimenti per le funzionalità.

## <a name="the-vcpkg-folder-hierarchy"></a>Gerarchia delle cartelle di vcpkg

Tutti i dati e le funzionalità di vcpkg sono inclusi in una singola gerarchia di directory, detta "istanza". Non esistono impostazioni del Registro di sistema o variabili di ambiente. In un computer può esistere un qualsiasi numero di istanze di vcpkg e non ci saranno interferenze.

Il contenuto di un'istanza di vcpkg è:

- buildtrees - contiene le sottocartelle delle origini da cui viene compilata ogni libreria.
- docs - documentazione ed esempi.
- downloads - copie memorizzate nella cache di qualsiasi origine o strumento scaricato. Questa è prima cartella in cui vcpkg esegue la ricerca quando si esegue il comando di installazione.
- installed - contiene le intestazioni e i file binari per ogni libreria installata. Per l'integrazione con Visual Studio, fondamentalmente si dà istruzione al programma di aggiungere questa cartella ai percorsi di ricerca.
- packages - cartella interna per la gestione temporanea tra installazioni.
- ports - file che descrivono ogni libreria nel catalogo, la versione e la posizione di download. È possibile aggiungere port personalizzati all'occorrenza.
- scripts - script (cmake, powershell) usati da vcpkg.
- toolsrc - codice sorgente C++ per vcpkg e i componenti correlati.
- triplets - contiene le impostazioni per ogni piattaforma di destinazione supportata (ad esempio, x86-windows o x64-uwp).

## <a name="command-line-reference"></a>Riferimenti alla riga di comando

|Comando|Descrizione|
|---------|---------|
|**vcpkg search [pat]**|Cerca i pacchetti disponibili da installare|
|**vcpkg install \<pacchetto>...**|Installa un pacchetto|
|**vcpkg remove \<pacchetto>...**|Disinstalla un pacchetto|
|**vcpkg remove --outdated**|Disinstalla tutti i pacchetti non aggiornati|
|**vcpkg list**|Elenca i pacchetti installati|
|**vcpkg update**|Visualizza l'elenco di pacchetti per l'aggiornamento|
|**vcpkg upgrade**|Ricompila tutti i pacchetti non aggiornati|
|**vcpkg hash \<file> [alg]**|Esegue l'hashing di un file con un algoritmo specifico, per impostazione predefinita SHA512|
|**vcpkg integrate install**|Rende i pacchetti installati disponibili per tutti gli utenti. Sono richiesti privilegi di amministratore per il primo utilizzo|
|**vcpkg integrate remove**|Rimuove l'integrazione per tutti gli utenti|
|**vcpkg integrate project**|Genera un pacchetto NuGet di riferimento per l'uso in singoli progetti di Visual Studio|
|**vcpkg export \<pacchetto>... [opt]...**|Esporta un pacchetto|
|**vcpkg edit \<pacchetto>**|Apre un port per la modifica (usa %EDITOR%, impostazione predefinita 'code')|
|**vcpkg import \<pacchetto>**|Importa una libreria precompilata|
|**vcpkg create \<pacchetto> \<url> [archivename]**|Crea un nuovo pacchetto|
|**vcpkg owns \<token di accesso personale>**|Cerca file nei pacchetti installati|
|**vcpkg cache**|Elenca i pacchetti compilati memorizzati nella cache|
|**vcpkg version**|Visualizza le informazioni sulla versione|
|**vcpkg contact**|Visualizza informazioni di contatto per l'invio di commenti e suggerimenti|

### <a name="options"></a>Opzioni

|Opzione|Descrizione|
|---------|---------|
|**--triplet \<t>**|Specifica la tripletta dell'architettura di destinazione (impostazione predefinita: `%VCPKG_DEFAULT_TRIPLET%`, vedere anche **vcpkg help triplet**)|
|**--vcpkg-root \<percorso>**|Specifica la directory radice di vcpkg (impostazione predefinita: `%VCPKG_ROOT%`)|
