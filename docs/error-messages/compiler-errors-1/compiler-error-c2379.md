---
title: Errore del compilatore C2379 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2379
dev_langs:
- C++
helpviewer_keywords:
- C2379
ms.assetid: 37dc3015-a4af-4341-bbf3-da6150df7e51
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ec340a5a48705eb91bf5bf72ec20ad382f4b262c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46032445"
---
# <a name="compiler-error-c2379"></a>Errore del compilatore C2379

numero di parametri formali ha un tipo diverso quando promosso

Il tipo del parametro specificato non è compatibile, le promozioni di predefinite, con il tipo in una dichiarazione precedente. Si tratta di un errore in ANSI C ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) e un avviso con le estensioni Microsoft (**/Ze**).

L'esempio seguente genera l'errore C2379:

```
// C2379.c
// compile with: /Za
void func();
void func(char);   // C2379, char promotes to int
```