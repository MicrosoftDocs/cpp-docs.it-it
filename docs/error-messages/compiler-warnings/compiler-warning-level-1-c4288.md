---
title: Compilatore (livello 1) Avviso C4288 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4288
dev_langs:
- C++
helpviewer_keywords:
- C4288
ms.assetid: 6aaeb139-90cd-457a-9d37-65687042736f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f2c51bdc201b364d76f1692db8ee14973c90923f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4288"></a>Avviso del compilatore (livello 1) C4288
utilizzata estensione non standard: 'var': variabile di controllo ciclo dichiarata nel ciclo for e utilizzata all'esterno dell'ambito del ciclo per; è in conflitto con la dichiarazione nell'ambito esterno  
  
 Durante la compilazione con [/Ze](../../build/reference/za-ze-disable-language-extensions.md) e **/Zc:forscope-**, una variabile dichiarata in un **per** ciclo è stato utilizzato dopo il [per](../../cpp/for-statement-cpp.md)-ambito ciclo for. Un'estensione Microsoft del linguaggio C++ consente alla variabile di rimanere nell'ambito e C4288 viene indicato che non viene utilizzata la prima dichiarazione della variabile.  
  
 Vedere [/Zc: forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) per informazioni su come specificare l'estensione di Microsoft in **per** cicli con /Ze.  
  
 L'esempio seguente genera l'errore C4288:  
  
```  
// C4288.cpp  
// compile with: /W1 /c /Zc:forScope-  
int main() {  
   int i = 0;    // not used in this program  
   for (int i = 0 ; ; ) ;  
   i++;   // C4288 using for-loop declaration of i  
}  
```