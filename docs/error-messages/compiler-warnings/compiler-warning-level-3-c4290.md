---
title: "Avviso del compilatore (livello 3) C4290 | Microsoft Docs"
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
  - "C4290"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4290"
ms.assetid: d1c6d85b-28e0-4a1f-9d48-23593337a6fb
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4290
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

specifica di una funzione C\+\+ ignorata eccetto che per indicare che una funzione non è \_\_declspec\(nothrow\)  
  
 Una funzione viene dichiarata mediante la specifica delle eccezioni accettata ma non implementata da Visual C\+\+.  Per utilizzare codice con specifiche delle eccezioni ignorate durante la compilazione nelle versioni future che supportano tali specifiche, potrebbe essere necessario ricompilarlo e collegarlo.  
  
 Per ulteriori informazioni, vedere [Specifiche di eccezioni \(generazione\)](../../cpp/exception-specifications-throw-cpp.md).  
  
 Per evitare la visualizzazione dell'avviso, utilizzare il seguente pragma [warning](../../preprocessor/warning.md):  
  
```  
#pragma warning( disable : 4290 )  
```  
  
 Nell'esempio seguente viene generato l'avviso C4290:  
  
```  
// C4290.cpp  
// compile with: /EHs /W3 /c  
void f1(void) throw(int) {}   // C4290  
  
// OK  
void f2(void) throw() {}  
void f3(void) throw(...) {}  
```