---
title: Struct input_iterator_tag | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- xutility/std::input_iterator_tag
dev_langs:
- C++
helpviewer_keywords:
- input_iterator_tag class
- input_iterator_tag struct
ms.assetid: ad68a4c6-f315-4ce1-8b74-c1fc71bd1577
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 797bc6353bd7396d409de073cc412480a803117f
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33844341"
---
# <a name="inputiteratortag-struct"></a>Struct input_iterator_tag

Classe che fornisce un tipo restituito per la funzione **iterator_category** che rappresenta un iteratore di input.

## <a name="syntax"></a>Sintassi

struct input_iterator_tag {};

## <a name="remarks"></a>Note

Le classi di tag di categoria vengono usate come tag di compilazione per la selezione dell'algoritmo. La funzione modello deve trovare la categoria più specifica dell'argomento iteratore in modo da usare l'algoritmo più efficiente in fase di compilazione. Per ciascun iteratore di tipo `Iterator`, `iterator_traits`< `Iterator`> **::iterator_category** deve essere definito come il tag di categoria più specifico che descrive il comportamento dell'iteratore.

Il tipo è uguale a **iterator**\< **Iter**> **::iterator_category** quando **Iter** descrive un oggetto che può essere usato come iteratore di input.

## <a name="example"></a>Esempio

Vedere [iterator_traits](../standard-library/iterator-traits-struct.md) o [random_access_iterator_tag](../standard-library/random-access-iterator-tag-struct.md) per indicazioni su come usare i tag **iterator_tag**.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<iterator>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
