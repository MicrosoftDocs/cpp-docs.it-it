---
description: 'Altre informazioni su: slice_array Class'
title: Classe slice_array
ms.date: 11/04/2016
f1_keywords:
- valarray/std::slice_array
helpviewer_keywords:
- slice_array class
ms.assetid: a182d5f7-f35c-4e76-86f2-b5ac64ddc846
ms.openlocfilehash: 580a09d99b08bc563c64571247d74a980eb229f9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97153980"
---
# <a name="slice_array-class"></a>Classe slice_array

Modello di classe ausiliario interno che supporta gli oggetti Slice fornendo operazioni tra matrici di subset definite dalla sezione di un oggetto valarray.

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

## <a name="remarks"></a>Osservazioni

La classe descrive un oggetto che archivia un riferimento a un oggetto della classe [valarray](../standard-library/valarray-class.md) **\<Type>** , insieme a un oggetto della classe [Slice](../standard-library/slice-class.md), che descrive la sequenza di elementi da selezionare dall'oggetto **valarray \<Type>** .

Il modello di classe viene creato indirettamente da alcune operazioni valarray e non può essere utilizzato direttamente nel programma. Un modello di classe ausiliario interno usato dall'operatore di indice delle sezioni:

`slice_array`\< **Type**>`valarray` <  **Tipo**:: `operator[]` ( `slice` ).

Per costruire un `slice_array<Type>` oggetto, è sufficiente scrivere un'espressione nel formato [va&#91;SL&#93;](../standard-library/valarray-class.md#op_at), per una sezione `sl` di valarray `va` . Le funzioni membro della classe slice_array si comportano quindi come le firme di funzione corrispondenti definite per `valarray<Type>` , ad eccezione del fatto che è interessata solo la sequenza degli elementi selezionati. La sequenza controllata dall'oggetto slice_array è definita dai tre parametri del costruttore di sezione, ovvero l'indice del primo elemento della sezione, il numero di elementi e la distanza tra questi ultimi. Un slice_array tagliato da valarray `va` dichiarato da **va**[ `slice` (2, 5, 3)] seleziona gli elementi con indici 2, 5, 8, 11 e 14 da `va` . Affinché la procedura sia valida, è necessario che gli indici siano validi.

## <a name="example"></a>Esempio

Per un esempio di come dichiarare e usare un oggetto slice_array, vedere l'esempio relativo a [slice::slice](../standard-library/slice-class.md#slice).

## <a name="requirements"></a>Requisiti

**Intestazione:**\<valarray>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
