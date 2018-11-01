---
title: registration_script (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.registration_script
helpviewer_keywords:
- registration_script attribute
ms.assetid: 786f8072-9187-4163-a979-7a604dd4c888
ms.openlocfilehash: 304d4139cb1adbbb7c345cd3ce6f7fc985907712
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50555129"
---
# <a name="registrationscript"></a>registration_script

Esegue lo script di registrazione personalizzato specificato.

## <a name="syntax"></a>Sintassi

```cpp
[ registration_script(script) ]
```

### <a name="parameters"></a>Parametri

*script*<br/>
Il percorso completo in un file di script (con estensione RGS) registrazione personalizzata. Un valore pari **none**, ad esempio `script = "none"`, indica che la coclasse non è previsti requisiti di registrazione.

## <a name="remarks"></a>Note

Il **registration_script** attributo C++ esegue lo script di registrazione personalizzato specificato da *script*. Se questo attributo viene omesso, viene usato un file con estensione RGS standard (contenente informazioni per la registrazione del componente). Per altre informazioni sui file con estensione RGS, vedere [il componente del Registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md).

Questo attributo richiede che anche l'attributo [coclass](coclass.md), [progid](progid.md)o [vi_progid](vi-progid.md) (o un altro attributo che implica uno di questi) sia applicato allo stesso elemento.

## <a name="example"></a>Esempio

Il codice seguente specifica che il componente dispone di uno script del Registro di sistema denominato cpp_attr_ref_registration_script.rgs.

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
|**Si applica a**|**classe**, **struct**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Uno o più delle operazioni seguenti: `coclass`, `progid`, o `vi_progid`.|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi COM](com-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[rdx](rdx.md)