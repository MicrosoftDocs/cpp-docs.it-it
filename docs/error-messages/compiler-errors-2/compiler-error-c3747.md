---
title: Errore del compilatore C3747
ms.date: 11/04/2016
f1_keywords:
- C3747
helpviewer_keywords:
- C3747
ms.assetid: a9a4be67-5d9c-4dcc-9ae9-baae46cbecde
ms.openlocfilehash: 860a990e35b0d51dfc1316a11a2d2512eb40c273
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50574358"
---
# <a name="compiler-error-c3747"></a>Errore del compilatore C3747

parametro di tipo predefinito mancante: parametro param

Generica o modello di parametri con valori predefiniti non possono essere seguiti nell'elenco dei parametri per i parametri privi di valori predefiniti.

L'esempio seguente genera l'errore C3747:

```
// C3747.cpp
template <class T1 = int, class T2>   // C3747
struct MyStruct {};
```

Possibile soluzione:

```
// C3747b.cpp
// compile with: /c
template <class T1, class T2 = int>
struct MyStruct {};
```