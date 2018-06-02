---
title: Errore del compilatore C2435 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2435
dev_langs:
- C++
helpviewer_keywords:
- C2435
ms.assetid: be6aa8f8-579b-42ea-bdd8-2d01393646ad
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8ddf078420da8aba170bbd21a0db775f9246cea4
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34703642"
---
# <a name="compiler-error-c2435"></a>Errore del compilatore C2435

> '*var*': inizializzazione dinamica richiede CRT gestito; Impossibile compilare con /CLR: safe

## <a name="remarks"></a>Note

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Inizializzazione di variabili globali per dominio di applicazione richiede la libreria CRT compilata con `/clr:pure`, che non genera un'immagine verificabile.

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