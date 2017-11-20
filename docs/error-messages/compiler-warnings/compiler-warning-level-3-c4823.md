---
title: Compilatore avviso (livello 3) C4823 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4823
dev_langs: C++
helpviewer_keywords: C4823
ms.assetid: 8a77560d-dcea-4cae-aebb-8ebf1b4cef85
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: af4b7e220957722793458a283244092574d05fa9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-3-c4823"></a>Avviso del compilatore (livello 3) C4823
'function': utilizza puntatori di blocco ma rimozione semantica non è abilitata. È consigliabile utilizzare /EHa  
  
Per sbloccare un oggetto nell'heap gestito a cui fa riferimento un puntatore di blocco dichiarato in un ambito di blocco, il compilatore simula il comportamento dei distruttori delle classi locali, "che fingono" il puntatore di blocco con un distruttore che annulla l'indicatore di misura. Per abilitare una chiamata a un distruttore dopo la generazione di un'eccezione, è necessario attivare la rimozione di oggetti, che è possibile eseguire utilizzando [/EHsc](../../build/reference/eh-exception-handling-model.md).  
  
Manualmente, è possibile sbloccare l'oggetto e ignorare l'avviso.  
  
## <a name="example"></a>Esempio  
L'esempio seguente genera l'avviso C4823.  
  
```  
// C4823.cpp  
// compile with: /clr /W3 /EHa-  
using namespace System;  
  
ref struct G {  
   int m;  
};  
  
void f(G ^ pG) {  
   try {  
      pin_ptr<int> p = &pG->m;  
      // manually unpin, ignore warning  
      // p = nullptr;  
      throw gcnew Exception;  
   }  
   catch(Exception ^) {}  
}   // C4823 warning  
  
int main() {  
   f( gcnew G );  
}  
```  
