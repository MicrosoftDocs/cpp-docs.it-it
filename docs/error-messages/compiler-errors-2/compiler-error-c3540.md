---
title: "Errore del compilatore C3540 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3540"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3540"
ms.assetid: 3c0c959c-e3b7-40eb-b922-ccac44bd9d85
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3540
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': sizeof non può essere applicato a un tipo che contiene 'auto'  
  
 L'operatore [sizeof](../../cpp/sizeof-operator.md) non può essere applicato al tipo indicato perché contiene l'identificatore `auto`.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3540.  
  
```  
// C3540.cpp  
// Compile with /Zc:auto  
int main() {  
    auto x = 123;  
    sizeof(x);    // OK  
    sizeof(auto); // C3540  
    return 0;  
}  
```  
  
## Vedere anche  
 [Parola chiave auto](../../cpp/auto-keyword.md)   
 [\/Zc:auto \(deduzione del tipo di variabile\)](../../build/reference/zc-auto-deduce-variable-type.md)   
 [Operatore sizeof](../../cpp/sizeof-operator.md)