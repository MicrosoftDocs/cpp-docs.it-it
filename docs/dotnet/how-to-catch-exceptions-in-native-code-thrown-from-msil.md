---
title: "Procedura: rilevare eccezioni nel codice nativo generate da MSIL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rilevamento di eccezioni, generato da MSIL"
  - "eccezioni, intercettazione"
  - "MSIL, rilevamento di eccezioni nel codice nativo"
ms.assetid: c15afd2b-8505-43bf-8a4a-f1d41532a124
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Procedura: rilevare eccezioni nel codice nativo generate da MSIL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nel codice nativo, è possibile rilevare l'eccezione nativa di C\+\+ rispetto al codice MSIL.  È possibile intercettare le eccezioni CLR con `__try` e `__except`.  
  
 Per ulteriori informazioni, vedere [Gestione strutturata delle eccezioni](../cpp/structured-exception-handling-c-cpp.md) e [Gestione delle eccezioni C\+\+](../cpp/cpp-exception-handling.md).  
  
## Esempio  
 Nell'esempio seguente viene definito un form con due funzioni, una che genera un'eccezione nativa e un altro che genera un'eccezione MSIL.  
  
```  
// catch_MSIL_in_native.cpp  
// compile with: /clr /c  
void Test() {  
   throw ("error");  
}  
  
void Test2() {  
   throw (gcnew System::Exception("error2"));  
}  
```  
  
## Esempio  
 Nell'esempio seguente viene definito un form che rileva un controllo nativo e l'eccezione MSIL.  
  
```  
// catch_MSIL_in_native_2.cpp  
// compile with: /clr catch_MSIL_in_native.obj  
#include <iostream>  
using namespace std;  
void Test();  
void Test2();  
  
void Func() {  
   // catch any exception from MSIL  
   // should not catch Visual C++ exceptions like this  
   // runtime may not destroy the object thrown  
   __try {  
      Test2();  
   }  
   __except(1) {  
      cout << "caught an exception" << endl;  
   }  
  
}  
  
int main() {  
   // catch native C++ exception from MSIL  
   try {  
      Test();  
   }  
   catch(char * S) {  
      cout << S << endl;  
   }  
   Func();  
}  
```  
  
  **errore**  
**è stata rilevata un'eccezione**   
## Vedere anche  
 [Exception Handling](../windows/exception-handling-cpp-component-extensions.md)