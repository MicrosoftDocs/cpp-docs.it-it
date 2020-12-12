---
description: 'Altre informazioni su: pointer_default'
title: pointer_default (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.pointer_default
helpviewer_keywords:
- pointer_default attribute
ms.assetid: 2d0c7bbc-a1e8-4337-9e54-e304523e2735
ms.openlocfilehash: 0c7768227a5922bca7e1b48b3ad82821bb62ea54
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329681"
---
# <a name="pointer_default"></a>pointer_default

Specifica l'attributo del puntatore predefinito per tutti i puntatori, ad eccezione dei puntatori di primo livello visualizzati negli elenchi di parametri.

## <a name="syntax"></a>Sintassi

```cpp
[ pointer_default(value) ]
```

### <a name="parameters"></a>Parametri

*value*<br/>
Valore che descrive il tipo di puntatore: **ptr**, **ref** o **Unique**.

## <a name="remarks"></a>Commenti

L'attributo **pointer_default** C++ ha la stessa funzionalità dell'attributo [pointer_default](/windows/win32/Midl/pointer-default) MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio per [DefaultValue](defaultvalue.md) per un esempio di utilizzo di **pointer_default**.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)
