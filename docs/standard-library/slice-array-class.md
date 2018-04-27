---
title: Classe slice_array | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- valarray/std::slice_array
dev_langs:
- C++
helpviewer_keywords:
- slice_array class
ms.assetid: a182d5f7-f35c-4e76-86f2-b5ac64ddc846
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: db8eb8018bac0d26efd6a9cdd397b07301fc4052
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="slicearray-class"></a>Classe slice_array

Classe modello ausiliaria interna che supporta oggetti sezione fornendo operazioni tra matrici di subset definite dalla sezione di un oggetto valarray.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type>
class slice_array : public slice {
public:
    typedef Type value_type;
    void operator=(const valarray<Type>& x) const;
    void operator=(const Type& x) const;
    void operator*=(const valarray<Type>& x) const;
    void operator/=(const valarray<Type>& x) const;
    void operator%=(const valarray<Type>& x) const;
    void operator+=(const valarray<Type>& x) const;
    void operator-=(const valarray<Type>& x) const;
    void operator^=(const valarray<Type>& x) const;
    void operator&=(const valarray<Type>& x) const;
    void operator|=(const valarray<Type>& x) const;
    void operator<<=(const valarray<Type>& x) const;
    void operator>>=(const valarray<Type>& x) const;
    // The rest is private or implementation defined
}
```

## <a name="remarks"></a>Note

La classe descrive un oggetto che archivia un riferimento a un oggetto della classe [valarray](../standard-library/valarray-class.md)**\<Type>**, insieme a un oggetto della classe [slice](../standard-library/slice-class.md) che descrive la sequenza di elementi da selezionare dall'oggetto **valarray\<Type>**.

La classe modello viene creata indirettamente da alcune operazioni valarray e non può essere usata direttamente nel programma. Una classe modello ausiliaria interna viene usata dall'operatore di indice inferiore di sezione:

`slice_array`\< **Type**> `valarray`< **Type**:: `operator[]` ( `slice`).

Si costruisce un oggetto **slice_array\<Type>** solo scrivendo un'espressione nel formato [va&#91;sl&#93;](../standard-library/valarray-class.md#op_at), per una sezione **sl** di valarray **va**. Le funzioni membro della classe slice_array si comportano quindi come le firme di funzione corrispondenti definite per **valarray\<Type>**, ad eccezione del fatto che è interessata solo la sequenza degli elementi selezionati. La sequenza controllata dall'oggetto slice_array è definita dai tre parametri del costruttore di sezione, ovvero l'indice del primo elemento della sezione, il numero di elementi e la distanza tra questi ultimi. Un oggetto slice_array sottratto da valarray **va** dichiarato da **va**[ `slice`(2, 5, 3)] seleziona da **va** elementi con indici 2, 5, 8, 11 e 14. Affinché la procedura sia valida, è necessario che gli indici siano validi.

## <a name="example"></a>Esempio

Per un esempio di come dichiarare e usare un oggetto slice_array, vedere l'esempio relativo a [slice::slice](../standard-library/slice-class.md#slice).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<valarray>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
