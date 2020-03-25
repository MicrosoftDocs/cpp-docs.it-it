---
title: entry (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.entry
helpviewer_keywords:
- entry attribute
ms.assetid: ba4843e3-d7ad-4b86-9a15-0b4192f0f698
ms.openlocfilehash: 9bdfc64506f26ee4e9876920821883a0fa12bc7e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80167095"
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

## <a name="remarks"></a>Osservazioni

L'attributo **entry** C++ ha la stessa funzionalità dell'attributo MIDL della [voce](/windows/win32/Midl/entry) .

## <a name="example"></a>Esempio

Vedere l'esempio per [idl_module](idl-module.md) per un esempio di utilizzo della **voce**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Attributo `idl_module`|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)
