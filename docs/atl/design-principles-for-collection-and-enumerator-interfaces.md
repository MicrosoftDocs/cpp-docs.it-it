---
title: "Design Principles for Collection and Enumerator Interfaces | Microsoft Docs"
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
  - "collection interfaces"
  - "enumerator interfaces"
ms.assetid: ea19a39e-6333-41a1-be62-5435c236640e
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Design Principles for Collection and Enumerator Interfaces
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esistono principi di progettazione diverse di ogni tipo di interfaccia:  
  
-   Un'interfaccia di libreria fornisce *l'accesso casuale* *a un singolo* elemento nella raccolta utilizzando il metodo **Elemento**, che consente ai client individuare il numero di elementi presenti nella raccolta tramite la proprietà **Conteggio** e spesso che consente ai client di aggiungere e rimuovere elementi.  
  
-   Un'interfaccia dell'enumeratore fornisce l'accesso seriale a *più* elementi in una raccolta, non consente al client individuare il numero di elementi presenti nella raccolta \(enumeratore finché non termina di restituire elementi\) e non fornisce alcuna modalità di aggiunta o rimozione di elementi.  
  
 Ogni tipo di interfaccia ha un ruolo diverso nel fornire accesso agli elementi in una raccolta.  
  
## Vedere anche  
 [Raccolte ed enumeratori](../atl/atl-collections-and-enumerators.md)