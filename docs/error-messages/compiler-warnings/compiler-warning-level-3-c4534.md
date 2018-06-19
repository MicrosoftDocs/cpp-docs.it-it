---
title: Compilatore avviso (livello 3) C4534 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- c4534
dev_langs:
- C++
helpviewer_keywords:
- C4534
ms.assetid: ec2adf3b-d7a1-4005-bb0c-5d219df78dc8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1b765f5f654c8d533b0ae22d874e7657cd10d667
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33293033"
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