---
title: Import (C++ attributo com)
ms.date: 10/03/2018
f1_keywords:
- vc-attr.import
helpviewer_keywords:
- import attribute
ms.assetid: ebf07cae-39fb-4047-8b57-54af0a9a83de
ms.openlocfilehash: f2a0aa9a68c081e83a7a5278aa37a7fddac85416
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80166836"
---
# <a name="import"></a>import

Specifica un altro file con estensione IDL, FAD o di intestazione contenente le definizioni a cui si vuole fare riferimento dall'IDL principale.

## <a name="syntax"></a>Sintassi

```cpp
[ import(
   idl_file
) ];
```

### <a name="parameters"></a>Parametri

*idl_file*<br/>
Nome di un file con estensione IDL che si desidera importare nella libreria dei tipi del progetto corrente.

## <a name="remarks"></a>Osservazioni

L'attributo **Import** C++ causa l'inserimento di un'istruzione `#import` sotto l'istruzione `import "docobj.idl"` nel file IDL generato. L'attributo **Import** ha la stessa funzionalità dell'attributo MIDL [Import](/windows/win32/Midl/import) .

L'attributo **Import** inserisce il file specificato solo nel file con estensione IDL che verrà generato dal progetto. l'attributo **Import** non consente di chiamare costrutti nel file specificato dal codice sorgente nel progetto.  Per chiamare costrutti nel file specificato dal codice sorgente nel progetto, usare [#import](../../preprocessor/hash-import-directive-cpp.md) e l'attributo `embedded_idl` oppure è possibile includere il file con estensione h per il *idl_file*, se è presente un file con estensione h.

## <a name="example"></a>Esempio

Il codice seguente:

```cpp
// cpp_attr_ref_import.cpp
// compile with: /LD
[module(name="MyLib")];
[import(import.idl)];
```

produce il codice seguente nel file con estensione IDL generato:

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
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[importidl](importidl.md)<br/>
[importlib](importlib.md)<br/>
[include](include-cpp.md)<br/>
[includelib](includelib-cpp.md)
