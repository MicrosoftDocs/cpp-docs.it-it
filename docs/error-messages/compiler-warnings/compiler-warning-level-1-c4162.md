---
title: "Avviso del compilatore (livello 1) C4162 | Microsoft Docs"
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
  - "C4162"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4162"
ms.assetid: 21ae3c92-501d-4689-ad7d-13753cb65eff
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4162
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': non trovata alcuna funzione con collegamento C  
  
 Una funzione con collegamento C viene dichiarata, ma non trovata.  
  
 Per evitare di visualizzare l'avviso, eseguire la compilazione in un file c, ovvero richiamare il compilatore C.  Se è necessario chiamare il compilatore C\+\+, posizionare extern "C" prima della dichiarazione di funzione.  
  
 Nell'esempio seguente viene generato l'errore C4162:  
  
```  
// C4162.cpp  
// compile with: /c /W1  
unsigned char _bittest(long* a, long b);  
#pragma intrinsic (_bittest)   // C4162  
  
int main() {  
   bool bit;  
   long num = 78002;  
   bit = _bittest(&num, 5);  
}  
```  
  
 Possibile soluzione:  
  
```  
// C4162b.cpp  
// compile with: /c  
extern "C"  
unsigned char _bittest(long* a, long b);  
#pragma intrinsic (_bittest)  
  
int main() {  
   bool bit;  
   long num = 78002;  
   bit = _bittest(&num, 5);  
}  
```