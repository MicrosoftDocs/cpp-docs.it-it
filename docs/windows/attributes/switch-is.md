---
description: 'Altre informazioni su: switch_is'
title: switch_is (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.switch_is
helpviewer_keywords:
- switch_is attribute
ms.assetid: f1fffe5d-12d2-4e0f-8803-ccb715177d2d
ms.openlocfilehash: 88489a9722e79da6629dfc2b39bfbe7f6ab39932
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329572"
---
# <a name="switch_is"></a>switch_is

Specifica l'espressione o l'identificatore che funge da discriminante di Unione che seleziona il membro di Unione.

## <a name="syntax"></a>Sintassi

```cpp
[switch_is]
```

## <a name="remarks"></a>Osservazioni

L'attributo **switch_is** C++ ha la stessa funzionalità dell'attributo [switch_is](/windows/win32/Midl/switch-is) MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio di [caso](case-cpp.md) per un uso di esempio di **switch_is**.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**`typedef`**|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)<br/>
[switch_type](switch-type.md)
