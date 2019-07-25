---
title: Classe codecvt_byname
ms.date: 11/04/2016
f1_keywords:
- xlocale/std::codecvt_byname
helpviewer_keywords:
- codecvt_byname class
ms.assetid: b63b6c04-f60c-47b9-8e30-a933f24a8ffb
ms.openlocfilehash: 62781d575d6b9dda3f3c1e2a744091221c6f9584
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68459856"
---
# <a name="codecvtbyname-class"></a>Classe codecvt_byname

Classe modello derivata che descrive un oggetto che può essere utilizzato come facet di ordinamento delle impostazioni locali specificate, consentendo il recupero di informazioni relative alle conversioni specifiche di un'area culturale.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType, class Byte, class StateType>
class codecvt_byname: public codecvt<CharType, Byte, StateType> {
public:
    explicit codecvt_byname(
    const char* _Locname,
    size_t _Refs = 0);
```

```cpp
explicit codecvt_byname(
    const string& _Locname,
    size_t _Refs = 0);
```

```cpp
protected:
    virtual ~codecvt_byname();

};
```

### <a name="parameters"></a>Parametri

*_Locname*\
Impostazioni locali denominate.

*_Refs*\
Conteggio di riferimento iniziale.

## <a name="remarks"></a>Note

I facet byname vengono creati automaticamente quando vengono costruite le impostazioni locali denominate.

Il comportamento è determinato dalle impostazioni locali denominate *_Locname*. Ogni costruttore inizializza l'oggetto di base con [codecvt](../standard-library/codecvt-class.md)\<CharType, Byte, StateType>( `_Refs`).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
