---
title: "Avviso del compilatore (livello 3) C4073 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4073"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4073"
ms.assetid: 50081a6e-6acd-45ff-8484-9b1ea926cc5c
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 3) C4073
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

inizializzatori inseriti nell'area di inizializzazione della libreria  
  
 Solo gli sviluppatori di librerie di altri produttori dovrebbero utilizzare l'area di inizializzazione della libreria, specificata da [\#pragma init\_seg](../../preprocessor/init-seg.md).  Il seguente codice di esempio genera l'errore C4073:  
  
```  
// C4073.cpp  
// compile with: /W3  
#pragma init_seg(lib)   // C4073  
  
// try this line to resolve the warning  
// #pragma init_seg(user)  
  
int main() {  
}  
```