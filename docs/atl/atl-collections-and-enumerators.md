---
title: "Raccolte ed enumeratori ATL | Microsoft Docs"
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
  - "raccolta (interfacce)"
  - "raccolte, classi ATL"
  - "enumeratore (interfacce)"
  - "enumeratori, classi ATL"
ms.assetid: b2d37119-3ab2-4e0a-b65b-f377f07e4098
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Raccolte ed enumeratori ATL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

`collection` è un oggetto COM che fornisce un'interfaccia che consente l'accesso a un gruppo di elementi dati \(dati non elaborati o altri oggetti.  Un'interfaccia che segue gli standard per consentire l'accesso a un gruppo di oggetti è nota come *interfaccia della raccolta*.  
  
 Come minimo, le interfacce di raccolta devono fornire una proprietà **Conteggio** che restituisce il numero di elementi della raccolta, una proprietà **Elemento** che restituisce un elemento dalla raccolta basata su un indice e una proprietà `_NewEnum` che restituisce un enumeratore per la raccolta.  Facoltativamente, interfacce di raccolta possono fornire **Aggiungi** e i metodi **Rimuovi** per consentire agli elementi da inserire in o eliminare dalla raccolta e un metodo **Cancella** per rimuovere tutti gli elementi.  
  
 `enumerator` è un oggetto COM che fornisce un'interfaccia per la ripetizione degli elementi in una raccolta.  Le interfacce di enumeratori forniscono l'accesso seriale agli elementi di una raccolta tramite quattro metodi richiesti: `Next`, **Skip**, **Reimposta**e `Clone`.  
  
 Per ulteriori informazioni sulle interfacce dell'enumeratore lettura dell'interfaccia archetipo \(ma completamente immaginaria\) di.  
  
## Argomenti della sezione  
 [Classi della libreria e dell'enumeratore ATL](../atl/atl-collection-and-enumerator-classes.md)  
 Vengono descritte brevemente e vengono forniti collegamenti alle classi ATL che quale è per distribuire le raccolte e gli enumeratori.  
  
 [Principi di progettazione per le interfacce dell'enumeratore e della raccolta](../atl/design-principles-for-collection-and-enumerator-interfaces.md)  
 Vengono illustrati i principi di progettazione diverse di ogni tipo di interfaccia.  
  
 [Implementare una raccolta Basata STL](../atl/implementing-an-stl-based-collection.md)  
 Un esempio completo che viene illustrata l'implementazione di una raccolta basata \(STL\) della libreria di modelli standard.  
  
## Sezioni correlate  
 [ATL](../atl/active-template-library-atl-concepts.md)  
 Vengono forniti collegamenti ad argomenti concettuali sulla programmazione mediante Active Template Library.  
  
 [Esempio ATLCollections](../top/visual-cpp-samples.md)  
 Un esempio in cui viene illustrato l'utilizzo `ICollectionOnSTLImpl` e `CComEnumOnSTL`e l'implementazione di classi criteri di copia personalizzate.  
  
## Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)