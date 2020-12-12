---
description: 'Altre informazioni su: errore del compilatore C2157'
title: Errore del compilatore C2157
ms.date: 11/04/2016
f1_keywords:
- C2157
helpviewer_keywords:
- C2157
ms.assetid: babbca24-16dc-4b69-be14-a675029249c1
ms.openlocfilehash: 4d8619d3d27bd9a1cb0c5323d9fdbf462b043ecf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97181318"
---
# <a name="compiler-error-c2157"></a>Errore del compilatore C2157

'function': deve essere dichiarato prima dell'utilizzo in un elenco pragma

Il nome della funzione non è stato dichiarato prima di essere usato come riferimento nell'elenco delle funzioni per un pragma [alloc_text](../../preprocessor/alloc-text.md) .

L'esempio seguente genera l'errore C2157:

```cpp
// C2157.cpp
// compile with: /c
#pragma alloc_text( "func", func)   // C2157

// OK
extern "C" void func();
#pragma alloc_text( "func", func)
```
