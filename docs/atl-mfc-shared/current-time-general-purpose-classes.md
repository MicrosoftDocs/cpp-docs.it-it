---
title: "Current Time: General Purpose Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ora corrente, CTime object"
  - "inizializzazione di oggetti, with the current time"
  - "routine, getting current time"
  - "ora, getting current"
  - "ora, setting current"
ms.assetid: c39e6775-6a92-4b27-95a7-5c86ed371d8a
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Current Time: General Purpose Classes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella procedura seguente viene illustrato come creare un oggetto `CTime` e inizializzarla con l'ora corrente.  
  
#### Per ottenere l'ora corrente  
  
1.  Allocare un oggetto `CTime`, come segue:  
  
     [!code-cpp[NVC_ATLMFC_Utilities#171](../atl-mfc-shared/codesnippet/CPP/current-time-general-purpose-classes_1.cpp)]  
  
    > [!NOTE]
    >  Gli oggetti non inizializzata `CTime` non vengono inizializzati a un'ora valido.  
  
2.  Chiamare la funzione `CTime::GetCurrentTime` per ottenere l'ora corrente dal sistema operativo.  Questa funzione restituisce un oggetto `CTime` che può essere utilizzato per impostare il valore `CTime`, come segue:  
  
     [!code-cpp[NVC_ATLMFC_Utilities#172](../atl-mfc-shared/codesnippet/CPP/current-time-general-purpose-classes_2.cpp)]  
  
     Poiché `GetCurrentTime` è una funzione membro static dalla classe `CTime`, è necessario qualificare il nome con il nome della classe e dell'operatore di risoluzione dell'ambito \(`::`\), `CTime::GetCurrentTime()`.  
  
 Naturalmente, i due passaggi descritti in precedenza possono essere combinati in una singola istruzione del programma come segue:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#173](../atl-mfc-shared/codesnippet/CPP/current-time-general-purpose-classes_3.cpp)]  
  
## Vedere anche  
 [Date and Time: General\-Purpose Classes](../atl-mfc-shared/date-and-time-general-purpose-classes.md)