---
title: "Errore del compilatore C2825 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2825"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2825"
ms.assetid: c832f1c1-5184-4fc2-9356-12b21daa7af3
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2825
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

var: deve essere una classe o uno spazio dei nomi quando seguito da '::'  
  
 Tentativo fallito di formare un nome completo.  
  
 Assicurarsi che il codice non contenga, ad esempio, una dichiarazione di funzione il cui nome inizia con ::.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C2825:  
  
```  
// C2825.cpp  
typedef int i;  
int main() {  
   int* p = new int;  
   p->i::i();   // C2825  
   // try the following line instead  
   // p->i::~i();  
}  
```