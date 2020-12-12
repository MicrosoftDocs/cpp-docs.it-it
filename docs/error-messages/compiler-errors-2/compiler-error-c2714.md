---
description: 'Altre informazioni su: errore del compilatore C2714'
title: Errore del compilatore C2714
ms.date: 07/22/2020
f1_keywords:
- C2714
helpviewer_keywords:
- C2714
ms.assetid: 401a5a42-660c-4bad-9d63-1a2d092bc489
ms.openlocfilehash: 7bea0fc27de49f5767b8b250254f255964423cdc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97320831"
---
# <a name="compiler-error-c2714"></a>Errore del compilatore C2714

> `alignof(void)` non è consentito

Un valore non valido è stato passato a un operatore.

## <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [ `alignof` operatore](../../cpp/alignof-operator.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2714.

```cpp
// C2714.cpp
int main() {
   return alignof(void);   // C2714
   return alignof(char);   // OK
}
```
