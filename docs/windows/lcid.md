---
title: LCID | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.lcid
dev_langs:
- C++
helpviewer_keywords:
- LCID attribute
ms.assetid: 7f248c69-ee1c-42c3-9411-39cf27c9f43d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ce3bf5b229baa953a8e3431a35f4449fbae87a4d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46405645"
---
# <a name="lcid"></a>lcid

Consente di passare un identificatore delle impostazioni locali a una funzione.

## <a name="syntax"></a>Sintassi

```cpp
[lcid]
```

## <a name="remarks"></a>Note

Il **lcid** attributi di C++ implementa la funzionalità delle [lcid](/windows/desktop/Midl/lcid) attributo MIDL. Se si desidera implementare le impostazioni locali per un blocco di libreria, usare il **lcid =** `lcid` parametro per il [modulo](../windows/module-cpp.md) attributo.

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
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)<br/>
[Attributi di parametro](../windows/parameter-attributes.md)  