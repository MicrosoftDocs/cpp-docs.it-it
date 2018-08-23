---
title: 'Metodo hstring:: Makereference | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HString::MakeReference
dev_langs:
- C++
ms.assetid: 9e1fd2b2-66ad-4a50-b647-a20ab10e522f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 061b3be0e642bb8e7406f54a469723c70559d85a
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42610161"
---
# <a name="hstringmakereference-method"></a>Metodo HString::MakeReference

Crea un `HStringReference` oggetto da un parametro di stringa specificata.

## <a name="syntax"></a>Sintassi

```cpp
template<unsigned int sizeDest>
    static HStringReference MakeReference(
              wchar_t const (&str)[ sizeDest]);

    template<unsigned int sizeDest>
    static HStringReference MakeReference(
              wchar_t const (&str)[sizeDest],
              unsigned int len);
```

### <a name="parameters"></a>Parametri

*sizeDest*  
Un parametro di modello che specifica le dimensioni della destinazione `HStringReference` buffer.

*str*  
Un riferimento a una stringa di caratteri "wide".

*Len*  
La lunghezza massima del *str* buffer del parametro da utilizzare in questa operazione. Se il *len* parametro non è specificato, l'intera *str* parametro viene utilizzato.

## <a name="return-value"></a>Valore restituito

Un' `HStringReference` il cui valore è identico a quello di specificato *str* parametro.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe HString](../windows/hstring-class.md)