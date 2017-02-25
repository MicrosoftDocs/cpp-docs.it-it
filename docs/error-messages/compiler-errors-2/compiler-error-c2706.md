---
title: "Errore del compilatore C2706 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2706"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2706"
ms.assetid: e18da924-c42d-4b09-8e29-f4e0382d7dc6
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C2706
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\_\_except non valido senza \_\_try. '}' mancante nel blocco \_\_try?  
  
 Non è stata individuata una parentesi graffa di chiusura per un blocco `__try`.  
  
 Il seguente codice di esempio genera l'errore C2706:  
  
```  
// C2706.cpp  
int main() {  
   __try {  
      void f();  
   // C2706  } missing here  
   __except(GetExceptionCode() == 0x0) {  
   }  
}  
```