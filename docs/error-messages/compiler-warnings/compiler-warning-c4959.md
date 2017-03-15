---
title: "Avviso del compilatore C4959 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4959"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4959"
ms.assetid: 3a128f3e-4d8a-4565-ba1a-5d32fdeb5982
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Avviso del compilatore C4959
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile definire struct 'type' non gestito in \/clr:safe perché l'accesso ai membri produce codice non verificabile  
  
 L'accesso a un membro di un tipo non gestito produrrà un'immagine \(peverify.exe\) non verificabile.  
  
 Per altre informazioni, vedere [Codice pure e verificabile](../../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
 Questo avviso viene generato come errore e può essere disabilitato tramite il pragma [warning](../../preprocessor/warning.md) o l'opzione del compilatore [\/wd](../../build/reference/compiler-option-warning-level.md).  
  
 L'esempio seguente genera l'errore C4959:  
  
```  
// C4959.cpp // compile with: /clr:safe // Uncomment the following line to resolve. // #pragma warning( disable : 4959 ) struct X { int data; }; int main() { X x; x.data = 10;   // C4959 }  
```