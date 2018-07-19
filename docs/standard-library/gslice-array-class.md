---
title: Classe gslice_array | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- valarray/std::gslice_array
dev_langs:
- C++
helpviewer_keywords:
- gslice_array class
ms.assetid: ad1b4514-b14a-4baf-a293-d5a8e8674c75
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ff44a91b4916092e319c7acc0520c49aeb9a5fa4
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38953075"
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

La classe descrive un oggetto che archivia un riferimento a un oggetto `va` della classe [valarray](../standard-library/valarray-class.md)**\<tipo >**, insieme a un oggetto `gs` della classe [ gslice](../standard-library/gslice-class.md) che descrive la sequenza di elementi da selezionare dal `valarray<Type>` oggetto.

Si costruisce una `gslice_array<Type>` oggetto solo scrivendo un'espressione nel formato [va&#91;gs&#93;](../standard-library/valarray-class.md#op_at). Le funzioni membro della classe gslice_array si comportano quindi come le firme di funzione corrispondenti definite per `valarray<Type>`, ad eccezione del fatto che è interessata solo la sequenza degli elementi selezionati.

La classe modello viene creata indirettamente da alcune operazioni valarray e non può essere usata direttamente nel programma. Una classe modello ausiliaria interna invece viene usata dall'operatore di indice inferiore di sezione:

`gslice_array`\< **Type**> `valarray`\< **Type**>:: `operator[]` ( **constgslice&**).

Si costruisce una `gslice_array<Type>` oggetto solo scrivendo un'espressione nel formato `va[gsl]`, per una sezione `gsl` dell'oggetto valarray di `va`. Le funzioni membro della classe gslice_array si comportano quindi come le firme di funzione corrispondenti definite per `valarray<Type>`, ad eccezione del fatto che è interessata solo la sequenza degli elementi selezionati. La sequenza controllata dall'oggetto gslice_array è definita dai tre parametri del costruttore di sezione, ovvero l'indice del primo elemento nella prima sezione, il numero di elementi in ogni sezione e la distanza tra gli elementi in ogni sezione.

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

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
