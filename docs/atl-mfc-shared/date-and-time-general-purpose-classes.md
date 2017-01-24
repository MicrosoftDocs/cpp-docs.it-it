---
title: "Date and Time: General-Purpose Classes | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "date and time classes"
  - "time classes"
ms.assetid: b8115d7f-428a-4c41-9970-18502f2caca2
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Date and Time: General-Purpose Classes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene descritto come sfruttare i servizi per tutti gli utilizzi la libreria di classi correlate fino a quel momento e gestione di tempo.  Le procedure riportate di seguito:  
  
-   [Ottenere l'ora corrente](../atl-mfc-shared/current-time-general-purpose-classes.md)  
  
-   [Tempo trascorso](../atl-mfc-shared/elapsed-time-general-purpose-classes.md)  
  
-   [Formattare una rappresentazione di stringa di una data\/ora](../atl-mfc-shared/formatting-time-values-general-purpose-classes.md)  
  
 La classe `CTime` fornisce una modalità per rappresentare le informazioni su data e ora possibile.  La classe `CTimeSpan` rappresenta il tempo trascorso, ad esempio la differenza tra due oggetti `CTime`.  
  
> [!NOTE]
>  Gli oggetti di CTime possono essere utilizzati per rappresentare date tra il 1° gennaio 1970 e il 18 gennaio 2038.  Gli oggetti di`CTime` hanno una risoluzione di 1 secondo.  `CTime` è basato sul tipo di dati `time_t`, definito *in riferimenti alla libreria di runtime*.  
  
## Vedere anche  
 [Date and Time](../atl-mfc-shared/date-and-time.md)