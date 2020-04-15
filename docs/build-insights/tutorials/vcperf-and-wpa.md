---
title: 'Esercitazione: vcperf e Windows Performance Analyzer'
description: Esercitazione sull'utilizzo di vcperf e WPA per l'analisi delle tracce di compilazione in C.
ms.date: 11/03/2019
helpviewer_keywords:
- C++ Build Insights
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: c22f3dfddfd346d4f0eee898cb5164fd8923336e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323418"
---
# <a name="tutorial-vcperf-and-windows-performance-analyzer"></a>Esercitazione: vcperf e Windows Performance Analyzer

::: moniker range="<=vs-2017"

In Visual Studio 2019 sono disponibili gli strumenti di analisi della build in C. Per visualizzare la documentazione di questa versione, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2019.To see the documentation for this version, set the Visual Studio **Version** selector control for this article to Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range="vs-2019"

In questa esercitazione si apprenderà come usare *vcperf.exe* per raccogliere una traccia della compilazione in C. Si apprenderà inoltre come visualizzare questa traccia in Analizzatore prestazioni Windows.You'll also learn how to view this trace in Windows Performance Analyzer.

## <a name="step-1-install-and-configure-windows-performance-analyzer"></a>Passaggio 1: Installare e configurare Analizzatore prestazioni Windows

WPA è un visualizzatore di traccia disponibile in Windows Assessment and Deployment Kit (ADK). Si tratta di un'utilità separata che non fa parte dei componenti che è possibile installare con il programma di installazione di Visual Studio.

