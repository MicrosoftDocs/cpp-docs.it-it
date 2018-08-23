---
title: nonextensible | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.nonextensible
dev_langs:
- C++
helpviewer_keywords:
- nonextensible attribute
ms.assetid: c7ef1554-809f-4ea0-a7cd-dc7786d40c3e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5dc2419cad0744ae3487f368b2238f80b96bd8fb
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42612857"
---
# <a name="nonextensible"></a>nonextensible

Specifica che il `IDispatch` implementazione include solo le proprietà e i metodi elencati nella descrizione dell'interfaccia e non possono essere estese con membri aggiuntivi in fase di esecuzione.

## <a name="syntax"></a>Sintassi

```cpp
[nonextensible]
```

## <a name="remarks"></a>Note

Il **nonextensible** attributi di C++ ha la stessa funzionalità come la [nonextensible](http://msdn.microsoft.com/library/windows/desktop/aa367120) attributo MIDL.

Sfrutta **nonextensible** richiede inoltre il [oleautomation](../windows/oleautomation.md) attributo.

## <a name="example"></a>Esempio

Il codice seguente illustra un uso del **nonextensible** attributo:

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

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi obbligatori**|`dual` e `oleautomation`, o `dispinterface`|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi di interfaccia](../windows/interface-attributes.md)  