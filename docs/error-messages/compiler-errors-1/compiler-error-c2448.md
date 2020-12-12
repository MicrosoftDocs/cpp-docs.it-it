---
description: 'Altre informazioni su: errore del compilatore C2448'
title: Errore del compilatore C2448
ms.date: 11/04/2016
f1_keywords:
- C2448
helpviewer_keywords:
- C2448
ms.assetid: e255df3c-f861-4b4d-a193-8768cef061a5
ms.openlocfilehash: 8dc6f794a71c89b4b14d0a3f33d5617e296b3dc1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97189613"
---
# <a name="compiler-error-c2448"></a>Errore del compilatore C2448

' Identifier ': l'inizializzatore di tipo funzione sembra essere una definizione di funzione

La definizione della funzione non è corretta.

Questo errore può essere causato da un elenco formale in linguaggio C obsoleto.

L'esempio seguente genera l'C2448:

```cpp
// C2448.cpp
void func(c)
   int c;
{}   // C2448
```
