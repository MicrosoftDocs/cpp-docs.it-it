---
description: 'Altre informazioni su: moneypunct_byname Class'
title: Classe moneypunct_byname
ms.date: 11/04/2016
f1_keywords:
- xlocmon/std::moneypunct_byname
helpviewer_keywords:
- moneypunct_byname class
ms.assetid: e8a544d2-6aee-420d-b513-deb385c9b416
ms.openlocfilehash: b20293ac6788156f25f95878a5ab0098c178edec
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97277466"
---
# <a name="moneypunct_byname-class"></a>Classe moneypunct_byname

Modello di classe derivata che descrive un oggetto che può essere utilizzato come `moneypunct` facet delle impostazioni locali specificate, consentendo la formattazione dei campi di input o di output di valuta.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType, bool Intl = false>
class moneypunct_byname : public moneypunct<CharType, Intl>
{
public:
    explicit moneypunct_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit moneypunct_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~moneypunct_byname();

};
```

## <a name="remarks"></a>Osservazioni

Il comportamento è determinato dalle impostazioni locali denominate `_Locname`. Ogni costruttore inizializza l'oggetto di base con [moneypunct](../standard-library/moneypunct-class.md#moneypunct) \<CharType, Intl> ( `_Refs` ).

## <a name="requirements"></a>Requisiti

**Intestazione:**\<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
