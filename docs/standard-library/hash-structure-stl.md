---
title: Struttura hash (Libreria standard C++) | Microsoft Docs
ms.date: 11/04/2016
f1_keywords:
- thread/std::hash
ms.assetid: 4a8bf5bc-4334-4070-936b-98585f8a073b
ms.openlocfilehash: bb230d401d5061f4951f8007f93c3a28ce3dab03
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62405014"
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
