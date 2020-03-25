---
title: LCID (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.lcid
helpviewer_keywords:
- LCID attribute
ms.assetid: 7f248c69-ee1c-42c3-9411-39cf27c9f43d
ms.openlocfilehash: bb9e44d34c675e4f5d955c5f422a6dd35259ec8d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214799"
---
# <a name="lcid"></a>lcid

Consente di passare un identificatore delle impostazioni locali a una funzione.

## <a name="syntax"></a>Sintassi

```cpp
[lcid]
```

## <a name="remarks"></a>Osservazioni

L'attributo **LCID** C++ implementa la funzionalità dell'attributo MIDL di [LCID](/windows/win32/Midl/lcid) . Se si desidera implementare impostazioni locali per un blocco di libreria, utilizzare il parametro **LCID =** `lcid` per l'attributo [Module](module-cpp.md) .

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

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Parametro interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di parametro](parameter-attributes.md)
