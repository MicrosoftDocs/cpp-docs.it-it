---
title: "Errore del compilatore C2441 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2441"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2441"
ms.assetid: ffbd6573-777a-48dd-892f-5cf4a758dcab
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C2441
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'variabile': un simbolo dichiarato con \_\_declspec\(process\) deve essere const in modalità \/clr:pure  
  
 Per impostazione predefinita, in modalità **\/clr:pure** le variabili sono per dominio applicazione.  Una variabile contrassegnata come `__declspec(process)` in **\/clr:pure** è soggetta a errori se viene modificata in un dominio applicazione e letta in un altro.  
  
 Le variabili per processo vengono pertanto impostate come `const` in **\/clr:pure** e rese disponibili in sola lettura in tutti i domini applicazione.  
  
 Per ulteriori informazioni, vedere [processo](../../cpp/process.md) e [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2441:  
  
```  
// C2441.cpp  
// compile with: /clr:pure /c  
__declspec(process) int i;   // C2441  
__declspec(process) const int j = 0;   // OK  
```