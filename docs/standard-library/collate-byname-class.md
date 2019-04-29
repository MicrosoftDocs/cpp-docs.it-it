---
title: Classe collate_byname
ms.date: 11/04/2016
f1_keywords:
- locale/std::collate_byname
helpviewer_keywords:
- collate_byname class
ms.assetid: 3dc380df-867c-4763-b60e-ba62a8e63ca7
ms.openlocfilehash: 46eb139bafcf7368688f32cce37e38362c158c91
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62405183"
---
# <a name="collatebyname-class"></a>Classe collate_byname

Classe modello derivata che descrive un oggetto che può essere utilizzato come facet di ordinamento delle impostazioni locali specificate, consentendo il recupero di informazioni relative alle convenzioni di ordinamento delle stringhe specifiche di un'area culturale.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType>
class collate_byname : public collate<CharType> {
public:
    explicit collate_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit collate_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~collate_byname();

};
```

### <a name="parameters"></a>Parametri

*_Locname*<br/>
Impostazioni locali denominate.

*_Refs*<br/>
Conteggio di riferimento iniziale.

## <a name="remarks"></a>Note

La classe modello descrive un oggetto che può fungere da [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class) di tipo [collate](../standard-library/collate-class.md#collate)\<CharType>. Il comportamento è determinato dal [denominate](../standard-library/locale-class.md#name) delle impostazioni locali *_Locname*. Ogni costruttore inizializza l'oggetto di base con [collate](../standard-library/collate-class.md#collate)\<CharType> (`_Refs`).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
