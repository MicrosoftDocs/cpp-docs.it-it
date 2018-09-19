---
title: Errore del compilatore C2191 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2191
dev_langs:
- C++
helpviewer_keywords:
- C2191
ms.assetid: 051b8350-e5de-4f51-ab6e-96d32366bcef
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6e739c5c9fc77c4c9658afb2f5f6d9568c6f43bb
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46088358"
---
# <a name="compiler-error-c2191"></a>Errore del compilatore C2191

secondo elenco di parametri più lungo del primo

Una funzione C è stata dichiarata una seconda volta con un elenco di parametri più lungo. C non supporta le funzioni in overload.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2191:

```
// C2191.c
// compile with: /Za /c
void func( int );
void func( int, float );   // C2191 different parameter list
void func2( int, float );   // OK
```