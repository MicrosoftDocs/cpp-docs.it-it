---
description: 'Altre informazioni su: gslice_array Class'
title: Classe gslice_array
ms.date: 11/04/2016
f1_keywords:
- valarray/std::gslice_array
helpviewer_keywords:
- gslice_array class
ms.assetid: ad1b4514-b14a-4baf-a293-d5a8e8674c75
ms.openlocfilehash: 2c3cf29cd80d874265ec86d5c31a10e5c8359b8e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97232031"
---
# <a name="gslice_array-class"></a>Classe gslice_array

Modello di classe ausiliario interno che supporta oggetti sezione generale fornendo operazioni tra matrici di subset definite dalla sezione generale di un oggetto valarray.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type>
class gslice_array : public gsplice {
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

La classe descrive un oggetto che archivia un riferimento a un oggetto `va` della classe [valarray](../standard-library/valarray-class.md) **\<Type>** , insieme a un oggetto `gs` della classe [gslice](../standard-library/gslice-class.md) che descrive la sequenza di elementi da selezionare dall' `valarray<Type>` oggetto.

Per costruire un `gslice_array<Type>` oggetto, è sufficiente scrivere un'espressione nel formato [va&#91;GS&#93;](../standard-library/valarray-class.md#op_at). Le funzioni membro della classe gslice_array si comportano quindi come le firme di funzione corrispondenti definite per `valarray<Type>` , ad eccezione del fatto che è interessata solo la sequenza degli elementi selezionati.

Il modello di classe viene creato indirettamente da alcune operazioni valarray e non può essere utilizzato direttamente nel programma. Un modello di classe ausiliaria interna viene invece usato dall'operatore di indice delle sezioni:

`gslice_array`\< **Type**>`valarray` \< **Type**> :: `operator[]` ( **constgslice&**).

Per costruire un `gslice_array<Type>` oggetto, è sufficiente scrivere un'espressione del form `va[gsl]` , per una sezione `gsl` di valarray `va` . Le funzioni membro della classe gslice_array si comportano quindi come le firme di funzione corrispondenti definite per `valarray<Type>` , ad eccezione del fatto che è interessata solo la sequenza degli elementi selezionati. La sequenza controllata dall'oggetto gslice_array è definita dai tre parametri del costruttore di sezione, ovvero l'indice del primo elemento nella prima sezione, il numero di elementi in ogni sezione e la distanza tra gli elementi in ogni sezione.

Nell'esempio seguente:

```cpp
const size_t lv[] = {2, 3};
const size_t dv[] = {7, 2};
const valarray<size_t> len(lv, 2), str(dv, 2);

// va[gslice(3, len, str)] selects elements with
//   indices 3, 5, 7, 10, 12, 14
```

Affinché la procedura sia valida, è necessario che gli indici siano validi.

## <a name="example"></a>Esempio

Per un esempio di come dichiarare e usare un oggetto slice_array, vedere l'esempio relativo a [gslice::gslice](../standard-library/gslice-class.md#gslice).

## <a name="requirements"></a>Requisiti

**Intestazione:**\<valarray>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
