---
title: "Avviso del compilatore (livello 1) C4393 | Microsoft Docs"
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
  - "C4393"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4393"
ms.assetid: 353a0539-d1ea-4c1b-8849-c9b321ec9842
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4393
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var': const senza effetti sul membro dati literal; verrà ignorata  
  
 Un membro dati [literal](../../windows/literal-cpp-component-extensions.md) è stato specificato anche come const. Poiché un membro dati literal implica const, non è necessario aggiungere const alla dichiarazione.  
  
 Il seguente codice di esempio genera l'errore C4393:  
  
```  
// C4393.cpp  
// compile with: /clr /W1 /c  
ref struct Y1 {  
   literal const int staticConst = 10;   // C4393  
   literal int staticConst2 = 10;   // OK  
};  
```