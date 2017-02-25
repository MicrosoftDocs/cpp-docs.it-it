---
title: "Avviso del compilatore (livello 1) C4005 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4005"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4005"
ms.assetid: 7f2dc79a-9fcb-4d5b-be61-120d9cb487ad
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4005
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': ridefinizione macro  
  
 L'identificatore della macro è stato definito due volte.  Viene utilizzata la seconda definizione della macro.  
  
### Possibili cause  
  
1.  Definizione di una macro nella riga di comando e nel codice con una direttiva `#define`.  
  
2.  Macro importate dai file di inclusione.  
  
### Per correggere valutando le seguenti possibili soluzioni  
  
1.  Rimuovere una delle definizioni.  
  
2.  Utilizzare una direttiva [\#undef](../../preprocessor/hash-undef-directive-c-cpp.md) prima della seconda definizione.  
  
 Il seguente codice di esempio genera l'errore C4005:  
  
```  
// C4005.cpp  
// compile with: /W1 /EHsc  
#include <iostream>  
using namespace std;  
  
#define TEST "test1"  
#define TEST "test2"   // C4005 delete or rename to resolve the warning  
  
int main() {  
   cout << TEST << endl;  
}  
```