---
title: Struct output_iterator_tag | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- xutility/std::output_iterator_tag
dev_langs:
- C++
helpviewer_keywords:
- output_iterator_tag class
- output_iterator_tag struct
ms.assetid: c23a4331-b069-4fa0-9c3a-1c9be7095553
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6130a6de2504f2a625677ceaac00d23bdbcd9372
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38961084"
---
# <a name="outputiteratortag-struct"></a>Struct output_iterator_tag

Una classe che fornisce un tipo restituito per `iterator_category` funzione che rappresenta un iteratore di output.

## <a name="syntax"></a>Sintassi

struct output_iterator_tag {};

## <a name="remarks"></a>Note

Le classi di tag di categoria vengono usate come tag di compilazione per la selezione dell'algoritmo. La funzione modello deve trovare la categoria più specifica dell'argomento iteratore in modo da usare l'algoritmo più efficiente in fase di compilazione. Per ciascun iteratore di tipo `Iterator`, `iterator_traits`< `Iterator`> **::iterator_category** deve essere definito come il tag di categoria più specifico che descrive il comportamento dell'iteratore.

Il tipo è identico **iteratore** \< **Iter**> **:: iterator_category** quando `Iter` descrive un oggetto che può essere utilizzato come un iteratore di output.

Il tag non è basato sui parametri di `value_type` o `difference_type` per l'iteratore, come accade con altri tag dell'iteratore, in quanto gli iteratori di output non hanno un `value_type` o un `difference_type`.

## <a name="example"></a>Esempio

Visualizzare [iterator_traits](../standard-library/iterator-traits-struct.md) oppure [random_access_iterator_tag](../standard-library/random-access-iterator-tag-struct.md) per un esempio di come usare `iterator_tag`s.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<iterator>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
