---
title: Avviso del compilatore C4986
ms.date: 11/04/2016
f1_keywords:
- C4986
helpviewer_keywords:
- C4986
ms.assetid: a3a7b008-29dd-4203-85f3-7740ab6790bb
ms.openlocfilehash: ae782ea0a11bd72c867ea9532a62d0b14cd98453
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90684392"
---
# <a name="compiler-warning-c4986"></a>Avviso del compilatore C4986

'function': la specifica di eccezione non corrisponde alla dichiarazione precedente

Questo avviso può essere generato quando esiste una specifica di eccezione in una dichiarazione e non nell'altra.

Per impostazione predefinita, l'avviso C4986 non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## <a name="examples"></a>Esempi

L'esempio seguente genera l'C4986.

```cpp
class X { };
void f1() throw (X*);
// ...
void f1()
{
    // ...
}
```

Il seguente esempio elimina questo avviso:

```cpp
class X { };
void f1() throw (X*);
// ...
void f1() throw (X*)
{
    // ...
}
```
