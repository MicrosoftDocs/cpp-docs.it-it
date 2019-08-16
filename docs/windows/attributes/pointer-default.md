---
title: pointer_default (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.pointer_default
helpviewer_keywords:
- pointer_default attribute
ms.assetid: 2d0c7bbc-a1e8-4337-9e54-e304523e2735
ms.openlocfilehash: c70c372e5f1c3a9c2f620a1fa3505fb9d0436e79
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69514265"
---
# <a name="pointer_default"></a>pointer_default

Specifica l'attributo del puntatore predefinito per tutti i puntatori, ad eccezione dei puntatori di primo livello visualizzati negli elenchi di parametri.

## <a name="syntax"></a>Sintassi

```cpp
[ pointer_default(value) ]
```

### <a name="parameters"></a>Parametri

*value*<br/>
Valore che descrive il tipo di puntatore: **ptr**, **ref**o **Unique**.

## <a name="remarks"></a>Note

L'attributo **pointer_default** C++ ha la stessa funzionalità dell'attributo MIDL di [pointer_default](/windows/win32/Midl/pointer-default) .

## <a name="example"></a>Esempio

Vedere l'esempio per [DefaultValue](defaultvalue.md) per un esempio di uso di **pointer_default**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|Nessuna|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)