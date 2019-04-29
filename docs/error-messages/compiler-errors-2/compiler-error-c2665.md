---
title: Errore del compilatore C2665
ms.date: 11/04/2016
f1_keywords:
- C2665
helpviewer_keywords:
- C2665
ms.assetid: a7f99b61-2eae-4f2b-ba75-ea68fd1e8312
ms.openlocfilehash: 63817c4181edb942f43f41c24fb10278d14f397e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62386889"
---
# <a name="compiler-error-c2665"></a>Errore del compilatore C2665

'function': nessuno degli overload number1 convertila parametri number2 dal tipo 'type'

Un parametro della funzione in overload non può essere convertito nel tipo richiesto.  Possibili risoluzioni:

- Specificare un operatore di conversione.

- Usare la conversione esplicita.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2665.

```
// C2665.cpp
void func(short, char*){}
void func(char*, char*){}

int main() {
   func(0, 1);   // C2665
   func((short)0, (char*)1);   // OK
}
```