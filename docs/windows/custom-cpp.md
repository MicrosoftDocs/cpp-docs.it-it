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
ms.openlocfilehash: 848ea415d0638b6135c69cd14e442f45dab40237
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43220361"
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

*uuid*  
ID univoco.

*valore*  
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

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi autonomi](../windows/stand-alone-attributes.md)  
[Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)  
[Attributi di parametro](../windows/parameter-attributes.md)  
[Attributi di metodo](../windows/method-attributes.md)  
[Attributi di classe](../windows/class-attributes.md)  
[Attributi di interfaccia](../windows/interface-attributes.md)  