---
title: Errore del compilatore C2632 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2632
dev_langs:
- C++
helpviewer_keywords:
- C2632
ms.assetid: b15a6b1b-42d2-4e1b-8660-e6bfde61052d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7bf03c35c60bebb52c94ed04cca2349f35c06fbc
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46093650"
---
# <a name="compiler-error-c2632"></a>Errore del compilatore C2632

'type1' seguito da 'type2' non è valido

Questo errore può essere causato mancanza di codice tra due identificatori di tipi.

L'esempio seguente genera l'errore C2632:

```
// C2632.cpp
int float i;   // C2632
```

Questo errore può essere generato anche in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003. `bool` è ora un tipo appropriato. Nelle versioni precedenti, `bool` era un typedef, ed era possibile creare identificatori con lo stesso nome.

L'esempio seguente genera l'errore C2632:

```
// C2632_2.cpp
// compile with: /LD
void f(int bool);   // C2632
```

Per risolvere questo errore, in modo che il codice è valido nelle versioni di Visual Studio .NET 2003 e Visual Studio .NET di Visual C++, rinominare l'identificatore.