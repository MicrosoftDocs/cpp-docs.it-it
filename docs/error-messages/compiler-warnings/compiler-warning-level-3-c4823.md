---
title: Compilatore (livello 3) avviso C4823 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4823
dev_langs:
- C++
helpviewer_keywords:
- C4823
ms.assetid: 8a77560d-dcea-4cae-aebb-8ebf1b4cef85
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: ea03723f9ccae2348a47ae4894097f5cd9f8b5a1
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-warning-level-3-c4823"></a>Avviso del compilatore (livello 3) C4823
'funzione': utilizza i puntatori di blocco ma rimozione semantica non è abilitata. Si consiglia di utilizzare /EHa  
  
Per sbloccare un oggetto nell'heap gestito a cui fa riferimento un puntatore di blocco dichiarato in un ambito blocco, il compilatore simula il comportamento dei distruttori di classi locali "che fingono" il puntatore di blocco ha un distruttore annullino il puntatore. Per abilitare una chiamata a un distruttore dopo la generazione di un'eccezione, è necessario attivare la rimozione di oggetti, che è possibile eseguire mediante [/EHsc](../../build/reference/eh-exception-handling-model.md).  
  
Manualmente, è possibile sbloccare l'oggetto e ignorare l'avviso.  
  
## <a name="example"></a>Esempio  
Nell'esempio seguente genera l'avviso C4823.  
  
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

