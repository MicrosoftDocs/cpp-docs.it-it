---
title: Classe ctype_byname
ms.date: 11/04/2016
f1_keywords:
- xlocale/std::ctype_byname
helpviewer_keywords:
- ctype_byname class
ms.assetid: a5cec021-a1f8-425f-8757-08e6f064b604
ms.openlocfilehash: dcaaff45fb33155710f788af4ceb657eff97464e
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72689743"
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

## <a name="remarks"></a>Note

Il comportamento è determinato dalle impostazioni locali denominate `_Locname`. Ogni costruttore inizializza il relativo oggetto di base con [ctype](../standard-library/ctype-class.md)\<CharType>( `_Refs`) o con l'equivalente per la classe di base `ctype<char>`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
