---
title: "Errore di Runtime di C da R6002 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "R6002"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RUNTIME DA R6002"
ms.assetid: 8fbbe65a-9c43-459e-8342-e1f6d1cef7d0
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore R6002 del linguaggio C in fase di esecuzione 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Supporto per le operazioni in virgola mobile non caricato.  
  
 La necessaria libreria in virgola mobile non è stata collegata.  
  
### Possibili cause  
  
1.  Il programma è stato compilato o collegato con un'opzione che richiede un coprocessore, quale l'opzione \/FPi87, ma è stato eseguito in un computer in cui non è installato un coprocessore.  
  
2.  Una stringa di formato per una funzione `printf_s` o `scanf_s` contiene una specifica di formato a virgola mobile mentre il programma non contiene alcun valore o variabile a virgola mobile.  
  
3.  Il compilatore riduce le dimensioni di un programma caricando il supporto per le operazioni in virgola mobile solo quando è necessario.  Il compilatore non è in grado di rilevare specifiche di formato a virgola mobile nelle stringhe di formato e, pertanto, non carica le necessarie routine a virgola mobile.  
  
4.  Utilizzare un argomento a virgola mobile che corrisponda alla specifica di formato a virgola mobile o eseguire un'assegnazione di virgola mobile in un punto qualsiasi del programma.  In questo modo il supporto per le operazioni in virgola mobile verrà caricato.  
  
5.  In un programma con linguaggio misto, una libreria di C è stata specificata prima di una libreria FORTRAN quando il programma è stato collegato.  Eseguire nuovamente il collegamento e specificare la libreria di C per ultima.