---
title: COM_INTERFACE_ENTRY (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.com_interface_entry
dev_langs:
- C++
helpviewer_keywords:
- com_interface_entry attribute
ms.assetid: 10368f81-b99b-4a0f-ba4f-a142e6911a5c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 06377d9fc3f0eff1487c5d920d257d68bece46b2
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48791364"
---
# <a name="cominterfaceentry-c"></a>com_interface_entry (C++)

Aggiunge una voce di interfaccia nella mappa COM della classe di destinazione.

## <a name="syntax"></a>Sintassi

```cpp
[ com_interface_entry(
  com_interface_entry) ]
```

### <a name="parameters"></a>Parametri

*COM_INTERFACE_ENTRY*<br/>
Stringa contenente il testo effettivo della voce. Per un elenco di valori possibili, vedere [COM_INTERFACE_ENTRY macro](../../atl/reference/com-interface-entry-macros.md).

## <a name="remarks"></a>Note

Il **com_interface_entry** attributo C++ inserisce il contenuto ridotta della stringa di caratteri nella mappa dell'interfaccia COM dell'oggetto di destinazione. Se l'attributo viene applicato una sola volta per l'oggetto di destinazione, la voce viene inserita all'inizio della mappa dell'interfaccia esistente. Se l'attributo viene applicato più volte allo stesso oggetto di destinazione, le voci vengono inserite all'inizio della mappa dell'interfaccia nell'ordine in che cui vengono ricevute.

Questo attributo richiede che il [coclasse](coclass.md), [progid](progid.md), o [vi_progid](vi-progid.md) attributo (o un altro attributo che implica uno di questi) anche sia applicato allo stesso elemento. Se viene usato un qualsiasi attributo, anche gli altri due vengono applicati automaticamente. Ad esempio, se `progid` viene applicata `vi_progid` e `coclass` vengono applicati anche.

Poiché il primo utilizzo di **com_interface_entry** fa sì che la nuova interfaccia deve essere inserito all'inizio della mappa dell'interfaccia, deve essere uno dei tipi COM_INTERFACE_ENTRY seguenti:

- COM_INTERFACE_ENTRY

- COM_INTERFACE_ENTRY_IID

- COM_INTERFACE_ENTRY2

- COM_INTERFACE_ENTRY2_IID

Altri utilizzi del **com_interface_entry** attributo può usare tutti i COM_INTERFACE_ENTRY tipi supportati.

Questa restrizione è necessaria perché ATL Usa la prima voce nella mappa dell'interfaccia come identità `IUnknown`; di conseguenza, la voce deve essere un'interfaccia valida. Esempio di codice seguente, ad esempio, non è valido perché la prima voce nella mappa dell'interfaccia non specifica un'interfaccia COM effettiva.

```cpp
[ coclass, com_interface_entry =
    "COM_INTERFACE_ENTRY_NOINTERFACE(IDebugTest)"
]
   class CMyClass
   {
   };
```

## <a name="example"></a>Esempio

Il codice seguente aggiunge due voci per la mappa dell'interfaccia COM esistente di `CMyBaseClass`. Il primo è un'interfaccia standard, e il secondo consente di nascondere il `IDebugTest` interfaccia.

```cpp
// cpp_attr_ref_com_interface_entry.cpp
// compile with: /LD
#define _ATL_ATTRIBUTES
#include "atlbase.h"
#include "atlcom.h"

[module (name ="ldld")];

[ object,
  uuid("7dbebed3-d636-4917-af62-c767a720a5b9")]
__interface IDebugTest{};

[ object,
  uuid("2875ceac-f94b-4087-8e13-d13dc167fcfc")]
__interface IMyClass{};

[ coclass,
  com_interface_entry ("COM_INTERFACE_ENTRY (IMyClass)"),
  com_interface_entry ("COM_INTERFACE_ENTRY_NOINTERFACE(IDebugTest)"),
  uuid("b85f8626-e76e-4775-b6a0-4826a9e94af2")  
]

class CMyClass: public IMyClass, public IDebugTest
{
};
```

La mappa di oggetti COM risultante per `CMyBaseClass` è come segue:

```cpp
BEGIN_COM_MAP(CMyClass)  
    COM_INTERFACE_ENTRY (IMyClass)  
    COM_INTERFACE_ENTRY_NOINTERFACE(IDebugTest)  
    COM_INTERFACE_ENTRY(IMyClass)  
    COM_INTERFACE_ENTRY2(IDispatch, IMyClass)  
    COM_INTERFACE_ENTRY(IDebugTest)  
    COM_INTERFACE_ENTRY(IProvideClassInfo)  
END_COM_MAP()  
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**|
|**Ripetibile**|Yes|
|**Attributi obbligatori**|Uno o più delle operazioni seguenti: `coclass`, `progid`, o `vi_progid`.|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi COM](com-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)  