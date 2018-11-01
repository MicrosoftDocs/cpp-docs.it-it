---
title: Errore dell‘analizzatore di espressioni CXX0064
ms.date: 11/04/2016
f1_keywords:
- CXX0064
helpviewer_keywords:
- CAN0064
- CXX0064
ms.assetid: aa509e71-0616-41ca-a94e-6c376b041e57
ms.openlocfilehash: 71e4e3e87b33849e6b487b79268ebc9574c2e5a6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50511865"
---
# <a name="expression-evaluator-error-cxx0064"></a>Errore dell‘analizzatore di espressioni CXX0064

non è possibile impostare un punto di interruzione nella funzione membro virtuale associato

Un punto di interruzione è stata impostata su una funzione membro virtuale tramite un puntatore a un oggetto, ad esempio:

```
pClass->vfunc( int );
```

Immettendo, ad esempio la classe, è possibile impostare un punto di interruzione su una funzione virtuale:

```
Class::vfunc( int );
```

Questo errore è identico all'errore CAN0064.