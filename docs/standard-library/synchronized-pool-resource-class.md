---
title: Classe synchonized_pool_resource
ms.date: 11/04/2016
f1_keywords:
- memory_resource/std::synchronized_pool_resource
helpviewer_keywords:
- std::synchronized_pool_resource
ms.openlocfilehash: 9d9486354447f12156a9bbcc530236dc4a337da7
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68269183"
---
# <a name="synchronizedpoolresource-class"></a>Classe synchronized_pool_resource

## <a name="syntax"></a>Sintassi

```cpp
class synchronized_pool_resource : public memory_resource {
    synchronized_pool_resource(const pool_options& opts, memory_resource* upstream);
    synchronized_pool_resource()
        : synchronized_pool_resource(pool_options(), get_default_resource()) {}
    explicit synchronized_pool_resource(memory_resource* upstream)
        : synchronized_pool_resource(pool_options(), upstream) {}
    explicit synchronized_pool_resource(const pool_options& opts)
        : synchronized_pool_resource(opts, get_default_resource()) {}
    synchronized_pool_resource(const synchronized_pool_resource&) = delete;
    virtual ~synchronized_pool_resource();
    synchronized_pool_resource&
        operator=(const synchronized_pool_resource&) = delete;
    void release();
    memory_resource* upstream_resource() const;
    pool_options options() const;
};
```
