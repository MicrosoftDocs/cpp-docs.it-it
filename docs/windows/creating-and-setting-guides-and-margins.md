---
title: Creazione e impostazione di guide e margini | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- guides, clearing
- guides
- Dialog editor, guides and margins
- dialog box controls, placement
- controls [C++], guides and margins
- guides, creating
- guides, moving
- margins, moving
ms.assetid: fafa4545-8f00-436f-b590-300e76601156
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 11631a2ac6a2c83cd667d14a490c57b1a191c1a7
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39642558"
---
# <a name="creating-and-setting-guides-and-margins"></a>Creazione e impostazione di guide e margini
Se si spostano i controlli, aggiunta di controlli o riorganizzando un layout corrente, possono aiutare le guide di allineamento dei controlli in modo accurato all'interno di una finestra di dialogo. Le guide sono visualizzate come blu punteggiata tra la finestra di dialogo visualizzata nell'editor e le frecce corrispondente nei righelli (nella parte superiore e il lato sinistro della **dialogo** editor).  
  
 Quando si crea una finestra di dialogo, vengono forniti e quattro i margini. I margini sono guide modificate, visualizzati come linee tratteggiate blue.  
  
### <a name="to-create-a-guide"></a>Per creare una Guida  
  
1.  All'interno del righello, fare clic su una sola volta per creare una Guida. (Un solo clic consente di creare una nuova Guida; facendo doppio clic su Avvia il [finestra di dialogo Impostazioni Guide](../windows/guide-settings-dialog-box.md) in cui è possibile specificare impostazioni della Guida.)  
  
### <a name="to-set-a-guide"></a>Per impostare una Guida  
  
1.  Nella finestra di dialogo, fare clic su Guida e trascinarlo in una nuova posizione. (È possibile anche fare clic sulla freccia nel righello per trascinare la Guida associata.)  
  
     Le coordinate della Guida vengono visualizzate nella barra di stato nella parte inferiore della finestra e sul righello. Spostare il puntatore del mouse sulla freccia nel righello per visualizzare la posizione esatta della Guida.  
  
### <a name="to-delete-a-guide"></a>Per eliminare una guida  
  
1.  Trascinare la Guida per la finestra di dialogo.  
  
 \- oppure -  
  
-   Trascinare la freccia corrispondente disattivare il righello.  
  
### <a name="to-move-margins"></a>Per spostare i margini  
  
1.  Trascinare il margine per la nuova posizione.  
  
     Per nascondere un margine, spostare il margine in una posizione zero. Per riportare online il margine, posizionare il puntatore sopra il margine posizione zero e spostare il margine in posizione.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Stati dell'Editor finestre (guide e griglie)](../windows/dialog-editor-states-guides-and-grids.md)   
 [Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)