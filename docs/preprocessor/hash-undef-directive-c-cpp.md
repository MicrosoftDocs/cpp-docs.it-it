---
title: "Direttiva #undef (C/C++) | Microsoft Docs"
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
  - "#undef"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "#undef (direttiva)"
  - "preprocessore, direttive"
  - "undef (direttiva) (#undef)"
ms.assetid: 88900e0e-2c19-4a63-b681-f3d3133c24ca
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Direttiva #undef (C/C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rimuove \(rimuove la definizione\) un nome creato in precedenza con `#define`.  
  
## Sintassi  
  
```  
  
#undef   
identifier  
  
```  
  
## Note  
 La direttiva `#undef` rimuove la definizione corrente di *identifier*.  Di conseguenza, le occorrenze successive di *identifier* vengono ignorate dal preprocessore.  Per rimuovere una definizione di macro mediante `#undef`, fornire solo *identifier*  di macro; non fornire un elenco di parametri.  
  
 È inoltre possibile applicare la direttiva `#undef` a un identificatore che non presenta una definizione precedente.  Questo assicura che l'identificatore rimanga non definito.  La sostituzione delle macro non viene eseguita all'interno delle istruzioni `#undef`.  
  
 La direttiva `#undef` viene in genere abbinata a una direttiva `#define` per creare un'area in un programma di origine in cui un identificatore ha un significato speciale.  Ad esempio, una funzione specifica del programma di origine può utilizzare le costanti manifesto per definire valori specifici dell'ambiente che non influiscono sul resto del programma.  La direttiva `#undef` funziona anche con la direttiva `#if` per controllare la compilazione condizionale del programma di origine.  Per ulteriori informazioni, vedere [Le direttive \#if, \#elif, \#else e \#endif](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md).  
  
 Nell'esempio seguente, la direttiva `#undef` rimuove le definizioni di una costante simbolica e di una macro.  Notare che viene specificato solo l'identificatore della macro.  
  
```  
#define WIDTH 80  
#define ADD( X, Y ) ((X) + (Y))  
.  
.  
.  
#undef WIDTH  
#undef ADD  
```  
  
 **Sezione specifica Microsoft**  
  
 Le macro possono essere definite dalla riga di comando utilizzando l'opzione \/U seguita dai nomi delle macro di cui rimuovere la definizione.  L'effetto dell'esecuzione di questo comando equivale a una sequenza di istruzioni`#undef` *macro\-name* all'inizio del file.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)