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
ms.openlocfilehash: 032e3055212527d0fdd8c829a3eccdb676a33eb5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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

