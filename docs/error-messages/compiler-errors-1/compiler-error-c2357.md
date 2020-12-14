---
description: 'Altre informazioni su: errore del compilatore C2357'
title: Errore del compilatore C2357
ms.date: 11/04/2016
f1_keywords:
- C2357
helpviewer_keywords:
- C2357
ms.assetid: d1083945-0ea2-4385-9e66-8c665978806c
ms.openlocfilehash: a58317fc4706d6385d3753a434c8e4fd80dc79b1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97276738"
---
# <a name="compiler-error-c2357"></a>Errore del compilatore C2357

' Identifier ': deve essere una funzione di tipo ' type '

Il codice dichiara una versione della `atexit` funzione che non corrisponde alla versione dichiarata internamente dal compilatore. Dichiarare `atexit` come segue:

```
int __cdecl atexit(void (__cdecl *)());
```

Per ulteriori informazioni, vedere [init_seg](../../preprocessor/init-seg.md).

L'esempio seguente genera l'C2357:

```cpp
// C2357.cpp
// compile with: /c
// C2357 expected
#pragma warning(disable : 4075)
// Uncomment the following line to resolve.
// int __cdecl myexit(void (__cdecl *)());
#pragma init_seg(".mine$m",myexit)
```
