---
description: 'Altre informazioni su: errore del compilatore C3417'
title: Errore del compilatore C3417
ms.date: 11/04/2016
f1_keywords:
- C3417
helpviewer_keywords:
- C3417
ms.assetid: 3e7869ea-8948-42fb-ba30-6ccafe499c35
ms.openlocfilehash: d51985f619c436a1dfd6af06b97c72c3d06c7967
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321897"
---
# <a name="compiler-error-c3417"></a>Errore del compilatore C3417

' member ': i tipi di valore non possono contenere funzioni membro speciali definite dall'utente

I tipi di valore non possono contenere funzioni quali un costruttore di istanza predefinito, un distruttore o un costruttore di copia.

L'esempio seguente genera l'C3517:

```cpp
// C3417.cpp
// compile with: /clr /c
value class VC {
   VC(){}   // C3417

   // OK
   static VC(){}
   VC(int i){}
};
```
