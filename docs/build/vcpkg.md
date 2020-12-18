---
title: 'vcpkg: Gestione pacchetti C++ per Windows, Linux e macOS'
description: vcpkg è una gestione pacchetti da riga di comando che semplifica notevolmente l'acquisizione e l'installazione di librerie C++ Open Source in Windows, macOS e Linux.
ms.custom: contperf-fy21q2
ms.date: 12/11/2020
ms.topic: overview
ms.technology: cpp-ide
ms.openlocfilehash: f937f1df718bf8dfcc0ae5166d8b9eb671d2d8ab
ms.sourcegitcommit: 2b2c3fa9244e31db35ea33554dea0efcab490f3c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/18/2020
ms.locfileid: "97682466"
---
# <a name="vcpkg-a-c-package-manager-for-windows-linux-and-macos"></a>vcpkg: Gestione pacchetti C++ per Windows, Linux e macOS

vcpkg è una gestione pacchetti da riga di comando multipiattaforma per le librerie C e C++. Semplifica l'acquisizione e l'installazione di librerie di terze parti in Windows, Linux e macOS. Se un progetto usa librerie di terze parti, è consigliabile usare vcpkg per installarle. vcpkg supporta sia librerie open source che proprietarie. Tutte le librerie nel catalogo di Windows per vcpkg sono state testate per la compatibilità con Visual Studio 2015, Visual Studio 2017 e Visual Studio 2019. Tra i cataloghi Windows e Linux/macOS, vcpkg supporta ora migliaia di librerie. La community di C++ aggiunge più librerie a entrambi i cataloghi con cadenza continuativa.

## <a name="how-to-get-and-use-vcpkg"></a>Come ottenere e usare vcpkg

