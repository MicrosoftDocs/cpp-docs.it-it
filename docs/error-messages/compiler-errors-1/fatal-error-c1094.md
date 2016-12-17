---
title: "Errore irreversibile C1094 | Microsoft Docs"
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
  - "C1094"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1094"
ms.assetid: 9e1193b2-cb95-44f9-bf6f-019e0d41dd97
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile C1094
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'\-Zmvalore1': opzione della riga di comando non coerente con il valore utilizzato per compilare l'intestazione precompilata \('\-Zmvalore2'\)  
  
 Il valore passato a [\/Yc](../../build/reference/yc-create-precompiled-header-file.md) deve essere lo stesso che viene passato a [\/Yu](../../build/reference/yu-use-precompiled-header-file.md) \(i valori **\/Zm** devono essere gli stessi in tutte le compilazioni che utilizzano o creano lo stesso file di intestazione precompilata\).  
  
 Il seguente codice di esempio genera l'errore C1094:  
  
```  
// C1094.h  
int func1();  
```  
  
 quindi  
  
```  
// C1094.cpp  
// compile with: /Yc"C1094.h" /Zm200  
int u;  
int main() {  
   int sd = 32;  
}  
#include "C1094.h"  
```  
  
 quindi  
  
```  
// C1094b.cpp  
// compile with: /Yu"C1094.h" /Zm300 /c  
#include "C1094.h"   // C1094 compile with /Zm200  
void Test() {}  
```