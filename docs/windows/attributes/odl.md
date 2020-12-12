---
description: 'Altre informazioni su: FAD'
title: FAD (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.odl
helpviewer_keywords:
- odl attribute
ms.assetid: 75dcb314-b50f-4a63-9180-507ac1bc78f3
ms.openlocfilehash: 00228a11876a551a02a292fc4f20ea67f55506c2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329742"
---
# <a name="odl"></a>odl

Identifica un'interfaccia come interfaccia Object Description Language (FAD). Il compilatore MIDL non richiede l'attributo **FAD** ; viene riconosciuta solo per la compatibilità con i file. FAD precedenti.

## <a name="syntax"></a>Sintassi

```cpp
[odl]
```

## <a name="remarks"></a>Osservazioni

L'attributo di **FAD** C++ ha la stessa funzionalità dell'attributo di [FAD](/windows/win32/Midl/odl) MIDL.

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_odl.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLIb")];

[odl, oleautomation, dual, uuid("00000000-0000-0000-0000-000000000001")]
__interface IMyInterface
{
   HRESULT x();
};

[coclass, uuid("00000000-0000-0000-0000-000000000002")]
class cmyClass : public IMyInterface
{
public:
   HRESULT x(){}
};
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)
