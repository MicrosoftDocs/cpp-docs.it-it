---
title: Classe numpunct_byname
ms.date: 11/04/2016
f1_keywords:
- xlocnum/std::numpunct_byname
helpviewer_keywords:
- numpunct_byname class
ms.assetid: 18412924-e085-4771-b5e9-7a200cbdd7c0
ms.openlocfilehash: 0c9eb565c2dbf54da449411aa11a4c5661debf1d
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68452310"
---
# <a name="numpunctbyname-class"></a>Classe numpunct_byname

La classe modello derivata descrive un oggetto che può essere usato come facet `numpunct` delle impostazioni locali specificate, consentendo la formattazione e la punteggiatura delle espressioni numeriche e booleane.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType>
class numpunct_byname : public numpunct<Elem> {
public:
    explicit numpunct_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit numpunct_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~numpunct_byname();

};
```

## <a name="remarks"></a>Note

Il comportamento è determinato dall'impostazione locale [denominata](../standard-library/locale-class.md#name) `_Locname`. Il costruttore inizializza l'oggetto di base con [numpunct](../standard-library/numpunct-class.md#numpunct)\<CharType>( `_Refs`).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
