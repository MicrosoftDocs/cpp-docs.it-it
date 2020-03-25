---
title: Avviso del compilatore C4986
ms.date: 11/04/2016
f1_keywords:
- C4986
helpviewer_keywords:
- C4986
ms.assetid: a3a7b008-29dd-4203-85f3-7740ab6790bb
ms.openlocfilehash: df6fc88ffe98dd2b4a3129800c7881f26d4f625b
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80164820"
---
# <a name="compiler-warning-c4986"></a>Avviso del compilatore C4986

'function': la specifica di eccezione non corrisponde alla dichiarazione precedente

Questo avviso può essere generato quando esiste una specifica di eccezione in una dichiarazione e non nell'altra.

Per impostazione predefinita, l'avviso C4986 non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## <a name="example"></a>Esempio

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

## <a name="example"></a>Esempio

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
