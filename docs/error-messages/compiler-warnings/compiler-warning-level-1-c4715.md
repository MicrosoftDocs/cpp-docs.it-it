---
title: "Avviso del compilatore (livello 1) C4715 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4715"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4715"
ms.assetid: 1c819bf7-0d8b-4f5e-b338-9cc292870439
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4715
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': non tutti i percorsi di controllo restituiscono un valore  
  
 È possibile che la funzione specificata non restituisca alcun valore.  
  
## Esempio  
  
```  
// C4715a.cpp  
// compile with: /W1 /LD  
int func1( int i )  
{  
   if( i )  
   return 3;  // C4715 warning, nothing returned if i == 0  
}  
```  
  
 Per evitare la visualizzazione dell'avviso, modificare il codice in modo che tutti i percorsi assegnino un valore restituito alla funzione:  
  
```  
// C4715b.cpp  
// compile with: /LD  
int func1( int i )  
{  
   if( i ) return 3;  
   else return 0;     // OK, always returns a value  
}  
```  
  
 È possibile che il codice contenga una chiamata a una funzione che non termina mai, come nell'esempio seguente:  
  
```  
// C4715c.cpp  
// compile with: /W1 /LD  
void fatal()  
{  
}  
int glue()  
{  
   if(0)  
      return 1;  
   else if(0)  
      return 0;  
   else  
      fatal();   // C4715  
}  
```  
  
 Anche nel codice riportato come esempio viene generato un avviso perché il compilatore non riconosce `fatal` come funzione che non termina mai.  Per evitare che venga generato il messaggio di errore, dichiarare `fatal` con [\_\_declspec\(noreturn\)](../../cpp/noreturn.md).