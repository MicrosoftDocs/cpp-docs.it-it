---
title: "Errore irreversibile C1383 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C1383"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1383"
ms.assetid: ca224d14-d687-4fd6-80c2-8b82f28924ea
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# Errore irreversibile C1383
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

l'opzione del compilatore \/GL è incompatibile con la versione installata di Common Language Runtime  
  
 L'errore C1383 si verifica quando si usa una versione precedente di Common Language Runtime con un compilatore più recente e durante la compilazione con **\/clr** e **\/GL.**  
  
 Per risolvere l'errore, non usare **\/GL** con **\/clr** o installare la versione di Common Language Runtime fornita con il compilatore.  
  
 Per altre informazioni, vedere [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md) e [\/GL \(Ottimizzazione intero programma\)](../../build/reference/gl-whole-program-optimization.md).