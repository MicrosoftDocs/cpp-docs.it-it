---
title: importare | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: a9e2ee577c3285a7e4c3db2fb19d934417bbe26d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46411560"
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

Il **importare** attributo inserisce solo il file specificato nel file con estensione idl che verrà generato dal progetto; le **importare** attributo non è possibile chiamare costrutti nel file specificato dal codice sorgente nel progetto.  Per chiamare costrutti nel file specificato dal codice sorgente nel progetto, usare [#import](../preprocessor/hash-import-directive-cpp.md) e il `embedded_idl` attributo oppure è possibile includere il file con estensione h per il *idl_file*, se esiste un file con estensione h.

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

Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)<br/>
[Attributi autonomi](../windows/stand-alone-attributes.md)<br/>
[importidl](../windows/importidl.md)<br/>
[importlib](../windows/importlib.md)<br/>
[include](../windows/include-cpp.md)<br/>
[includelib](../windows/includelib-cpp.md)  