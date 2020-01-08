---
title: Introduzione a C++ Build Insights
description: Panoramica di alto livello su come usare gli strumenti di analisi delle prestazioni in fase di compilazione che fanno parte C++ di informazioni dettagliate sulla compilazione.
ms.date: 11/03/2019
helpviewer_keywords:
- C++ Build Insights
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 862bfae3bdb27812306dcd356aecab812ea5181c
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75298740"
---
# <a name="get-started-with-c-build-insights"></a>Introduzione a C++ Build Insights

::: moniker range="<=vs-2017"

Gli C++ strumenti di build Insights sono disponibili in Visual Studio 2019. Per visualizzare la documentazione relativa a tale versione, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2019.

::: moniker-end
::: moniker range="vs-2019"

C++Build Insights è una raccolta di strumenti che offre una maggiore visibilità sulla catena di strumenti C++ Microsoft Visual (MSVC). Gli strumenti raccolgono i dati C++ sulle compilazioni e la presentano in un formato che può aiutare a rispondere a domande comuni, ad esempio:

- Le compilazioni sono sufficientemente parallele?
- Cosa è necessario includere nell'intestazione precompilata (PCH)?
- È necessario concentrarsi su un collo di bottiglia specifico per aumentare le velocità di compilazione?

I due componenti principali di questa tecnologia sono l'utilità da riga di comando *vcperf. exe* e un componente aggiuntivo per il Visualizzatore di tracce di Windows Performance Analyzer (WPA). L'utilità viene utilizzata per raccogliere tracce della compilazione, mentre il componente aggiuntivo consente di visualizzarle in WPA. Per iniziare a usare questi due strumenti, seguire questa procedura.

## <a name="step-1-install-and-configure-windows-performance-analyzer"></a>Passaggio 1: installare e configurare Windows Performance Analyzer

WPA è un visualizzatore di tracce disponibile in Windows Assessment and Deployment Kit (ADK). Si tratta di un'utilità separata che non fa parte dei componenti che è possibile installare con il programma di installazione di Visual Studio.

