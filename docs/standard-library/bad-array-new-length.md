---
description: 'Altre informazioni su: bad_array_new_length Class'
title: Classe bad_array_new_length
ms.date: 11/04/2016
f1_keywords:
- new/std::bad_array_new_length
helpviewer_keywords:
- bad_alloc class
ms.assetid: 6429a8e6-5a49-4907-8d56-f4a4ec8131d0
ms.openlocfilehash: e9de10b6fee215651ac8ff6ce2fce4af55ce6c82
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321640"
---
# <a name="bad_array_new_length-class"></a>Classe bad_array_new_length

La classe descrive un'eccezione generata per indicare che una richiesta di allocazione ha avuto esito negativo a causa di una dimensione della matrice minore di zero o maggiore del limite.

## <a name="syntax"></a>Sintassi

```cpp
class bad_array_new_length : public bad_alloc {
    public: bad_array_new_length() noexcept;
    const char* what() const noexcept override;
};
```

## <a name="remarks"></a>Osservazioni

Il valore restituito da `what` è una stringa C definita dall'implementazione. Nessuna delle funzioni membro genera eccezioni.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<new>

## <a name="see-also"></a>Vedi anche

[Classe Exception](../standard-library/exception-class.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
