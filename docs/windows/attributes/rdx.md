---
title: RDX (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.rdx
helpviewer_keywords:
- rdx attribute
ms.assetid: ff8e4312-c1ad-4934-bdaa-86f54409651e
ms.openlocfilehash: 2790c3de01d21242daee73fc442ad22d88739355
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59023880"
---
# <a name="rdx"></a>rdx

Crea una chiave del Registro di sistema o modifica una chiave del Registro di sistema esistente.

## <a name="syntax"></a>Sintassi

```cpp
[ rdx(key, valuename=NULL, regtype) ]
```

### <a name="parameters"></a>Parametri

*key*<br/>
Il nome della chiave può essere creato o aperto.

*valuename*<br/>
(Facoltativo) Specifica il campo del valore da impostare. Se un campo del valore con lo stesso nome esiste già nella chiave, viene aggiunto.

*regtype*<br/>
Il tipo di chiave del Registro di sistema da aggiungere. Può essere uno dei seguenti: `text`, `dword`, `binary`, o `CString`.

## <a name="remarks"></a>Note

Il **rdx** attributo C++ crea o modifica una chiave del Registro di sistema esistente per un componente COM. L'attributo aggiunge una macro BEGIN_RDX_MAP all'oggetto che implementa il membro di destinazione. `RegistryDataExchange`, una funzione inserita come risultato la macro BEGIN_RDX_MAP, può essere usata per trasferire dati tra il Registro di sistema e i membri dati

Questo attributo può essere utilizzato in combinazione con il [coclasse](coclass.md), [progid](progid.md), o [vi_progid](vi-progid.md) attributi o altri attributi che implica uno di questi.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe** oppure **struct** membro|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="example"></a>Esempio

Il codice seguente aggiunge una chiave del Registro di sistema denominata MyValue per il sistema che descrive il componente COM CMyClass.

```cpp
// cpp_attr_ref_rdx.cpp
// compile with: /LD /link /OPT:NOREF
#define _ATL_ATTRIBUTES
#include "atlbase.h"

[module (name="MyLib")];

class CMyClass {
public:
   CMyClass() {
      strcpy_s(m_sz, "SomeValue");
   }

   [ rdx(key = "HKCR\\MyApp.MyApp.1", valuename = "MyValue", regtype = "text")]
   char m_sz[256];
};
```

## <a name="see-also"></a>Vedere anche

[Attributi COM](com-attributes.md)<br/>
[registration_script](registration-script.md)