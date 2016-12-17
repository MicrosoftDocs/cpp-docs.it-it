---
title: "Classi Array, List e Map | Microsoft Docs"
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
  - "vc.classes.mfc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "matrici [C++], classi"
  - "classi di raccolte, elenchi"
  - "classi di raccolte, mappe"
  - "classi elenco"
  - "classi di mappe"
ms.assetid: 81a13a7f-0c2c-4efd-b6bb-b4e624a0743d
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi Array, List e Map
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per gestire le aggregazioni di dati, la libreria di classi fornisce a un gruppo di classi di raccolte e matrici, elenchi e mappe \- che possono utilizzare diversi oggetto e tipi predefiniti.  Le raccolte vengono ridimensionate in modo dinamico.  Queste classi possono essere utilizzate in qualsiasi programma, se scritto per windows o meno.  Tuttavia, sono più utili per implementare le strutture di dati che definiscono le classi del documento nel framework applicazione.  È possibile derivare alle classi di raccolte specializzate da questi, oppure in modo dichiarativo si basa sulle classi modello.  Per ulteriori informazioni su questi approcci, vedere l'articolo [Raccolte](../mfc/collections.md).  Per un elenco delle classi collection di modello, vedere l'articolo [Classi modello per le matrici, elenchi e mappe](../mfc/template-classes-for-arrays-lists-and-maps.md).  
  
 Le matrici sono strutture di dati unidimensionali archiviati in modo contiguo nella memoria.  Supporta l'accesso casuale molto rapido poiché l'indirizzo di memoria di qualsiasi elemento può essere calcolato moltiplicando l'indice dell'elemento per la dimensione di un elemento e aggiungendo il risultato all'indirizzo di base della matrice.  Ma le matrici sono molto dispendiose se è necessario inserire elementi nella matrice, poiché l'intera matrice dopo l'elemento immesso deve essere spostata per fare spazio per l'elemento da inserire.  Le matrici possono aumentare a seconda delle esigenze e ridursi.  
  
 Gli elenchi sono simili alle matrici ma vengono archiviati molto in modo diverso.  Ogni elemento in un elenco include inoltre un puntatore agli elementi precedenti e successivi, cui una lista bidirezionale.  È molto veloce di aggiungere o rimuovere elementi perché questa operazione comporta solo modificare i puntatori.  Tuttavia, trovare un elenco può essere complessa poiché tutte le ricerche devono iniziare a una delle estremità dell'elenco.  
  
 Le mappe collegare un valore di chiave a un valore di dati.  Ad esempio, la chiave di una mappa può essere una stringa e i dati un puntatore in un elenco.  Chiedereste alla mappa per offrire un puntatore associato a una determinata stringa.  Le ricerche della mappa sono del hash di utilizzo delle mappe \- tabelle per ricerche principali.  L'aggiunta e l'eliminazione di elementi sono anche veloci.  Le mappe vengono spesso utilizzate con altre strutture di dati quali indici ausiliari.  MFC utilizza un tipo speciale di mappa chiamato [mappa messaggi](../mfc/mapping-messages.md) associare i messaggi di windows a un puntatore a funzione di gestione per il messaggio.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)