---
title: Errore del compilatore C2021 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2021
dev_langs:
- C++
helpviewer_keywords:
- C2021
ms.assetid: 064f32e2-3794-48d5-9767-991003dcb36a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 31169c59ba9731d8eda52f22644294b8bb680bf2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46101994"
---
# <a name="compiler-error-c2021"></a>Errore del compilatore C2021

previsto valore esponente. Trovato 'character'

Il carattere usato come esponente di una costante a virgola mobile non è un numero valido. Assicurarsi di usare un esponente che è compreso nell'intervallo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2021:

```
// C2021.cpp
float test1=1.175494351E;   // C2021
```

## <a name="example"></a>Esempio

Possibile soluzione:

```
// C2021b.cpp
// compile with: /c
float test2=1.175494351E8;
```