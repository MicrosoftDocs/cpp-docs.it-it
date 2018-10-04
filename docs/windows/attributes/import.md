---
title: importare (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/03/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.import
dev_langs:
- C++
helpviewer_keywords:
- import attribute
ms.assetid: ebf07cae-39fb-4047-8b57-54af0a9a83de
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a0509f6c1292ee7bb2e1ba97d1f75c626f3b0761
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48791836"
---
# <a name="import"></a>importazione

Specifica un altro file con estensione idl o ODL intestazione che contiene le definizioni di che voler fare riferimento a di IDL principale.

## <a name="syntax"></a>Sintassi

```cpp
[ import(
   idl_file
) ];
```

### <a name="parameters"></a>Parametri

*idl_file*<br/>
Il nome di un file con estensione idl che si desidera importare nella libreria dei tipi del progetto corrente.

## <a name="remarks"></a>Note

Il **importare** C++ attributo causa una `#import` istruzione inserita sotto il `import "docobj.idl"` istruzione nel file IDL generato. Il **importare** attributo ha la stessa funzionalità come la [importare](/windows/desktop/Midl/import) attributo MIDL.

Il **importare** attributo inserisce solo il file specificato nel file con estensione idl che verrà generato dal progetto; le **importare** attributo non è possibile chiamare costrutti nel file specificato dal codice sorgente nel progetto.  Per chiamare costrutti nel file specificato dal codice sorgente nel progetto, usare [#import](../../preprocessor/hash-import-directive-cpp.md) e il `embedded_idl` attributo oppure è possibile includere il file con estensione h per il *idl_file*, se esiste un file con estensione h.

## <a name="example"></a>Esempio

Il codice seguente:

```cpp
// cpp_attr_ref_import.cpp
// compile with: /LD
[module(name="MyLib")];
[import(import.idl)];
```

Genera il codice seguente nel file IDL generato:

```
import "docobj.idl";
import "import.idl";

[ uuid(EED3644C-8488-3ECD-BA97-147DB3CDB499), version(1.0) ]
library MyLib {
   importlib("stdole2.tlb");
   importlib("olepro32.dll");
...
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[importidl](importidl.md)<br/>
[importlib](importlib.md)<br/>
[include](include-cpp.md)<br/>
[includelib](includelib-cpp.md)  