---
title: "virtual (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "virtual_cpp"
  - "virtual"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi base, virtuale"
  - "classi base virtuali, dichiarazione"
  - "funzioni virtual, dichiarazione"
  - "virtual (parola chiave) [C++]"
ms.assetid: c2eb987d-6cf3-43b6-aa0c-29a6f561b1ae
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# virtual (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La parola chiave `virtual` dichiara una funzione virtuale o una classe base virtuale.  
  
## Sintassi  
  
```  
virtual [type-specifiers] member-function-declarator  
virtual [access-specifier] base-class-name  
```  
  
#### Parametri  
 `type-specifiers`  
 Specifica il tipo restituito della funzione interna virtuale.  
  
 `member-function-declarator`  
 Dichiara una nuova funzione interna.  
  
 `access-specifier`  
 Definisce il livello di accesso alla classe base, ovvero `public`, `protected` o `private`.  Può apparire prima o dopo la parola chiave `virtual`.  
  
 `base-class-name`  
 Identifica un tipo della classe dichiarato precedentemente.  
  
## Note  
 Per altre informazioni, vedere [Funzioni virtuali](../cpp/virtual-functions.md) e [Classi base virtuali](../misc/virtual-base-classes.md).  
  
 Vedere anche le parole chiave [class](../cpp/class-cpp.md), [private](../cpp/private-cpp.md), [public](../cpp/public-cpp.md) e [protected](../cpp/protected-cpp.md).  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)