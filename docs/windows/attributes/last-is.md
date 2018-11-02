---
title: last_is (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.last_is
helpviewer_keywords:
- last_is attribute
ms.assetid: 9e045ac0-fa38-4249-af55-67bde5d0a58c
ms.openlocfilehash: ce19d8d727a359054289200b2cdcb6a6427dc706
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50545717"
---
# <a name="lastis"></a>last_is

Specifica l'indice dell'ultimo elemento di matrice deve essere trasmesso.

## <a name="syntax"></a>Sintassi

```cpp
[ last_is("expression") ]
```

### <a name="parameters"></a>Parametri

*Espressione*<br/>
Una o più espressioni del linguaggio C. Gli slot di argomenti vuoto sono consentiti.

## <a name="remarks"></a>Note

Il **last_is** attributi di C++ ha la stessa funzionalità come la [last_is](/windows/desktop/Midl/last-is) attributo MIDL.

## <a name="example"></a>Esempio

Visualizzare [first_is](first-is.md) per un esempio di come specificare una sezione di una matrice.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Nel campo **struct** oppure **union**, parametro di interfaccia, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi di parametro](parameter-attributes.md)<br/>
[first_is](first-is.md)<br/>
[max_is](max-is.md)<br/>
[length_is](length-is.md)<br/>
[size_is](size-is.md)