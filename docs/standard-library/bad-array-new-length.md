---
title: Classe bad_array_new_length
ms.date: 11/04/2016
f1_keywords:
- new/std::bad_alloc
helpviewer_keywords:
- bad_alloc class
ms.assetid: 6429a8e6-5a49-4907-8d56-f4a4ec8131d0
ms.openlocfilehash: 823da1555119735e9aa1c46aa4db2e3a47affdec
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68268693"
---
# <a name="badarraynewlength-class"></a>Classe bad_array_new_length

La classe descrive un'eccezione generata per indicare che una richiesta di allocazione non è riuscita a causa della dimensione della matrice è minore di zero o maggiore rispetto al limite.

## <a name="syntax"></a>Sintassi

```cpp
class bad_array_new_length : public bad_alloc {
    public: bad_array_new_length() noexcept;
    const char* what() const noexcept override;
};
```

## <a name="remarks"></a>Note

Il valore restituito da `what` è una stringa C definita dall'implementazione. Nessuna delle funzioni membro genera eccezioni.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<new>

## <a name="see-also"></a>Vedere anche

[Classe exception](../standard-library/exception-class.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
