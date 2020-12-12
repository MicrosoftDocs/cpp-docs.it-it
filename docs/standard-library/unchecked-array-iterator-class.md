---
description: 'Altre informazioni su: unchecked_array_iterator Class'
title: Classe unchecked_array_iterator
ms.date: 11/04/2016
f1_keywords:
- stdext::unchecked_array_iterator
ms.assetid: 693b3b30-4e3a-465b-be06-409700bc50b1
ms.openlocfilehash: 6f2bbe4c31a76101a04e8c5be6a4e0dcf67cf87e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97132743"
---
# <a name="unchecked_array_iterator-class"></a>Classe unchecked_array_iterator

La classe `unchecked_array_iterator` consente di eseguire il wrapping di una matrice o di un puntatore in un iteratore non verificato. Usare questa classe come wrapper (usando la funzione [make_unchecked_array_iterator](../standard-library/iterator-functions.md#make_unchecked_array_iterator)) per i puntatori o le matrici non elaborati per gestire gli avvisi relativi ai puntatori non verificati anziché disattivarli globalmente. Se possibile, preferire la versione verificata della classe [checked_array_iterator](../standard-library/checked-array-iterator-class.md).

> [!NOTE]
> Questa classe è un'estensione Microsoft della libreria standard C++. Il codice implementato mediante questa funzione non può essere trasferito negli ambienti di compilazione standard di C++ che non supportano questa estensione Microsoft.

## <a name="syntax"></a>Sintassi

```cpp
template <class Iterator>
class unchecked_array_iterator;
```

## <a name="remarks"></a>Osservazioni

Questa classe è definita nello spazio dei nomi [stdext](../standard-library/stdext-namespace.md).

Si tratta della versione non verificata della [classe checked_array_iterator](../standard-library/checked-array-iterator-class.md) e supporta gli stessi overload e membri. Per altre informazioni sulla funzionalità relativa agli iteratori verificati e per esempi di codice, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

## <a name="requirements"></a>Requisiti

**Intestazione:**\<iterator>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedi anche

[\<iterator>](../standard-library/iterator.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
