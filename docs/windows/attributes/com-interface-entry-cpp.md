---
title: com_interface_entry (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.com_interface_entry
helpviewer_keywords:
- com_interface_entry attribute
ms.assetid: 10368f81-b99b-4a0f-ba4f-a142e6911a5c
ms.openlocfilehash: 8339afb97df57f5080629dfed08823c5c091c5a3
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88844119"
---
# <a name="com_interface_entry-c"></a>com_interface_entry (C++)

Aggiunge una voce di interfaccia alla mappa COM della classe di destinazione.

## <a name="syntax"></a>Sintassi

```cpp
[ com_interface_entry(
  com_interface_entry) ]
```

### <a name="parameters"></a>Parametri

*com_interface_entry*<br/>
Stringa contenente il testo effettivo della voce. Per un elenco di valori possibili, vedere [COM_INTERFACE_ENTRY Macros](../../atl/reference/com-interface-entry-macros.md).

## <a name="remarks"></a>Osservazioni

L'attributo **COM_INTERFACE_ENTRY** C++ inserisce il contenuto non abbreviato di una stringa di caratteri nella mappa dell'interfaccia com dell'oggetto di destinazione. Se l'attributo viene applicato una volta all'oggetto di destinazione, la voce viene inserita all'inizio della mappa dell'interfaccia esistente. Se l'attributo viene applicato ripetutamente allo stesso oggetto di destinazione, le voci vengono inserite all'inizio della mappa dell'interfaccia nell'ordine in cui vengono ricevute.

Questo attributo richiede che anche l'attributo [coclass](coclass.md), [progid](progid.md)o [vi_progid](vi-progid.md) (o un altro attributo che implica uno di questi) sia applicato allo stesso elemento. Se viene usato un qualsiasi attributo, anche gli altri due vengono applicati automaticamente. Se, ad esempio, `progid` viene applicato `vi_progid` , `coclass` vengono applicati anche.

Poiché il primo utilizzo di **COM_INTERFACE_ENTRY** comporta l'inserimento della nuova interfaccia all'inizio della mappa dell'interfaccia, deve essere uno dei seguenti tipi di COM_INTERFACE_ENTRY:

- COM_INTERFACE_ENTRY

- COM_INTERFACE_ENTRY_IID

- COM_INTERFACE_ENTRY2

- COM_INTERFACE_ENTRY2_IID

Gli utilizzi aggiuntivi dell'attributo **COM_INTERFACE_ENTRY** possono usare tutti i tipi di COM_INTERFACE_ENTRY supportati.

Questa restrizione è necessaria perché ATL utilizza la prima voce nella mappa dell'interfaccia come identità. `IUnknown` pertanto, la voce deve essere un'interfaccia valida. Ad esempio, l'esempio di codice seguente non è valido perché la prima voce nella mappa dell'interfaccia non specifica un'interfaccia COM effettiva.

```cpp
[ coclass, com_interface_entry =
    "COM_INTERFACE_ENTRY_NOINTERFACE(IDebugTest)"
]
   class CMyClass
   {
   };
```

## <a name="example"></a>Esempio

Il codice seguente aggiunge due voci alla mappa dell'interfaccia COM esistente di `CMyBaseClass` . Il primo è un'interfaccia standard e il secondo nasconde l' `IDebugTest` interfaccia.

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

Il mapping dell'oggetto COM risultante per `CMyBaseClass` è il seguente:

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

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**`class`**, **`struct`**|
|**Ripetibile**|Sì|
|**Attributi richiesti**|Uno o più degli elementi seguenti: `coclass` , `progid` o `vi_progid` .|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi COM](com-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)
