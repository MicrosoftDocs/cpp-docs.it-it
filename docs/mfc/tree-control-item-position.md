---
title: "Posizione degli elementi del controllo Tree | Microsoft Docs"
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
  - "CTreeCtrl (classe), posizione degli elementi"
  - "posizione degli elementi nei controlli struttura ad albero"
  - "posizione, elementi CTreeCtrl"
  - "struttura ad albero (controlli), posizione degli elementi"
ms.assetid: cd264344-2cf9-4d90-9ea8-c6900b6f60e7
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Posizione degli elementi del controllo Tree
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Posizione iniziale di un elemento è impostata quando l'elemento viene aggiunto al controllo di struttura ad albero \([Problemi](../mfc/reference/ctreectrl-class.md)\) utilizzando la funzione membro di `InsertItem`.  La chiamata di funzione membro specifica un handle dell'elemento padre e gli handle dell'elemento dopo il quale deve essere aggiunto il nuovo elemento deve essere inserito.  Nel secondo controllo deve identificare un elemento figlio del padre specificato o uno dei valori seguenti: `TVI_FIRST`, `TVI_LAST`, o `TVI_SORT`.  
  
 Quando `TVI_FIRST` o `TVI_LAST` viene specificato, il controllo struttura ad albero posizionata nella parte superiore del nuovo elemento o alla fine dell'elenco specificato dell'elemento padre degli elementi figlio.  Quando `TVI_SORT` viene specificato, il controllo struttura ad albero inserire il nuovo elemento nell'elenco di elementi figlio in ordine alfabetico in base al testo delle etichette dell'elemento.  
  
 È possibile inserire l'elenco di un elemento padre degli elementi figlio in ordine alfabetico chiamando la funzione membro di [SortChildren](../Topic/CTreeCtrl::SortChildren.md).  Questa funzione include un parametro che specifica se tutti i livelli di elementi figlio che derivano dall'elemento padre specificato vengono ordinati alfabeticamente.  
  
 La funzione membro di [SortChildrenCB](../Topic/CTreeCtrl::SortChildrenCB.md) consente agli elementi figlio di ordinamento in base ai criteri specificati.  Quando si chiama questa funzione, specificare una funzione di callback definita dall'applicazione che il controllo struttura ad albero può chiamare ogni volta che l'ordine relativo di due elementi figlio deve essere deciso.  La funzione di callback riceve due valori definiti dall'applicazione a 32 bit degli elementi confrontati e un terzo valore a 32 bit specificato quando chiama `SortChildrenCB`.  
  
## Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)