---
title: Classe bad_array_new_length
ms.date: 11/04/2016
f1_keywords:
- new/std::bad_alloc
helpviewer_keywords:
- bad_alloc class
ms.assetid: 6429a8e6-5a49-4907-8d56-f4a4ec8131d0
ms.openlocfilehash: b00042513364ac04b62ac7e1943d912dcb78f212
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68459495"
---
# <a name="badarraynewlength-class"></a>Classe bad_array_new_length

La classe descrive un'eccezione generata per indicare che una richiesta di allocazione ha avuto esito negativo a causa di una dimensione della matrice minore di zero o maggiore del limite.

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

[Classe Exception](../standard-library/exception-class.md)\
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
