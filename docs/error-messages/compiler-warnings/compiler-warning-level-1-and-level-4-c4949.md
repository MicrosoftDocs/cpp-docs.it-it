---
title: "Avviso del compilatore (livelli 1 e 4) C4949 | Microsoft Docs"
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
  - "C4949"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4949"
ms.assetid: 34f45a05-c115-49cb-9f67-0bd4f0735d9b
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livelli 1 e 4) C4949
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

i pragma 'managed' e 'unmanaged' sono significativi solo se compilati con '\/clr\[:opzione\]'  
  
 Il compilatore ignora i pragma [managed](../../preprocessor/managed-unmanaged.md) e unmanaged quando il codice sorgente non è compilato con [\/clr](../../build/reference/clr-common-language-runtime-compilation.md).  L'avviso è informativo.  
  
 Il seguente codice di esempio genera l'errore C4949:  
  
```  
// C4949.cpp  
// compile with: /LD /W1  
#pragma managed   // C4949  
```  
  
 Quando **\#pragma unmanaged** è utilizzato con **\/clr**, l'avviso C4949 è di livello 4.  
  
 Il seguente codice di esempio genera l'errore C4949:  
  
```  
// C4949b.cpp  
// compile with: /LD /W4  
#pragma unmanaged   // C4949  
```