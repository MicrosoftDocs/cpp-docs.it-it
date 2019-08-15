---
title: entry (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.entry
helpviewer_keywords:
- entry attribute
ms.assetid: ba4843e3-d7ad-4b86-9a15-0b4192f0f698
ms.openlocfilehash: 71abf4f183255fa137b43ac9cabd88d15c3fc85d
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69490895"
---
# <a name="entry"></a>entry

Specifica una funzione o una costante esportata in un modulo identificando il punto di ingresso nella DLL.

## <a name="syntax"></a>Sintassi

```cpp
[ entry(id) ]
```

### <a name="parameters"></a>Parametri

*id*<br/>
ID del punto di ingresso.

## <a name="remarks"></a>Note

L'attributo **entry** C++ ha la stessa funzionalità dell'attributo MIDL della [voce](/windows/win32/Midl/entry) .

## <a name="example"></a>Esempio

Vedere l'esempio relativo a [idl_module](idl-module.md) per un esempio di utilizzo della **voce**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|`idl_module`attributo|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|Nessuna|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)