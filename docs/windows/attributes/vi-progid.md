---
title: vi_progid (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.vi_progid
helpviewer_keywords:
- vi_progid attribute
ms.assetid: a52449be-b93e-4111-b883-44bb8da53261
ms.openlocfilehash: e7da3463b142fbca83387e52394ee33f42636124
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213788"
---
# <a name="vi_progid"></a>vi_progid

Specifica una forma indipendente dalla versione del ProgID.

## <a name="syntax"></a>Sintassi

```cpp
[ vi_progid(name) ];
```

### <a name="parameters"></a>Parametri

*nome*<br/>
ProgID indipendente dalla versione che rappresenta l'oggetto.

I ProgID presentano una versione leggibile dell'identificatore di classe (CLSID) utilizzato per identificare gli oggetti COM/ActiveX.

## <a name="remarks"></a>Osservazioni

L'attributo **vi_progid** C++ consente di specificare un ProgID indipendente dalla versione per un oggetto com. Un ProgID ha il formato *name1. name2. Version*. Un ProgID indipendente dalla versione non dispone di una *versione*. È possibile specificare gli `progid` attributi e **vi_progid** in un oggetto `coclass` . Se non si specifica **vi_progid**, il ProgID indipendente dalla versione è il valore specificato dall'attributo [ProgID](progid.md) .

**vi_progid** implica l' `coclass` attributo, ovvero se si specifica **vi_progid**, equivale a specificare gli `coclass` attributi e **vi_progid** .

L'attributo **vi_progid** causa la registrazione automatica di una classe con il nome specificato. Il file IDL generato non visualizzerà il valore ProgID.

Nei progetti ATL, se è presente anche l'attributo [coclass](coclass.md) , il ProgID specificato viene usato dalla `GetVersionIndependentProgID` funzione (inserita dall' `coclass` attributo).

## <a name="example"></a>Esempio

Vedere l'esempio di [coclasse](coclass.md) per un uso di esempio di **vi_progid**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**`class`**, **`struct`**|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Chiave ProgID](/windows/win32/com/-progid--key)
