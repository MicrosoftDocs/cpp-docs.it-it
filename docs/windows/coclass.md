---
title: coclasse | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.coclass
dev_langs:
- C++
helpviewer_keywords:
- coclass attribute
ms.assetid: 42da6a10-3af9-4b43-9a1d-689d00b61eb3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5816c62749c889cdd926ff1551f4849fd039f1f7
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42585264"
---
# <a name="coclass"></a>coclass

Crea un oggetto COM, che è possibile implementare un'interfaccia COM.

## <a name="syntax"></a>Sintassi

```cpp
[coclass]
```

## <a name="remarks"></a>Note

Il **coclasse** attributo C++ inserisce un costrutto coclasse nel file con estensione IDL generato.

Quando si definisce una coclasse, è anche possibile specificare il [uuid](../windows/uuid-cpp-attributes.md), [versione](../windows/version-cpp.md), [threading](../windows/threading-cpp.md), [vi_progid](../windows/vi-progid.md), e [progid ](../windows/progid.md) attributi. Se uno di essi non viene specificato, verrà generato.

Se due file di intestazione contengono le classi con il **coclasse** attributo e non specifica un GUID, il compilatore userà lo stesso GUID per entrambe le classi e che verrà generato un errore MIDL.  Pertanto, è consigliabile usare la `uuid` attributo quando si usa **coclasse**.

**Progetti ATL**

Quando questo attributo precede una definizione di classe o struttura in un progetto ATL, è:

- Inserisce il codice o dati per supportare la registrazione automatica per l'oggetto.

- Inserisce il codice o dati per supportare una class factory COM per l'oggetto.

- Inserisce il codice o dati per implementare `IUnknown` e converte l'oggetto in un oggetto creato da COM.

In particolare, le classi di base seguente vengono aggiunti all'oggetto di destinazione:

- [Classe CComCoClass](../atl/reference/ccomcoclass-class.md) fornisce il modello di factory e l'aggregazione di classe predefinito per l'oggetto.

- [Classe CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) dispone di un modello basato sulla classe modello threading specificata dal [threading](../windows/threading-cpp.md) attributo. Se il `threading` attributo non viene specificato, l'impostazione predefinita il modello di threading apartment.

- [IProvideClassInfo2Impl](../atl/reference/iprovideclassinfo2impl-class.md) se viene aggiunto il [noncreatable](../windows/noncreatable.md) attributo non è specificato per l'oggetto di destinazione.

Infine, qualsiasi interfaccia duale non definito usando IDL incorporato viene sostituito con il corrispondente [IDispatchImpl](../atl/reference/idispatchimpl-class.md) classe. Se l'interfaccia duale viene definita nell'IDL incorporato, l'interfaccia specifica nell'elenco di base non viene modificato.

Il **coclasse** attributo rende le funzioni seguenti disponibili anche tramite il codice inserito, o nel caso delle `GetObjectCLSID`, come metodo statico nella classe base `CComCoClass`:

- `UpdateRegistry` Registra la class factory della classe di destinazione.

- `GetObjectCLSID`, che è correlato alla registrazione, è anche utilizzabile per ottenere il CLSID della classe di destinazione.

- `GetObjectFriendlyName` Per impostazione predefinita restituirà una stringa di formato "\<*nome classe destinazione*> `Object`". Se questa funzione è già presente, non viene aggiunto. Aggiungere questa funzione per la classe di destinazione per restituire un nome più descrittivo rispetto a quello generato automaticamente.

- `GetProgID`, che è correlato alla registrazione, restituisce la stringa specificata con il [progid](../windows/progid.md) attributo.

- `GetVersionIndependentProgID` ha la stessa funzionalità `GetProgID`, ma viene restituita la stringa specificata con [vi_progid](../windows/vi-progid.md).

Le modifiche seguenti, che sono correlate alla mappa COM, vengono apportate alla classe di destinazione:

- Una mappa COM viene aggiunto con le voci per tutte le interfacce deriva la classe di destinazione e tutte le voci specificate dal [punti di ingresso all'interfaccia COM](../mfc/com-interface-entry-points.md) attributo o quelle richieste dalle [aggregazioni](../windows/aggregates.md) attributo.

- Un' [OBJECT_ENTRY_AUTO](../atl/reference/object-map-macros.md#object_entry_auto) macro viene inserita nella mappa COM.

Il nome della coclasse generato nel file IDL per la classe avrà lo stesso nome di classe.  Ad esempio e che fa riferimento all'esempio seguente, per accedere all'ID di classe per una coclasse `CMyClass`, in un client tramite il file di intestazione generati da MIDL, usare `CLSID_CMyClass`.

## <a name="example"></a>Esempio

Il codice seguente viene illustrato come utilizzare il **coclasse** attributo:

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

L'esempio seguente viene illustrato come sostituire l'implementazione predefinita di una funzione che viene visualizzata nel codice inserito per i **coclasse** attributo. Per altre informazioni sulla visualizzazione del codice inserito, vedere [/Fx](../build/reference/fx-merge-injected-code.md) . Tutte le classi di base o interfacce utilizzate per una classe verrà visualizzata nel codice inserito. Inoltre, se una classe è inclusa per impostazione predefinita nel codice inserito e si specifica in modo esplicito tale classe come base per la coclasse, il provider di attributi utilizzerà il formato specificato nel codice.

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
   // by adding the definition of UpdateRegistry to your code,
   // the function will not be included in the injected code
   static HRESULT WINAPI UpdateRegistry(BOOL bRegister) {
      // you can add to the default implementation
      CRegistryVirtualMachine rvm;
      HRESULT hr;
      if (FAILED(hr = rvm.AddStandardReplacements()))  
         return hr;
      rvm.AddReplacement(_T("FriendlyName"), GetObjectFriendlyName());
      return rvm.VMUpdateRegistry(GetOpCodes(), GetOpcodeStringVals(),
         GetOpcodeDWORDVals(), GetOpcodeBinaryVals(), bRegister);
   }
};
```

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
[Attributi COM](../windows/com-attributes.md)  
[Attributi di classe](../windows/class-attributes.md)  
[Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)  
[appobject](../windows/appobject.md)