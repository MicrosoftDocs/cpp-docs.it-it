---
title: Errore del compilatore C2665 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2665
dev_langs:
- C++
helpviewer_keywords:
- C2665
ms.assetid: a7f99b61-2eae-4f2b-ba75-ea68fd1e8312
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b442e1de0481ef3d00742ed201575526332decff
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46109145"
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