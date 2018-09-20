---
title: personalizzati (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.custom
dev_langs:
- C++
helpviewer_keywords:
- custom attributes, defining
ms.assetid: 3abac928-4d55-4ea6-8cf6-8427a4ad79f1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ec3ba8280ab481211d98c9dc5256c94e76e193e2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46396449"
---
# <a name="custom-c"></a>custom (C++)

Definisce i metadati per un oggetto nella libreria dei tipi.

## <a name="syntax"></a>Sintassi

```cpp
[ custom(
   uuid,
   value
) ];
```

### <a name="parameters"></a>Parametri

*uuid*<br/>
ID univoco.

*valore*<br/>
Un valore che può essere impostato in una variante.

## <a name="remarks"></a>Note

Il **personalizzato** C++ attributo farà in modo da inserire in libreria dei tipi di informazioni. È necessario uno strumento che legge il valore personalizzato da libreria dei tipi.

Il **personalizzati** attributo ha la stessa funzionalità di [personalizzato](/windows/desktop/Midl/custom) attributo MIDL.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Non COM **interface**, **classe**, **enum**s, `idl_module` metodi, i membri di interfaccia, i parametri dell'interfaccia **typedef**s, **unione**s **struct**s|
|**Ripetibile**|Yes|
|**Attributi obbligatori**|**Coclasse** (se usato nella classe)|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)<br/>
[Attributi autonomi](../windows/stand-alone-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi di parametro](../windows/parameter-attributes.md)<br/>
[Attributi di metodo](../windows/method-attributes.md)<br/>
[Attributi di classe](../windows/class-attributes.md)<br/>
[Attributi di interfaccia](../windows/interface-attributes.md)  