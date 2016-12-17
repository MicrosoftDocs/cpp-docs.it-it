---
title: "Avviso degli strumenti del linker LNK4224 | Microsoft Docs"
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
  - "LNK4224"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4224"
ms.assetid: 8624b70e-0b93-43cf-b457-834d38632d0b
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso degli strumenti del linker LNK4224
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'opzione' non è più supportato e verrà ignorato  
  
 È stata specificata un'opzione del linker non valida e obsoleta che verrà ignorata.  
  
 L'avviso LNK4224 può essere visualizzato, ad esempio, se nel file obj è presente una direttiva \/comment.  La direttiva \/comment viene aggiunta mediante il pragma [comment](../../preprocessor/comment-c-cpp.md), utilizzando l'opzione deprecata exestr.  Per visualizzare le direttive del linker in un file obj, utilizzare dumpbin [\/ALL](../../build/reference/all.md).  
  
 Se possibile, modificare l'origine del file obj e rimuovere il pragma.  Se l'avviso viene ignorato, è possibile che un file eseguibile compilato con **\/clr:pure** non venga eseguito nel modo previsto.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore LNK4224:  
  
```  
// LNK4224.cpp  
// compile with: /c /Zi  
// post-build command: link LNK4224.obj /debug /debugtype:map  
int main () {  
   return 0;  
}  
```