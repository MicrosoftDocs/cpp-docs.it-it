---
title: "Avviso del compilatore C4957 | Microsoft Docs"
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
  - "C4957"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4957"
ms.assetid: a18c52d4-23e2-44f1-b4b5-f7fa5a7f3987
caps.latest.revision: 15
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore C4957
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'cast': cast esplicito da 'cast\_from' a 'cast\_to' non verificabile  
  
 Un cast genererà un'immagine non verificabile.  
  
 Alcuni cast sono sicuri, ad esempio un `static_cast` che attiva conversioni definite dall'utente e un `const_cast`. Un [safe\_cast](../../windows/safe-cast-cpp-component-extensions.md) genera sicuramente codice verificabile.  
  
 Per altre informazioni, vedere [Codice pure e verificabile](../../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
 Questo avviso viene generato come errore e può essere disabilitato tramite il pragma [warning](../../preprocessor/warning.md) o l'opzione del compilatore [\/wd](../../build/reference/compiler-option-warning-level.md).  
  
 L'esempio seguente genera l'errore C4957:  
  
```  
// C4957.cpp // compile with: /clr:safe // #pragma warning( disable : 4957 ) using namespace System; int main() { Object ^ o = "Hello, World!"; String ^ s = static_cast<String^>(o);   // C4957 String ^ s2 = safe_cast<String^>(o);   // OK }  
```