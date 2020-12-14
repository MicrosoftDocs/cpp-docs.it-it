---
description: 'Altre informazioni su: codecvt_byname Class'
title: Classe codecvt_byname
ms.date: 11/04/2016
f1_keywords:
- xlocale/std::codecvt_byname
helpviewer_keywords:
- codecvt_byname class
ms.assetid: b63b6c04-f60c-47b9-8e30-a933f24a8ffb
ms.openlocfilehash: 526988f46b729e1a3d4ab6892d2c8f1fecba78a4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97234072"
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

*_Locname*\
Impostazioni locali denominate.

*_Refs*\
Conteggio di riferimento iniziale.

## <a name="remarks"></a>Commenti

I facet byname vengono creati automaticamente quando vengono costruite le impostazioni locali denominate.

Il comportamento è determinato dalle impostazioni locali denominate *_Locname*. Ogni costruttore inizializza l'oggetto di base con [codecvt](../standard-library/codecvt-class.md) \<CharType, Byte, StateType> ( `_Refs` ).

## <a name="requirements"></a>Requisiti

**Intestazione:**\<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
