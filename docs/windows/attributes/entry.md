---
description: 'Altre informazioni su: voce'
title: entry (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.entry
helpviewer_keywords:
- entry attribute
ms.assetid: ba4843e3-d7ad-4b86-9a15-0b4192f0f698
ms.openlocfilehash: fbceea4c23d730ceba780ce68398a9d78fa9c33b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97259227"
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

## <a name="remarks"></a>Commenti

La **voce** C++ attribute ha la stessa funzionalità della [voce](/windows/win32/Midl/entry) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio per [idl_module](idl-module.md) per un esempio di utilizzo della **voce**.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Attributo `idl_module`|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)
