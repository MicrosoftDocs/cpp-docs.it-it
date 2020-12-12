---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4224'
title: Avviso degli strumenti del linker LNK4224
ms.date: 11/04/2016
f1_keywords:
- LNK4224
helpviewer_keywords:
- LNK4224
ms.assetid: 8624b70e-0b93-43cf-b457-834d38632d0b
ms.openlocfilehash: 35cae5c46b91493a40d4d52650f781010f6d6379
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327913"
---
# <a name="linker-tools-warning-lnk4224"></a>Avviso degli strumenti del linker LNK4224

> l' *opzione* non è più supportata. ignorato

## <a name="remarks"></a>Commenti

È stata specificata e ignorata un'opzione del linker non valida, obsoleta.

Ad esempio, LNK4224 può verificarsi se viene visualizzata una direttiva/comment in. obj. È stata aggiunta la direttiva/comment tramite il pragma [Comment (C/C++)](../../preprocessor/comment-c-cpp.md) , usando l'opzione deprecated exestr. Utilizzare DUMPBIN [per](../../build/reference/all.md) visualizzare le direttive del linker in un file con estensione obj.

Se possibile, modificare l'origine per il. obj e rimuovere il pragma. Se si ignora questo avviso, è possibile che un file eseguibile compilato con **/CLR: pure** non venga eseguito come previsto. L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

## <a name="example"></a>Esempio

L'esempio seguente genera l'LNK4224.

```cpp
// LNK4224.cpp
// compile with: /c /Zi
// post-build command: link LNK4224.obj /debug /debugtype:map
int main () {
   return 0;
}
```
