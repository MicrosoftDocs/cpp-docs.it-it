---
title: "Errore del compilatore C3383 | Microsoft Docs"
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
  - "C3383"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3383"
ms.assetid: ceb7f725-f417-4dc3-8496-0f413bb76687
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3383
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator new' non supportato con \/clr:safe  
  
 Il file di output di una compilazione **\/clr:safe** è un file indipendente dai tipi verificabile e i puntatori non sono supportati.  
  
 Per ulteriori informazioni, vedere,  
  
-   [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md)  
  
-   [Problemi comuni relativi alla migrazione di Visual C\+\+ a 64 bit](../../build/common-visual-cpp-64-bit-migration-issues.md)  
  
## Esempio  
 L'esempio seguente genera l'errore C3383.  
  
```  
// C3383.cpp // compile with: /clr:safe int main() { char* pCharArray = new char[256];  // C3383 }  
```