---
title: Del compilatore (livello 2) avviso C4244 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4244
dev_langs:
- C++
helpviewer_keywords:
- C4244
ms.assetid: 2c19d157-21d1-42c2-a6c0-3f30f2ce3813
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2c6dd4b15fe3bda6468f8d5bebcf7cb0926ba69e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46084796"
---
# <a name="compiler-warning-level-2-c4244"></a>Avviso del compilatore (livello 2) C4244

'argument': conversione da 'type1' a 'type2'. possibile perdita di dati

Un tipo a virgola mobile è stato convertito in un tipo integer.  Potrebbe essersi verificata una perdita di dati.

Se viene visualizzato l'errore C4244, è consigliabile modificare il programma per poter usare tipi compatibili o aggiungere al codice la logica, per assicurarsi che l'intervallo di valori possibili sia sempre compatibili con i tipi usati.

L'errore C4244 possono inoltre attivare al livello 3 e 4. visualizzare [avviso del compilatore (livelli 3 e 4) C4244](../../error-messages/compiler-warnings/compiler-warning-levels-3-and-4-c4244.md) per altre informazioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4244:

```
// C4244_level2.cpp
// compile with: /W2

int f(int x){ return 0; }
int main() {
   double x = 10.1;
   int i = 10;
   return (f(x));   // C4244
   // try the following line instead
   // return (f(i));
}
```