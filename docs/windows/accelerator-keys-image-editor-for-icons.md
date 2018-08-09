---
title: Tasti di scelta rapida (Editor di immagini per le icone) | Microsoft Docs
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
ms.openlocfilehash: 80ab38a73a142d3ad9f80767ffe8cc8e29b0f7c6
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39650927"
---
# <a name="accelerator-keys-image-editor-for-icons"></a>Tasti di scelta rapida (Editor di immagini per le icone)
Di seguito sono i tasti di scelta rapida per i comandi dell'editor di immagini che sono associati alle chiavi per impostazione predefinita. Per modificare i tasti di scelta rapida, fare clic su **opzioni** nel **Tools** dal menu e quindi scegliere **tastiera** sotto il **ambiente** cartella. Per altre informazioni, vedere [Identificazione e personalizzazione dei tasti di scelta rapida](/visualstudio/ide/identifying-and-customizing-keyboard-shortcuts-in-visual-studio).  
  
> [!NOTE]
>  Le opzioni disponibili nelle finestre di dialogo e i nomi e i percorsi dei comandi di menu visualizzati potrebbero non corrispondere a quelli descritti nella Guida a seconda dell'edizione o delle impostazioni attive. Per modificare le impostazioni, scegliere **Importa/Esporta impostazioni** dal menu **Strumenti** . Per altre informazioni, vedere [Personalizzazione delle impostazioni di sviluppo in Visual Studio](http://msdn.microsoft.com/22c4debb-4e31-47a8-8f19-16f328d7dcd3).  
  
