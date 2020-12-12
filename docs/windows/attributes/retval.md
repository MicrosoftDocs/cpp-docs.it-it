---
description: 'Altre informazioni su: retval'
title: retval (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.retval
helpviewer_keywords:
- retval attribute
ms.assetid: bfa16f08-157d-4eea-afde-1232c54b8501
ms.openlocfilehash: 15bfc994d18a9c61c37402aa763ecbfd96cbd768
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97114858"
---
# <a name="retval"></a>retval

Definisce il parametro che riceve il valore restituito del membro.

## <a name="syntax"></a>Sintassi

```cpp
[retval]
```

## <a name="remarks"></a>Osservazioni

L'attributo **retval** di C++ ha la stessa funzionalità dell'attributo MIDL di [retval](/windows/win32/Midl/retval) .

**retval** deve essere visualizzato nell'ultimo argomento della dichiarazione di una funzione.

## <a name="example"></a>Esempio

Vedere l'esempio per [associabile](bindable.md) per un esempio di uso di **retval**.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Parametro di interfaccia, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi richiesti**|**out**|
|**Attributi non validi**|**in**|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi del parametro](parameter-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)
