---
title: "Errore del compilatore C2879 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2879"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2879"
ms.assetid: ac92b645-2394-49de-8632-43d44e0553ed
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2879
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'simbolo': tramite la definizione di un alias di uno spazio dei nomi può essere attribuito un nome alternativo solo a uno spazio dei nomi esistente  
  
 Non è possibile creare l'[alias di uno spazio dei nomi](../../misc/namespace-alias.md) in un simbolo diverso da uno spazio dei nomi.  
  
 Il seguente codice di esempio genera l'errore C2879:  
  
```  
// C2879.cpp  
int main() {  
   int i;  
   namespace A = i;   // C2879 i is not a namespace  
}  
```