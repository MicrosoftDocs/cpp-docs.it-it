---
title: "Errore del compilatore C3382 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3382"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3382"
ms.assetid: a7603abd-ac4e-4ae6-a02b-3bdc6d1908a6
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 3
---
# Errore del compilatore C3382
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'sizeof' non supportato con \/clr:safe  
  
 Il file di output di una compilazione **\/clr:safe** è un file indipendente dai tipi verificabile e sizeof non è supportato perché il valore restituito dell'operatore sizeof è size\_t, la cui dimensione varia a seconda del sistema operativo.  
  
 Per ulteriori informazioni, vedere,  
  
-   [Operatore sizeof](../../cpp/sizeof-operator.md)  
  
-   [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md)  
  
-   [Problemi comuni relativi alla migrazione di Visual C\+\+ a 64 bit](../../build/common-visual-cpp-64-bit-migration-issues.md)  
  
## Esempio  
 L'esempio seguente genera l'errore C3382.  
  
```  
// C3382.cpp // compile with: /clr:safe int main() { sizeof( char );   // C3382 }  
```