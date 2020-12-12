---
description: 'Altre informazioni su: appobject'
title: appobject (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.appobject
helpviewer_keywords:
- appobject attribute
ms.assetid: 8ce30b73-e945-403e-a755-6bc78078a695
ms.openlocfilehash: b371b9726e3a750ef5d40ebe5abae219b473bb02
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97205460"
---
# <a name="appobject"></a>appobject

Identifica la coclasse come oggetto applicazione, che è associato a un'applicazione exe completa, e indica che le funzioni e le proprietà della coclasse sono disponibili a livello globale in questa [libreria dei tipi](../../mfc/automation-clients-using-type-libraries.md).

## <a name="syntax"></a>Sintassi

```cpp
[appobject]
```

## <a name="remarks"></a>Osservazioni

L'attributo **appobject** di C++ ha la stessa funzionalità dell'attributo MIDL di [appobject](/windows/win32/Midl/appobject) .

## <a name="example"></a>Esempio

Il codice seguente illustra una semplice definizione di classe preceduta da un blocco di attributi che include **appobject**:

```cpp
// cpp_attr_ref_appobject.cpp
// compile with: /LD
#include <windows.h>
[module(name="MyLib", uuid="f1ce17f0-a5df-4d26-95f6-0a122197ac5b")];

[object, uuid="905de6db-7a12-45ab-9f8b-b39f5112f010"]
__interface ICustom {};

[coclass, appobject,uuid="00395340-745f-4b69-bd58-e2921452b9fc"]
class A : public ICustom {
   int i;
};
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**`class`**, **`struct`**|
|**Ripetibile**|No|
|**Attributi richiesti**|`coclass`|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)
