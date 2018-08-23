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
ms.openlocfilehash: 2ba62d3dfc1f71ab61b5041ebbd884be8b5e39f6
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42592664"
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

*idl_file*  
Il nome di un file con estensione idl che si desidera importare nella libreria dei tipi del progetto corrente.

## <a name="remarks"></a>Note

Il **importare** C++ attributo causa una `#import` istruzione inserita sotto il `import "docobj.idl"` istruzione nel file IDL generato. Il **importare** attributo ha la stessa funzionalità come la [importare](http://msdn.microsoft.com/library/windows/desktop/aa367047) attributo MIDL.

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

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi autonomi](../windows/stand-alone-attributes.md)  
[importidl](../windows/importidl.md)  
[importlib](../windows/importlib.md)  
[include](../windows/include-cpp.md)  
[includelib](../windows/includelib-cpp.md)  