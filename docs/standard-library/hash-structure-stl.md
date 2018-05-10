---
title: Struttura hash (Libreria standard C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- thread/std::hash
dev_langs:
- C++
ms.assetid: 4a8bf5bc-4334-4070-936b-98585f8a073b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6f2e9fdbef911a0160ff42925a9c7984f0211069
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="hash-structure-c-standard-library"></a>Struttura hash (Libreria standard C++)

Definisce una funzione membro che restituisce un valore determinato in modo univoco da `Val`. L'oggetto funzione definisce una funzione [hash](../standard-library/hash-class.md), idonea per il mapping di valori di tipo `thread::id` con una distribuzione di valori di indice.

## <a name="syntax"></a>Sintassi

```cpp
template <>
struct hash<thread::id> :
    public unary_function<thread::id, size_t>
{
    size_t operator()(thread::id Val) const;


};
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<thread >

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<thread>](../standard-library/thread.md)<br/>
[Struct unary_function](../standard-library/unary-function-struct.md)<br/>
