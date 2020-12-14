---
description: 'Altre informazioni su: errore del compilatore C2165'
title: Errore del compilatore C2165
ms.date: 11/04/2016
f1_keywords:
- C2165
helpviewer_keywords:
- C2165
ms.assetid: b108313b-b8cb-4dce-b2ec-f2b31c9cdc87
ms.openlocfilehash: 6c019a1f2fe9edd92d1ebd57b67fd65da262accf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97274632"
---
# <a name="compiler-error-c2165"></a>Errore del compilatore C2165

'keyword': impossibile modificare i puntatori ai dati

La **`__stdcall`** **`__cdecl`** **`__fastcall`** parola chiave, o tenta di modificare un puntatore ai dati.

L'esempio seguente genera l'errore C2165:

```cpp
// C2165.cpp
// compile with: /c
char __cdecl *p;   // C2165
char *p;   // OK
```
