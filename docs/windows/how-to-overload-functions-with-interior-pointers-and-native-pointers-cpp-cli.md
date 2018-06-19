---
title: "Procedura: eseguire l'Overload di funzioni con puntatori interni e puntatori nativi (C + + CLI) | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- Functions with interior and native pointers, overloading
ms.assetid: d70df625-4aad-457c-84f5-70a0a290cc1f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7e3bc7e5fca6a34f9847c913e92e523b2898068f
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33874863"
---
# <a name="how-to-overload-functions-with-interior-pointers-and-native-pointers-ccli"></a>Procedura: eseguire l'overload di funzioni con puntatori interni e puntatori nativi (C++/CLI)
Le funzioni possono essere sottoposti a overload a seconda se il tipo di parametro è un puntatore interno o un puntatore nativo.  
  
> [!IMPORTANT]
>  Questa funzionalità del linguaggio è supportata per il **/clr** l'opzione del compilatore, ma non dal **/ZW** l'opzione del compilatore.  
  
## <a name="example"></a>Esempio  
  
### <a name="code"></a>Codice  
  
```  
// interior_ptr_overload.cpp  
// compile with: /clr  
using namespace System;  
  
// C++ class  
struct S {  
   int i;  
};  
  
// managed class  
ref struct G {  
   int i;  
};  
  
// can update unmanaged storage  
void f( int* pi ) {  
   *pi = 10;  
   Console::WriteLine("in f( int* pi )");  
}  
  
// can update managed storage  
void f( interior_ptr<int> pi ) {  
   *pi = 10;   
   Console::WriteLine("in f( interior_ptr<int> pi )");  
}  
  
int main() {  
   S *pS = new S;   // C++ heap  
   G ^pG = gcnew G;   // common language runtime heap  
   f( &pS->i );  
   f( &pG->i );  
};  
```  
  
### <a name="output"></a>Output  
  
```  
in f( int* pi )  
in f( interior_ptr<int> pi )  
```  
  
## <a name="see-also"></a>Vedere anche  
 [interior_ptr (C++/CLI)](../windows/interior-ptr-cpp-cli.md)