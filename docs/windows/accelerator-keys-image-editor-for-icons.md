---
title: Tasti di scelta rapida (Editor di immagini per le icone) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.bitmap
- vc.editors.icon
dev_langs:
- C++
helpviewer_keywords:
- accelerator keys
- Image editor [C++], accelerator keys
ms.assetid: add37861-3e17-4a6f-89e8-46df12e74a90
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f2b19fb16410f7d720d11e8b8560cde4cadf10b1
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33861532"
---
# <a name="accelerator-keys-image-editor-for-icons"></a>Tasti di scelta rapida (Editor di immagini per le icone)
Di seguito sono i tasti di scelta rapida per i comandi dell'editor di immagini che sono associati alle chiavi per impostazione predefinita. Per modificare i tasti di scelta rapida, fare clic su **opzioni** sul **strumenti** dal menu e quindi scegliere **tastiera** sotto il **ambiente** cartella. Per altre informazioni, vedere [Identificazione e personalizzazione dei tasti di scelta rapida](/visualstudio/ide/identifying-and-customizing-keyboard-shortcuts-in-visual-studio).  
  
> [!NOTE]
>  Le opzioni disponibili nelle finestre di dialogo e i nomi e i percorsi dei comandi di menu visualizzati potrebbero non corrispondere a quelli descritti nella Guida a seconda dell'edizione o delle impostazioni attive. Per modificare le impostazioni, scegliere **Importa/Esporta impostazioni** dal menu **Strumenti** . Per altre informazioni, vedere [Personalizzazione delle impostazioni di sviluppo in Visual Studio](http://msdn.microsoft.com/en-us/22c4debb-4e31-47a8-8f19-16f328d7dcd3).  
  
