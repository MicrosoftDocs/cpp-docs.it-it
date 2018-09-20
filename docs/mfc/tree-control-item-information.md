---
title: Albero delle informazioni sugli elementi di controllo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- tree controls [MFC], item information
- CTreeCtrl class [MFC], item information
ms.assetid: 8dcab855-27de-49e9-95d8-f78ba963ea71
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a61d6dbf2084288d6015e8fc2c08bfc2283d4ba4
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46391020"
---
# <a name="tree-control-item-information"></a>Informazioni sugli elementi del controllo Tree

I controlli di struttura ad albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) hanno un numero di funzioni membro che recuperano informazioni sugli elementi nel controllo. Il [GetItem](../mfc/reference/ctreectrl-class.md#getitem) funzione membro recupera alcuni o tutti i dati associati a un elemento. Questi dati possono includere il testo dell'elemento, lo stato, immagini, conteggio degli elementi figlio e un valore di dati definito dall'applicazione a 32 bit. È inoltre disponibile un' [SetItem](../mfc/reference/ctreectrl-class.md#setitem) funzione che è possibile impostare alcuni o tutti i dati associati a un elemento.

Il [GetItemState](../mfc/reference/ctreectrl-class.md#getitemstate), [GetItemText](../mfc/reference/ctreectrl-class.md#getitemtext), [GetItemData](../mfc/reference/ctreectrl-class.md#getitemdata), e [GetItemImage](../mfc/reference/ctreectrl-class.md#getitemimage) funzioni membro recuperano singoli attributi di un elemento. Ognuna di queste funzioni è una funzione Set corrispondente di impostare gli attributi di un elemento.

Il [GetNextItem](../mfc/reference/ctreectrl-class.md#getnextitem) funzione membro recupera l'elemento del controllo albero che contiene l'elemento relationship specificato all'elemento corrente. Questa funzione può recuperare il padre elemento, l'elemento visibile precedente o successivo, il primo elemento figlio e così via. Sono inoltre disponibili funzioni membro per attraversare l'albero: [GetRootItem](../mfc/reference/ctreectrl-class.md#getrootitem), [GetFirstVisibleItem](../mfc/reference/ctreectrl-class.md#getfirstvisibleitem), [GetNextVisibleItem](../mfc/reference/ctreectrl-class.md#getnextvisibleitem), [GetPrevVisibleItem](../mfc/reference/ctreectrl-class.md#getprevvisibleitem), [GetChildItem](../mfc/reference/ctreectrl-class.md#getchilditem), [GetNextSiblingItem](../mfc/reference/ctreectrl-class.md#getnextsiblingitem), [GetPrevSiblingItem](../mfc/reference/ctreectrl-class.md#getprevsiblingitem), [GetParentItem](../mfc/reference/ctreectrl-class.md#getparentitem), [GetSelectedItem](../mfc/reference/ctreectrl-class.md#getselecteditem), e [GetDropHilightItem](../mfc/reference/ctreectrl-class.md#getdrophilightitem).

Il [funzione membro GetItemRect](../mfc/reference/ctreectrl-class.md#getitemrect) membro funzione recupera il rettangolo di delimitazione per un elemento del controllo albero. Il [GetCount](../mfc/reference/ctreectrl-class.md#getcount) e [GetVisibleCount](../mfc/reference/ctreectrl-class.md#getvisiblecount) funzioni membro recupero un conteggio degli elementi in un controllo albero e un conteggio degli elementi che sono attualmente visibile nella finestra del controllo albero, rispettivamente. È possibile assicurarsi che un particolare elemento sia visibile chiamando il [EnsureVisible](../mfc/reference/ctreectrl-class.md#ensurevisible) funzione membro.

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

