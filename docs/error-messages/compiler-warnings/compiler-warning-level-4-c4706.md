---
title: Compilatore avviso (livello 4) C4706 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4706
dev_langs:
- C++
helpviewer_keywords:
- C4706
ms.assetid: 89cd3f4f-812c-4a4b-9426-65a5a6d1b99c
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 824028fb7fd6d563a7f49017eb6b35d1443490bb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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