---
description: 'Altre informazioni su: errore del compilatore C3368'
title: Errore del compilatore C3368
ms.date: 11/04/2016
f1_keywords:
- C3368
helpviewer_keywords:
- C3368
ms.assetid: 5bfd5be4-dfa9-4b33-9612-010561b40955
ms.openlocfilehash: 1b7fadb59bc0944b5092a235dfa0cb90c2233daa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97150813"
---
# <a name="compiler-error-c3368"></a>Errore del compilatore C3368

'function declaration': convenzione di chiamata non valida per IDL

La convenzione di chiamata [__stdcall](../../cpp/stdcall.md) o [__cdecl](../../cpp/cdecl.md) può essere usata solo in un file IDL.

L'esempio seguente genera l'errore C3368:

```cpp
// C3368.cpp
// processor: x86
[idl_module(name="Name", dllname="Some.dll")];

[idl_module(name="Name")]
int __fastcall f1();   // C3368
```
