---
title: Errore del compilatore C2435
ms.date: 11/04/2016
f1_keywords:
- C2435
helpviewer_keywords:
- C2435
ms.assetid: be6aa8f8-579b-42ea-bdd8-2d01393646ad
ms.openlocfilehash: 7ef22711884dabb83efa8c7ebfdb7648316c12ee
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80205413"
---
# <a name="compiler-error-c2435"></a>Errore del compilatore C2435

> '*var*': l'inizializzazione dinamica richiede la libreria CRT gestita, non può essere compilata con/CLR: safe

## <a name="remarks"></a>Osservazioni

Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Per l'inizializzazione di una variabile di dominio per applicazione globale è necessario che la libreria CRT sia compilata con `/clr:pure`, che non produce un'immagine verificabile.

Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md) e [process](../../cpp/process.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2435:

```cpp
// C2435.cpp
// compile with: /clr:safe /c
int globalvar = 0;   // C2435

__declspec(process)
int globalvar2 = 0;
```
