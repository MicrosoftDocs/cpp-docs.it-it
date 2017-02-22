---
title: "Funzione exit | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Exit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "exit (funzione)"
ms.assetid: 26ce439f-81e2-431c-9ff8-a09a96f32127
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Funzione exit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La funzione **exit**, dichiarata anche nel file di inclusione standard STDLIB.H, termina un programma C\+\+.  
  
 Il valore fornito come argomento a **exit** viene restituito al sistema operativo come codice restituito o codice di uscita del programma.  Per convenzione, un codice restituito uguale a zero indica che il programma è stato completato correttamente.  
  
> [!NOTE]
>  È possibile utilizzare costanti `EXIT_FAILURE` e `EXIT_SUCCESS`, definite in STDLIB.H, per indicare l'esito positivo o negativo del programma.  
  
 La chiamata di un'istruzione `return` da parte della funzione **main** equivale alla chiamata della funzione **exit** con il valore restituito come argomento.  
  
 Per ulteriori informazioni, vedere [exit](../c-runtime-library/reference/exit-exit-exit.md) in *Riferimenti alla libreria di runtime*.  
  
## Vedere anche  
 [Chiusura del programma](../cpp/program-termination.md)