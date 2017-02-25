---
title: "Compiler Error C3099 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3099"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3099"
ms.assetid: b3dded0f-76c9-42c1-991b-532eb8619661
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Compiler Error C3099
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'keyword': usare \[System::AttributeUsageAttribute\] per gli attributi gestiti; usare \[Windows::Foundation::Metadata::AttributeUsageAttribute\] per gli attributi WinRT  
  
 Usare <xref:System.AttributeUsageAttribute> per dichiarare gli attributi **\/clr**.  Usare `Windows::Foundation::Metadata::AttributeUsageAttribute` per dichiarare gli attributi Windows Runtime.  
  
 Per altre informazioni sugli attributi \/CLR, vedere [User\-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).  Per gli attributi supportati in Windows Runtime, vedere [Spazio dei nomi Windows.Foundation.Metadata](http://msdn.microsoft.com/library/windows/apps/windows.foundation.metadata.aspx)  
  
## Esempio  
 L'esempio seguente genera l'errore C3099 e mostra come risolverlo.  
  
```  
// C3099.cpp  
// compile with: /clr /c  
using namespace System;  
[usage(10)]   // C3099  
// try the following line instead  
// [AttributeUsageAttribute(AttributeTargets::All)]  
ref class A : Attribute {};  
```