---
title: ProgID | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.progid
dev_langs:
- C++
helpviewer_keywords:
- progid attribute
ms.assetid: afcf559c-e432-481f-aa9a-bd3bb72c02a8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1c395a79cc9e0399000278af1a19916c2c83bb10
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43209466"
---
# <a name="progid"></a>progid

Specifica il ProgID di un oggetto COM.

## <a name="syntax"></a>Sintassi

```cpp
[ progid(
   name
) ];
```

### <a name="parameters"></a>Parametri

*name*  
Il ProgID che rappresenta l'oggetto.

ProgID presentano una versione leggibile dell'identificatore di classe (CLSID) usato per identificare gli oggetti ActiveX/COM.

## <a name="remarks"></a>Note

Il **progid** attributo C++ consente di specificare il ProgID di un oggetto COM. Un ProgID ha il formato *name1.name2.version*. Se non si specifica un *versione* per un ProgID, la versione predefinita è 1. Se non si specifica *name1.name2*, il nome predefinito è *classname.classname*. Se non si specifica **progid** e si specifica `vi_progid`, *name1.name2* provengono da `vi_progid` e di (successivo numero sequenziale) versione viene aggiunto.

Se un blocco di attributi che utilizza **progid** non utilizza inoltre **uuid**, il compilatore verificherà il Registro di sistema per verificare se un **uuid** esiste per l'oggetto specificato **progid** . Se **progid** non viene specificato, la versione (e un nome (coclasse), se la creazione di una coclasse) verrà utilizzati per generare un **progid**.

**ProgID** implica la `coclass` dell'attributo, vale a dire, se si specifica **progid**, è la stessa operazione quello ottenuto specificando il `coclass` e **progid** attributi.

Il **progid** attributo fa sì che una classe da registrare automaticamente sotto il nome specificato. Il file con estensione IDL generato non verrà visualizzata la **progid** valore.

Quando questo attributo viene usato all'interno di un progetto che usa ATL, il comportamento dell'attributo cambia. Oltre al comportamento precedente, le informazioni specificate con questo attributo viene utilizzate nel `GetProgID` funzione, inserito dal `coclass` attributo. Per altre informazioni, vedere la [coclasse](../windows/coclass.md) attributo.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [coclasse](../windows/coclass.md) per un esempio dell'uso dei **progid**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi di classe](../windows/class-attributes.md)  
[Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)  
[Chiave progID](/windows/desktop/com/-progid--key)  
