---
title: "Errore del compilatore C2868 | Microsoft Docs"
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
  - "C2868"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2868"
ms.assetid: 6ff5837b-e66d-44d1-9d17-80af35e08d08
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2868
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': sintassi non valida per la dichiarazione using. Previsto nome completo  
  
 Per una [dichiarazione using](../../cpp/using-declaration.md) è necessario un [nome completo](http://msdn.microsoft.com/it-it/3fefb16d-8120-4627-8b3f-3d90fbdcd1df).  
  
 Il seguente codice di esempio genera l'errore C2868:  
  
```  
// C2868.cpp  
class X {  
public:  
   int i;  
};  
  
class Y : X {  
public:  
   using X::i;   // OK  
};  
  
int main() {  
   using X;   // C2868  
}  
```