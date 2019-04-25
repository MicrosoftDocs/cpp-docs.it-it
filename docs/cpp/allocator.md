---
title: allocator
ms.date: 03/21/2019
f1_keywords:
- allocator_cpp
helpviewer_keywords:
- __declspec keyword [C++], allocator
- allocator __declspec keyword
ms.openlocfilehash: f9c8de7c8686b89a2ab9570a2558e3f649e545b5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62155238"
---
# <a name="allocator"></a>allocator

**Sezione specifica Microsoft**

Il **allocatore** identificatore di dichiarazione può essere applicata alle funzioni di allocazione della memoria personalizzati per visualizzare le allocazioni tramite Event Tracing for Windows (ETW).

## <a name="syntax"></a>Sintassi

```
   __declspec(allocator) 
```

## <a name="remarks"></a>Note

Il profiler della memoria nativa in Visual Studio funziona mediante la raccolta di allocazione dati di eventi ETW generati in fase di runtime. Gli allocatori in CRT e Windows SDK sono stati annotati a livello di origine in modo che sia possibile acquisirne i dati di allocazione. Se la scrittura degli allocatori, quindi qualsiasi funzione che restituisce un puntatore alla memoria heap appena allocata possono essere decorate con `__declspec(allocator)`, come illustrato in questo esempio per myMalloc:

```cpp
__declspec(allocator) void* myMalloc(size_t size)
```

Per altre informazioni, vedere [misurare l'utilizzo della memoria in Visual Studio](/visualstudio/profiling/memory-usage) e [gli eventi dell'heap ETW nativi Custom](/visualstudio/profiling/custom-native-etw-heap-events).