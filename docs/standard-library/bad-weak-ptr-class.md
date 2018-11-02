---
title: Classe bad_weak_ptr
ms.date: 11/04/2016
f1_keywords:
- memory/std::bad_weak_ptr
helpviewer_keywords:
- bad_weak_ptr
- bad_weak_ptr class
ms.assetid: a09336d5-7237-4480-ab6b-3787e0e6025e
ms.openlocfilehash: 78438ef3378e5002396eecb32b9b7a76d5b50325
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50492912"
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
