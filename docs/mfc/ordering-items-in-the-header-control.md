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
ms.openlocfilehash: 5c4fef821efa697d41bf02ef1891efcf0fa21d4b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50583509"
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

