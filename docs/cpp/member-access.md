---
title: "Accesso ai membri | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "accesso a membri, overload di operatori"
  - "operatori di selezione dei membri"
  - "overload di operatori, operatori di accesso ai membri"
  - "puntatori, intelligenti"
  - "puntatori intelligenti"
  - "puntatori intelligenti, definizione"
ms.assetid: 8c7b2c43-eb92-4d42-9a8e-61aa37d71333
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Accesso ai membri
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'accesso ai membri della classe può essere controllato mediante l'overload dell'operatore di accesso ai membri \(**–\>**\).  Questo operatore in tale utilizzo viene considerato un operatore unario e la funzione dell'operatore di overload deve essere una funzione membro di una classe.  Di conseguenza, la dichiarazione per tale funzione è:  
  
## Sintassi  
  
```  
  
class-type *operator–>()  
```  
  
## Note  
 dove *class\-type* è il nome della classe alla quale appartiene questo operatore.  La funzione operatore di accesso ai membri deve essere una funzione membro non statica.  
  
 Questo operatore viene utilizzato \(spesso insieme all'operatore di dereferenziazione del puntatore\) per implementare i "puntatori intelligenti" che convalidano i puntatori prima della dereferenziazione oppure ne conteggiano l'utilizzo.  
  
 Non è possibile eseguire l'overload dell'operatore di accesso ai membri **.**.  
  
## Vedere anche  
 [Overload degli operatori](../cpp/operator-overloading.md)