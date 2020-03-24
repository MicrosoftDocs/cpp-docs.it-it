---
title: non estendibileC++ (attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.nonextensible
helpviewer_keywords:
- nonextensible attribute
ms.assetid: c7ef1554-809f-4ea0-a7cd-dc7786d40c3e
ms.openlocfilehash: 2a1cd4d685e2fd141c6e11feaea488f44a884c80
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214675"
---
# <a name="nonextensible"></a>nonextensible

Specifica che l'implementazione del `IDispatch` include solo le proprietà e i metodi elencati nella descrizione dell'interfaccia e che non possono essere estesi con membri aggiuntivi in fase di esecuzione.

## <a name="syntax"></a>Sintassi

```cpp
[nonextensible]
```

## <a name="remarks"></a>Osservazioni

L'attributo non **estendibile** C++ ha la stessa funzionalità dell'attributo MIDL non [estensibile](/windows/win32/Midl/nonextensible) .

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

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi obbligatori**|`dual` e `oleautomation`oppure `dispinterface`|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)
