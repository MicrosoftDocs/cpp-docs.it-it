---
description: 'Altre informazioni su: ProgID'
title: ProgID (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.progid
helpviewer_keywords:
- progid attribute
ms.assetid: afcf559c-e432-481f-aa9a-bd3bb72c02a8
ms.openlocfilehash: ed829d1ec20ae06fae8604e35ccc260013f59e3d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97114936"
---
# <a name="progid"></a>progid

Specifica il ProgID per un oggetto COM.

## <a name="syntax"></a>Sintassi

```cpp
[ progid(name) ];
```

### <a name="parameters"></a>Parametri

*nome*<br/>
ProgID che rappresenta l'oggetto.

I ProgID presentano una versione leggibile dell'identificatore di classe (CLSID) utilizzato per identificare gli oggetti COM/ActiveX.

## <a name="remarks"></a>Commenti

L' `progid` attributo C++ consente di specificare il ProgID per un oggetto com. Un ProgID ha il formato *name1. name2. Version*. Se non si specifica una *versione* per un ProgID, la versione predefinita è 1. Se non si specifica *name1. name2*, il nome predefinito è *NomeClasse. NomeClasse*. Se non si specifica `progid` e si specifica `vi_progid` , *name1. name2* viene ricavato da `vi_progid` e la versione (numero sequenziale successivo) viene accodata.

Se un blocco di attributi che usa non `progid` usa anche `uuid` , il compilatore controllerà il registro di sistema per verificare se esiste un oggetto `uuid` per l'oggetto specificato `progid` . Se `progid` viene omesso, la versione (e il nome della coclasse, se si crea una coclasse) verranno utilizzati per generare un oggetto `progid` .

`progid` implica l' `coclass` attributo, ovvero, se si specifica `progid` , equivale a specificare gli `coclass` `progid` attributi e.

L' `progid` attributo determina la registrazione automatica di una classe con il nome specificato. Il file. IDL generato non visualizzerà il `progid` valore.

Quando questo attributo viene usato in un progetto che usa ATL, il comportamento dell'attributo viene modificato. Oltre al comportamento precedente, le informazioni specificate con questo attributo vengono utilizzate nella `GetProgID` funzione, inserita dall' `coclass` attributo. Per ulteriori informazioni, vedere l'attributo [coclass](coclass.md) .

## <a name="example"></a>Esempio

Vedere l'esempio per [coclass](coclass.md) per un esempio di utilizzo di `progid` .

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|`class`, `struct`|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Chiave ProgID](/windows/win32/com/-progid--key)
