---
title: Classe codecvt_byname
ms.date: 11/04/2016
f1_keywords:
- xlocale/std::codecvt_byname
helpviewer_keywords:
- codecvt_byname class
ms.assetid: b63b6c04-f60c-47b9-8e30-a933f24a8ffb
ms.openlocfilehash: b48f01126eba7082230fc5e19150d42d1dfad2f3
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72688297"
---
# <a name="codecvt_byname-class"></a>Classe codecvt_byname

Modello di classe derivata che descrive un oggetto che può fungere da facet di ordinamento delle impostazioni locali specificate, consentendo il recupero di informazioni specifiche di un'area culturale relativa alle conversioni.

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

@No__t_1 *_Locname*
Impostazioni locali denominate.

@No__t_1 *_Refs*
Conteggio di riferimento iniziale.

## <a name="remarks"></a>Note

I facet byname vengono creati automaticamente quando vengono costruite le impostazioni locali denominate.

Il comportamento è determinato dalle impostazioni locali denominate *_Locname*. Ogni costruttore inizializza l'oggetto di base con [codecvt](../standard-library/codecvt-class.md)\<CharType, Byte, StateType>( `_Refs`).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
