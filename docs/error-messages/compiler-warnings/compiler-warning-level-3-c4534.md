---
title: Compilatore avviso (livello 3) C4534 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- c4534
dev_langs:
- C++
helpviewer_keywords:
- C4534
ms.assetid: ec2adf3b-d7a1-4005-bb0c-5d219df78dc8
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6d9ea2cc6fb15edf61610e96a728e985b78be468
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-3-c4534"></a>Avviso del compilatore (livello 3) C4534
'constructor' non è un costruttore predefinito per la classe 'class' a causa dell'argomento predefinito  
  
 Una classe non gestita può avere un costruttore con parametri che hanno valori predefiniti e il compilatore verrà utilizzato come il costruttore predefinito. Una classe contrassegnata con il `value` parola chiave non utilizzerà un costruttore con i valori predefiniti per i relativi parametri come un costruttore predefinito.  
  
 Per ulteriori informazioni, vedere [classi e struct](../../windows/classes-and-structs-cpp-component-extensions.md).  
  
 L'esempio seguente genera l'errore C4534:  
  
```  
// C4534.cpp  
// compile with: /W3 /clr /WX  
value class MyClass {  
public:  
   int ii;  
   MyClass(int i = 9) {   // C4534, will not be the default constructor  
      i++;  
   }  
};  
  
int main() {  
   MyClass ^ xx = gcnew MyClass;  
   xx->ii = 0;  
}  
```