---
title: Classe collate_byname | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- locale/std::collate_byname
dev_langs:
- C++
helpviewer_keywords:
- collate_byname class
ms.assetid: 3dc380df-867c-4763-b60e-ba62a8e63ca7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f619554db0a85ee8aafbdb8792d8fe233cc392a8
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33843015"
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

`_Locname` Nome delle impostazioni locali.

`_Refs` Un conteggio dei riferimenti iniziale.

## <a name="remarks"></a>Note

La classe modello descrive un oggetto che può fungere da [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class) di tipo [collate](../standard-library/collate-class.md#collate)\<CharType>. Il comportamento è determinato dalle [impostazioni locali denominate](../standard-library/locale-class.md#name)`_Locname`. Ogni costruttore inizializza l'oggetto di base con [collate](../standard-library/collate-class.md#collate)\<CharType> (`_Refs`).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
