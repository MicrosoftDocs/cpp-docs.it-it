---
description: 'Altre informazioni su: avviso del compilatore C4986'
title: Avviso del compilatore C4986
ms.date: 11/04/2016
f1_keywords:
- C4986
helpviewer_keywords:
- C4986
ms.assetid: a3a7b008-29dd-4203-85f3-7740ab6790bb
ms.openlocfilehash: 5d068ee376c6ae6ce1fb3563d66c7bda871da0ef
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336045"
---
# <a name="compiler-warning-c4986"></a>Avviso del compilatore C4986

'function': la specifica di eccezione non corrisponde alla dichiarazione precedente

Questo avviso può essere generato quando esiste una specifica di eccezione in una dichiarazione e non nell'altra.

Per impostazione predefinita, l'avviso C4986 non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## <a name="examples"></a>Esempio

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
