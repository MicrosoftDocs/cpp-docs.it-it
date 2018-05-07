---
title: Compilatore avviso (livello 4) C4706 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4706
dev_langs:
- C++
helpviewer_keywords:
- C4706
ms.assetid: 89cd3f4f-812c-4a4b-9426-65a5a6d1b99c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1131147a9600525746cb3e89119189ed9e5026a7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-4-c4706"></a>Avviso del compilatore (livello 4) C4706
assegnazione all'interno di espressione condizionale  
  
 Il valore di test in un'espressione condizionale è il risultato di un'assegnazione.  
  
 Un'assegnazione ha un valore (il valore sul lato sinistro dell'assegnazione) che può essere usato dalla normativa in un'altra espressione, anche in un'espressione di test.  
  
 L'esempio seguente genera l'errore C4706:  
  
```  
// C4706a.cpp  
// compile with: /W4  
int main()  
{  
   int a = 0, b = 0;  
   if ( a  = b ) // C4706  
   {  
   }  
}  
```  
  
 L'avviso si verifica anche se si raddoppiano le parentesi che racchiudono la condizione di test:  
  
```  
// C4706b.cpp  
// compile with: /W4  
int main()  
{  
   int a = 0, b = 0;  
   if ( ( a  =  b ) ) // C4706  
   {  
   }  
}  
```  
  
 Se si intende testare una relazione di non effettuare un'assegnazione, utilizzare il `==` operatore. Ad esempio, la riga seguente test indica se un e b sono uguali:  
  
```  
// C4706c.cpp  
// compile with: /W4  
int main()  
{  
   int a = 0, b = 0;  
   if ( a == b )  
   {  
   }  
}  
```  
  
 Se si desidera effettuare il test di valore il risultato di un'assegnazione, test per garantire che l'assegnazione è diverso da zero o non null. Il codice seguente, ad esempio, non genera questo avviso:  
  
```  
// C4706d.cpp  
// compile with: /W4  
int main()  
{  
   int a = 0, b = 0;  
   if ( ( a = b ) != 0 )  
   {  
   }  
}  
```