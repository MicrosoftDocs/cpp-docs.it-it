---
title: Errore del compilatore C2482
ms.date: 09/15/2017
f1_keywords:
- C2482
helpviewer_keywords:
- C2482
ms.assetid: 98c87da2-625c-4cc2-9bf7-78d15921e779
ms.openlocfilehash: a68c3f06daf977bda4700a293803859d4aa96771
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87216206"
---
# <a name="compiler-error-c2482"></a>Errore del compilatore C2482

>'*Identifier*': l'inizializzazione dinamica dei dati ' thread ' non è consentita nel codice gestito/WinRT

## <a name="remarks"></a>Osservazioni

Nel codice gestito o WinRT, le variabili dichiarate tramite l'attributo del modificatore della classe di archiviazione [__declspec (thread)](../../cpp/thread.md) o l'identificatore della classe di archiviazione [thread_local](../../cpp/storage-classes-cpp.md#thread_local) non possono essere inizializzate con un'espressione che richiede la valutazione in fase di esecuzione. È necessaria un'espressione statica per inizializzare `__declspec(thread)` **`thread_local`** i dati o in questi ambienti di Runtime.

## <a name="example"></a>Esempio

L'esempio seguente genera C2482 in codice gestito (**/CLR**) e in WinRT (**/ZW**):

```cpp
// C2482.cpp
// For managed example, compile with: cl /EHsc /c /clr C2482.cpp
// For WinRT example, compile with: cl /EHsc /c /ZW C2482.cpp
#define Thread __declspec( thread )
Thread int tls_i1 = tls_i1;   // C2482

int j = j;   // OK in C++; C error
Thread int tls_i2 = sizeof( tls_i2 );   // Okay in C and C++
```

Per risolvere il problema, inizializzare l'archiviazione locale del thread utilizzando una costante, **`constexpr`** o un'espressione statica. Eseguire l'inizializzazione specifica del thread separatamente.
