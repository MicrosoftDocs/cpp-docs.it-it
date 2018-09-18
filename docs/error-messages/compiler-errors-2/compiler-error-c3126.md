---
title: Errore del compilatore C3126 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3126
dev_langs:
- C++
helpviewer_keywords:
- C3126
ms.assetid: e72658a3-5d85-4a31-89a4-dbc3d475973d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f794565c9d8054d4b66e7817b5d63fb13795ac3e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46021674"
---
# <a name="compiler-error-c3126"></a>Errore del compilatore C3126

non è possibile definire un'unione 'union' all'interno di un tipo gestito 'type'

Un'unione non può essere definita all'interno di un tipo gestito.

L'esempio seguente genera l'errore C3126:

```
// C3126_2.cpp
// compile with: /clr /c
ref class Test
{
   union x
   {   // C3126
      int a;
      int b;
   };
};
```
