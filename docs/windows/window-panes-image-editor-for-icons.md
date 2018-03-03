---
title: I riquadri della finestra (Editor di immagini per le icone) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.editors.bitmap
- vc.editors.icon
dev_langs:
- C++
helpviewer_keywords:
- graphics editor [C++]
- Image editor [C++], panes
ms.assetid: d66ea5b3-e2e2-4fc4-aa99-f50022cc690e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c4b28d49d698f5bc39d8a3915c635c28ecca4193
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="window-panes-image-editor-for-icons"></a>Riquadri della finestra (Editor di immagini per le icone)
La finestra dell'Editor di immagini in genere visualizza un'immagine in due riquadri separati da una barra di divisione. Una vista è di dimensioni effettive e l'altra viene ingrandita (il fattore di ingrandimento predefinito è 6). Le viste in due riquadri vengono aggiornate automaticamente: le modifiche apportate in un riquadro vengono visualizzate immediatamente in altro. I due riquadri semplificano le operazioni in una vista ingrandita dell'immagine, in cui è possibile distinguere singoli pixel e, contemporaneamente, osservare l'effetto delle operazioni eseguite nella vista dimensioni effettive dell'immagine.  
  
 Riquadro a sinistra viene utilizzato come quantità di spazio è necessario (fino a metà della finestra immagine) per visualizzare la visualizzazione di ingrandimento 1:1 (impostazione predefinita) dell'immagine. Riquadro di destra visualizza l'immagine ingrandita (ingrandimento 1 a 6: per impostazione predefinita). È possibile [modificare l'ingrandimento](../windows/changing-the-magnification-factor-image-editor-for-icons.md) in ogni riquadro usando la **Ingrandisci** strumento nel [barra degli strumenti dell'Editor di immagini](../windows/toolbar-image-editor-for-icons.md) o utilizzando i tasti di scelta rapida.  
  
 È possibile ingrandire il riquadro inferiore della finestra dell'Editor di immagini e utilizzare i due riquadri per visualizzare aree diverse di un'immagine di grandi dimensioni. Fare clic su nel riquadro per selezionarlo.  
  
 È possibile modificare le dimensioni relative dei riquadri posizionando il puntatore sulla barra di divisione e spostando la barra di divisione verso destra o sinistra. Se si desidera lavorare con un solo riquadro, in entrambi i lati possibile spostare la barra di divisione.  
  
 Se il riquadro dell'editor di immagini aumenta la dimensione di un fattore di 4 o versione successiva, è possibile [visualizzare una griglia di pixel](../windows/displaying-or-hiding-the-pixel-grid-image-editor-for-icons.md) che delimita i singoli pixel dell'immagine.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)   
 [Editor di immagini per le icone](../windows/image-editor-for-icons.md)

