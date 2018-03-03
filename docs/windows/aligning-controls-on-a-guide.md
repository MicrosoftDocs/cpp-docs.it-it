---
title: Allineamento di controlli su una Guida | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: eed9acf533939d305e42478bb87307bc0a055d3e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="aligning-controls-on-a-guide"></a>Allineamento di controlli su una guida
I quadratini di ridimensionamento di controlli Blocca sulle guide quando i controlli vengono spostati e guide agganciare i controlli (se non sono presenti controlli bloccati in precedenza sulla Guida). Quando una Guida viene spostata, verranno spostati anche i controlli che vengono bloccati. I controlli bloccati per più di una Guida vengono ridimensionati quando una delle Guide viene spostata.  
  
 I segni di graduazione righelli che determinano la spaziatura di guide e i controlli sono definiti dalle unità della finestra di dialogo (DLU-Dialog Unit). Una DLU si basa sulle dimensioni del carattere nella finestra di dialogo, in genere 8 punti MS Shell Dlg. Una DLU orizzontale corrisponde alla larghezza media del tipo di carattere casella finestra divisa per quattro. Una DLU verticale corrisponde all'altezza media del tipo di carattere diviso per 8.  
  
### <a name="to-size-a-group-of-controls-with-guides"></a>Per impostare le dimensioni di un gruppo di controlli con guide  
  
1.  Bloccare un lato del controllo (o controlli) a una Guida.  
  
2.  Trascinare una Guida a altro lato del controllo (o controlli).  
  
     Se necessario con più controlli, le dimensioni ogni blocco la Guida alla seconda.  
  
3.  Spostare due guide per ridimensionare il controllo (o controlli).  
  
### <a name="to-change-the-intervals-of-the-tick-marks"></a>Per modificare gli intervalli dei segni di graduazione  
  
1.  Dal **formato** menu, scegliere **impostazioni Guide**.  
  
2.  Nel [finestra di dialogo Impostazioni Guide](../windows/guide-settings-dialog-box.md)nella **della spaziatura della griglia** , specificare la nuova larghezza e l'altezza in DLU.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Stati dell'Editor finestre (guide e griglie)](../windows/dialog-editor-states-guides-and-grids.md)   
 [Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)

