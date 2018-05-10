---
title: Classe time_put_byname | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- xloctime/std::time_put_byname
dev_langs:
- C++
helpviewer_keywords:
- time_put_byname class
ms.assetid: e08c2348-64d2-4ace-98b1-1496e14c7b1a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 39db2ead78a123c3274405e3560bca1c67cf1f5c
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="timeputbyname-class"></a>Classe time_put_byname

Questa classe modello derivata descrive un oggetto che può essere usato come facet delle impostazioni locali di tipo `time_put`\< CharType, OutputIterator >.

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

`_Locname` Un nome delle impostazioni locali.

`_Refs` Un conteggio dei riferimenti iniziale.

## <a name="remarks"></a>Note

Il comportamento è determinato dalle impostazioni locali [denominate](../standard-library/locale-class.md#name) `_Locname`. Ogni costruttore inizializza l'oggetto di base con [time_put](../standard-library/time-put-class.md#time_put)\<CharType, OutputIterator>( `_Refs`).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
