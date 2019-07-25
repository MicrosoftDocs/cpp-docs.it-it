---
title: Classe gslice_array
ms.date: 11/04/2016
f1_keywords:
- valarray/std::gslice_array
helpviewer_keywords:
- gslice_array class
ms.assetid: ad1b4514-b14a-4baf-a293-d5a8e8674c75
ms.openlocfilehash: 37c54d09fdfe920c832c4baa7984fee4e090d04a
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68448923"
---
# <a name="gslicearray-class"></a>Classe gslice_array

Classe modello ausiliaria interna che supporta oggetti sezione generale fornendo operazioni tra matrici di subset definite dalla sezione generale di un oggetto valarray.

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

## <a name="remarks"></a>Note

La classe descrive un oggetto che archivia un riferimento a un oggetto `va` di classe [valarray](../standard-library/valarray-class.md) **\<di tipo >** , insieme a un `gs` oggetto della classe [gslice](../standard-library/gslice-class.md) che descrive la sequenza di elementi da selezionare `valarray<Type>` oggetto.

Per costruire un `gslice_array<Type>` oggetto, è sufficiente scrivere un'espressione nel formato [va&#91;GS&#93;](../standard-library/valarray-class.md#op_at). Le funzioni membro della classe gslice_array si comportano quindi come le firme di `valarray<Type>`funzione corrispondenti definite per, ad eccezione del fatto che è interessata solo la sequenza degli elementi selezionati.

La classe modello viene creata indirettamente da alcune operazioni valarray e non può essere usata direttamente nel programma. Una classe modello ausiliaria interna invece viene usata dall'operatore di indice inferiore di sezione:

`gslice_array`\< **Type**> `valarray`\< **Type**>:: `operator[]` ( **constgslice&** ).

Per costruire un `gslice_array<Type>` oggetto, è sufficiente scrivere un'espressione del form `va[gsl]`, per una sezione `gsl` di valarray `va`. Le funzioni membro della classe gslice_array si comportano quindi come le firme di `valarray<Type>`funzione corrispondenti definite per, ad eccezione del fatto che è interessata solo la sequenza degli elementi selezionati. La sequenza controllata dall'oggetto gslice_array è definita dai tre parametri del costruttore di sezione, ovvero l'indice del primo elemento nella prima sezione, il numero di elementi in ogni sezione e la distanza tra gli elementi in ogni sezione.

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

**Intestazione:** \<valarray>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
