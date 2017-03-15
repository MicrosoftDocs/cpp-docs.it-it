---
title: "Compiler Error C3450 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3450"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3450"
ms.assetid: 78892cf7-0b82-4589-90d0-e06666247003
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Compiler Error C3450
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type': non è un attributo; impossibile specificare \[System::AttributeUsageAttribute\] o \[Windows::Foundation::Metadata::AttributeUsageAttribute\]  
  
 Un attributo gestito definito dall'utente deve ereditare da <xref:System.ComponentModel.AttributeCollection.%23ctor%2A>.  Un attributo di Windows Runtime deve essere definito nello spazio dei nomi `Windows::Foundation::Metadata`.  
  
 Per altre informazioni, vedere [User\-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3450 e mostra come risolverlo.  
  
```  
// C3450.cpp  
// compile with: /clr  
// C3450 expected  
using namespace System;  
using namespace System::Security;  
using namespace System::Security::Permissions;  
  
public ref class MyClass {};  
  
class MyClass2 {};  
  
[attribute(AttributeTargets::All)]  
ref struct AtClass {  
   AtClass(Type ^) {}  
};  
  
[attribute(AttributeTargets::All)]  
ref struct AtClass2 {  
   AtClass2() {}  
};  
  
// Apply the AtClass and AtClass2 attributes to class B  
[AtClass(MyClass::typeid), AtClass2]     
[AttributeUsage(AttributeTargets::All)]  
// Delete the following line to resolve.  
ref class B {};  
// Uncomment the following line to resolve.  
// ref class B : Attribute {};  
```