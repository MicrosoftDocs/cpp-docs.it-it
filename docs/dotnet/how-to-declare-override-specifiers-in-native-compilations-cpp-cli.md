---
title: "Procedura: Dichiarare gli identificatori di override nelle compilazioni native (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "identificatori di override in una compilazione nativa, override"
ms.assetid: d0551836-9ac7-41eb-a6e9-a4b3ef60767d
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: Dichiarare gli identificatori di override nelle compilazioni native (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[bloccato](../windows/sealed-cpp-component-extensions.md), [estrai](../windows/abstract-cpp-component-extensions.md) e [override](../windows/override-cpp-component-extensions.md) sono disponibili nelle compilazioni che non utilizzano **\/ZW** o [\/clr](../build/reference/clr-common-language-runtime-compilation.md).  
  
> [!NOTE]
>  La lingua standard ISO C\+\+11 con l'identificatore di [override](../cpp/override-specifier.md) e l'identificatore di [finale](../cpp/final-specifier.md) ed entrambi sono supportati nell'utilizzo `final` di Visual Studio anziché `sealed` nel codice che deve essere compilato come solo nativo.  
  
## Esempio  
  
### Descrizione  
 Nell'esempio seguente viene illustrato `sealed` è valido nelle compilazioni native.  
  
### Codice  
  
```  
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
  
## Esempio  
  
### Descrizione  
 L'esempio seguente mostra che `override` è valido nelle compilazioni native.  
  
### Codice  
  
```  
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
  
## Esempio  
  
### Descrizione  
 In questo esempio viene mostrato che `abstract` è valido nelle compilazioni native.  
  
### Codice  
  
```  
// abstract_native_keyword.cpp  
class X abstract {};  
  
int main() {  
   X * MyX = new X;   // C3622 cannot instantiate abstract class  
}  
```  
  
## Vedere anche  
 [Identificatori di override](../windows/override-specifiers-cpp-component-extensions.md)