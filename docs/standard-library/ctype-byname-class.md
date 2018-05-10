---
title: Classe ctype_byname | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- xlocale/std::ctype_byname
dev_langs:
- C++
helpviewer_keywords:
- ctype_byname class
ms.assetid: a5cec021-a1f8-425f-8757-08e6f064b604
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a7ebfb2d5bc4543665054208e37e1f993270e5f3
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="ctypebyname-class"></a>Classe ctype_byname

Classe modello derivata che descrive un oggetto che può essere usato come facet ctype delle impostazioni locali specificate, consentendo la classificazione dei caratteri e la relativa conversione tra maiuscole e minuscole e tra set di caratteri nativi e set specificati dalle impostazioni locali.

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

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
