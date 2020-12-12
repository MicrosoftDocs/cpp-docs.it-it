---
description: 'Altre informazioni su: non estendibile'
title: non estendibile (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.nonextensible
helpviewer_keywords:
- nonextensible attribute
ms.assetid: c7ef1554-809f-4ea0-a7cd-dc7786d40c3e
ms.openlocfilehash: dfb0eda0fc8c6de367ee29ec3786750ba40395ec
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327447"
---
# <a name="nonextensible"></a>nonextensible

Specifica che l' `IDispatch` implementazione include solo le proprietà e i metodi elencati nella descrizione dell'interfaccia e che non possono essere estesi con membri aggiuntivi in fase di esecuzione.

## <a name="syntax"></a>Sintassi

```cpp
[nonextensible]
```

## <a name="remarks"></a>Osservazioni

L'attributo C++ non **estendibile** ha la stessa funzionalità dell'attributo MIDL non [estensibile](/windows/win32/Midl/nonextensible) .

L'utilizzo di non **estendibile** richiede anche l'attributo [oleautomation](oleautomation.md) .

## <a name="example"></a>Esempio

Nel codice seguente viene illustrato un utilizzo dell'attributo non **estendibile** :

```cpp
// cpp_attr_ref_nonextensible.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="ATLFIRELib")];
[export] typedef long HRESULT;

[dual, nonextensible, ms_union, oleautomation,
uuid("00000000-0000-0000-0000-000000000001")]
__interface IFireTabCtrl
{
   HRESULT procedure (int i);
};
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi richiesti**|`dual` and `oleautomation` , or `dispinterface`|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)
