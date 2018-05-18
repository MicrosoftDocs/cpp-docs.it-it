---
title: Errore del compilatore C2482 | Documenti Microsoft
ms.custom: ''
ms.date: 09/15/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2482
dev_langs:
- C++
helpviewer_keywords:
- C2482
ms.assetid: 98c87da2-625c-4cc2-9bf7-78d15921e779
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c3dd23069f389d0a02e10d26edb7ee4fd3c373cb
ms.sourcegitcommit: 19a108b4b30e93a9ad5394844c798490cb3e2945
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/17/2018
---
# <a name="compiler-error-c2482"></a>Errore del compilatore C2482

>'*identificatore*': inizializzazione dinamica dei dati 'thread' non consentita nel codice gestito o WinRT

## <a name="remarks"></a>Note

Nel gestito o WinRT code, le variabili dichiarate utilizzando il [declspec](../../cpp/thread.md) attributo modificatore di classe di archiviazione o il [thread_local](../../cpp/storage-classes-cpp.md#thread_local) identificatore classe di archiviazione non può essere inizializzato con un'espressione che richiede la valutazione in fase di esecuzione. È necessaria un'espressione statica per inizializzare `__declspec(thread)` o `thread_local` dati in questi ambienti di runtime.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2482 in gestite (**/clr**) e WinRT (**/ZW**) codice:

```cpp
// C2482.cpp
// For managed example, compile with: cl /EHsc /c /clr C2482.cpp
// For WinRT example, compile with: cl /EHsc /c /ZW C2482.cpp
#define Thread __declspec( thread )
Thread int tls_i1 = tls_i1;   // C2482

int j = j;   // OK in C++; C error
Thread int tls_i2 = sizeof( tls_i2 );   // Okay in C and C++
```

Per risolvere questo problema, inizializzare archiviazione thread-local tramite una costante **constexpr**, o un'espressione statica. Eseguire qualsiasi inizializzazione specifico del thread separatamente.