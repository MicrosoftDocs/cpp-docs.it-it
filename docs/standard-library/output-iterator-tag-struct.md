---
description: 'Altre informazioni su: output_iterator_tag struct'
title: Struct output_iterator_tag
ms.date: 11/04/2016
f1_keywords:
- xutility/std::output_iterator_tag
helpviewer_keywords:
- output_iterator_tag class
- output_iterator_tag struct
ms.assetid: c23a4331-b069-4fa0-9c3a-1c9be7095553
ms.openlocfilehash: 1bd97f88dc7ae68976920cf006cd10115b16b2f1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340905"
---
# <a name="output_iterator_tag-struct"></a>Struct output_iterator_tag

Classe che fornisce un tipo restituito per la `iterator_category` funzione che rappresenta un iteratore di output.

## <a name="syntax"></a>Sintassi

output_iterator_tag struct {} ;

## <a name="remarks"></a>Commenti

Le classi di tag di categoria vengono usate come tag di compilazione per la selezione dell'algoritmo. La funzione modello deve trovare la categoria più specifica dell'argomento iteratore in modo da usare l'algoritmo più efficiente in fase di compilazione. Per ogni iteratore di tipo `Iterator`, è necessario definire `iterator_traits`< `Iterator`> **::iterator_category** come il tag di categoria più specifico che descrive il comportamento dell'iteratore.

Il tipo è uguale a **iterator** \< **Iter**> **:: iterator_category** quando `Iter` descrive un oggetto che può essere utilizzato come iteratore di output.

Il tag non è basato sui parametri di `value_type` o `difference_type` per l'iteratore, come accade con altri tag dell'iteratore, in quanto gli iteratori di output non hanno un `value_type` o un `difference_type`.

## <a name="example"></a>Esempio

Per un esempio su come usare i, vedere [iterator_traits](../standard-library/iterator-traits-struct.md) o [random_access_iterator_tag](../standard-library/random-access-iterator-tag-struct.md) `iterator_tag` .

## <a name="requirements"></a>Requisiti

**Intestazione:**\<iterator>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
