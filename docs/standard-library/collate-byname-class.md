---
title: Classe collate_byname
ms.date: 11/04/2016
f1_keywords:
- locale/std::collate_byname
helpviewer_keywords:
- collate_byname class
ms.assetid: 3dc380df-867c-4763-b60e-ba62a8e63ca7
ms.openlocfilehash: 3e9a256ac7bdb5f6d077746fe2a08990ed41e931
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72688266"
---
# <a name="collate_byname-class"></a>Classe collate_byname

Modello di classe derivata che descrive un oggetto che può fungere da facet di ordinamento delle impostazioni locali specificate, consentendo il recupero di informazioni specifiche di un'area culturale relativa alle convenzioni di ordinamento delle stringhe.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType>
class collate_byname : public collate<CharType> {
public:
    explicit collate_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit collate_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~collate_byname();

};
```

### <a name="parameters"></a>Parametri

@No__t_1 *_Locname*
Impostazioni locali denominate.

@No__t_1 *_Refs*
Conteggio di riferimento iniziale.

## <a name="remarks"></a>Note

Il modello di classe descrive un oggetto che può essere utilizzato come [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class) di tipo [COLLATE](../standard-library/collate-class.md#collate) \<CharType >. Il comportamento è determinato dalle impostazioni locali [denominate](../standard-library/locale-class.md#name) *_Locname*. Ogni costruttore inizializza l'oggetto di base con [collate](../standard-library/collate-class.md#collate)\<CharType> (`_Refs`).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
