---
title: Threading (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.threading
helpviewer_keywords:
- threading attribute
ms.assetid: 9b558cd6-fbf0-4602-aed5-31c068550ce3
ms.openlocfilehash: db2940ec3536ae8ea29ba40db84ea869ecb3d0ac
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69513922"
---
# <a name="threading-c"></a>threading (C++)

Specifica il modello di threading per un oggetto COM.

## <a name="syntax"></a>Sintassi

```cpp
[ threading(model=enumeration) ]
```

### <a name="parameters"></a>Parametri

*model*<br/>
Opzionale Uno dei modelli di threading seguenti:

- `apartment`(threading Apartment)

- `neutral`(.NET Framework componenti senza interfaccia utente)

- `single`(threading semplice)

- `free`(threading libero)

- `both`(Apartment e Threading libero)

Il valore predefinito è `apartment`.

## <a name="remarks"></a>Note

L' C++ attributo threading non viene visualizzato nel file con estensione IDL generato ma verrà usato nell'implementazione dell'oggetto com.

Nei progetti ATL, se è presente anche l'attributo [coclass](coclass.md) , il modello di threading specificato da *Model* viene passato come parametro di modello alla classe [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), inserito dall'attributo `coclass`.

L'attributo **Threading** protegge anche l'accesso a un [event_source](event-source.md).

## <a name="example"></a>Esempio

Vedere l'esempio [concesso in licenza](licensed.md) per un esempio di utilizzo del **Threading**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**|
|**Ripetibile**|No|
|**Attributi obbligatori**|**coclass**|
|**Attributi non validi**|Nessuna|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi COM](com-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Supporto del multithreading per il codice precedente (Visual C++)](../../parallel/multithreading-support-for-older-code-visual-cpp.md)<br/>
[Appartamenti neutri](/windows/win32/cossdk/neutral-apartments)