---
title: fileguida (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.helpfile
helpviewer_keywords:
- helpfile attribute
ms.assetid: d75161c1-1363-4019-ae09-e7e3b8a3971e
ms.openlocfilehash: 385c6da6a432f0954e62c9f16a22f0b70b73b317
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88845237"
---
# <a name="helpfile"></a>helpfile

Imposta il nome del file della Guida per una libreria dei tipi.

## <a name="syntax"></a>Sintassi

```cpp
[ helpfile("filename") ]
```

### <a name="parameters"></a>Parametri

*filename*<br/>
Nome del file che contiene gli argomenti della guida.

## <a name="remarks"></a>Osservazioni

L' **attributo di fileguida C++ ha** la stessa funzionalità [dell'attributo](/windows/win32/Midl/helpfile) .

## <a name="example"></a>Esempio

Vedere l'esempio relativo a [Module](module-cpp.md) per un esempio di **come usare fileguida**.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**interfaccia**, **`typedef`** , **`class`** , metodo, **`property`**|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)<br/>
[helpcontext](helpcontext.md)<br/>
[helpstring](helpstring.md)
