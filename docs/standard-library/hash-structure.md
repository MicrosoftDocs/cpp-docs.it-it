---
title: Struttura hash | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- typeindex/std::hash
dev_langs:
- C++
ms.assetid: e5a41202-ef3b-45d0-b3a7-4c2dbdc0487a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 82684ac8f2dcd0b8e1b76f04ace8d51051681bd0
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="hash-structure"></a>Struttura hash

La classe modello definisce il proprio metodo in modo che restituisca `val.hash_code()`. Il metodo definisce una funzione hash usata per il mapping di valori di tipo [type_index](../standard-library/type-index-class.md) con una distribuzione di valori di indice.

## <a name="syntax"></a>Sintassi

```cpp
template <>
struct hash<type_index>
: public unary_function<type_index, size_t>
 { // hashes a typeinfo object
    size_t operator()(type_index val) const;

};
```

## <a name="see-also"></a>Vedere anche

[\<typeindex>](../standard-library/typeindex.md)<br/>
