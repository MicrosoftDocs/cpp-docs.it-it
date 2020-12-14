---
description: 'Altre informazioni su: errore del compilatore C3645'
title: Errore del compilatore C3645
ms.date: 11/04/2016
f1_keywords:
- C3645
helpviewer_keywords:
- C3645
ms.assetid: 346da528-ae86-4cd0-9654-f41bee26ac0d
ms.openlocfilehash: 198b22b80a4975d8bd6fab130c075621f248a93c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97203770"
---
# <a name="compiler-error-c3645"></a>Errore del compilatore C3645

' Function ': non è possibile usare __clrcall per le funzioni compilate in codice nativo

La presenza di alcune parole chiave in una funzione causerà la compilazione della funzione in nativa.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3645.

```cpp
// C3645.cpp
// compile with: /clr /c
#pragma unmanaged
int __clrcall dog() {}   // C3645
```
