---
title: HelpFile (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.helpfile
dev_langs:
- C++
helpviewer_keywords:
- helpfile attribute
ms.assetid: d75161c1-1363-4019-ae09-e7e3b8a3971e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9a498cefce01d5a22df5211d0f7bb2f64e3a7b79
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48792092"
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

Per altre informazioni, vedere [contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[helpcontext](helpcontext.md)<br/>
[helpstring](helpstring.md)  