---
description: 'Altre informazioni su: numpunct_byname Class'
title: Classe numpunct_byname
ms.date: 11/04/2016
f1_keywords:
- xlocnum/std::numpunct_byname
helpviewer_keywords:
- numpunct_byname class
ms.assetid: 18412924-e085-4771-b5e9-7a200cbdd7c0
ms.openlocfilehash: e4e6352f9f65b2a726acf3f8f5f8ede9bffe54f9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338038"
---
# <a name="numpunct_byname-class"></a>Classe numpunct_byname

Il modello di classe derivata descrive un oggetto che può essere utilizzato come `numpunct` facet delle impostazioni locali specificate, consentendo la formattazione e la punteggiatura delle espressioni numeriche e booleane.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType>
class numpunct_byname : public numpunct<Elem> {
public:
    explicit numpunct_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit numpunct_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~numpunct_byname();

};
```

## <a name="remarks"></a>Osservazioni

Il comportamento è determinato dalle impostazioni locali [denominate](../standard-library/locale-class.md#name) `_Locname` . Il costruttore inizializza l'oggetto di base con [numpunct](../standard-library/numpunct-class.md#numpunct) \<CharType> ( `_Refs` ).

## <a name="requirements"></a>Requisiti

**Intestazione:**\<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
