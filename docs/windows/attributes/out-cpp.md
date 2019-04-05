---
title: out (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.out
helpviewer_keywords:
- out attribute
ms.assetid: 5051b1bf-4949-4bf1-b82f-35e14f0f244b
ms.openlocfilehash: 7020bd6cfcf8bcdbfb773908e693c6364a29e343
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59037581"
---
# <a name="out-c"></a>out (C++)

Identifica i parametri dei puntatori restituiti dalla routine chiamata alla routine chiamante (dal server al client).

## <a name="syntax"></a>Sintassi

```cpp
[out]
```

## <a name="remarks"></a>Note

L'attributo **out** di C++ ha la stessa funzionalità dell'attributo [out](/windows/desktop/Midl/out-idl) di MIDL.

## <a name="example"></a>Esempio

Per un'illustrazione dell'uso di [out](bindable.md) , vedere l'esempio per **bindable**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Parametro interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi dei parametri](parameter-attributes.md)<br/>
[defaultvalue](defaultvalue.md)<br/>
[ID](id.md)