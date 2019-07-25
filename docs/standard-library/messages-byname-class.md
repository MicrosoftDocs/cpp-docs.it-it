---
title: Classe messages_byname
ms.date: 11/04/2016
f1_keywords:
- xlocmes/std::messages_byname
helpviewer_keywords:
- messages_byname class
ms.assetid: c6c64841-3e80-43c8-b54c-fed41833ad6b
ms.openlocfilehash: b8fe1ab2db792819831f5c50aa99a02559f71cdd
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68451811"
---
# <a name="messagesbyname-class"></a>Classe messages_byname

Questa classe modello derivata descrive un oggetto che può essere usato come facet dei messaggi delle impostazioni locali specificate, consentendo il recupero dei messaggi localizzati.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType>
class messages_byname : public messages<CharType> {
public:
    explicit messages_byname(
    const char *_Locname,
    size_t _Refs = 0);

    explicit messages_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~messages_byname();

};
```

### <a name="parameters"></a>Parametri

*_Locname*\
Impostazioni locali denominate.

*_Refs*\
Conteggio di riferimento iniziale.

## <a name="remarks"></a>Note

Il comportamento è determinato dalle impostazioni locali denominate *_Locname*. Ogni costruttore inizializza l'oggetto di base con [messages](../standard-library/messages-class.md#messages)\<CharType>( `_Refs`).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
