---
title: Ordinamento degli elementi nel controllo Header
ms.date: 11/04/2016
f1_keywords:
- DS_DRAGDROP
helpviewer_keywords:
- sequence [MFC]
- sequence [MFC], header control items
- OrderToIndex method [MFC]
- DS_DRAGDROP notification [MFC]
- GetOrderArray method [MFC]
- SetOrderArray method [MFC]
- header controls [MFC], ordering items
ms.assetid: 5aaef872-75b5-49c5-8fed-6f9a81fca812
ms.openlocfilehash: bae351d921c25993d6b7029f9052e1938179673b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62392650"
---
# <a name="ordering-items-in-the-header-control"></a>Ordinamento degli elementi nel controllo Header

Dopo aver [gli elementi aggiunti a un controllo intestazione](../mfc/adding-items-to-the-header-control.md), è possibile modificare o ottenere informazioni relative all'ordine con le funzioni seguenti:

- [CHeaderCtrl:: GetOrderArray](../mfc/reference/cheaderctrl-class.md#getorderarray) e [CHeaderCtrl::SetOrderArray](../mfc/reference/cheaderctrl-class.md#setorderarray)

   Recupera e imposta l'ordine da sinistra a destra degli elementi di intestazione.

- [CHeaderCtrl::OrderToIndex](../mfc/reference/cheaderctrl-class.md#ordertoindex).

   Recupera il valore di indice per un elemento di intestazione specifici.

Oltre alle funzioni membro precedente, il HDS_DRAGDROP (stile) consente all'utente di trascinare e rilasciare gli elementi di intestazione all'interno del controllo intestazione. Per altre informazioni, vedere [che fornisce il supporto di trascinamento e rilascio per gli elementi di intestazione](../mfc/providing-drag-and-drop-support-for-header-items.md).

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)
