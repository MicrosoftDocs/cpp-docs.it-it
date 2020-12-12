---
description: 'Altre informazioni su: importazione'
title: Import (attributo COM C++)
ms.date: 10/03/2018
f1_keywords:
- vc-attr.import
helpviewer_keywords:
- import attribute
ms.assetid: ebf07cae-39fb-4047-8b57-54af0a9a83de
ms.openlocfilehash: a3ebb7aa625c0a422197662973985275647a049f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321402"
---
# <a name="import"></a>importazione

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

## <a name="remarks"></a>Commenti

L'attributo **Import** C++ fa sì `#import` che un'istruzione venga posizionata sotto l' `import "docobj.idl"` istruzione nel file con estensione IDL generato. L'attributo **Import** ha la stessa funzionalità dell'attributo MIDL [Import](/windows/win32/Midl/import) .

L'attributo **Import** inserisce il file specificato solo nel file con estensione IDL che verrà generato dal progetto. l'attributo **Import** non consente di chiamare costrutti nel file specificato dal codice sorgente nel progetto.  Per chiamare costrutti nel file specificato dal codice sorgente nel progetto, usare [#import](../../preprocessor/hash-import-directive-cpp.md) e l' `embedded_idl` attributo oppure è possibile includere il file con estensione h per la *idl_file*, se è presente un file con estensione h.

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

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[importidl](importidl.md)<br/>
[importlib](importlib.md)<br/>
[includere](include-cpp.md)<br/>
[includelib (](includelib-cpp.md)
