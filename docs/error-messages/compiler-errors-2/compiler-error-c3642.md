---
title: "Errore del compilatore C3642 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3642"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3642"
ms.assetid: 429790c2-9614-4d85-b31c-687c8d8f83ff
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3642
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo\_restituito\/arg': impossibile chiamare una funzione con la convenzione di chiamata \_\_clrcall dal codice nativo  
  
 Non è possibile chiamare una funzione contrassegnata con la convenzione di chiamata [\_\_clrcall](../../cpp/clrcall.md) dal codice nativo \(non gestito\).  
  
 *return\_type\/args* è il nome o il tipo della funzione o del tipo di funzione `__clrcall` che si sta tentando di chiamare.  Durante una chiamata tramite un puntatore a funzione viene utilizzato un tipo.  
  
 Per chiamare una funzione gestita da un contesto nativo, è possibile aggiungere una funzione "wrapper" che effettuerà la chiamata alla funzione `__clrcall`.  In alternativa, è possibile utilizzare il meccanismo marshalling. Per ulteriori informazioni, vedere [Procedura: effettuare il marshalling di puntatori a funzione utilizzando PInvoke](../../dotnet/how-to-marshal-function-pointers-using-pinvoke.md).  
  
 Il seguente codice di esempio genera l'errore C3642:  
  
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