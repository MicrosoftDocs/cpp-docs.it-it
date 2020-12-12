---
description: 'Altre informazioni su: out (C++)'
title: out (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.out
helpviewer_keywords:
- out attribute
ms.assetid: 5051b1bf-4949-4bf1-b82f-35e14f0f244b
ms.openlocfilehash: 1984d3bc539c5ad390cc1e507f2c8e3144d96ca2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329700"
---
# <a name="out-c"></a>out (C++)

Identifica i parametri dei puntatori restituiti dalla routine chiamata alla routine chiamante (dal server al client).

## <a name="syntax"></a>Sintassi

```cpp
[out]
```

## <a name="remarks"></a>Osservazioni

L'attributo **out** di C++ ha la stessa funzionalità dell'attributo [out](/windows/win32/Midl/out-idl) di MIDL.

## <a name="example"></a>Esempio

Per un'illustrazione dell'uso di [out](bindable.md) , vedere l'esempio per **bindable**.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Parametro interfaccia|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi del parametro](parameter-attributes.md)<br/>
[DefaultValue](defaultvalue.md)<br/>
[id](id.md)
