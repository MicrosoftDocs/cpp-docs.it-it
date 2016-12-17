---
title: "Errore del compilatore C3862 | Microsoft Docs"
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
  - "C3862"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3862"
ms.assetid: ba547366-4189-4077-8c00-ab45e08a9533
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3862
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': impossibile compilare una funzione non gestita con \/clr:pure o \/clr:safe  
  
 Una compilazione eseguita con **\/clr:pure** o **\/clr:safe** genera solo un'immagine MSIL, ovvero un'immagine senza codice nativo \(non gestito\).  Non è quindi possibile utilizzare il pragma `unmanaged` in una compilazione **\/clr:pure** o **\/clr:safe** .  
  
 Per ulteriori informazioni, vedere [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md) e [managed, unmanaged](../../preprocessor/managed-unmanaged.md).  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C3862:  
  
```  
// C3862.cpp  
// compile with: /clr:pure /c  
#pragma unmanaged  
void f() {}   // C3862  
```