|Comando|Tasti|Descrizione|  
|-------------|----------|-----------------|  
|Image.AirBrushTool|**CTRL** + **A**|Consente di disegnare utilizzando un aerografo della dimensione selezionata e del colore.|  
|Image.BrushTool|**CTRL** + **B**|Consente di disegnare utilizzando un pennello della forma selezionata, le dimensioni e del colore.|  
|Image.CopyAndOutlineSelection|**CTRL** + **MAIUSC** + **U**|Consente di creare e strutturare una copia della selezione corrente. Il colore di sfondo è contenuto nella selezione corrente, verrà escluso se hai [trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md) selezionato.|  
|Image.DrawOpaque|**CTRL** + **J**|Effettua la selezione corrente sia [opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).|  
|Image.EllipseTool|**CTRL** + **P**|Disegna un'ellisse con spessore di linea selezionata e il colore.|  
|Image.EraserTool|**CTRL** + **MAIUSC** + **I**|Consente di cancellare una parte dell'immagine (con il colore di sfondo corrente).|  
|Image.FilledEllipseTool|**CTRL** + **MAIUSC** + **Alt** + **P**|Consente di disegnare un'ellisse piena.|  
|Image.FilledRectangleTool|**CTRL** + **MAIUSC** + **Alt** + **R**|Consente di disegnare un rettangolo pieno.|  
|Image.FilledRoundRectangleTool|**CTRL** + **MAIUSC** + **Alt** + **W**|Consente di disegnare un rettangolo con angoli arrotondati pieno.|  
|Image.FillTool|**CTRL** + **F**|Consente di riempire un'area.|  
|Image.FlipHorizontal|**CTRL** + **H**|Consente di capovolgere orizzontalmente l'immagine o la selezione.|  
|Image.FlipVertical|**Shift**+ **Alt** + **H**|Consente di capovolgere verticalmente l'immagine o la selezione.|  
|Image.LargerBrush|**CTRL** + **=**|Consente di incrementare le dimensioni del pennello di un pixel in tutte le direzioni. Per diminuire le dimensioni del pennello, vedere Image.SmallerBrush in questa tabella.|  
|Image.LineTool|**CTRL** + **L**|Consente di disegnare una linea retta con la forma, la dimensione e il colore selezionati.|  
|Image.MagnificationTool|**CTRL** + **M**|Attiva i **Ingrandisci** strumento che consente di ingrandire sezioni specifiche dell'immagine.|  
|Image.Magnify|**CTRL** + **MAIUSC** + **M**|Consente di passare dall'ingrandimento corrente all'ingrandimento 1:1 e viceversa.|  
|Image.NewImageType|**Inserisci**|Viene avviata il [New \<dispositivo > finestra di dialogo Tipo immagine](../windows/new-device-image-type-dialog-box-image-editor-for-icons.md) con cui è possibile creare un'immagine per un tipo di immagine diversi.|  
|Image.NextColor|**Ctrl** + **]**<br /><br /> -oppure-<br /><br /> **CTRL** + **freccia destra**|Consente di modificare il colore di primo piano nel colore successivo della tavolozza.|  
|Image.NextRightColor|**Ctrl** + **Maiusc** + **]**<br /><br /> -oppure-<br /><br /> **Shift** + **Ctrl** + **freccia destra**|Consente di modificare il colore di sfondo nel colore successivo della tavolozza.|  
|Image.OutlinedEllipseTool|**Shift** + **Alt** + **P**|Consente di disegnare un'ellisse piena con un contorno.|  
|Image.OutlinedRectangleTool|**Shift** + **Alt** + **R**|Consente di disegnare un rettangolo pieno con un contorno.|  
|Image.OutlinedRoundRectangleTool|**Shift** + **Alt** + **W**|Consente di disegnare un rettangolo con angoli arrotondati pieno con un contorno.|  
|Image.PencilTool|**Ctrl** + **I**|Consente di disegnare utilizzando una matita da un singolo pixel.|  
|Image.PreviousColor|**Ctrl** + **[**<br /><br /> -oppure-<br /><br /> **CTRL** + **freccia sinistra**|Consente di modificare il colore di primo piano nel colore precedente della tavolozza.|  
|Image.PreviousRightColor|**Ctrl** + **Maiusc** + **[**<br /><br /> -oppure-<br /><br /> **Shift** + **Ctrl** + **freccia sinistra**|Consente di modificare il colore di sfondo nel colore precedente della tavolozza.|  
|Image.RectangleSelectionTool|**Shift** + **Alt** + **S**|Consente di selezionare un'area rettangolare dell'immagine da spostare, copiare o modificare.|  
|Image.RectangleTool|ATL + R|Disegna un rettangolo con spessore di linea selezionata e il colore.|  
|Image.Rotate90Degrees|**CTRL** + **MAIUSC** + **H**|Consente di ruotare di 90 gradi l'immagine o la selezione.|  
|Image.RoundedRectangleTool|**ALT** + **W**|Disegna un rettangolo con angoli arrotondati utilizzando lo spessore di linea selezionata e colore.|  
|Image.ShowGrid|**CTRL** + **Alt** + **S**|Attiva/Disattiva griglia in pixel (Seleziona o deseleziona la **griglia in Pixel** opzione il [nella finestra di dialogo Impostazioni griglia](../windows/grid-settings-dialog-box-image-editor-for-icons.md)).|  
|Image.ShowTileGrid|**CTRL** + **MAIUSC** + **Alt** + **S**|Attiva o disattiva la griglia affiancata (Seleziona o deseleziona la **griglia affiancata** opzione il [nella finestra di dialogo Impostazioni griglia](../windows/grid-settings-dialog-box-image-editor-for-icons.md)).|  
|Image.SmallBrush|**CTRL** + **.** (punto)|Consente di ridurre il **pennello** dimensione a un pixel. Vedere anche Image.LargerBrush e Image.SmallerBrush in questa tabella.|  
|Image.SmallerBrush|**CTRL**  +  **-** (meno)|Consente di ridurre le dimensioni del pennello di un pixel in tutte le direzioni. Per incrementare nuovamente le dimensioni del pennello, vedere Image.LargerBrush in questa tabella.|  
|Image.TextTool|**CTRL** + **T**|Apre la [finestra di dialogo strumento testo](../windows/text-tool-dialog-box-image-editor-for-icons.md).|  
|Image.UseSelectionAsBrush|**CTRL** + **U**|Consente di disegnare utilizzando la selezione corrente come pennello.|  
|Image.ZoomIn|**CTRL** + **MAIUSC** + **.** (punto)<br /><br /> -oppure-<br /><br /> **CTRL** + **freccia in su**|Consente di incrementare l'ingrandimento della visualizzazione corrente.|  
|Image.ZoomOut|**CTRL** + **,** (virgola)<br /><br /> -oppure-<br /><br /> **CTRL** + **freccia giù**|Consente di ridurre l'ingrandimento della visualizzazione corrente.|  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Editor di immagini per le icone](../windows/image-editor-for-icons.md)