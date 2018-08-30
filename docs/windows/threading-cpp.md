---
title: Threading (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.threading
dev_langs:
- C++
helpviewer_keywords:
- threading attribute
ms.assetid: 9b558cd6-fbf0-4602-aed5-31c068550ce3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 19f49951cad65d3dbf15c406af9ac78a28408d4b
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43221814"
---
# <a name="threading-c"></a>threading (C++)

Specifica il modello di threading per un oggetto COM.

## <a name="syntax"></a>Sintassi

```cpp
[ threading(
   model=enumeration
) ]
```

### <a name="parameters"></a>Parametri

*modello* (facoltativo)  
Uno dei modelli di threading seguenti:

- `apartment` (il threading apartment)

- `neutral` (Componenti .NET framework senza interfaccia utente)

- `single` (threading semplice)

- `free` (gratuito threading)

- `both` (apartment e modello di threading free)

Il valore predefinito è `apartment`.

## <a name="remarks"></a>Note

Il **threading** attributo C++ non è presente nel file con estensione IDL generato ma verrà utilizzato nell'implementazione dell'oggetto COM.

Nei progetti ATL, se il [coclasse](../windows/coclass.md) attributo è presente, anche il modello di threading specificato da *model* viene passato al parametro di modello per il [CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) classe , inseriti dal `coclass` attributo.

Il **threading** attributo protegge anche l'accesso a un [event_source](../windows/event-source.md).

## <a name="example"></a>Esempio

Vedere le [concesso in licenza](../windows/licensed.md) per un esempio dell'uso di esempio **threading**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**|
|**Ripetibile**|No|
|**Attributi obbligatori**|**coclass**|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi COM](../windows/com-attributes.md)  
[Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)  
[Attributi di classe](../windows/class-attributes.md)  
[Supporto del multithreading per il codice precedente (Visual C++)](../parallel/multithreading-support-for-older-code-visual-cpp.md)  
[Apartment neutro](/windows/desktop/cossdk/neutral-apartments)  