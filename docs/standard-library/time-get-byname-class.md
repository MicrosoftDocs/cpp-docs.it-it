---
description: 'Altre informazioni su: time_get_byname Class'
title: Classe time_get_byname
ms.date: 11/04/2016
f1_keywords:
- xloctime/std::time_get_byname
helpviewer_keywords:
- time_get_byname class
ms.assetid: 6e54153e-da40-4bb9-a942-1a6ce57b30c9
ms.openlocfilehash: 056681782d0e8edcc3d99ccf2b414b2b93db9986
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97180279"
---
# <a name="time_get_byname-class"></a>Classe time_get_byname

Il modello di classe derivata descrive un oggetto che può essere utilizzato come facet delle impostazioni locali di tipo `time_get` \<CharType, InputIterator> .

## <a name="syntax"></a>Sintassi

```cpp
template <class Elem, class InputIterator =
    istreambuf_iterator<CharType, char_traits<CharType>>>
class time_get_byname : public time_get<CharType, InputIterator>
{
public:
    explicit time_get_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit time_get_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~time_get_byname()
};
```

### <a name="parameters"></a>Parametri

*_Locname*\
Impostazioni locali denominate.

*_Refs*\
Conteggio di riferimento iniziale.

## <a name="requirements"></a>Requisiti

Il comportamento è determinato dalle impostazioni locali denominate *_Locname*. Ogni costruttore inizializza l'oggetto di base con [time_get](../standard-library/time-get-class.md#time_get) \<CharType, InputIterator> ( `_Refs` ).

**Intestazione:**\<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
