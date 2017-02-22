---
title: "Errore del compilatore C3451 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3451"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3451"
ms.assetid: a4897a69-e3e7-40bb-bb1c-598644904012
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Errore del compilatore C3451
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'attributo': impossibile applicare un attributo non gestito a 'tipo'  
  
 Un attributo di Visual C\+\+ non può essere applicato a un tipo CLR.  Per ulteriori informazioni, vedere [C\+\+ Attributes Reference](../../windows/cpp-attributes-reference.md).  
  
 Per ulteriori informazioni, vedere [User\-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).  
  
 Questo errore può essere generato in seguito alle operazioni di conformità eseguite dal compilatore per Visual C\+\+ 2005: l'attributo [uuid](../../windows/uuid-cpp-attributes.md) non è più consentito in un attributo definito dall'utente che utilizza la programmazione CLR.  In alternativa, utilizzare <xref:System.Runtime.InteropServices.GuidAttribute>.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3451:  
  
```  
// C3451.cpp  
// compile with: /clr /c  
using namespace System;  
[ attribute(AttributeTargets::All) ]  
public ref struct MyAttr {};  
  
[ MyAttr, helpstring("test") ]   // C3451  
// try the following line instead  
// [ MyAttr ]  
public ref struct ABC {};  
```