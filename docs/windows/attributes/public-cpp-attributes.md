---
title: Public (attributi C++) (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.public
helpviewer_keywords:
- public attribute
ms.assetid: c42e1fd5-6cb1-48fe-8a03-95f2a2e0137c
ms.openlocfilehash: a12ab0905064a72057dffac03340b667f07b3ae5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62407549"
---
# <a name="public-c-attributes"></a>public (attributi C++)

Assicura che un typedef entra in libreria dei tipi anche se non è presente all'interno del file con estensione idl.

## <a name="syntax"></a>Sintassi

```cpp
[public]
```

## <a name="remarks"></a>Note

Il **pubblico** attributi di C++ ha la stessa funzionalità come il [pubblico](/windows/desktop/Midl/public) attributo MIDL.

## <a name="example"></a>Esempio

Il codice seguente viene illustrato come utilizzare il **pubblica** attributo:

```cpp
// cpp_attr_ref_public.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="ATLFIRELib")];
[export, public] typedef long MEMBERID;

[dispinterface, uuid(99999999-9999-9999-9999-000000000000)]
__interface IFireTabCtrl : IDispatch
{
   [id(2)] long procedure ([in, optional] VARIANT i);
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**typedef**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)