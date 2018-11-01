---
title: Errore del compilatore C2947
ms.date: 11/04/2016
f1_keywords:
- C2947
helpviewer_keywords:
- C2947
ms.assetid: 6c056f62-ec90-4883-8a67-aeeb6ec13546
ms.openlocfilehash: 3738c257192134eedb8554b0d875023862441416
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50566758"
---
# <a name="compiler-error-c2947"></a>Errore del compilatore C2947

previsto '>' per terminare il costrutto, trovato 'syntax'

Un elenco di argomenti generica o modello potrebbe non essere stato terminato correttamente.

C2947 può anche essere generato da errori di sintassi.

L'esempio seguente genera l'errore C2947:

```
// C2947.cpp
// compile with: /c
template <typename T>=   // C2947
// try the following line instead
// template <typename T>
struct A {};
```