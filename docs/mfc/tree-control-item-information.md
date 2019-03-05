---
title: Informazioni sugli elementi del controllo Tree
ms.date: 11/04/2016
helpviewer_keywords:
- tree controls [MFC], item information
- CTreeCtrl class [MFC], item information
ms.assetid: 8dcab855-27de-49e9-95d8-f78ba963ea71
ms.openlocfilehash: e0eb8af4fbbb6f59c0dda75ec3705183ce916350
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57288896"
---
# <a name="tree-control-item-information"></a>Informazioni sugli elementi del controllo Tree

I controlli di struttura ad albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) hanno un numero di funzioni membro che recuperano informazioni sugli elementi nel controllo. Il [GetItem](../mfc/reference/ctreectrl-class.md#getitem) funzione membro recupera alcuni o tutti i dati associati a un elemento. Questi dati possono includere il testo dell'elemento, lo stato, immagini, conteggio degli elementi figlio e un valore di dati definito dall'applicazione a 32 bit. È inoltre disponibile un' [SetItem](../mfc/reference/ctreectrl-class.md#setitem) funzione che è possibile impostare alcuni o tutti i dati associati a un elemento.

Il [GetItemState](../mfc/reference/ctreectrl-class.md#getitemstate), [GetItemText](../mfc/reference/ctreectrl-class.md#getitemtext), [GetItemData](../mfc/reference/ctreectrl-class.md#getitemdata), e [GetItemImage](../mfc/reference/ctreectrl-class.md#getitemimage) funzioni membro recuperano singoli attributi di un elemento. Ognuna di queste funzioni è una funzione Set corrispondente di impostare gli attributi di un elemento.

Il [GetNextItem](../mfc/reference/ctreectrl-class.md#getnextitem) funzione membro recupera l'elemento del controllo albero che contiene l'elemento relationship specificato all'elemento corrente. Questa funzione può recuperare il padre elemento, l'elemento visibile precedente o successivo, il primo elemento figlio e così via. Sono inoltre disponibili funzioni membro per attraversare l'albero: [GetRootItem](../mfc/reference/ctreectrl-class.md#getrootitem), [GetFirstVisibleItem](../mfc/reference/ctreectrl-class.md#getfirstvisibleitem), [GetNextVisibleItem](../mfc/reference/ctreectrl-class.md#getnextvisibleitem), [GetPrevVisibleItem](../mfc/reference/ctreectrl-class.md#getprevvisibleitem), [GetChildItem](../mfc/reference/ctreectrl-class.md#getchilditem), [GetNextSiblingItem](../mfc/reference/ctreectrl-class.md#getnextsiblingitem), [GetPrevSiblingItem](../mfc/reference/ctreectrl-class.md#getprevsiblingitem), [GetParentItem](../mfc/reference/ctreectrl-class.md#getparentitem), [GetSelectedItem](../mfc/reference/ctreectrl-class.md#getselecteditem), e [ GetDropHilightItem](../mfc/reference/ctreectrl-class.md#getdrophilightitem).

Il [funzione membro GetItemRect](../mfc/reference/ctreectrl-class.md#getitemrect) membro funzione recupera il rettangolo di delimitazione per un elemento del controllo albero. Il [GetCount](../mfc/reference/ctreectrl-class.md#getcount) e [GetVisibleCount](../mfc/reference/ctreectrl-class.md#getvisiblecount) funzioni membro recupero un conteggio degli elementi in un controllo albero e un conteggio degli elementi che sono attualmente visibile nella finestra del controllo albero, rispettivamente. È possibile assicurarsi che un particolare elemento sia visibile chiamando il [EnsureVisible](../mfc/reference/ctreectrl-class.md#ensurevisible) funzione membro.

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
