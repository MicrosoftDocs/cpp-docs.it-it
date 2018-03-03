---
title: 'Procedura: dichiarare gli identificatori di Override (C + + CLI) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- override specifiers in native compilation, overriding
ms.assetid: d0551836-9ac7-41eb-a6e9-a4b3ef60767d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 0f50e500cf25a18e86e107e22d58e6446d03379d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-declare-override-specifiers-in-native-compilations-ccli"></a>Procedura: Dichiarare gli identificatori di override nelle compilazioni native (C++/CLI)
[sealed](../windows/sealed-cpp-component-extensions.md), [astratta](../windows/abstract-cpp-component-extensions.md), e [override](../windows/override-cpp-component-extensions.md) sono disponibili nelle compilazioni che non utilizzano **/ZW** o [/clr](../build/reference/clr-common-language-runtime-compilation.md).  
  
> [!NOTE]
>  ISO C++ 11 Standard language è il [override](../cpp/override-specifier.md) identificatore e il [finale](../cpp/final-specifier.md) identificatore ed entrambi sono supportati in Visual Studio utilizzare `final` anziché `sealed` nel codice che deve essere compilato come solo nativo.  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 Nell'esempio seguente viene illustrato che `sealed` è valido nelle compilazioni native.  
  
### <a name="code"></a>Codice  
  
```cpp  
// sealed_native_keyword.cpp  
#include <stdio.h>  
__interface I1 {  
   virtual void f();  
   virtual void g();  
};  
  
class X : public I1 {  
public:  
   virtual void g() sealed {}  
};  
  
class Y : public X {  
public:  
  
   // the following override generates a compiler error  
   virtual void g() {}   // C3248 X::g is sealed!  
};  
```  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 L'esempio successivo mostra che `override` è valido nelle compilazioni native.  
  
### <a name="code"></a>Codice  
  
```cpp  
// override_native_keyword.cpp  
#include <stdio.h>  
__interface I1 {  
   virtual void f();  
};  
  
class X : public I1 {  
public:  
   virtual void f() override {}   // OK  
   virtual void g() override {}   // C3668 I1::g does not exist  
};  
```  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 In questo esempio mostra che `abstract` è valido nelle compilazioni native.  
  
### <a name="code"></a>Codice  
  
```cpp  
// abstract_native_keyword.cpp  
class X abstract {};  
  
int main() {  
   X * MyX = new X;   // C3622 cannot instantiate abstract class  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Identificatori di override](../windows/override-specifiers-cpp-component-extensions.md)