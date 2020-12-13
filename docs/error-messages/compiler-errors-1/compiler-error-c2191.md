---
description: 'Altre informazioni su: errore del compilatore C2191'
title: Errore del compilatore C2191
ms.date: 11/04/2016
f1_keywords:
- C2191
helpviewer_keywords:
- C2191
ms.assetid: 051b8350-e5de-4f51-ab6e-96d32366bcef
ms.openlocfilehash: b3b2133e70eeae566a972b0e5db11105b316d6f7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337668"
---
# <a name="compiler-error-c2191"></a>Errore del compilatore C2191

secondo elenco di parametri più lungo del primo

Una funzione C è stata dichiarata una seconda volta con un elenco di parametri più lungo. C non supporta le funzioni in overload.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2191:

```c
// C2191.c
// compile with: /Za /c
void func( int );
void func( int, float );   // C2191 different parameter list
void func2( int, float );   // OK
```
