---
title: Avviso degli strumenti del linker LNK4224
ms.date: 11/04/2016
f1_keywords:
- LNK4224
helpviewer_keywords:
- LNK4224
ms.assetid: 8624b70e-0b93-43cf-b457-834d38632d0b
ms.openlocfilehash: eb0a019cc80e5218a52697b8bcd5e91b811d04d3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50465325"
---
# <a name="linker-tools-warning-lnk4224"></a>Avviso degli strumenti del linker LNK4224

> *opzione* è non è più supportata e verrà ignorato

## <a name="remarks"></a>Note

Un'opzione del linker obsoleto, non è valido è stata specificata e ignorata.

Ad esempio, LNK4224 può verificarsi se è presente in una direttiva /comment. obj. La direttiva /comment sono stati aggiunti tramite il [comment (C/C++)](../../preprocessor/comment-c-cpp.md) pragma, utilizzando l'opzione exestr deprecate. Usare dumpbin [/all](../../build/reference/all.md) per visualizzare le direttive del linker in un file con estensione obj.

Se possibile, modificare l'origine del file obj e rimuovere la direttiva pragma. Se si ignora questo avviso, è possibile che un file eseguibile compilato con **/clr: pure** non verranno eseguiti come previsto. Il **/clr: pure** opzione del compilatore è obsoleta in Visual Studio 2015 e non sono supportata in Visual Studio 2017.

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