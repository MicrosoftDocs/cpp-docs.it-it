---
title: ProgID (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.progid
helpviewer_keywords:
- progid attribute
ms.assetid: afcf559c-e432-481f-aa9a-bd3bb72c02a8
ms.openlocfilehash: d529d7362dc62207cfd72576159f560a3e04c221
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69514243"
---
# <a name="progid"></a>progid

Specifica il ProgID per un oggetto COM.

## <a name="syntax"></a>Sintassi

```cpp
[ progid(name) ];
```

### <a name="parameters"></a>Parametri

*name*<br/>
ProgID che rappresenta l'oggetto.

I ProgID presentano una versione leggibile dell'identificatore di classe (CLSID) utilizzato per identificare gli oggetti COM/ActiveX.

## <a name="remarks"></a>Note

L'attributo **ProgID** C++ consente di specificare il ProgID per un oggetto com. Un ProgID ha il formato *name1. name2. Version*. Se non si specifica una *versione* per un ProgID, la versione predefinita è 1. Se non si specifica *name1. name2*, il nome predefinito è *NomeClasse. NomeClasse*. Se non si specifica **ProgID** e si specifica `vi_progid`, *name1. name2* viene ricavato da `vi_progid` e viene aggiunta la versione (numero sequenziale successivo).

Se un blocco di attributi che usa **ProgID** non usa anche **UUID**, il compilatore controllerà il registro di sistema per verificare se esiste un **UUID** per il **ProgID**specificato. Se **ProgID** non è specificato, la versione (e il nome della coclasse, se si crea una coclasse) verranno utilizzati per generare un **ProgID**.

**ProgID** implica l' `coclass` attributo, ovvero se si specifica **ProgID**, equivale a specificare gli `coclass` attributi e **ProgID** .

L'attributo **ProgID** causa la registrazione automatica di una classe con il nome specificato. Il file IDL generato non visualizzerà il valore **ProgID** .

Quando questo attributo viene usato in un progetto che usa ATL, il comportamento dell'attributo viene modificato. Oltre al comportamento precedente, le informazioni specificate con questo attributo vengono utilizzate nella `GetProgID` funzione, inserita `coclass` dall'attributo. Per ulteriori informazioni, vedere l'attributo [coclass](coclass.md) .

## <a name="example"></a>Esempio

Vedere l'esempio per [coclass](coclass.md) per un esempio di utilizzo di **ProgID**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|Nessuna|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Chiave ProgID](/windows/win32/com/-progid--key)
