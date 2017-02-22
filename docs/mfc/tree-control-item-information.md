---
title: "Informazioni sugli elementi del controllo Tree | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTreeCtrl (classe), informazioni sugli elementi"
  - "struttura ad albero (controlli), informazioni sugli elementi"
ms.assetid: 8dcab855-27de-49e9-95d8-f78ba963ea71
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Informazioni sugli elementi del controllo Tree
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I controlli struttura ad albero \([Problemi](../mfc/reference/ctreectrl-class.md)\) presentano alcune funzioni membro per recuperare informazioni sugli elementi nel controllo.  La funzione membro di [GetItem](../Topic/CTreeCtrl::GetItem.md) recupera alcuni o tutti i dati associati a un elemento.  Questi dati possono includere testo dell'elemento, lo stato, immagini, il conteggio degli elementi figlio e un valore di dati definito dall'applicazione a 32 bit.  Esistono inoltre una funzione di [SetItem](../Topic/CTreeCtrl::SetItem.md) che può impostare alcuni o tutti i dati associati a un elemento.  
  
 [GetItemState](../Topic/CTreeCtrl::GetItemState.md), [GetItemText](../Topic/CTreeCtrl::GetItemText.md), [GetItemData](../Topic/CTreeCtrl::GetItemData.md) e le funzioni membro di [GetItemImage](../Topic/CTreeCtrl::GetItemImage.md) recuperano i singoli attributi di un elemento.  Ognuna di queste funzioni ha una funzione set corrispondente per impostare gli attributi di un elemento.  
  
 La funzione membro di [GetNextItem](../Topic/CTreeCtrl::GetNextItem.md) recuperano l'elemento del controllo struttura ad albero con la relazione specificata all'elemento corrente.  Questa funzione può recuperare l'elemento padre di un elemento, l'elemento visibile successivo o precedente, il primo elemento figlio, e così via.  Esistono inoltre funzioni membro per attraversare la struttura ad albero: [GetRootItem](../Topic/CTreeCtrl::GetRootItem.md), [GetFirstVisibleItem](../Topic/CTreeCtrl::GetFirstVisibleItem.md), [GetNextVisibleItem](../Topic/CTreeCtrl::GetNextVisibleItem.md), [GetPrevVisibleItem](../Topic/CTreeCtrl::GetPrevVisibleItem.md), [GetChildItem](../Topic/CTreeCtrl::GetChildItem.md), [GetNextSiblingItem](../Topic/CTreeCtrl::GetNextSiblingItem.md), [GetPrevSiblingItem](../Topic/CTreeCtrl::GetPrevSiblingItem.md), [GetParentItem](../Topic/CTreeCtrl::GetParentItem.md), [GetSelectedItem](../Topic/CTreeCtrl::GetSelectedItem.md) e [GetDropHilightItem](../Topic/CTreeCtrl::GetDropHilightItem.md).  
  
 La funzione membro di [GetItemRect](../Topic/CTreeCtrl::GetItemRect.md) recupera il rettangolo di delimitazione di un elemento del controllo struttura ad albero.  Le funzioni membro di [GetVisibleCount](../Topic/CTreeCtrl::GetVisibleCount.md) e di [GetCount](../Topic/CTreeCtrl::GetCount.md) recuperano rispettivamente un conteggio di elementi in un controllo struttura ad albero e un conteggio di elementi attualmente visibili nella finestra di controllo tree.,  È possibile assicurarsi che un determinato elemento è visibile chiamando la funzione membro di [EnsureVisible](../Topic/CTreeCtrl::EnsureVisible.md).  
  
## Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)