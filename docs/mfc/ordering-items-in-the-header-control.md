---
title: Ordinamento degli elementi nel controllo Header | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: DS_DRAGDROP
dev_langs: C++
helpviewer_keywords:
- sequence [MFC]
- sequence [MFC], header control items
- OrderToIndex method [MFC]
- DS_DRAGDROP notification [MFC]
- GetOrderArray method [MFC]
- SetOrderArray method [MFC]
- header controls [MFC], ordering items
ms.assetid: 5aaef872-75b5-49c5-8fed-6f9a81fca812
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 48adbc53ad0e4974edd86d3f8a96d74214093dda
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ordering-items-in-the-header-control"></a>Ordinamento degli elementi nel controllo Header
Dopo aver [aggiungere elementi a un controllo intestazione](../mfc/adding-items-to-the-header-control.md), è possibile modificare o ottenere informazioni relative all'ordine con le funzioni seguenti:  
  
-   [CHeaderCtrl:: GetOrderArray](../mfc/reference/cheaderctrl-class.md#getorderarray) e [CHeaderCtrl::SetOrderArray](../mfc/reference/cheaderctrl-class.md#setorderarray)  
  
     Recupera e imposta l'ordine da sinistra a destra degli elementi di intestazione.  
  
-   [CHeaderCtrl::OrderToIndex](../mfc/reference/cheaderctrl-class.md#ordertoindex).  
  
     Recupera il valore di indice per un elemento di intestazione specifico.  
  
 Oltre alle funzioni membro precedente, il `HDS_DRAGDROP` stile consente all'utente di trascinare gli elementi di intestazione all'interno del controllo intestazione. Per ulteriori informazioni, vedere [fornire supporto di trascinamento e rilascio per gli elementi di intestazione](../mfc/providing-drag-and-drop-support-for-header-items.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)

