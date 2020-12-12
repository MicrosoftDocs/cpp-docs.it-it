---
description: "Altre informazioni su: errore dell'analizzatore di espressioni CXX0064"
title: Errore dell‘analizzatore di espressioni CXX0064
ms.date: 11/04/2016
f1_keywords:
- CXX0064
helpviewer_keywords:
- CAN0064
- CXX0064
ms.assetid: aa509e71-0616-41ca-a94e-6c376b041e57
ms.openlocfilehash: 58356a48fc52ee479c92cf5d65494763c3fc4adb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97173194"
---
# <a name="expression-evaluator-error-cxx0064"></a>Errore dell‘analizzatore di espressioni CXX0064

Impossibile impostare un punto di interruzione sulla funzione membro virtuale associata

Un punto di interruzione è stato impostato su una funzione membro virtuale tramite un puntatore a un oggetto, ad esempio:

```
pClass->vfunc( int );
```

È possibile impostare un punto di interruzione su una funzione virtuale immettendo la classe, ad esempio:

```
Class::vfunc( int );
```

Questo errore è identico a CAN0064.
