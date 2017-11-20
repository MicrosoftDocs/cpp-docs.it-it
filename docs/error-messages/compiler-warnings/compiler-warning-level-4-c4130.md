---
title: Compilatore avviso (livello 4) C4130 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C4130
dev_langs: C++
helpviewer_keywords: C4130
ms.assetid: 45e4c7b2-6b51-41c7-ba5e-941aa5c7d3dc
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 577d241be51209dfbe65ad8c46556a1abcdb431e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-4-c4130"></a>Avviso del compilatore (livello 4) C4130
'operator': operazione logica su indirizzo di costante di stringa  
  
 Se si usa l'operatore con l'indirizzo di un valore letterale stringa viene prodotto codice imprevisto.  
  
 L'esempio seguente genera l'errore C4130:  
  
```  
// C4130.cpp  
// compile with: /W4  
int main()  
{  
   char *pc;  
   pc = "Hello";  
   if (pc == "Hello") // C4130  
   {  
   }  
}  
```  
  
 L'istruzione **if** confronta il valore archiviato nel puntatore `pc` con l'indirizzo della stringa "Hello", che viene allocata separatamente ogni volta che la stringa è presente nel codice. L'istruzione **if** non confronta la stringa a cui punta `pc` con la stringa "Hello".  
  
 Per confrontare le stringhe, usare la funzione `strcmp` .