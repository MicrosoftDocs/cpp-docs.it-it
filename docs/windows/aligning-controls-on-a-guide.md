---
title: Allineamento dei controlli su una Guida | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- DLUs (dialog units)
- controls [C++], aligning
- Dialog editor, snap to guides
- guides, tick mark interval
- dialog box controls, placement
- guides, aligning controls
- dialog units (DLUs)
- snap to guides (Dialog editor)
- controls [C++], sizing
- tick mark interval in Dialog editor
- controls [C++], snap to guides/grid
ms.assetid: 17db84ba-5288-4478-be57-afa748aa6447
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a1a586a3a17e829d883dff96c12f6a2fdabe669f
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39643858"
---
# <a name="aligning-controls-on-a-guide"></a>Allineamento di controlli su una guida
Quadratini di ridimensionamento di controlli Blocca sulle guide quando vengono spostati i controlli e le guide di allineamento a controlli (se non sono presenti controlli bloccati in precedenza sulla Guida). Quando viene spostata una Guida, i controlli che vengono bloccati a esso spostano anche. I controlli bloccati a più di una Guida vengono ridimensionati quando una delle Guide viene spostata.  
  
 I segni di graduazione nei righelli che determinano la spaziatura tra i controlli e le guide sono definiti dalle unità di finestra di dialogo (DLU-Dialog Unit). Una DLU si basa sulle dimensioni del tipo di carattere della finestra di dialogo, normalmente 8 punte MS Shell Dlg. Una DLU orizzontale sia la larghezza media del tipo di carattere finestra dialogo diviso per quattro. Una DLU verticale è l'altezza di average del tipo di carattere diviso per 8.  
  
### <a name="to-size-a-group-of-controls-with-guides"></a>Per impostare le dimensioni di un gruppo di controlli con guide  
  
1.  Per una Guida di allineamento un lato del controllo (o controlli).  
  
2.  Trascinare una Guida a altro lato del controllo (o controlli).  
  
     Se necessario con più controlli, le dimensioni ognuna per la seconda Guida allineare.  
  
3.  Spostare due guide per ridimensionare il controllo (o i controlli).  
  
### <a name="to-change-the-intervals-of-the-tick-marks"></a>Modificare gli intervalli di segni di graduazione  
  
1.  Dal **formato** menu, scegliere **impostazioni Guide**.  
  
2.  Nel [finestra di dialogo Impostazioni Guide](../windows/guide-settings-dialog-box.md), nella **spaziatura della griglia** , specificare una nuova larghezza e altezza in DLU.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Stati dell'Editor finestre (guide e griglie)](../windows/dialog-editor-states-guides-and-grids.md)   
 [Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)