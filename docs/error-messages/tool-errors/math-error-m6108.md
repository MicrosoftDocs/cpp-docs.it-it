---
title: "Errore matematico M6108 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "M6108"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "M6108"
ms.assetid: 054893b4-49bc-45d9-882f-7cb50ba387c0
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore matematico M6108
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Radice quadrata.  
  
 L'operando di un'operazione di radice quadrata è negativo.  
  
 Il programma termina con codice di uscita 136.  
  
> [!NOTE]
>  Questo errore non viene generato dalla funzione `sqrt` nella libreria di runtime del linguaggio C e dalla funzione intrinseca FORTRAN **SQRT**.  La funzione `sqrt` del linguaggio C consente di verificare l'argomento prima di eseguire l'operazione e restituisce un errore qualora l'operando sia negativo.  La funzione FORTRAN **SQRT** genera invece l'errore DOMAIN [M6201](../../error-messages/tool-errors/math-error-m6201.md).