Installare vcpkg creando un clone locale dal repository GitHub [https://github.com/Microsoft/vcpkg](https://github.com/Microsoft/vcpkg) . Eseguire quindi lo script vcpkg-Bootstrapper per configurarlo. Per istruzioni dettagliate sull'installazione, vedere [Install vcpkg](install-vcpkg.md). Per integrare vcpkg con Visual Studio o l'ambiente di sviluppo Visual Studio Code, vedere [integrare vcpkg](integrate-vcpkg.md). Per usare vcpkg per installare o aggiornare una libreria, vedere [gestire le librerie con vcpkg](manage-libraries-with-vcpkg.md). Per ulteriori informazioni sui comandi vcpkg, vedere [riferimento alla riga di comando di vcpkg](vcpkg-command-line-reference.md).

## <a name="how-vcpkg-works"></a>Funzionamento di vcpkg

Il progetto vcpkg è open source, disponibile su GitHub. Un *Clone* o una copia locale del repository vcpkg contiene il file eseguibile vcpkg e un *Catalogo*, un elenco di pacchetti che descrivono una libreria e le relative opzioni. Ogni pacchetto include una o più *porte*, informazioni su come ottenere e compilare la libreria dalle origini oppure scaricare una versione binaria per un ambiente di destinazione specifico. Quando si utilizza vcpkg per installare una libreria, vengono utilizzate le informazioni sul pacchetto e sulla porta per scaricare e produrre una copia locale della libreria in una sottodirectory della directory vcpkg, pronta per l'utilizzo.

Quando una libreria è disponibile nel modulo di origine, vcpkg Scarica le origini anziché i file binari. Vengono compilate tali origini usando la versione più recente del compilatore C o C++ e degli strumenti che è in grado di trovare. Per la compatibilità con l'ABI C++, è importante che il codice dell'applicazione e le librerie usate siano compilati dalla stessa versione dello stesso compilatore. Con vcpkg è possibile evitare, o almeno ridurre notevolmente, il rischio di file binari non corrispondenti e i problemi correlati. Nei team che standardizzano una versione specifica di un compilatore, un membro del team può usare vcpkg per scaricare le origini e compilare un set di file binari. È inefficiente fare in modo che tutti gli utenti del team scarichino e creino librerie comuni. Un membro del team può usare il **`vcpkg export`** comando per creare un file zip comune dei file binari e delle intestazioni oppure un pacchetto NuGet. Quindi, è facile condividerlo con altri membri del team.

## <a name="customize-vcpkg-instances-for-different-targets"></a>Personalizzare le istanze di vcpkg per destinazioni diverse

È possibile clonare più copie, o *istanze*, di vcpkg nel computer e personalizzarle per scopi specifici. In ogni istanza è possibile installare librerie diverse o anche versioni diverse di librerie rispetto a quelle disponibili nel catalogo pubblico. Ogni istanza può essere impostata in modo da produrre una raccolta personalizzata di librerie, usando le opzioni del compilatore preferite. Ogni istanza è un ambiente autonomo con una propria copia di vcpkg.exe che opera solo sulla propria gerarchia. vcpkg non viene aggiunto a nessuna variabile di ambiente e non ha alcuna dipendenza dal registro di sistema di Windows o da Visual Studio.

È anche possibile creare un clone vcpkg con librerie private nella raccolta Ports. È possibile aggiungere una porta che consente di scaricare i file binari e le intestazioni predefiniti. Quindi, scrivere un file *portfile. CMake* che copia semplicemente i file nel percorso preferito.

## <a name="the-vcpkg-folder-hierarchy"></a>Gerarchia delle cartelle di vcpkg

Tutte le funzionalità e i dati di vcpkg sono indipendenti in una singola gerarchia di directory per istanza. Non esistono impostazioni del Registro di sistema o variabili di ambiente. È possibile avere un numero qualsiasi di istanze di vcpkg in un computer che non interferiscono tra loro.

Il contenuto di un'istanza di vcpkg è:

- *`buildtrees`* : Contiene le sottocartelle delle origini da cui viene compilata ogni libreria.
- *`docs`* -documentazione ed esempi.
- *`downloads`* -Copie memorizzate nella cache di tutti gli strumenti o le origini scaricate. vcpkg cerca innanzitutto quando si esegue il comando di installazione.
- *`installed`* : Contiene le intestazioni e i file binari per ogni libreria installata. Quando si esegue l'integrazione con Visual Studio, si dice essenzialmente di aggiungere questa cartella ai percorsi di ricerca.
- *`packages`* -Cartella interna per la gestione temporanea tra le installazioni.
- *`ports`* -File che descrivono ogni libreria nel catalogo, la versione e la posizione in cui scaricarlo. È possibile aggiungere port personalizzati all'occorrenza.
- *`scripts`* -Script (CMake, PowerShell) usati da vcpkg.
- *`toolsrc`* -Codice sorgente C++ per vcpkg e componenti correlati.
- *`triplets`* : Contiene le impostazioni per ogni piattaforma di destinazione supportata (ad esempio, x86-Windows o x64-UWP).

## <a name="telemetry"></a>Telemetria

vcpkg raccoglie i dati di utilizzo per contribuire a migliorare l'esperienza utente. I dati raccolti da Microsoft sono anonimi. È possibile rifiutare esplicitamente i dati di telemetria eseguendo di nuovo lo **`bootstrap-vcpkg.bat`** **`bootstrap-vcpkg.sh`** script o con l' **`-disableMetrics`** opzione. In alternativa, passare l' **`--disable-metrics`** opzione a vcpkg nella riga di comando. È anche possibile disabilitare le metriche impostando la `VCPKG_DISABLE_METRICS` variabile di ambiente.

## <a name="send-feedback-about-vcpkg"></a>Inviare commenti e suggerimenti su vcpkg

Usare il **`vcpkg contact --survey`** comando per inviare commenti e suggerimenti a Microsoft su vcpkg, inclusi i report sui bug e i suggerimenti per le funzionalità. Per ulteriori informazioni, vedere la Guida di [riferimento alla riga di comando vcpkg](vcpkg-command-line-reference.md).

## <a name="see-also"></a>Vedere anche

[vcpkg su GitHub](https://github.com/Microsoft/vcpkg)\
[Installare vcpkg](install-vcpkg.md)\
[Integrare vcpkg](integrate-vcpkg.md)\
[Gestire le librerie con vcpkg](manage-libraries-with-vcpkg.md)\
[informazioni di riferimento sulla riga di comando vcpkg](vcpkg-command-line-reference.md)\
[Guida introduttiva](https://github.com/microsoft/vcpkg/blob/master/docs/index.md)\
[Domande frequenti](https://github.com/microsoft/vcpkg/blob/master/docs/about/faq.md)
