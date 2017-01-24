---
title: "Avviso del compilatore (livello 1) C4508 | Microsoft Docs"
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
  - "C4508"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4508"
ms.assetid: c05f113b-b789-4df0-a4ef-78bce4767021
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4508
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': la funzione deve restituire un valore. Verrà restituito il tipo 'void'  
  
 Per la funzione non è stato specificato il tipo restituito.  In questo caso viene restituito anche l'avviso C4430 e il compilatore implementa la correzione riportata nell'avviso C4430 \(il valore predefinito è int\).  
  
 Per risolvere il problema, dichiarare in modo esplicito il tipo di funzioni restituito.  
  
 Il seguente codice di esempio genera l'errore C4508:  
  
```  
// C4508.cpp  
// compile with: /W1 /c  
#pragma warning (disable : 4430)  
func() {}   // C4508  
void func2() {}   // OK  
```