Una versione di WPA che supporta C++ Build Insights è attualmente disponibile solo in Windows ADK Insider Preview. Per accedere a questa versione di anteprima, è necessario iscriversi al [programma Windows Insider](https://insider.windows.com). Per ottenere l'anteprima di Windows ADK, non è necessario installare il sistema operativo Windows 10 Insider Preview. È sufficiente registrare il account Microsoft con il programma Windows Insider.

### <a name="to-download-and-install-wpa"></a>Per scaricare e installare WPA

Nota: per l'installazione di Windows Performance Analyzer è necessario Windows 8 o versione successiva.

1. Passare alla [pagina di download](https://www.microsoft.com/en-us/software-download/windowsinsiderpreviewADK)di Windows ADK Insider Preview.

1. Scaricare Windows ADK Insider Preview. Si tratta di un'immagine del disco.

1. Aprire l'immagine del disco ed eseguire il programma di installazione *ADKSetup. exe* .

1. Quando vengono richieste le funzionalità che si desidera installare, selezionare **Windows Performance Toolkit**. Se lo si desidera, è possibile selezionare altre funzionalità, ma non è necessario installare WPA.

   ![Schermata di selezione delle funzionalità del programma di installazione di Windows Performance Analyzer](media/wpa-installation.png)

### <a name="configuration-steps"></a>Per configurare informazioni dettagliate di compilazione

1. Avviare WPA.

1. Selezionare la **finestra** > **Seleziona tabelle (sperimentale)** .

1. Scorrere verso il basso fino alla sezione **diagnostica** .

1. Selezionare tutte le viste di MSVC Build Insights.

   ![Pannello di selezione tabella di Windows Performance Analyzer](media/wpa-configuration.png)

## <a name="step-2-trace-your-build-with-vcperfexe"></a>Passaggio 2: tracciare la compilazione con vcperf. exe

Per visualizzare C++ i dati di build Insights, è necessario prima raccoglierli in un file di traccia attenendosi alla procedura seguente:

1. Aprire un prompt dei comandi per gli sviluppatori di strumenti nativi o incrociati per Visual Studio 2019 in modalità amministratore. (Fare clic con il pulsante destro del mouse sulla voce del menu Start e scegliere **altri** > **Esegui come amministratore**.)

1. Nella finestra del prompt dei comandi immettere il comando seguente:

   **vcperf. exe/Start _sessionname_**

   Scegliere un nome di sessione da ricordare per *sessionname*.

1. Compilare il progetto normalmente. Non è necessario usare la stessa finestra del prompt dei comandi per la compilazione.

1. Nella finestra del prompt dei comandi immettere il comando seguente:

   **vcperf. exe/Stop _sessionname_ _TraceFile. etl_**

   Usare lo stesso nome di sessione scelto per *sessionname* prima. Scegliere un nome appropriato per il file di traccia *TraceFile. etl* .

Di seguito viene illustrata una tipica sequenza di comandi *vcperf. exe* in una finestra del prompt dei comandi per gli sviluppatori:

![Uno scenario semplice di utilizzo di vcperf. exe](media/vcperf-simple-usage.png)

### <a name="important-notes-about-vcperfexe"></a>Note importanti su vcperf. exe

- I privilegi di amministratore sono necessari per avviare o arrestare una traccia *vcperf. exe* . Usare una finestra del prompt dei comandi per gli sviluppatori aperta usando **Esegui come amministratore**.

- È possibile eseguire una sola sessione di traccia per volta in un computer.

- Assicurarsi di ricordare il nome della sessione usato per avviare la traccia. Può essere problematico arrestare una sessione in esecuzione senza conoscerne il nome.

- Analogamente a *CL.* exe e *link. exe*, l'utilità da riga di comando *vcperf. exe* è inclusa in un'installazione MSVC. Per ottenere questo componente non sono necessari passaggi aggiuntivi.

- *vcperf. exe* raccoglie informazioni su tutti gli strumenti MSVC in esecuzione nel sistema. Di conseguenza, non è necessario avviare la compilazione dallo stesso prompt dei comandi usato per raccogliere la traccia. È possibile compilare il progetto da un prompt dei comandi diverso o anche in Visual Studio.

## <a name="step-3-view-your-trace-in-windows-performance-analyzer"></a>Passaggio 3: visualizzare la traccia in Windows Performance Analyzer

Avviare WPA e aprire la traccia appena raccolta. Il protocollo WPA dovrebbe riconoscerlo come traccia di C++ Build Insights e le visualizzazioni seguenti verranno visualizzate nel pannello Graph Explorer a sinistra:

- Build Explorer
- Files
- Funzione

Se non è possibile visualizzare queste visualizzazioni, verificare che WPA sia configurato correttamente, come descritto nel [passaggio 1](#configuration-steps). È possibile visualizzare i dati di compilazione trascinando le visualizzazioni nella finestra analisi vuota a destra, come illustrato di seguito:

![Visualizzazione di C++ una traccia di build Insights in Windows Performance Analyzer](media/wpa-viewing-trace.gif)

Altre visualizzazioni sono disponibili nel pannello Graph Explorer. Trascinarli nella finestra di analisi quando si è interessati alle informazioni che contengono. Un utile è la visualizzazione CPU (campionata), che mostra l'utilizzo della CPU nell'intera compilazione.

## <a name="more-information"></a>Altre informazioni

[Nozioni di base su Windows Performance Analyzer](wpa-basics.md)\
Informazioni sulle operazioni WPA comuni che consentono di analizzare le tracce di compilazione.

\ di [riferimento di vcperf. exe](vcperf-reference.md)
Il riferimento al comando *vcperf. exe* elenca tutte le opzioni di comando disponibili.

Informazioni di [riferimento sulle viste di Windows Performance Analyzer](wpa-views-reference.md)\
Per informazioni dettagliate sulle visualizzazioni di C++ Build Insights in WPA, vedere questo articolo.

\ di [Windows Performance Analyzer](/windows-hardware/test/wpt/windows-performance-analyzer)
Il sito della documentazione di WPA ufficiale.

::: moniker-end
