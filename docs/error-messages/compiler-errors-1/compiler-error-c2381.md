---
title: "Errore del compilatore C2381 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2381"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2381"
ms.assetid: cc765f67-64ac-406f-93ef-ae7d548d58d7
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2381
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': ridefinizione. \_\_declspec\(noreturn\) differente  
  
 Una funzione è stata dichiarata e definita, ma nella definizione è stato utilizzato il modificatore `__declspec` [noreturn](../../cpp/noreturn.md).  L'utilizzo di `noreturn` rappresenta una ridefinizione della funzione ed è necessario che sia coerente nella dichiarazione e nella definizione.  
  
 Il seguente codice di esempio genera l'errore C2381:  
  
```  
// C2381.cpp  
// compile with: /c  
void f1();  
void __declspec(noreturn) f1() {}   // C2381  
void __declspec(noreturn) f2() {}   // OK  
```