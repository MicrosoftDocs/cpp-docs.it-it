---
title: "Errore del compilatore C2434 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2434"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2434"
ms.assetid: 01329e26-7c74-4219-b74f-69e3a40c9738
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2434
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'simbolo': impossibile effettuare l'inizializzazione dinamica in modalità \/clr:pure di un simbolo dichiarato con \_\_declspec\(process\)  
  
 Non è possibile inizializzare dinamicamente una variabile per processo in **\/clr:pure**.  Per ulteriori informazioni, vedere [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md) e [processo](../../cpp/process.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2434:  
  
```  
// C2434.cpp  
// compile with: /clr:pure /c  
int f() { return 0; }  
__declspec(process) int i = f();   // C2434  
__declspec(process) int i2 = 0;   // OK  
```