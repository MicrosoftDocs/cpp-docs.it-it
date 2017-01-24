---
title: "Errore del compilatore C3241 | Microsoft Docs"
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
  - "C3241"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3241"
ms.assetid: 2ca14879-bba0-4a23-b22a-72cfff92d6a4
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3241
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'metodo': questo metodo non è stato introdotto da 'interfaccia'  
  
 Quando si esegue l'override esplicito di una funzione, la firma della funzione deve corrispondere esattamente alla dichiarazione della stessa.  
  
 Il seguente codice di esempio genera l'errore C3241:  
  
```  
// C3241.cpp  
#pragma warning(disable:4199)  
  
__interface IX12A {  
   void mf();  
};  
  
__interface IX12B {  
   void mf(int);  
};  
  
class CX12 : public IX12A, public IX12B { // C3241  
   void IX12A::mf(int);  
};  
```