---
title: Errore dell'analizzatore di espressioni CXX0064 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0064
dev_langs:
- C++
helpviewer_keywords:
- CAN0064
- CXX0064
ms.assetid: aa509e71-0616-41ca-a94e-6c376b041e57
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b16133484af5a2225f79c5d293a2c8edd948bdb2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46025893"
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