---
title: "Avviso del compilatore C4950 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4950"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4950"
ms.assetid: 50226a5c-c664-4d09-ac59-e9e874ca244f
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore C4950
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type\_or\_member': contrassegnato come obsoleto  
  
 Un membro o un tipo è stato contrassegnato come obsoleto con la classe [ObsoleteAttribute](frlrfSystemObsoleteAttributeClassTopic).  
  
 C4950 viene sempre generato come errore.  È possibile disattivare questo avviso con `#pragma warning` o **\/wd**. Per altre informazioni, vedere [warning](../../preprocessor/warning.md) o [\/w, \/Wn, \/WX, \/Wall, \/wln, \/wdn, \/wen, \/won \(Livello avvisi\)](../../build/reference/compiler-option-warning-level.md).  
  
 L'esempio seguente genera l'avviso C4950:  
  
```  
// C4950.cpp // compile with: /clr using namespace System; // Any reference to Func3 should generate an error with message [System::ObsoleteAttribute("Will be removed in next version", true)] Int32 Func3(Int32 a, Int32 b) { return (a + b); } int main() { Int32 MyInt3 = ::Func3(2, 2);   // C4950 }  
```