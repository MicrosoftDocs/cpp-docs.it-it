---
title: Errore del compilatore C3642 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3642
dev_langs: C++
helpviewer_keywords: C3642
ms.assetid: 429790c2-9614-4d85-b31c-687c8d8f83ff
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 4b5d73344b99a42dfc4caf2b9f6b8cf7c9dc18bc
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3642"></a>Errore del compilatore C3642
' return_type/args': non è possibile chiamare una funzione con clrcall convenzione di chiamata da codice nativo  
  
 Una funzione contrassegnata con il [clrcall](../../cpp/clrcall.md) convenzione di chiamata non può essere chiamato da codice nativo (non gestito).  
  
 *return_type/args* è il nome della funzione o il tipo di `__clrcall` funzione si sta tentando di chiamare.  Un tipo viene utilizzato durante una chiamata tramite un puntatore a funzione.  
  
 Per chiamare una funzione gestita da un contesto nativo, è possibile aggiungere una funzione "wrapper" che chiamerà la `__clrcall` (funzione). In alternativa, utilizzare il meccanismo di marshalling CLR; vedere [procedura: effettuare il marshalling funzione puntatori utilizzando PInvoke](../../dotnet/how-to-marshal-function-pointers-using-pinvoke.md) per ulteriori informazioni.  
  
 L'esempio seguente genera l'errore C3642:  
  
```  
// C3642.cpp  
// compile with: /clr  
using namespace System;  
struct S {  
   void Test(String ^ s) {   // CLR type in signature, implicitly __clrcall  
      Console::WriteLine(s);  
   }  
   void Test2(char * s) {  
      Test(gcnew String(s));  
   }  
};  
  
#pragma unmanaged  
int main() {  
   S s;  
   s.Test("abc");   // C3642  
   s.Test2("abc");   // OK  
}  
```