---
title: Avviso del compilatore C4986 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4986
dev_langs:
- C++
helpviewer_keywords:
- C4986
ms.assetid: a3a7b008-29dd-4203-85f3-7740ab6790bb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3f464f2a6e1f76c7d8b9de8bcc2353766aff0854
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46077061"
---
# <a name="compiler-warning-c4986"></a>Avviso del compilatore C4986

'function': la specifica di eccezione non corrisponde alla dichiarazione precedente

Questo avviso può essere generato quando esiste una specifica di eccezione in una dichiarazione e non nell'altra.

Per impostazione predefinita, l'avviso C4986 non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4986.

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