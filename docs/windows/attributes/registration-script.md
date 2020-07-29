---
title: registration_script (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.registration_script
helpviewer_keywords:
- registration_script attribute
ms.assetid: 786f8072-9187-4163-a979-7a604dd4c888
ms.openlocfilehash: 53b5cb0cb36d9d6627f16f99cbb0d142af8cee6d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87217220"
---
# <a name="registration_script"></a>registration_script

Esegue lo script di registrazione personalizzato specificato.

## <a name="syntax"></a>Sintassi

```cpp
[ registration_script(script) ]
```

### <a name="parameters"></a>Parametri

*script*<br/>
Percorso completo di un file di script di registrazione personalizzato (con estensione RGS). Il valore **None**, ad esempio `script = "none"` , indica che la coclasse non presenta requisiti di registrazione.

## <a name="remarks"></a>Osservazioni

L'attributo **registration_script** C++ esegue lo script di registrazione personalizzato specificato dallo *script*. Se questo attributo non viene specificato, viene utilizzato un file con estensione rgs standard (contenente le informazioni per la registrazione del componente). Per ulteriori informazioni sui file con estensione RGS, vedere [il componente del registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md).

Questo attributo richiede che anche l'attributo [coclass](coclass.md), [progid](progid.md)o [vi_progid](vi-progid.md) (o un altro attributo che implica uno di questi) sia applicato allo stesso elemento.

## <a name="example"></a>Esempio

Il codice seguente specifica che il componente dispone di uno script del registro di sistema denominato cpp_attr_ref_registration_script. RGS.

```cpp
// cpp_attr_ref_registration_script.cpp
// compile with: /LD
#define _ATL_ATTRIBUTES
#include "atlbase.h"
#include "atlcom.h"

[module (name="REG")];

[object, uuid("d9cd196b-6836-470b-9b9b-5b04b828e5b0")]
__interface IFace {};

// requires "cpp_attr_ref_registration_script.rgs"
// create sample .RGS file "cpp_attr_ref_registration_script.rgs" if it does not exist
[ coclass, registration_script(script="cpp_attr_ref_registration_script.rgs"),
  uuid("50d3ad42-3601-4f26-8cfe-0f1f26f98f67")]
class CMyClass:public IFace {};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**`class`**, **`struct`**|
|**Ripetibile**|No|
|**Attributi richiesti**|Uno o più degli elementi seguenti: `coclass` , `progid` o `vi_progid` .|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi COM](com-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[rdx](rdx.md)