Una versione di WPA che supporta Le informazioni dettagliate sulla build di C, attualmente è disponibile solo in Windows ADK Insider Preview. Per accedere a questa anteprima, devi iscriverti al [programma Windows Insider.](https://insider.windows.com) Non è necessario installare il sistema operativo Windows 10 Insider Preview per ottenere l'anteprima di Windows ADK. Devi solo registrare il tuo account Microsoft con il Programma Windows Insider.

### <a name="to-download-and-install-wpa"></a>Per scaricare e installare WPA

NOTA: per l'installazione di Windows Performance Analyzer è necessario Windows 8 o versione successiva.

1. Passare alla pagina di [download](https://www.microsoft.com/en-us/software-download/windowsinsiderpreviewADK)di Windows ADK Insider Preview .

1. Scarica Windows ADK Insider Preview. È un'immagine disco.

1. Aprire l'immagine del disco ed eseguire il programma di *installazione adksetup.exe.*

1. Quando vengono richieste le funzionalità che si desidera installare, selezionare **Windows Performance Toolkit**. Se lo si desidera, è possibile selezionare altre funzionalità, ma non è necessario installare WPA.

   ![Schermata di selezione delle funzionalità del programma di installazione di Windows Performance Analyzer](media/wpa-installation.png)

### <a name="to-configure-build-insights"></a><a name="configuration-steps"></a>Per configurare Build Insights

1. Avviare WPA.

1. Selezionare **Finestra** > **Seleziona tabelle (sperimentale)**.

1. Scorri verso il basso fino alla sezione **Diagnostica.**

1. Selezionare tutte le visualizzazioni di MSVC Build Insights.Select all the MSVC Build Insights views.

   ![Pannello di selezione delle tabelle di Windows Performance Analyzer](media/wpa-configuration.png)

## <a name="step-2-trace-your-build-with-vcperfexe"></a>Passaggio 2: Tracciare la compilazione con vcperf.exeStep 2: Trace your build with vcperf.exe

Per visualizzare i dati di Analisi compilazione di C, raccoglierli innanzitutto in un file di traccia attenendosi alla procedura seguente:

1. Aprire un prompt dei comandi per sviluppatori di strumenti nativi o cross-tools per Visual Studio 2019 in modalità amministratore. Fare clic con il pulsante destro del mouse sulla voce di menu Start e scegliere **Altro** > **esecuzione come amministratore.**

1. Nella finestra del prompt dei comandi, immettere il comando seguente:

   **vcperf.exe /start _NomeSessione_**

   Scegliere un nome di sessione da ricordare per *NomeSessione*.

1. Compilare il progetto come si farebbe normalmente. Non è necessario utilizzare la stessa finestra del prompt dei comandi per compilare.

1. Nella finestra del prompt dei comandi, immettere il comando seguente:

   **vcperf.exe /stop _NomeSessione_ _traceFile.etl_**

   Utilizzare lo stesso nome di sessione scelto in precedenza per *SessionName.* Scegliere un nome appropriato per il file di traccia *traceFile.etl.*

Ecco l'aspetto di una tipica sequenza di comandi vcperf.exe in una finestra del prompt dei comandi per sviluppatori:Here's what a typical *vcperf.exe* command sequence looks like in a developer command prompt window:

![Uno scenario di utilizzo semplice di vcperf.exe](media/vcperf-simple-usage.png)

### <a name="important-notes-about-vcperfexe"></a>Note importanti su vcperf.exe

- Per avviare o arrestare una traccia *vcperf.exe* sono necessari privilegi di amministratore. Utilizzare una finestra del prompt dei comandi per sviluppatori aperta utilizzando **Esegui come amministratore**.

- In un computer può essere eseguita una sola sessione di traccia alla volta.

- Assicurarsi di ricordare il nome della sessione utilizzato per avviare la traccia. Può essere problematico interrompere una sessione in esecuzione senza conoscerne il nome.

- Analogamente a *cl.exe* e *link.exe*, l'utilità della riga di comando *vcperf.exe* è inclusa in un'installazione MSVC. Non sono necessari ulteriori passaggi per ottenere questo componente.

- *vcperf.exe* raccoglie informazioni su tutti gli strumenti MSVC in esecuzione nel sistema. Di conseguenza, non è necessario avviare la compilazione dallo stesso prompt dei comandi utilizzato per raccogliere la traccia. È possibile compilare il progetto da un prompt dei comandi diverso o anche in Visual Studio.You can build your project from either a different command prompt, or even in Visual Studio.

## <a name="step-3-view-your-trace-in-windows-performance-analyzer"></a>Passaggio 3: Visualizzare la traccia in Analizzatore prestazioni WindowsStep 3: View your trace in Windows Performance Analyzer

Avviare WPA e aprire la traccia appena raccolta. WPA deve riconoscerlo come una traccia di Analisi di compilazione di C, mentre le visualizzazioni seguenti dovrebbero essere visualizzate nel riquadro Diagramma di Graph Explorer a sinistra:

- Build Explorer
- File
- Funzione

Se non è possibile visualizzare queste visualizzazioni, verificare che WPA sia configurato correttamente, come descritto nel [passaggio 1](#configuration-steps). È possibile visualizzare i dati di compilazione trascinando le viste nella finestra Analisi vuota a destra, come illustrato di seguito:You can view your build data by dragging the views into the empty Analysis window on the right, as shown here:

![Visualizzazione di una traccia di analisi di compilazione in Windows Performance Analyzer](media/wpa-viewing-trace.gif)

Altre viste sono disponibili nel pannello Diagramma di Risorse. Trascinali nella finestra Analisi quando sei interessato alle informazioni che contengono. Una utile è la visualizzazione CPU (Campionata), che mostra l'utilizzo della CPU in tutta la compilazione.

## <a name="more-information"></a>Ulteriori informazioni

[Esercitazione: Nozioni di base su Analizzatore prestazioni WindowsTutorial: Windows Performance Analyzer basics](wpa-basics.md)\
Informazioni sulle operazioni WPA comuni che consentono di analizzare le tracce di compilazione.

[Riferimento: comandi vcperf](/cpp/build-insights/reference/vcperf-commands)\
Il riferimento al comando *vcperf.exe* elenca tutte le opzioni di comando disponibili.

[Riferimento: Visualizzazioni di Windows Performance Analyzer](/cpp/build-insights/reference/wpa-views)\
Fare riferimento a questo articolo per informazioni dettagliate sulle visualizzazioni di Analisi di compilazione in WPA.

[Analizzatore prestazioni Windows](/windows-hardware/test/wpt/windows-performance-analyzer)\
Il sito ufficiale della documentazione WPA.

::: moniker-end
