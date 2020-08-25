---
title: Synchronize (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.synchronize
helpviewer_keywords:
- synchronize attribute
ms.assetid: 15fc8544-955d-4765-b3d5-0f619c8b3f40
ms.openlocfilehash: a7edbaa4e572af18bec9b3b6bef54594d6511390
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88831671"
---
# <a name="synchronize"></a>synchronize

Sincronizza l'accesso al metodo di destinazione.

## <a name="syntax"></a>Sintassi

```cpp
[synchronize]
```

## <a name="remarks"></a>Osservazioni

L'attributo **Synchronize** C++ implementa il supporto per sincronizzare il metodo di destinazione di un oggetto. La sincronizzazione consente a più oggetti di usare una risorsa comune, ad esempio un metodo di una classe, controllando l'accesso del metodo di destinazione.

Il codice inserito da questo attributo chiama il `Lock` metodo appropriato (determinato dal modello di Threading) all'inizio del metodo di destinazione. Quando il metodo viene terminato, `Unlock` viene chiamato automaticamente. Per ulteriori informazioni su queste funzioni, vedere [CComAutoThreadModule:: Lock](../../atl/reference/ccomautothreadmodule-class.md#lock)

Questo attributo richiede che anche l'attributo [coclass](coclass.md), [progid](progid.md)o [vi_progid](vi-progid.md) (o un altro attributo che implica uno di questi) sia applicato allo stesso elemento. Se viene usato un qualsiasi attributo, anche gli altri due vengono applicati automaticamente. Se, ad esempio, `progid` viene applicato `vi_progid` , `coclass` vengono applicati anche.

## <a name="example"></a>Esempio

Il codice seguente fornisce la sincronizzazione per il `UpdateBalance` metodo dell' `CMyClass` oggetto.

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

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Metodo della classe, metodo|
|**Ripetibile**|No|
|**Attributi richiesti**|Uno o più degli elementi seguenti: `coclass` , `progid` o `vi_progid` .|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi COM](com-attributes.md)
