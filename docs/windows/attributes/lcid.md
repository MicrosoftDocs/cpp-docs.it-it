---
description: 'Altre informazioni su: LCID'
title: LCID (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.lcid
helpviewer_keywords:
- LCID attribute
ms.assetid: 7f248c69-ee1c-42c3-9411-39cf27c9f43d
ms.openlocfilehash: 2af34574539372a07daadc48874316b0b268f317
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329862"
---
# <a name="lcid"></a>lcid

Consente di passare un identificatore delle impostazioni locali a una funzione.

## <a name="syntax"></a>Sintassi

```cpp
[lcid]
```

## <a name="remarks"></a>Osservazioni

L'attributo **LCID** C++ implementa la funzionalità dell'attributo MIDL [LCID](/windows/win32/Midl/lcid) . Se si desidera implementare impostazioni locali per un blocco di libreria, utilizzare il parametro **LCID =** `lcid` per l'attributo [Module](module-cpp.md) .

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_lcid.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLibrary")];
typedef long HRESULT;

[dual, uuid("2F5F63F1-16DA-11d2-9E7B-00C04FB926DA")]
__interface IStatic {
   HRESULT MyFunc([in, lcid] long LocaleID, [out, retval] BSTR * ReturnVal);
};
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Parametro interfaccia|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi del parametro](parameter-attributes.md)
