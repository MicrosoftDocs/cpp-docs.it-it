---
title: "Avviso del compilatore (livello 4) C4400 | Microsoft Docs"
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
  - "C4400"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4400"
ms.assetid: f135fe98-4f92-4e07-9d71-2621b36ee755
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4400
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': qualificatori const\/volatile non supportati con questo tipo  
  
 I qualificatori [const](../../cpp/const-cpp.md)e [volatile](../../cpp/volatile-cpp.md) non sono supportati nelle variabili dei tipi Common Language Runtime.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4400:  
  
```  
// C4400.cpp  
// compile with: /clr /W4  
// C4401 expected  
using namespace System;  
#pragma warning (disable : 4101)  
int main() {  
   const String^ str;   // C4400  
   volatile String^ str2;   // C4400  
}  
```