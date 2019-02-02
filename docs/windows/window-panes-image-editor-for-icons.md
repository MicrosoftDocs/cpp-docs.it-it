---
title: Riquadri della finestra (Editor di immagini per le icone)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.bitmap
- vc.editors.icon
helpviewer_keywords:
- graphics editor [C++]
- Image editor [C++], panes
- Image editor [C++], magnification
- grids, pixel
- pixel grid, Image editor
- Image editor [C++], pixel grid
- Image editor [C++], grid settings
- grid settings, Image editor
ms.assetid: d66ea5b3-e2e2-4fc4-aa99-f50022cc690e
ms.openlocfilehash: 72b7cf056147cdbd216d861f0e710da423951c5a
ms.sourcegitcommit: efcc8c97570ddf7631570226c700e8f6ebb6c7be
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/01/2019
ms.locfileid: "55560309"
---
# <a name="window-panes-image-editor-for-icons"></a>Riquadri della finestra (Editor di immagini per le icone)

Il **Editor di immagini** finestra in genere visualizza un'immagine in due riquadri separati da una barra di divisione. Una vista è dimensioni effettive e l'altra viene ingrandita (il fattore di ingrandimento predefinita è 6). Le viste in questi due riquadri vengono aggiornate automaticamente: le modifiche apportate in un riquadro vengono visualizzate immediatamente in altro. I due riquadri rendono più semplice per usare una vista ingrandita dell'immagine, in cui è possibile distinguere i singoli pixel e, contemporaneamente, osservare gli effetti del lavoro svolto sulla vista dimensioni effettive dell'immagine.

Nel riquadro a sinistra viene utilizzato tutto lo spazio è necessario (fino a metà della **immagine** finestra) per visualizzare la visualizzazione di ingrandimento 1:1 (predefinito) dell'immagine. Riquadro di destra visualizza l'immagine con zoom (percentuale di ingrandimento 6:1 per impostazione predefinita). È possibile modificare il livello di ingrandimento in ogni riquadro usando il **Magnify** strumento nel [sulla barra degli strumenti Editor di immagini](../windows/toolbar-image-editor-for-icons.md) oppure usando i tasti di scelta rapida.

È possibile ingrandire il riquadro inferiore del **Editor di immagini** finestra e utilizzare i due riquadri per mostrare diverse aree di un'immagine di grandi dimensioni. Selezionare questa opzione all'interno del riquadro per selezionarlo.

È possibile modificare le dimensioni relative dei riquadri posizionando il puntatore del mouse sulla barra di divisione e spostando la barra di divisione verso destra o sinistra. Barra di divisione è possibile spostare completamente in entrambi i lati se si desidera lavorare con un solo riquadro.

Se il **Editor di immagini** riquadro viene ingrandita di un fattore pari a 4 o versione successiva, è possibile visualizzare una griglia in pixel che delimita i singoli pixel nell'immagine.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="to-change-the-magnification-factor"></a>Per modificare del fattore di ingrandimento

Per impostazione predefinita, il **immagine** editor Mostra la visualizzazione nel riquadro a sinistra con le dimensioni effettive e la visualizzazione nel riquadro di destra in 6 volte le dimensioni effettive. Il fattore di ingrandimento (visualizzato nella barra di stato nella parte inferiore dell'area di lavoro) è il rapporto tra le dimensioni effettive dell'immagine e le dimensioni di visualizzazione. Il fattore di predefinito è 6 e l'intervallo va da 1 a 10.

1. Selezionare il **Editor di immagini** riquadro cui fattore di ingrandimento che si desidera modificare.

1. Nel [sulla barra degli strumenti Editor di immagini](../windows/toolbar-image-editor-for-icons.md), selezionare la freccia a destra del [strumento Ingrandisci](../windows/toolbar-image-editor-for-icons.md) e selezionare il fattore di ingrandimento dal sottomenu: **1 X**, **2 X**, **6 X**, oppure **8 X**.

   > [!NOTE]
   > Per selezionare un fattore di ingrandimento diversi da quelli elencati nel **Ingrandisci** dello strumento, usare i tasti di scelta rapida.

## <a name="to-display-or-hide-the-pixel-grid"></a>Per visualizzare o nascondere la griglia in pixel

Per tutti i **Editor di immagini** riquadri con un fattore di ingrandimento pari a 4 o versione successiva, è possibile visualizzare una griglia che delimita i singoli pixel nell'immagine.

1. Nel **immagine** dal menu **Impostazioni griglia**.

1. Selezionare il **griglia in Pixel** casella di controllo per visualizzare la griglia, o deselezionare la casella per nascondere la griglia.

> [!TIP]
> Descrizioni comandi vengono visualizzati quando si passa il cursore su un pulsante della barra degli strumenti. Questi suggerimenti consentono di identificare la funzione di ogni pulsante.

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
[Editor di immagini per le icone](../windows/image-editor-for-icons.md)