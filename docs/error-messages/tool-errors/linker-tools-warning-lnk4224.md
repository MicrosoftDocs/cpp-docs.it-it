---
title: Strumenti del linker LNK4224 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK4224
dev_langs:
- C++
helpviewer_keywords:
- LNK4224
ms.assetid: 8624b70e-0b93-43cf-b457-834d38632d0b
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 96399e0c66eb3cb719073b2318513cd680723d97
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-warning-lnk4224"></a>Avviso degli strumenti del linker LNK4224
opzione non è più supportata; ignorato  
  
 Un'opzione del linker obsoleta non valido è stata specificata e viene ignorata.  
  
 Ad esempio, LNK4224 può verificarsi se è presente una direttiva viene visualizzato. obj. La direttiva /comment aggiunti tramite il [comment (C/C++)](../../preprocessor/comment-c-cpp.md) pragma, utilizzando l'opzione obsoleta exestr. Utilizzare dumpbin [/all](../../build/reference/all.md) per visualizzare le direttive del linker in un file obj.  
  
 Se possibile, modificare l'origine del file obj e rimuovere il pragma. Se si ignora questo avviso, è possibile che un file eseguibile compilato con **/clr: pure** non funzionerà come previsto.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore LNK4224.  
  
```  
// LNK4224.cpp  
// compile with: /c /Zi  
// post-build command: link LNK4224.obj /debug /debugtype:map  
int main () {  
   return 0;  
}  
```