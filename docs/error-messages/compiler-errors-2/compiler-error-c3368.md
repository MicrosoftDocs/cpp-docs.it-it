---
title: Errore del compilatore C3368
ms.date: 11/04/2016
f1_keywords:
- C3368
helpviewer_keywords:
- C3368
ms.assetid: 5bfd5be4-dfa9-4b33-9612-010561b40955
ms.openlocfilehash: f027e2707dc677d93567f91307e9dcfcb8dd682f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62300518"
---
# <a name="compiler-error-c3368"></a>Errore del compilatore C3368

'function declaration': convenzione di chiamata non valida per IDL

La convenzione di chiamata [__stdcall](../../cpp/stdcall.md) o [__cdecl](../../cpp/cdecl.md) può essere usata solo in un file IDL.

L'esempio seguente genera l'errore C3368:

```
// C3368.cpp
// processor: x86
[idl_module(name="Name", dllname="Some.dll")];

[idl_module(name="Name")]
int __fastcall f1();   // C3368
```