---
title: Classe bad_weak_ptr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- memory/std::bad_weak_ptr
dev_langs:
- C++
helpviewer_keywords:
- bad_weak_ptr
- bad_weak_ptr class
ms.assetid: a09336d5-7237-4480-ab6b-3787e0e6025e
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2d315a2ef502daeb1050754046ec96236c52ad6b
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="badweakptr-class"></a>Classe bad_weak_ptr

Segnala un'eccezione weak_ptr non valida.

## <a name="syntax"></a>Sintassi

```cpp
class bad_weak_ptr : public std::exception
 {
public:
    bad_weak_ptr();
    const char *what() throw();
 };
```

## <a name="remarks"></a>Note

La classe descrive un'eccezione che può essere generata dal costruttore [shared_ptr Class](../standard-library/shared-ptr-class.md) che accetta un argomento di tipo [weak_ptr Class](../standard-library/weak-ptr-class.md). La funzione membro `what` restituisce `"bad_weak_ptr"`.

## <a name="example"></a>Esempio

```cpp
// std__memory__bad_weak_ptr.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::weak_ptr<int> wp;

    {
        std::shared_ptr<int> sp(new int);
        wp = sp;
    }

    try
    {
        std::shared_ptr<int> sp1(wp); // weak_ptr has expired
    }
    catch (const std::bad_weak_ptr&)
    {
        std::cout << "bad weak pointer" << std::endl;
    }
    catch (...)
    {
        std::cout << "unknown exception" << std::endl;
    }

    return (0);
}
```

```Output
bad weak pointer
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<memory>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Classe weak_ptr](../standard-library/weak-ptr-class.md)<br/>
