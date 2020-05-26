---
title: 'Esercitazione: vcperf e Windows Performance Analyzer'
description: Esercitazione su come usare vcperf e WPA per l'analisi delle tracce di compilazione C++.
ms.date: 11/03/2019
helpviewer_keywords:
- C++ Build Insights
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 724df913400abb6d33c333f0a16c20fb982769bc
ms.sourcegitcommit: 98139766b548c55181ff5ec5ad3bfd9db2bf5c89
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/26/2020
ms.locfileid: "83865052"
---
# <a name="tutorial-vcperf-and-windows-performance-analyzer"></a>Esercitazione: vcperf e Windows Performance Analyzer

::: moniker range="<=vs-2017"

Gli strumenti di build Insights per C++ sono disponibili in Visual Studio 2019. Per visualizzare la documentazione relativa a questa versione, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range="vs-2019"

In questa esercitazione verrà illustrato come utilizzare *vcperf. exe* per raccogliere una traccia della compilazione C++. Si apprenderà anche come visualizzare questa traccia in Windows Performance Analyzer.

## <a name="step-1-install-and-configure-windows-performance-analyzer"></a>Passaggio 1: installare e configurare Windows Performance Analyzer

WPA è un visualizzatore di tracce disponibile in Windows Assessment and Deployment Kit (ADK). Si tratta di un'utilità separata che non fa parte dei componenti che è possibile installare con il programma di installazione di Visual Studio.

Una versione di WPA che supporta Visual C++ Build Insights è attualmente disponibile solo in Windows ADK Insider Preview. Per accedere a questa versione di anteprima, è necessario iscriversi al [programma Windows Insider](https://insider.windows.com). Per ottenere l'anteprima di Windows ADK, non è necessario installare il sistema operativo Windows 10 Insider Preview. È sufficiente registrare il account Microsoft con il programma Windows Insider.

### <a name="to-download-and-install-wpa"></a>Per scaricare e installare WPA

Nota: per l'installazione di Windows Performance Analyzer è necessario Windows 8 o versione successiva.

1. Passare alla [pagina di download](https://docs.microsoft.com/windows-hardware/get-started/adk-install)di Windows ADK.

1. Scaricare e installare la versione più recente di Windows ADK.

1. Quando vengono richieste le funzionalità che si desidera installare, selezionare **Windows Performance Toolkit**. Se lo si desidera, è possibile selezionare altre funzionalità, ma non è necessario installare WPA.

   ![Schermata di selezione delle funzionalità del programma di installazione di Windows Performance Analyzer](media/wpa-installation.png)

### <a name="to-configure-wpa"></a><a name="configuration-steps"></a>Per configurare WPA

Per la visualizzazione delle tracce di build Insights C++ in WPA è necessario un componente aggiuntivo speciale. Per installarlo, attenersi alla procedura seguente:

1. Per ottenere il componente aggiuntivo, scaricare uno dei componenti seguenti. Non è necessario ottenere entrambi. Scegliere quello più adatto.
    1. [Visual Studio 2019 versione 16,6 e successive](https://visualstudio.microsoft.com/downloads/)o
    1. [Pacchetto NuGet di build Insights in C++](https://www.nuget.org/packages/Microsoft.Cpp.BuildInsights/).

1. Copiare il `perf_msvcbuildinsights.dll` file nella directory di installazione di WPA.
    1. In Visual Studio 2019 versione 16,6 e successive questo file è disponibile qui: `C:\Program Files (x86)\Microsoft Visual Studio\2019\{Edition}\VC\Tools\MSVC\{Version}\bin\Host{Architecture}\{Architecture}` .
    1. Nel pacchetto NuGet di build Insights per C++, questo file è disponibile qui: `wpa\{Architecture}` .
    1. Nei percorsi precedenti sostituire le variabili racchiuse tra parentesi graffe, come indicato di seguito:
        1. `{Edition}`è l'edizione di Visual Studio 2019, ad esempio community, Professional o Enterprise.
        1. `{Version}`è la versione di MSVC. Scegliere quello più elevato disponibile.
        1. `{Architecture}`: scegliere `x64` se si dispone di una versione a 64 bit di Windows. In caso contrario, scegliere `x86` .
    1. La directory di installazione di WPA è in genere: `C:\Program Files (x86)\Windows Kits\10\Windows Performance Toolkit` .

1. Nella directory di installazione di WPA aprire il `perfcore.ini` file e aggiungere una voce per `perf_msvcbuildinsights.dll` .

## <a name="step-2-trace-your-build-with-vcperfexe"></a>Passaggio 2: tracciare la compilazione con vcperf. exe

Per visualizzare i dati di build Insights in C++, è necessario prima raccoglierli in un file di traccia attenendosi alla procedura seguente:

1. Aprire una Prompt dei comandi degli strumenti nativi x86 **x64** o **per Visual Studio 2019** in modalità amministratore. (Fare clic con il pulsante destro del mouse sulla voce del menu Start e scegliere **altro**  >  **Esegui come amministratore**.)
    1. Scegliere **x64** se si dispone di una versione a 64 bit di Windows. In caso contrario, scegliere **x86**.

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

### <a name="vcperfexe-is-open-source"></a>vcperf. exe è open source

Se si vuole compilare ed eseguire la propria versione di *vcperf. exe*, è possibile clonarlo dal [repository GitHub vcperf](https://github.com/microsoft/vcperf).

## <a name="step-3-view-your-trace-in-windows-performance-analyzer"></a>Passaggio 3: visualizzare la traccia in Windows Performance Analyzer

Avviare WPA e aprire la traccia appena raccolta. Il protocollo WPA dovrebbe riconoscerlo come traccia di build Insights in C++ e le visualizzazioni seguenti verranno visualizzate nel pannello di Esplora grafico a sinistra:

- Build Explorer
- File
- Funzioni
- Creazioni di istanze di modello

Se non è possibile visualizzare queste visualizzazioni, verificare che WPA sia configurato correttamente, come descritto nel [passaggio 1](#configuration-steps). È possibile visualizzare i dati di compilazione trascinando le visualizzazioni nella finestra analisi vuota a destra, come illustrato di seguito:

![Visualizzazione di una traccia di build Insights in C++ in Windows Performance Analyzer](media/wpa-viewing-trace.gif)

Altre visualizzazioni sono disponibili nel pannello Graph Explorer. Trascinarli nella finestra di analisi quando si è interessati alle informazioni che contengono. Un utile è la visualizzazione CPU (campionata), che mostra l'utilizzo della CPU nell'intera compilazione.

## <a name="more-information"></a>Ulteriori informazioni

[Esercitazione: Nozioni di base su Windows Performance Analyzer](wpa-basics.md)\
Informazioni sulle operazioni WPA comuni che consentono di analizzare le tracce di compilazione.

[Informazioni di riferimento: comandi vcperf](/cpp/build-insights/reference/vcperf-commands)\
Il riferimento al comando *vcperf. exe* elenca tutte le opzioni di comando disponibili.

[Informazioni di riferimento: visualizzazioni di Windows Performance Analyzer](/cpp/build-insights/reference/wpa-views)\
Vedere questo articolo per informazioni dettagliate sulle visualizzazioni di build Insights di C++ in WPA.

[Analizzatore prestazioni Windows](/windows-hardware/test/wpt/windows-performance-analyzer)\
Il sito della documentazione di WPA ufficiale.

::: moniker-end
