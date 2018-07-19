---
title: Classe messages_byname | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- xlocmes/std::messages_byname
dev_langs:
- C++
helpviewer_keywords:
- messages_byname class
ms.assetid: c6c64841-3e80-43c8-b54c-fed41833ad6b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1de239e408adf4f66e7868ce9b91d7da574fffde
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38958035"
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

*_Locname* impostazioni locali denominate.

*_Refs* conteggio di riferimento iniziale.

## <a name="remarks"></a>Note

Il comportamento è determinato dalle impostazioni locali denominate *_Locname*. Ogni costruttore inizializza l'oggetto di base con [messages](../standard-library/messages-class.md#messages)\<CharType>( `_Refs`).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
