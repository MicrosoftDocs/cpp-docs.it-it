---
title: Threading (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.threading
helpviewer_keywords:
- threading attribute
ms.assetid: 9b558cd6-fbf0-4602-aed5-31c068550ce3
ms.openlocfilehash: cdebf06a62ebbd1d8648b9777fe200bc7a373261
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59038278"
---
# <a name="threading-c"></a>threading (C++)

Specifica il modello di threading per un oggetto COM.

## <a name="syntax"></a>Sintassi

```cpp
[ threading(model=enumeration) ]
```

### <a name="parameters"></a>Parametri

*model*<br/>
(Facoltativo) Uno dei modelli di threading seguenti:

- `apartment` (il threading apartment)

- `neutral` (Componenti .NET framework senza interfaccia utente)

- `single` (threading semplice)

- `free` (gratuito threading)

- `both` (apartment e modello di threading free)

Il valore predefinito è `apartment`.

## <a name="remarks"></a>Note

Il **threading** attributo C++ non è presente nel file con estensione IDL generato ma verrà utilizzato nell'implementazione dell'oggetto COM.

Nei progetti ATL, se il [coclasse](coclass.md) attributo è presente, anche il modello di threading specificato da *model* viene passato al parametro di modello per il [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) classe , inseriti dal `coclass` attributo.

Il **threading** attributo protegge anche l'accesso a un [event_source](event-source.md).

## <a name="example"></a>Esempio

Vedere le [concesso in licenza](licensed.md) per un esempio dell'uso di esempio **threading**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**|
|**Ripetibile**|No|
|**Attributi obbligatori**|**coclass**|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi COM](com-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Supporto del multithreading per il codice precedente (Visual C++)](../../parallel/multithreading-support-for-older-code-visual-cpp.md)<br/>
[Apartment neutro](/windows/desktop/cossdk/neutral-apartments)