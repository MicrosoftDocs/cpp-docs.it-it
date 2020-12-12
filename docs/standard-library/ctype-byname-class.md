---
description: 'Altre informazioni su: ctype_byname Class'
title: Classe ctype_byname
ms.date: 11/04/2016
f1_keywords:
- xlocale/std::ctype_byname
helpviewer_keywords:
- ctype_byname class
ms.assetid: a5cec021-a1f8-425f-8757-08e6f064b604
ms.openlocfilehash: cc5f44e1c544d2088030621b684c9e070175d695
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97233136"
---
# <a name="ctype_byname-class"></a>Classe ctype_byname

Il modello di classe derivata descrive un oggetto che può essere utilizzato come facet CType delle impostazioni locali specificate, consentendo la classificazione dei caratteri e la conversione dei caratteri tra maiuscole e minuscole e i set di caratteri nativi e locali.

## <a name="syntax"></a>Sintassi

```cpp
template <class _Elem>
class ctype_byname : public ctype<_Elem>
{
public:
    explicit ctype_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit ctype_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual __CLR_OR_THIS_CALL ~ctype_byname();

};
```

## <a name="remarks"></a>Osservazioni

Il comportamento è determinato dalle impostazioni locali denominate `_Locname`. Ogni costruttore inizializza l'oggetto di base con [CType](../standard-library/ctype-class.md) \<CharType> ( `_Refs` ) o l'equivalente per la classe base `ctype<char>` .

## <a name="requirements"></a>Requisiti

**Intestazione:**\<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
