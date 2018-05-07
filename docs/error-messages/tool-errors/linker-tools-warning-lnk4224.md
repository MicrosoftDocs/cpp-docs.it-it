---
title: Strumenti del linker LNK4224 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4224
dev_langs:
- C++
helpviewer_keywords:
- LNK4224
ms.assetid: 8624b70e-0b93-43cf-b457-834d38632d0b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7a051e341a22871b4229617b3958cb68dedc2921
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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