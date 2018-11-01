---
title: Errore del compilatore C2435
ms.date: 11/04/2016
f1_keywords:
- C2435
helpviewer_keywords:
- C2435
ms.assetid: be6aa8f8-579b-42ea-bdd8-2d01393646ad
ms.openlocfilehash: 5cd7a83575da7ab2a30401406d0c2ccf6c1b603e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50438533"
---
# <a name="compiler-error-c2435"></a>Errore del compilatore C2435

> «*var*': l'inizializzazione dinamica richiede codice CRT gestito; Impossibile compilare con /CLR: safe

## <a name="remarks"></a>Note

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

Inizializzazione della variabile globale per dominio di applicazione richiede la libreria CRT compilate con `/clr:pure`, che non produce un'immagine di verificabile.

Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md) e [process](../../cpp/process.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2435:

```cpp
// C2435.cpp
// compile with: /clr:safe /c
int globalvar = 0;   // C2435

__declspec(process)
int globalvar2 = 0;
```