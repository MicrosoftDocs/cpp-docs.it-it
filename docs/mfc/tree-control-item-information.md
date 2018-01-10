---
title: Informazioni sugli elementi del controllo albero | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- tree controls [MFC], item information
- CTreeCtrl class [MFC], item information
ms.assetid: 8dcab855-27de-49e9-95d8-f78ba963ea71
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 16e4a707c4bc1f0fde76ab3a146424d2d34d5ec8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tree-control-item-information"></a>Informazioni sugli elementi del controllo Tree
Struttura ad albero di controlli ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) hanno un numero di funzioni membro che recuperano informazioni su elementi nel controllo. Il [GetItem](../mfc/reference/ctreectrl-class.md#getitem) funzione membro recupera alcuni o tutti i dati associati a un elemento. Questi dati può includere il testo dell'elemento, lo stato, immagini, numero di elementi figlio e un valore di dati definito dall'applicazione a 32 bit. È inoltre disponibile un [funzione membro SetItem](../mfc/reference/ctreectrl-class.md#setitem) funzione che è possibile impostare alcuni o tutti i dati associati a un elemento.  
  
 Il [GetItemState](../mfc/reference/ctreectrl-class.md#getitemstate), [GetItemText](../mfc/reference/ctreectrl-class.md#getitemtext), [GetItemData](../mfc/reference/ctreectrl-class.md#getitemdata), e [GetItemImage](../mfc/reference/ctreectrl-class.md#getitemimage) funzioni membro recuperano i singoli attributi di un elemento. Ognuna di queste funzioni è una funzione Set corrispondente di impostare gli attributi di un elemento.  
  
 Il [GetNextItem](../mfc/reference/ctreectrl-class.md#getnextitem) funzione membro recupera la voce di controllo di struttura ad albero che contiene la relazione specificata all'elemento corrente. Questa funzione è possibile recuperare il padre elemento, l'elemento visibile precedente o successivo, il primo elemento figlio e così via. Sono inoltre disponibili funzioni membro per attraversare la struttura ad albero: [GetRootItem](../mfc/reference/ctreectrl-class.md#getrootitem), [GetFirstVisibleItem](../mfc/reference/ctreectrl-class.md#getfirstvisibleitem), [GetNextVisibleItem](../mfc/reference/ctreectrl-class.md#getnextvisibleitem), [GetPrevVisibleItem](../mfc/reference/ctreectrl-class.md#getprevvisibleitem), [GetChildItem](../mfc/reference/ctreectrl-class.md#getchilditem), [GetNextSiblingItem](../mfc/reference/ctreectrl-class.md#getnextsiblingitem), [GetPrevSiblingItem](../mfc/reference/ctreectrl-class.md#getprevsiblingitem), [GetParentItem](../mfc/reference/ctreectrl-class.md#getparentitem), [GetSelectedItem di CTreeViewCtrlEx](../mfc/reference/ctreectrl-class.md#getselecteditem), e [GetDropHilightItem](../mfc/reference/ctreectrl-class.md#getdrophilightitem).  
  
 Il [funzione membro GetItemRect](../mfc/reference/ctreectrl-class.md#getitemrect) funzione membro recupera il rettangolo di delimitazione per un elemento del controllo struttura ad albero. Il [GetCount](../mfc/reference/ctreectrl-class.md#getcount) e [GetVisibleCount](../mfc/reference/ctreectrl-class.md#getvisiblecount) funzioni membro recuperano un numero di elementi in un controllo struttura ad albero e un numero di elementi che sono attualmente visibile nella finestra del controllo struttura ad albero, rispettivamente. È possibile assicurarsi che un particolare elemento è visibile tramite la chiamata di [EnsureVisible](../mfc/reference/ctreectrl-class.md#ensurevisible) funzione membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

