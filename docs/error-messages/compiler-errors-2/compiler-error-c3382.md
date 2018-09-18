---
title: Errore del compilatore C3382 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3382
dev_langs:
- C++
helpviewer_keywords:
- C3382
ms.assetid: a7603abd-ac4e-4ae6-a02b-3bdc6d1908a6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6da27531b95950a12cb9aa95e8e89da94c556d2d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46035961"
---
# <a name="compiler-error-c3382"></a>Errore del compilatore C3382

'sizeof' non supportato con /clr:safe

Il file di output di una compilazione **/clr:safe** è un file indipendente dai tipi verificabile e sizeof non è supportato perché il valore restituito dell'operatore sizeof è size_t, la cui dimensione varia a seconda del sistema operativo.

Per ulteriori informazioni, vedere,

- [Operatore sizeof](../../cpp/sizeof-operator.md)

- [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)

- [Problemi comuni relativi alla migrazione di Visual C++ a 64 bit](../../build/common-visual-cpp-64-bit-migration-issues.md)

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3382.

```
// C3382.cpp
// compile with: /clr:safe
int main() {
   sizeof( char );   // C3382
}
```