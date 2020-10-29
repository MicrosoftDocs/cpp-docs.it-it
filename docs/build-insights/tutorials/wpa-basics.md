---
title: 'Esercitazione: Nozioni di base su Windows Performance Analyzer'
description: Esercitazione su come completare le operazioni di base in Windows Performance Analyzer.
ms.date: 11/03/2019
helpviewer_keywords:
- C++ Build Insights
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 75f45244b9e9b38b7dc65b604940199acafa0ede
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92922218"
---
# <a name="tutorial-windows-performance-analyzer-basics"></a>Esercitazione: Nozioni di base su Windows Performance Analyzer

::: moniker range="<=msvc-150"

Gli strumenti di build Insights per C++ sono disponibili in Visual Studio 2019. Per visualizzare la documentazione relativa a questa versione, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range="msvc-160"

L'uso di Visual C++ Build Insights richiede una certa conoscenza di Windows Performance Analyzer (WPA). Questo articolo consente di acquisire familiarità con le operazioni WPA comuni. Per ulteriori informazioni su come utilizzare WPA, vedere la documentazione di [Windows Performance Analyzer](/windows-hardware/test/wpt/windows-performance-analyzer) .

## <a name="change-the-view-mode"></a>Modificare la modalità di visualizzazione

WPA offre due modalità di visualizzazione di base per l'esplorazione delle tracce:

- modalità grafico e
- modalità tabella.

È possibile passare dall'una all'altra usando le icone della modalità di visualizzazione nella parte superiore del riquadro visualizzazione:

![Passare dalla modalità grafico alla modalità tabella e viceversa.](media/wpa-switching-view-mode.gif)

## <a name="select-presets"></a>Seleziona set di impostazioni

La maggior parte delle visualizzazioni WPA di build Insights di C++ include più set di impostazioni tra cui scegliere. È possibile selezionare il set di impostazioni desiderato usando il menu a discesa nella parte superiore del riquadro visualizzazione:

![Selezione di un set di impostazioni.](media/wpa-presets.png)

## <a name="zoom-in-and-out"></a>Zoom avanti e indietro

Alcune tracce di compilazione sono talmente grandi che è difficile creare i dettagli. Per eseguire lo zoom avanti su un'area a cui si è interessati, fare clic con il pulsante destro del mouse sul grafico e scegliere **Zoom** . È sempre possibile tornare all'impostazione precedente scegliendo **Annulla zoom** . Questa immagine mostra un esempio di utilizzo di una selezione e del comando **Zoom** per eseguire lo zoom avanti su una sezione del grafo:

![Breve video che mostra lo zoom avanti su un grafico.](media/wpa-zooming.gif)

## <a name="group-by-different-columns"></a>Raggruppa in base a colonne diverse

È possibile personalizzare la modalità di visualizzazione della traccia. Fare clic sull'icona a forma di ingranaggio nella parte superiore di un riquadro di visualizzazione e ridisporre le colonne nell'editor della visualizzazione Build Explorer. Le colonne trovate sopra la riga gialla in questa finestra di dialogo sono quelle per le quali vengono raggruppate le righe di dati. La colonna immediatamente sopra la linea gialla è speciale: nella visualizzazione grafico viene visualizzata sulle barre colorate.

Questa immagine mostra un grafico a barre di esempio di una chiamata al collegamento. Si usa l'icona a forma di ingranaggio per aprire la finestra di dialogo Editor visualizzazione Build Explorer. Trascinare quindi il componente e le voci della colonna nome sopra la linea gialla. La configurazione viene modificata per aumentare il livello di dettaglio e per vedere cosa si è effettivamente verificato all'interno del linker:

![Breve video che Mostra come è possibile raggruppare in base a colonne diverse.](media/wpa-grouping.gif)

## <a name="see-also"></a>Vedere anche

[Esercitazione: vcperf e Windows Performance Analyzer](vcperf-and-wpa.md)\
[Informazioni di riferimento: comandi vcperf](../reference/vcperf-commands.md)\
[Informazioni di riferimento: visualizzazioni di Windows Performance Analyzer](../reference/wpa-views.md)\
[Windows Performance Analyzer](/windows-hardware/test/wpt/windows-performance-analyzer)

::: moniker-end
