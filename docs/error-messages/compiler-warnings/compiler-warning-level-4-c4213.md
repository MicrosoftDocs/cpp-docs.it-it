---
title: "Avviso del compilatore (livello 4) C4213 | Microsoft Docs"
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
  - "C4213"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4213"
ms.assetid: 59fc3f61-ebd2-499e-99d7-f57bec11eda1
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4213
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzata estensione non standard: cast su l\-value  
  
 Con le estensioni Microsoft predefinite \(\/Ze\), è possibile utilizzare i cast sul lato sinistro di un'istruzione di assegnazione.  
  
## Esempio  
  
```  
// C4213.c  
// compile with: /W4  
void *a;  
void f()  
{  
   int   i[3];  
   a = &i;  
   *(( int * )a )++ = 3;  // C4213  
}  
  
int main()  
{  
}  
```  
  
 Tali cast non sono validi in compatibilità ANSI \([\/Za](../../build/reference/za-ze-disable-language-extensions.md)\).