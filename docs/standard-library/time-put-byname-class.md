---
description: 'Altre informazioni su: time_put_byname Class'
title: Classe time_put_byname
ms.date: 11/04/2016
f1_keywords:
- xloctime/std::time_put_byname
helpviewer_keywords:
- time_put_byname class
ms.assetid: e08c2348-64d2-4ace-98b1-1496e14c7b1a
ms.openlocfilehash: b519b28b7af8f5b54f9150d1d84f68cd6695bc49
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97167253"
---
# <a name="time_put_byname-class"></a>Classe time_put_byname

Il modello di classe derivata descrive un oggetto che può essere utilizzato come facet delle impostazioni locali di tipo `time_put` \< CharType, OutputIterator > .

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType, class OutIt = ostreambuf_iterator<CharType, char_traits<CharType>>>
class time_put_byname : public time_put<CharType, OutputIterator>
{
public:
    explicit time_put_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit time_put_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~time_put_byname();

};
```

### <a name="parameters"></a>Parametri

*_Locname*\
Nome delle impostazioni locali.

*_Refs*\
Conteggio di riferimento iniziale.

## <a name="remarks"></a>Commenti

Il comportamento è determinato dalle impostazioni locali [denominate](../standard-library/locale-class.md#name) *_Locname*. Ogni costruttore inizializza l'oggetto di base con [time_put](../standard-library/time-put-class.md#time_put) \<CharType, OutputIterator> ( `_Refs` ).

## <a name="requirements"></a>Requisiti

**Intestazione:**\<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