|Comando|Tasti|Descrizione|  
|-------------|----------|-----------------|  
|Image.AirBrushTool|CTRL + A|Consente di disegnare utilizzando un aerografo con la dimensione e colore selezionati.|  
|Image.BrushTool|CTRL + B|Consente di disegnare utilizzando un pennello con la forma selezionata, dimensione e colore.|  
|Image.CopyAndOutlineSelection|CTRL + MAIUSC + U|Consente di creare e strutturare una copia della selezione corrente. Se il colore di sfondo è contenuto nella selezione corrente, verrà escluso se [trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md) selezionato.|  
|Image.DrawOpaque|CTRL + J|Rende la selezione corrente sia [opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).|  
|Image.EllipseTool|CTRL + P|Disegna un'ellisse con lo spessore selezionato e il colore.|  
|Image.EraserTool|CTRL + MAIUSC + I|Cancella una parte dell'immagine (con il colore di sfondo corrente).|  
|Image.FilledEllipseTool|CTRL + MAIUSC + ALT + P|Consente di disegnare un'ellisse piena.|  
|Image.FilledRectangleTool|CTRL + MAIUSC + ALT + R|Consente di disegnare un rettangolo pieno.|  
|Image.FilledRoundRectangleTool|CTRL + MAIUSC + ALT + W|Consente di disegnare un rettangolo con angoli arrotondati pieno.|  
|Image.FillTool|CTRL + F|Consente di riempire un'area.|  
|Image.FlipHorizontal|CTRL+H|Consente di capovolgere orizzontalmente l'immagine o la selezione.|  
|Image.FlipVertical|MAIUSC + ALT + H|Consente di capovolgere verticalmente l'immagine o la selezione.|  
|Image.LargerBrush|CTRL + =|Consente di incrementare le dimensioni del pennello di un pixel in tutte le direzioni. Per diminuire le dimensioni del pennello, vedere Image.SmallerBrush in questa tabella.|  
|Image.LineTool|CTRL+L|Consente di disegnare una linea retta con la forma, la dimensione e il colore selezionati.|  
|Image.MagnificationTool|CTRL + M|Attiva il **Ingrandisci** strumento che consente di ingrandire sezioni specifiche dell'immagine.|  
|Image.Magnify|CTRL + MAIUSC + M|Consente di passare dall'ingrandimento corrente all'ingrandimento 1:1 e viceversa.|  
|Image.NewImageType|INSERIMENTO|Avvia il [New \<dispositivo > la finestra di dialogo Tipo immagine](../windows/new-device-image-type-dialog-box-image-editor-for-icons.md) con cui è possibile creare un'immagine per un tipo di immagine diverso.|  
|Image.NextColor|CTRL +]<br /><br /> -oppure-<br /><br /> CTRL + FRECCIA DESTRA|Consente di modificare il colore di primo piano nel colore successivo della tavolozza.|  
|Image.NextRightColor|CTRL + MAIUSC +]<br /><br /> -oppure-<br /><br /> CTRL + MAIUSC + FRECCIA DESTRA|Consente di modificare il colore di sfondo nel colore successivo della tavolozza.|  
|Image.OutlinedEllipseTool|MAIUSC + ALT + P|Consente di disegnare un'ellisse piena con un contorno.|  
|Image.OutlinedRectangleTool|MAIUSC + R E ATL|Consente di disegnare un rettangolo pieno con un contorno.|  
|Image.OutlinedRoundRectangleTool|MAIUSC + ALT + W|Consente di disegnare un rettangolo con angoli arrotondati pieno con un contorno.|  
|Image.PencilTool|CTRL + I|Consente di disegnare utilizzando una matita da un singolo pixel.|  
|Image.PreviousColor|CTRL + [<br /><br /> -oppure-<br /><br /> CTRL + FRECCIA SINISTRA|Consente di modificare il colore di primo piano nel colore precedente della tavolozza.|  
|Image.PreviousRightColor|CTRL + MAIUSC + [<br /><br /> -oppure-<br /><br /> CTRL + MAIUSC + FRECCIA SINISTRA|Consente di modificare il colore di sfondo nel colore precedente della tavolozza.|  
|Image.RectangleSelectionTool|MAIUSC + ALT + S|Seleziona un'area rettangolare dell'immagine da spostare, copiare o modificare.|  
|Image.RectangleTool|ATL + R|Disegna un rettangolo con lo spessore selezionato e il colore.|  
|Image.Rotate90Degrees|CTRL + MAIUSC + H|Consente di ruotare di 90 gradi l'immagine o la selezione.|  
|Image.RoundedRectangleTool|ALT + W|Disegna un rettangolo con angoli arrotondati con lo spessore selezionato e il colore.|  
|Image.ShowGrid|CTRL + ALT + S|Attiva o disattiva la griglia in pixel (Seleziona o deseleziona la **griglia in Pixel** opzione il [la finestra di dialogo Impostazioni griglia](../windows/grid-settings-dialog-box-image-editor-for-icons.md)).|  
|Image.ShowTileGrid|CTRL + MAIUSC + ALT + S|Attiva o disattiva la griglia affiancata (Seleziona o deseleziona la **riquadro griglia** opzione il [la finestra di dialogo Impostazioni griglia](../windows/grid-settings-dialog-box-image-editor-for-icons.md)).|  
|Image.SmallBrush|CTRL +. (punto)|Consente di ridurre il **pennello** dimensioni a un pixel. Vedere anche Image.LargerBrush e Image.SmallerBrush in questa tabella.|  
|Image.SmallerBrush|CTRL + - (sottrazione)|Consente di ridurre le dimensioni del pennello di un pixel in tutte le direzioni. Per incrementare nuovamente le dimensioni del pennello, vedere Image.LargerBrush in questa tabella.|  
|Image.TextTool|CTRL + T|Apre il [la finestra di dialogo strumento testo](../windows/text-tool-dialog-box-image-editor-for-icons.md).|  
|Image.UseSelectionAsBrush|CTRL + U|Consente di disegnare utilizzando la selezione corrente come pennello.|  
|Image.ZoomIn|CTRL + MAIUSC +. (punto)<br /><br /> -oppure-<br /><br /> CTRL + FRECCIA SU|Consente di incrementare l'ingrandimento della visualizzazione corrente.|  
|Image.ZoomOut|CTRL +, (virgola)<br /><br /> -oppure-<br /><br /> CTRL + FRECCIA GIÙ|Consente di ridurre l'ingrandimento della visualizzazione corrente.|  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 Nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Editor di immagini per le icone](../windows/image-editor-for-icons.md)

