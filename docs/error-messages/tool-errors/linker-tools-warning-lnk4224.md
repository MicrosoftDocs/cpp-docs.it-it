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
ms.openlocfilehash: 1bdffdf3469cc3a0e5d41b0504b882513d44b63c
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "34703987"
---
# <a name="linker-tools-warning-lnk4224"></a>Avviso degli strumenti del linker LNK4224

> *opzione* è non è più supportata e verrà ignorato

## <a name="remarks"></a>Note

Un'opzione del linker obsoleta non valido è stata specificata e viene ignorata.

Ad esempio, LNK4224 può verificarsi se è presente una direttiva viene visualizzato. obj. La direttiva /comment aggiunti tramite il [comment (C/C++)](../../preprocessor/comment-c-cpp.md) pragma, utilizzando l'opzione obsoleta exestr. Utilizzare dumpbin [/all](../../build/reference/all.md) per visualizzare le direttive del linker in un file obj.

Se possibile, modificare l'origine del file obj e rimuovere il pragma. Se si ignora questo avviso, è possibile che un file eseguibile compilato con **/clr: pure** non funzionerà come previsto. Il **/clr: pure** opzione del compilatore è deprecato in Visual Studio 2015 e non supportata in Visual Studio 2017.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore LNK4224.

```cpp
// LNK4224.cpp
// compile with: /c /Zi
// post-build command: link LNK4224.obj /debug /debugtype:map
int main () {
   return 0;
}
```