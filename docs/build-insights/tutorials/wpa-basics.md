---
title: 'Esercitazione: Nozioni di base su Analizzatore prestazioni WindowsTutorial: Windows Performance Analyzer basics'
description: Esercitazione su come completare le operazioni di base in Analizzatore prestazioni Windows.Tutorial on how to complete basic operations in Windows Performance Analyzer.
ms.date: 11/03/2019
helpviewer_keywords:
- C++ Build Insights
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: ae1050b9389527a12f5bdbea6d695c0f20510127
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323410"
---
# <a name="tutorial-windows-performance-analyzer-basics"></a>Esercitazione: Nozioni di base su Analizzatore prestazioni WindowsTutorial: Windows Performance Analyzer basics

::: moniker range="<=vs-2017"

In Visual Studio 2019 sono disponibili gli strumenti di analisi della build in C. Per visualizzare la documentazione di questa versione, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2019.To see the documentation for this version, set the Visual Studio **Version** selector control for this article to Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range="vs-2019"

L'utilizzo di Analisi e compilazione di C, è necessario una certa conoscenza dell'Analizzatore prestazioni Windows (WPA). Questo articolo consente di acquisire familiarità con le operazioni WPA comuni. Per ulteriori informazioni su come utilizzare WPA, vedere la documentazione di [Windows Performance Analyzer.](/windows-hardware/test/wpt/windows-performance-analyzer)

## <a name="change-the-view-mode"></a>Modificare la modalità di visualizzazione

WPA offre due modalità di visualizzazione di base per esplorare le tracce:

- modalità grafico, e
- modalità tabella.

È possibile passare da una all'altra utilizzando le icone della modalità di visualizzazione nella parte superiore del riquadro di visualizzazione:

![Passaggio dalla modalità grafico alla modalità tabella e dalla modalità tabella.](media/wpa-switching-view-mode.gif)

## <a name="select-presets"></a>Selezionare i predefiniti

La maggior parte delle visualizzazioni WPA di Build Insights di C, è possibile scegliere tra più preset. È possibile selezionare il predefinito desiderato utilizzando il menu a discesa nella parte superiore del riquadro di visualizzazione:

![Selezione di un predefinito.](media/wpa-presets.png)

## <a name="zoom-in-and-out"></a>Eseguire lo zoom avanti e indietro

Alcune tracce di compilazione sono così grandi che è difficile individuare i dettagli. Per ingrandire un'area che ti interessa, fai clic con il pulsante destro del mouse sul grafico e seleziona **Ingrandimento**. È sempre possibile tornare all'impostazione precedente scegliendo **Annulla zoom**. Questa immagine mostra un esempio di utilizzo di una selezione e del comando **Ingrandisci** per ingrandire una sezione del grafico:

![Ingrandimento di un grafico.](media/wpa-zooming.gif)

## <a name="group-by-different-columns"></a>Raggruppa per colonne diverse

È possibile personalizzare la modalità di visualizzazione della traccia. Fare clic sull'icona a forma di ingranaggio nella parte superiore di un riquadro di visualizzazione e ridisporre le colonne nell'Editor della vista Esplora risorse. Le colonne che si trovano sopra la linea gialla in questa finestra di dialogo sono quelle in base alle quali sono raggruppate le righe di dati. La colonna destra sopra la linea gialla è speciale: nella vista grafico, viene visualizzata sulle barre colorate.

Questa immagine mostra un grafico a barre di esempio di una chiamata di collegamento. Usiamo l'icona a forma di ingranaggio per aprire la finestra di dialogo Editor vista Esplora risorse di compilazione. Quindi trasciniamo le voci della colonna Componente e Nome sopra la linea gialla. La configurazione viene modificata per aumentare il livello di dettaglio e per vedere cosa è successo effettivamente all'interno del linker:

![Ingrandimento di un grafico.](media/wpa-grouping.gif)

## <a name="see-also"></a>Vedere anche

[Esercitazione: vcperf e Windows Performance Analyzer](vcperf-and-wpa.md)\
[Riferimento: comandi vcperf](/cpp/build-insights/reference/vcperf-commands)\
[Riferimento: Visualizzazioni di Windows Performance Analyzer](/cpp/build-insights/reference/wpa-views)\
[Windows Performance Analyzer](/windows-hardware/test/wpt/windows-performance-analyzer)

::: moniker-end
