---
title: 'Costruttore hstringreference:: Hstringreference | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HStringReference::HStringReference
dev_langs:
- C++
ms.assetid: 29f5fe11-3928-4f60-9861-f0894247bfcb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c13635f4b73ee34de11b8c18b0cdd9943b261a29
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42591185"
---
# <a name="hstringreferencehstringreference-constructor"></a>Costruttore HStringReference::HStringReference

Inizializza una nuova istanza di **HStringReference** classe.

## <a name="syntax"></a>Sintassi

```cpp
template<unsigned int sizeDest>
HStringReference(wchar_t const (&str)[ sizeDest]) throw();

template<unsigned int sizeDest>
HStringReference(wchar_t const (&str)[ sizeDest],
                 unsigned int len) throw();

HStringReference(HStringReference&& other) throw();
```

### <a name="parameters"></a>Parametri

*sizeDest*  
Un parametro di modello che specifica la dimensione della matrice di destinazione **HStringReference** buffer.

*str*  
Un riferimento a una stringa di caratteri "wide".

*Len*  
La lunghezza massima del *str* buffer del parametro da utilizzare in questa operazione. Se il *len* parametro non è specificato, l'intera *str* parametro viene utilizzato. Se *len* è maggiore di quella *sizeDest*, *len* è impostata su *sizeDest*-1.

*other*  
Un'altra **HStringReference** oggetto.

## <a name="remarks"></a>Note

Il primo costruttore inizializza un nuovo **HStringReference** oggetto come parametro con le stesse dimensioni *str*.

Il secondo costruttore inizializza un nuovo **HStringReference** dell'oggetto che la dimensione specifeid dal parametro *len*.

Il terzo costruttore inizializza un nuovo **HStringReference** oggetto per il valore del *altri* parametro e quindi distrugge il *altri* parametro.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe HStringReference](../windows/hstringreference-class.md)