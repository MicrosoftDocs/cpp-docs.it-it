---
title: Classe scoped_lock
ms.date: 11/04/2016
f1_keywords:
- mutex/std::scoped_lock
ms.openlocfilehash: 20b2faf0f1cb11e441dda0b14e35d023ae9ae1e6
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68269063"
---
# <a name="scopedlock-class"></a>Classe scoped_lock

## <a name="syntax"></a>Sintassi

```cpp
template <class... MutexTypes>
class scoped_lock {
    using mutex_type = Mutex; // If MutexTypes... consists of the single type Mutex
    explicit scoped_lock(MutexTypes&... m);
    explicit scoped_lock(MutexTypes&... m, adopt_lock_t);
    ~scoped_lock();
    scoped_lock(const scoped_lock&) = delete;
    scoped_lock& operator=(const scoped_lock&) = delete;
}
```
