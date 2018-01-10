---
title: Compilatore (livello 1) Avviso C4288 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4288
dev_langs: C++
helpviewer_keywords: C4288
ms.assetid: 6aaeb139-90cd-457a-9d37-65687042736f
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a10a7573df5986ed20475b34208a1e0f301d9bb9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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