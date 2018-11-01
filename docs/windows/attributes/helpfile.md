---
title: HelpFile (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.helpfile
helpviewer_keywords:
- helpfile attribute
ms.assetid: d75161c1-1363-4019-ae09-e7e3b8a3971e
ms.openlocfilehash: 594ab4d02065e9b4efe1142c5ced9b76642e5481
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50488049"
---
# <a name="helpfile"></a>helpfile

Imposta il nome del file della Guida per una libreria dei tipi.

## <a name="syntax"></a>Sintassi

```cpp
[ helpfile("filename") ]
```

### <a name="parameters"></a>Parametri

*filename*<br/>
Il nome del file che contiene gli argomenti della Guida.

## <a name="remarks"></a>Note

Il **helpfile** attributi di C++ ha la stessa funzionalità come la [helpfile](/windows/desktop/Midl/helpfile) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [module](module-cpp.md) per un esempio di come usare **helpfile**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interfaccia**, **typedef**, **classe**, metodo, **proprietà**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[helpcontext](helpcontext.md)<br/>
[helpstring](helpstring.md)