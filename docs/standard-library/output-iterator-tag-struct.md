---
title: Struct output_iterator_tag
ms.date: 11/04/2016
f1_keywords:
- xutility/std::output_iterator_tag
helpviewer_keywords:
- output_iterator_tag class
- output_iterator_tag struct
ms.assetid: c23a4331-b069-4fa0-9c3a-1c9be7095553
ms.openlocfilehash: 942e2214f42f97e262d4daf7836e8b6ced0e0ab2
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68453013"
---
# <a name="output_iterator_tag-struct"></a>Struct output_iterator_tag

Classe che fornisce un tipo restituito per la `iterator_category` funzione che rappresenta un iteratore di output.

## <a name="syntax"></a>Sintassi

struct output_iterator_tag {};

## <a name="remarks"></a>Note

Le classi di tag di categoria vengono usate come tag di compilazione per la selezione dell'algoritmo. La funzione modello deve trovare la categoria più specifica dell'argomento iteratore in modo da usare l'algoritmo più efficiente in fase di compilazione. Per ogni iteratore di tipo `Iterator`, è necessario definire `iterator_traits`< `Iterator`>  **::iterator_category** come il tag di categoria più specifico che descrive il comportamento dell'iteratore.

Il tipo è uguale a **iterator** \< **iter**>  **:: iterator_category** quando `Iter` descrive un oggetto che può essere utilizzato come iteratore di output.

Il tag non è basato sui parametri di `value_type` o `difference_type` per l'iteratore, come accade con altri tag dell'iteratore, in quanto gli iteratori di output non hanno un `value_type` o un `difference_type`.

## <a name="example"></a>Esempio

Vedere [iterator_traits](../standard-library/iterator-traits-struct.md) o [random_access_iterator_tag](../standard-library/random-access-iterator-tag-struct.md) per un esempio su come usare `iterator_tag`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<iterator>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Sicurezza dei thread nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
