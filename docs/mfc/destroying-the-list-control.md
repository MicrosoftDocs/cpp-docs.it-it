---
title: Eliminazione definitiva del controllo elenco | Documenti Microsoft
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
- list controls [MFC], destroying
- CListCtrl class [MFC], destroying controls
ms.assetid: 513ec820-3a02-49d2-b073-a6a7a3fc91b3
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: fdaafb8a6951050dac0022e0e6e8874b48d688e7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="destroying-the-list-control"></a>Eliminazione definitiva del controllo List
Se si incorpora il [CListCtrl](../mfc/reference/clistctrl-class.md) dell'oggetto come un membro dati di una classe di visualizzazione o della finestra di dialogo, viene eliminato quando viene eliminato il relativo proprietario. Se si utilizza un [CListView](../mfc/reference/clistview-class.md), il framework Elimina definitivamente il controllo quando elimina la vista.  
  
 Se le Disponi per i dati di elenco per essere archiviato nell'applicazione anziché con il controllo elenco, è necessario disporre della relativa deallocazione. Per ulteriori informazioni, vedere [elementi di Callback e maschera di Callback](http://msdn.microsoft.com/library/windows/desktop/bb774736) in Windows SDK.  
  
 Inoltre, è responsabile per la deallocazione di qualsiasi elenchi di immagini è creato e associato all'oggetto controllo elenco.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

