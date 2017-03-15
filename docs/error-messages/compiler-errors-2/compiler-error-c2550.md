---
title: "Errore del compilatore C2550 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2550"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2550"
ms.assetid: 3293f53e-ee66-4035-920d-34e115c3a24c
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2550
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': gli elenchi di inizializzatori di un costruttore sono consentiti solo nella definizione del costruttore  
  
 Un elenco di inizializzatori di una classe base viene utilizzato sulla definizione di una funzione che non è un costruttore.  
  
 Il seguente codice di esempio genera l'errore C2550:  
  
```  
// C2550.cpp  
// compile with: /c  
class C {  
public:  
   C();  
};  
  
class D : public C {  
public:  
   D();  
   void func();  
};  
  
void D::func() : C() {}  // C2550  
D::D() : C() {}   // OK  
```