---
title: sincronizzare (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.synchronize
helpviewer_keywords:
- synchronize attribute
ms.assetid: 15fc8544-955d-4765-b3d5-0f619c8b3f40
ms.openlocfilehash: ea5236b887fb0df2a0acdd1e4050c66a4719072b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62407133"
---
# <a name="synchronize"></a>synchronize

Sincronizza l'accesso al metodo di destinazione.

## <a name="syntax"></a>Sintassi

```cpp
[synchronize]
```

## <a name="remarks"></a>Note

Il **sincronizzare** attributo C++ implementa il supporto per la sincronizzazione il metodo di destinazione di un oggetto. Sincronizzazione consente più agli oggetti di usare una risorsa comune (ad esempio un metodo di una classe) tramite il controllo di accesso del metodo di destinazione.

Il codice inserito da questo attributo chiama appropriate `Lock` metodo (determinata dal modello di threading) all'inizio del metodo di destinazione. Quando il metodo viene terminato, `Unlock` viene chiamato automaticamente. Per altre informazioni su queste funzioni, vedere [CComAutoThreadModule::Lock](../../atl/reference/ccomautothreadmodule-class.md#lock)

Questo attributo richiede che anche l'attributo [coclass](coclass.md), [progid](progid.md)o [vi_progid](vi-progid.md) (o un altro attributo che implica uno di questi) sia applicato allo stesso elemento. Se viene usato un qualsiasi attributo, anche gli altri due vengono applicati automaticamente. Ad esempio, se `progid` viene applicata `vi_progid` e `coclass` vengono applicati anche.

## <a name="example"></a>Esempio

Il codice seguente fornisce la sincronizzazione per il `UpdateBalance` metodo di `CMyClass` oggetto.

```cpp
// cpp_attr_ref_synchronize.cpp
// compile with: /LD
#define _ATL_ATTRIBUTES
#include "atlbase.h"
#include "atlcom.h"

[module(name="SYNC")];

[coclass,
threading(both),
vi_progid("MyProject.MyClass"),
progid("MyProject.MyClass.1"),
uuid("7a7baa0d-59b8-4576-b754-79d07e1d1cc3")
]
class CMyClass {
   float m_nBalance;

   [synchronize]
   void UpdateBalance(float nAdjust) {
      m_nBalance += nAdjust;
   }
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo della classe, metodo|
|**Ripetibile**|No|
|**Attributi obbligatori**|Uno o più delle operazioni seguenti: `coclass`, `progid`, o `vi_progid`.|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi COM](com-attributes.md)