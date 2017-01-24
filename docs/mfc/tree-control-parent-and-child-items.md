---
title: "Elementi padre e figlio controllo Tree | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "elementi figlio in controllo struttura ad albero"
  - "CTreeCtrl (classe), elementi padre e figlio"
  - "elementi padre in CTreeCtrl"
  - "struttura ad albero (controlli), elementi padre e figlio"
ms.assetid: abcea1e4-fe9b-40d9-86dc-1db235f8f103
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Elementi padre e figlio controllo Tree
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Qualsiasi elemento in un controllo struttura ad albero \([Problemi](../mfc/reference/ctreectrl-class.md)\) può avere un elenco di elementi secondari, definiti elementi figlio, associato.  Un elemento con uno o più elementi figlio viene chiamato un elemento padre.  Un elemento figlio vengono visualizzate sotto l'elemento padre e impostato un rientro per indicare che è secondario al padre.  Un elemento non ha padre nella parte superiore della gerarchia e viene chiamato un elemento radice.  
  
 In un determinato momento, lo stato dell'elenco di un elemento padre degli elementi figlio può essere espanso o compresso.  Quando lo stato viene espanso, gli elementi figlio sono visualizzate sotto l'elemento padre.  Quando è compresso, gli elementi figlio non vengono visualizzati.  Elenco di consente di passare automaticamente tra gli stati espansi e compressi quando l'utente fa doppio clic sull'elemento padre o, se l'oggetto padre è lo stile di **TVS\_HASBUTTONS**, quando l'utente fa clic sul pulsante associato all'elemento padre.  Un'applicazione può espandere o comprimere gli elementi figlio utilizzando la funzione membro di [Espandi](../Topic/CTreeCtrl::Expand.md).  
  
 Si aggiunge un elemento a un controllo struttura ad albero chiamando la funzione membro di [InsertItem](../Topic/CTreeCtrl::InsertItem.md).  Questa funzione restituisce l'handle del tipo di **HTREEITEM**, che identifica in modo univoco l'elemento.  Quando si aggiunge un elemento, è necessario specificare l'handle dell'elemento padre del nuovo elemento.  Se si specifica **NULL** o il valore di **TVI\_ROOT** invece di handle dell'elemento padre nella struttura di [TVINSERTSTRUCT](http://msdn.microsoft.com/library/windows/desktop/bb773452) o nel parametro di `hParent`, l'elemento viene aggiunto come elemento radice.  
  
 Un controllo struttura ad albero invia un messaggio di notifica di [TVN\_ITEMEXPANDING](http://msdn.microsoft.com/library/windows/desktop/bb773537) quando l'elenco di un elemento padre degli elementi figlio sta per essere espanso o compresso.  La notifica che consente di impedire la modifica o impostare gli attributi dell'elemento padre che dipendono dallo stato dell'elenco di elementi figlio.  Dopo aver modificato lo stato dell'elenco, il controllo struttura ad albero invia un messaggio di notifica di [TVN\_ITEMEXPANDED](http://msdn.microsoft.com/library/windows/desktop/bb773533).  
  
 Quando un elenco di elementi figlio viene espanso, viene impostato un rientro rispetto all'elemento padre.  È possibile impostare la quantità di rientro utilizzando la funzione membro di [SetIndent](../Topic/CTreeCtrl::SetIndent.md) o recuperare la quantità corrente tramite la funzione membro di [GetIndent](../Topic/CTreeCtrl::GetIndent.md).  
  
## Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)