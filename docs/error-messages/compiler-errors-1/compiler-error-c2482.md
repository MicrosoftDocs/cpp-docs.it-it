---
title: Errore del compilatore C2482
ms.date: 09/15/2017
f1_keywords:
- C2482
helpviewer_keywords:
- C2482
ms.assetid: 98c87da2-625c-4cc2-9bf7-78d15921e779
ms.openlocfilehash: 481920fa2d8c32bc872e7b8805188cc674e6fe28
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62375054"
---
# <a name="compiler-error-c2482"></a>Errore del compilatore C2482

>«*identificatore*': l'inizializzazione dinamica dei dati di 'thread' non consentiti nel codice gestito o WinRT

## <a name="remarks"></a>Note

Nel gestito o WinRT code, le variabili dichiarate utilizzando il [declspec](../../cpp/thread.md) attributo modificatore di classe di archiviazione o il [thread_local](../../cpp/storage-classes-cpp.md#thread_local) identificatore classe di archiviazione non può essere inizializzato con un'espressione che richiede la valutazione in fase di esecuzione. È necessaria un'espressione statica per inizializzare `__declspec(thread)` o `thread_local` dati in questi ambienti di runtime.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2482 in gestiti (**/clr**) e WinRT (**/ZW**) codice:

```cpp
// C2482.cpp
// For managed example, compile with: cl /EHsc /c /clr C2482.cpp
// For WinRT example, compile with: cl /EHsc /c /ZW C2482.cpp
#define Thread __declspec( thread )
Thread int tls_i1 = tls_i1;   // C2482

int j = j;   // OK in C++; C error
Thread int tls_i2 = sizeof( tls_i2 );   // Okay in C and C++
```

Per risolvere questo problema, inizializzare l'archiviazione thread-local tramite una costante **constexpr**, o un'espressione statica. Eseguire separatamente qualsiasi inizializzazione specifico del thread.