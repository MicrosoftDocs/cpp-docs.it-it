---
title: "Procedura: definire un costruttore statico di interfaccia (C++/CLI) | Microsoft Docs"
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
  - "costruttori [C++]"
  - "costruttore statico di interfaccia"
  - "costruttori statici, interfaccia"
ms.assetid: 1f031cb2-e94f-43dc-819b-44cf2faaaa49
caps.latest.revision: 10
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: definire un costruttore statico di interfaccia (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un'interfaccia può avere un costruttore statico, che può essere utilizzato per inizializzare i membri dati statici.  Un costruttore statico verrà chiamato al massimo una volta e verrà chiamato prima della prima volta che un membro di interfaccia statico della classe.  
  
 Per ulteriori informazioni sui costruttori statici, vedere [Procedura: definire costruttori statici in una classe o un struct](../misc/how-to-define-static-constructors-in-a-class-or-struct.md).  
  
## Esempio  
  
```  
// mcppv2_interface_class2.cpp  
// compile with: /clr  
using namespace System;  
  
interface struct MyInterface {  
   static int i;  
   static void Test() {  
      Console::WriteLine(i);  
   }  
  
   static MyInterface() {   
      Console::WriteLine("in MyInterface static constructor");  
      i = 99;  
   }  
};  
  
ref class MyClass : public MyInterface {};  
  
int main() {  
   MyInterface::Test();  
   MyClass::MyInterface::Test();  
  
   MyInterface ^ mi = gcnew MyClass;  
   mi->Test();  
}  
```  
  
  **nel costruttore statico MyInterface**  
**99**  
**99**  
**99**   
## Vedere anche  
 [interface class](../windows/interface-class-cpp-component-extensions.md)