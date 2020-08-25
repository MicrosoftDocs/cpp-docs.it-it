---
title: coclass (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.coclass
helpviewer_keywords:
- coclass attribute
ms.assetid: 42da6a10-3af9-4b43-9a1d-689d00b61eb3
ms.openlocfilehash: 12f7af195f2282955cb16c1f38d4e512ca0f86cb
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88838880"
---
# <a name="coclass"></a>coclass

Crea un oggetto COM che può implementare un'interfaccia COM.

## <a name="syntax"></a>Sintassi

```cpp
[coclass]
```

## <a name="remarks"></a>Osservazioni

L'attributo **coclass** C++ inserisce un costrutto di coclasse nel file con estensione IDL generato.

Quando si definisce una coclasse, è anche possibile specificare gli attributi [UUID](uuid-cpp-attributes.md), [Version](version-cpp.md), [Threading](threading-cpp.md), [vi_progid](vi-progid.md)e [ProgID](progid.md) . Se uno di essi non è specificato, verrà generato.

Se due file di intestazione contengono classi con l'attributo **coclass** e non specificano un GUID, il compilatore utilizzerà lo stesso GUID per entrambe le classi e verrà generato un errore MIDL.  Pertanto, è necessario utilizzare l' `uuid` attributo quando si utilizza **coclass**.

**Progetti ATL**

Quando questo attributo precede una definizione di classe o struttura in un progetto ATL,:

- Inserisce il codice o i dati per supportare la registrazione automatica per l'oggetto.

- Inserisce il codice o i dati per supportare un class factory COM per l'oggetto.

- Inserisce il codice o i dati da implementare `IUnknown` e rende l'oggetto creabile da com.

In particolare, le seguenti classi di base vengono aggiunte all'oggetto di destinazione:

- La [classe CComCoClass](../../atl/reference/ccomcoclass-class.md) fornisce il class factory e il modello di aggregazione predefiniti per l'oggetto.

- La [classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) dispone di un modello basato sulla classe del modello di threading specificata dall'attributo [Threading](threading-cpp.md) . Se l' `threading` attributo non è specificato, il modello di threading predefinito è Apartment.

- [IProvideClassInfo2Impl](../../atl/reference/iprovideclassinfo2impl-class.md) viene aggiunto se l'attributo non [creabile](noncreatable.md) non è specificato per l'oggetto di destinazione.

Infine, qualsiasi interfaccia duale che non viene definita utilizzando IDL incorporato viene sostituita con la classe [IDispatchImpl](../../atl/reference/idispatchimpl-class.md) corrispondente. Se l'interfaccia duale è definita in IDL incorporato, l'interfaccia specifica nell'elenco di base non viene modificata.

L'attributo **coclass** rende inoltre disponibili le funzioni seguenti tramite codice inserito o, nel caso di `GetObjectCLSID` , come metodo statico nella classe di base `CComCoClass` :

- `UpdateRegistry` registra le class factory della classe di destinazione.

- `GetObjectCLSID`, correlato alla registrazione, può essere utilizzato anche per ottenere il CLSID della classe di destinazione.

- `GetObjectFriendlyName` per impostazione predefinita, restituisce una stringa nel formato " \<*target class name*> `Object` ". Se questa funzione è già presente, non viene aggiunta. Aggiungere questa funzione alla classe di destinazione per restituire un nome più amichevole rispetto a quello generato automaticamente.

- `GetProgID`, correlato alla registrazione, restituisce la stringa specificata con l'attributo [ProgID](progid.md) .

- `GetVersionIndependentProgID` ha la stessa funzionalità di `GetProgID` , ma restituisce la stringa specificata con [vi_progid](vi-progid.md).

Vengono apportate le modifiche seguenti, correlate alla mappa COM, alla classe di destinazione:

- Viene aggiunta una mappa COM con le voci per tutte le interfacce da cui deriva la classe di destinazione e tutte le voci specificate dall'attributo dei [punti di ingresso dell'interfaccia com](../../mfc/com-interface-entry-points.md) o quelle richieste dall'attributo [Aggregates](aggregates.md) .

- Una macro [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) viene inserita nella mappa com.

Il nome della coclasse generata nel file IDL per la classe avrà lo stesso nome della classe.  Ad esempio, per fare riferimento all'esempio seguente, per accedere all'ID di classe per una coclasse `CMyClass` in un client tramite il file di intestazione generato da MIDL, usare `CLSID_CMyClass` .

## <a name="example"></a>Esempio

Il codice seguente illustra come usare l'attributo **coclass** :

```cpp
// cpp_attr_ref_coclass1.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="MyLib")];

[ object, uuid("00000000-0000-0000-0000-000000000001") ]
__interface I {
   HRESULT func();
};

[coclass, progid("MyCoClass.coclass.1"), vi_progid("MyCoClass.coclass"),
appobject, uuid("9E66A294-4365-11D2-A997-00C04FA37DDB")]
class CMyClass : public I {};
```

Nell'esempio seguente viene illustrato come eseguire l'override dell'implementazione predefinita di una funzione che viene visualizzata nel codice inserito dall'attributo **coclass** . Per altre informazioni sulla visualizzazione del codice inserito, vedere [/Fx](../../build/reference/fx-merge-injected-code.md) . Tutte le classi o le interfacce di base utilizzate per una classe verranno visualizzate nel codice inserito. Se, inoltre, per impostazione predefinita una classe è inclusa nel codice inserito e si specifica in modo esplicito tale classe come base per la coclasse, il provider di attributi utilizzerà il form specificato nel codice.

```cpp
// cpp_attr_ref_coclass2.cpp
// compile with: /LD
#include <atlbase.h>
#include <atlcom.h>
#include <atlwin.h>
#include <atltypes.h>
#include <atlctl.h>
#include <atlhost.h>
#include <atlplus.h>

[module(name="MyLib")];

[object, uuid("00000000-0000-0000-0000-000000000000")]
__interface bb {};

[coclass, uuid("00000000-0000-0000-0000-000000000001")]
class CMyClass : public bb {
public:
   // by adding the definition of UpdateRegistry to your code, // the function will not be included in the injected code
   static HRESULT WINAPI UpdateRegistry(BOOL bRegister) {
      // you can add to the default implementation
      CRegistryVirtualMachine rvm;
      HRESULT hr;
      if (FAILED(hr = rvm.AddStandardReplacements()))
         return hr;
      rvm.AddReplacement(_T("FriendlyName"), GetObjectFriendlyName());
      return rvm.VMUpdateRegistry(GetOpCodes(), GetOpcodeStringVals(),       GetOpcodeDWORDVals(), GetOpcodeBinaryVals(), bRegister);
   }
};
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**`class`**, **`struct`**|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi COM](com-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)<br/>
[appobject](appobject.md)
