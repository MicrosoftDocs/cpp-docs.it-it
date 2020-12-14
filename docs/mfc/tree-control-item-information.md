---
description: 'Ulteriori informazioni su: informazioni sugli elementi del controllo Tree'
title: Informazioni sugli elementi del controllo Tree
ms.date: 11/04/2016
helpviewer_keywords:
- tree controls [MFC], item information
- CTreeCtrl class [MFC], item information
ms.assetid: 8dcab855-27de-49e9-95d8-f78ba963ea71
ms.openlocfilehash: ced75bdf6ed6a10e3a34536adf4af0ed1c7e0c86
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264141"
---
# <a name="tree-control-item-information"></a>Informazioni sugli elementi del controllo Tree

I controlli Tree ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) dispongono di una serie di funzioni membro che recuperano informazioni sugli elementi nel controllo. La funzione membro [GetItem](../mfc/reference/ctreectrl-class.md#getitem) recupera alcuni o tutti i dati associati a un elemento. Questi dati possono includere il testo, lo stato, le immagini, il numero di elementi figlio e un valore di dati a 32 bit definiti dall'applicazione. È anche disponibile una funzione [SetItem](../mfc/reference/ctreectrl-class.md#setitem) che può impostare alcuni o tutti i dati associati a un elemento.

Le funzioni membro [GetItemState](../mfc/reference/ctreectrl-class.md#getitemstate), [GetItemText](../mfc/reference/ctreectrl-class.md#getitemtext), [GetItemData](../mfc/reference/ctreectrl-class.md#getitemdata)e [GetItemImage](../mfc/reference/ctreectrl-class.md#getitemimage) recuperano singoli attributi di un elemento. Ognuna di queste funzioni ha una funzione set corrispondente per l'impostazione degli attributi di un elemento.

La funzione membro [GetNextItem](../mfc/reference/ctreectrl-class.md#getnextitem) recupera l'elemento di controllo di struttura ad albero che presenta la relazione specificata con l'elemento corrente. Questa funzione può recuperare l'elemento padre di un elemento, l'elemento visibile successivo o precedente, il primo elemento figlio e così via. Sono inoltre disponibili funzioni membro per attraversare l'albero: [GetRootItem](../mfc/reference/ctreectrl-class.md#getrootitem), [GetFirstVisibleItem](../mfc/reference/ctreectrl-class.md#getfirstvisibleitem), [GetNextVisibleItem](../mfc/reference/ctreectrl-class.md#getnextvisibleitem), [GetPrevVisibleItem](../mfc/reference/ctreectrl-class.md#getprevvisibleitem), [GetChildItem](../mfc/reference/ctreectrl-class.md#getchilditem), [GetNextSiblingItem](../mfc/reference/ctreectrl-class.md#getnextsiblingitem), [GetPrevSiblingItem](../mfc/reference/ctreectrl-class.md#getprevsiblingitem), [GetParentItem](../mfc/reference/ctreectrl-class.md#getparentitem), [GetSelectedItem](../mfc/reference/ctreectrl-class.md#getselecteditem)e [GetDropHilightItem](../mfc/reference/ctreectrl-class.md#getdrophilightitem).

La funzione membro [GetItemRect](../mfc/reference/ctreectrl-class.md#getitemrect) Recupera il rettangolo di delimitazione per un elemento del controllo Tree. Le funzioni membro [GetCount](../mfc/reference/ctreectrl-class.md#getcount) e [GetVisibleCount](../mfc/reference/ctreectrl-class.md#getvisiblecount) recuperano un conteggio degli elementi in un controllo struttura ad albero e un conteggio degli elementi attualmente visibili rispettivamente nella finestra del controllo della struttura ad albero. È possibile verificare che un particolare elemento sia visibile chiamando la funzione membro [EnsureVisible](../mfc/reference/ctreectrl-class.md#ensurevisible) .

## <a name="see-also"></a>Vedi anche

[Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
