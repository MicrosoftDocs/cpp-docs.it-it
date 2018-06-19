---
title: 'Procedura: intercettare le eccezioni nel codice nativo generate da MSIL | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- exceptions, catching
- catching exceptions, thrown from MSIL
- MSIL, catching exceptions in native code
ms.assetid: c15afd2b-8505-43bf-8a4a-f1d41532a124
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 3d5c1efde1f98ac3f9fdccb19039373d5cfe6be6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33127877"
---
# <a name="how-to-catch-exceptions-in-native-code-thrown-from-msil"></a>Procedura: rilevare eccezioni nel codice nativo generate da MSIL
Nel codice nativo, è possibile intercettare le eccezioni C++ native da codice MSIL.  È possibile intercettare le eccezioni di Common Language Runtime con `__try` e `__except`.  
  
 Per ulteriori informazioni, vedere [strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md) e [gestione delle eccezioni C++](../cpp/cpp-exception-handling.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente definisce un modulo con due funzioni, una che ha generato un'eccezione nativa e un'altra che genera un'eccezione di MSIL.  
  
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
  
## <a name="example"></a>Esempio  
 L'esempio seguente definisce un modulo che memorizza nella cache un nativa e l'eccezione MSIL.  
  
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
  
```Output  
error  
caught an exception  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni](../windows/exception-handling-cpp-component-extensions.md)