---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4230'
title: Avviso del compilatore (livello 1) C4230
ms.date: 11/04/2016
f1_keywords:
- C4230
helpviewer_keywords:
- C4230
ms.assetid: a4be8729-74b6-44df-a5ea-e3f45aad0f8f
ms.openlocfilehash: b5427d4ab87a1ba1c65456dab379f76100e75fea
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97266287"
---
# <a name="compiler-warning-level-1-c4230"></a>Avviso del compilatore (livello 1) C4230

utilizzato anacronismo: modificatori/qualificatori sparpagliati; qualificatore ignorato

L'utilizzo di un qualificatore prima di un modificatore Microsoft, ad esempio, **`__cdecl`** è una procedura obsoleta.

## <a name="example"></a>Esempio

```cpp
// C4230.cpp
// compile with: /W1 /LD
int __cdecl const function1();   // C4230 const ignored
```
