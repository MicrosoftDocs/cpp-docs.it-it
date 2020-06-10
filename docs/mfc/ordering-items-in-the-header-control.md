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
ms.openlocfilehash: c4b4711729c6c3a4b63d4ad05252a5c49df98a0c
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84622131"
---
# <a name="ordering-items-in-the-header-control"></a>Ordinamento degli elementi nel controllo Header

Una volta [aggiunti elementi a un controllo intestazione](adding-items-to-the-header-control.md), è possibile modificare o ottenere informazioni sull'ordine con le funzioni seguenti:

- [CHeaderCtrl:: GetOrderArray](reference/cheaderctrl-class.md#getorderarray) e [CHeaderCtrl:: SetOrderArray](reference/cheaderctrl-class.md#setorderarray)

   Recupera e imposta l'ordine da sinistra a destra degli elementi di intestazione.

- [CHeaderCtrl:: OrderToIndex](reference/cheaderctrl-class.md#ordertoindex).

   Recupera il valore di indice per un elemento di intestazione specifico.

Oltre alle funzioni membro precedenti, lo stile HDS_DRAGDROP consente all'utente di trascinare e rilasciare elementi di intestazione all'interno del controllo intestazione. Per altre informazioni, vedere [supporto del trascinamento della selezione per gli elementi di intestazione](providing-drag-and-drop-support-for-header-items.md).

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](using-cheaderctrl.md)
