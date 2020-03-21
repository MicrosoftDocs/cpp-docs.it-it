---
title: allocator
ms.date: 03/21/2019
f1_keywords:
- allocator_cpp
helpviewer_keywords:
- __declspec keyword [C++], allocator
- allocator __declspec keyword
ms.openlocfilehash: 39708e8cfff7f61c3a3f763f87e1a3da36f0d4b1
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80077249"
---
# <a name="allocator"></a>allocator

**Sezione specifica Microsoft**

L'identificatore di dichiarazione dell' **allocatore** può essere applicato alle funzioni di allocazione della memoria personalizzate per rendere visibili le allocazioni tramite Event Tracing for Windows (ETW).

## <a name="syntax"></a>Sintassi

```
   __declspec(allocator)
```

## <a name="remarks"></a>Osservazioni

Il profiler della memoria nativa in Visual Studio funziona raccogliendo i dati degli eventi ETW di allocazione generati da durante il Runtime. Gli allocatori in CRT e Windows SDK sono stati annotati a livello di origine in modo che sia possibile acquisirne i dati di allocazione. Se si scrivono allocatori personalizzati, tutte le funzioni che restituiscono un puntatore alla memoria heap appena allocata possono essere decorate con `__declspec(allocator)`, come illustrato in questo esempio per malloc:

```cpp
__declspec(allocator) void* myMalloc(size_t size)
```

Per altre informazioni, vedere [misurare l'utilizzo della memoria in Visual Studio](/visualstudio/profiling/memory-usage) e [eventi heap ETW nativi personalizzati](/visualstudio/profiling/custom-native-etw-heap-events).

**Fine sezione specifica Microsoft**
