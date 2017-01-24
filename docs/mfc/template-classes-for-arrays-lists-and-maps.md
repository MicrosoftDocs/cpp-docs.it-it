---
title: "Classi modello per matrici, elenchi e mappe | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.template"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "matrici [C++], classi"
  - "classi elenco"
  - "classi di mappe"
  - "classi modello"
  - "classi modello, per matrici/elenchi e mappe"
ms.assetid: a8331c4b-068a-48f8-a629-b8449601e121
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi modello per matrici, elenchi e mappe
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Queste classi di raccolte sono modelli dei parametri consentono di determinare i tipi di oggetti archiviati nelle aggregazioni.  `CArray`, `CMap` e le classi di `CList` utilizzano funzioni di supporto che globali devono in genere essere personalizzate.  Per ulteriori informazioni su queste funzioni di supporto, vedere [Supporto di classi collection](../mfc/reference/collection-class-helpers.md).  Le classi tipizzate del puntatore sono wrapper per le altre classi nella libreria di classi.  Tramite questi wrapper, nel controllo dei tipi del compilatore per evitare errori.  Per ulteriori informazioni sull'utilizzo di queste classi, vedere [Raccolte](../mfc/collections.md).  
  
 Queste classi forniscono i modelli utilizzabili per creare matrici, elenchi e le mappe utilizzando qualsiasi tipo desiderato.  
  
 [CArray](../mfc/reference/carray-class.md)  
 Classe modello per creare le matrici di tipi arbitrari.  
  
 [CList](../mfc/reference/clist-class.md)  
 Classe modello per la creazione di elenchi di tipi arbitrari.  
  
 [CMap](../mfc/reference/cmap-class.md)  
 Classe modello per creare le mappe con la chiave e tipi di valore arbitrari.  
  
 [CTypedPtrArray](../mfc/reference/ctypedptrarray-class.md)  
 Classe modello per le matrici indipendenti dai tipi dei puntatori.  
  
 [CTypedPtrList](../mfc/reference/ctypedptrlist-class.md)  
 Classe modello per gli elenchi indipendenti dai tipi dei puntatori.  
  
 [CTypedPtrMap](../mfc/reference/ctypedptrmap-class.md)  
 Classe modello per le mappe indipendenti dai tipi con i puntatori.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)