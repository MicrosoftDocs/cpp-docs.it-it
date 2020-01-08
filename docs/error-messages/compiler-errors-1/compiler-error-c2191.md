---
title: Errore del compilatore C2191
ms.date: 11/04/2016
f1_keywords:
- C2191
helpviewer_keywords:
- C2191
ms.assetid: 051b8350-e5de-4f51-ab6e-96d32366bcef
ms.openlocfilehash: 66b7d70b9010855ada7b9d24fba80915450a685b
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75301873"
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
