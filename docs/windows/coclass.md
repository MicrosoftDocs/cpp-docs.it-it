---
title: coclasse | Documenti Microsoft
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
ms.openlocfilehash: 5eb9c7e632151c039b76a0f389cd18c68c0740ab
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="coclass"></a>coclass
Crea un oggetto COM, che è possibile implementare un'interfaccia COM.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
[coclass]  
  
```  
  
## <a name="remarks"></a>Note  
 Il **coclasse** attributo C++ inserisce un costrutto coclasse nel file IDL generato.  
  
 Quando si definisce una coclasse, è inoltre possibile specificare il [uuid](../windows/uuid-cpp-attributes.md), [versione](../windows/version-cpp.md), [threading](../windows/threading-cpp.md), [vi_progid](../windows/vi-progid.md), e [progid ](../windows/progid.md) attributi. Se uno di essi non viene specificato, verrà generato.  
  
 Se due file di intestazione contengono le classi con la **coclasse** attributo e non specificare un GUID, il compilatore userà lo stesso GUID per entrambe le classi e che causano un errore di MIDL.  Pertanto, è necessario utilizzare il `uuid` attributo quando si utilizza **coclasse**.  
  
 **Progetti ATL**  
  
 Quando questo attributo precede una definizione di classe o struttura in un progetto ATL, è:  
  
-   Inserisce il codice o i dati per supportare la registrazione automatica per l'oggetto.  
  
-   Inserisce il codice o i dati per supportare una class factory COM per l'oggetto.  
  
-   Inserisce il codice o i dati per implementare **IUnknown** e rendere l'oggetto di un oggetto COM creabile.  
  
 In particolare, le classi di base seguente vengono aggiunti all'oggetto di destinazione:  
  
-   [Classe CComCoClass](../atl/reference/ccomcoclass-class.md) fornisce il modello di factory e l'aggregazione di classe predefinito per l'oggetto.  
  
-   [Classe CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) dispone di un modello in base alla classe threading di modello specificata dal [threading](../windows/threading-cpp.md) attributo. Se il **threading** attributo non viene specificato, il valore predefinito di modello di threading è apartment.  
  
-   [IProvideClassInfo2Impl](../atl/reference/iprovideclassinfo2impl-class.md) se viene aggiunto il [noncreatable](../windows/noncreatable.md) attributo non viene specificato per l'oggetto di destinazione.  
  
 Infine, qualsiasi interfaccia duale che non è definito IDL incorporato viene sostituito con il corrispondente [IDispatchImpl](../atl/reference/idispatchimpl-class.md) classe. Se l'interfaccia duale è definita nell'IDL incorporato, l'interfaccia specifica nell'elenco di base non viene modificato.  
  
 Il **coclasse** attributo sono disponibili le funzioni seguenti tramite il codice inserito, o nel caso di `GetObjectCLSID`, come metodo statico nella classe base `CComCoClass`:  
  
-   `UpdateRegistry` Registra class factory della classe di destinazione.  
  
-   `GetObjectCLSID`, correlata alla registrazione, può essere utilizzato anche per ottenere il CLSID della classe di destinazione.  
  
-   **GetObjectFriendlyName** per impostazione predefinita restituirà una stringa di formato "\<*il nome di classe di destinazione*> `Object`". Se questa funzione è già presente, non è aggiunto. Aggiungere questa funzione per la classe di destinazione per restituire un nome più descrittivo rispetto a quello generato automaticamente.  
  
-   **GetProgID**correlata alla registrazione, restituisce la stringa specificata con il [progid](../windows/progid.md) attributo.  
  
-   **GetVersionIndependentProgID** ha la stessa funzionalità **GetProgID**, ma viene restituita la stringa specificata con [vi_progid](../windows/vi-progid.md).  
  
 Le seguenti modifiche che sono correlate alla mappa COM, vengono apportate alla classe di destinazione:  
  
-   Una mappa COM viene aggiunto con le voci per tutte le interfacce deriva la classe di destinazione e tutte le voci specificate per il [punti di ingresso all'interfaccia COM](../mfc/com-interface-entry-points.md) attributo o quelli richiesti dal [aggregazioni](../windows/aggregates.md) attributo.  
  
-   Un [OBJECT_ENTRY_AUTO](../atl/reference/object-map-macros.md#object_entry_auto) macro viene inserito nella mappa COM.
  
 Il nome della coclasse generato nel file IDL per la classe avrà lo stesso nome della classe.  Ad esempio e che fa riferimento all'esempio riportato di seguito per accedere all'ID classe di una coclasse CMyClass, in un client tramite il file di intestazione generati da MIDL, utilizzare CLSID_CMyClass.  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene illustrato come utilizzare il **coclasse** attributo:  
  
```  
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
  
 L'esempio seguente viene illustrato come eseguire l'override l'implementazione predefinita di una funzione che viene visualizzato il codice inserito dal **coclasse** attributo. Per altre informazioni sulla visualizzazione del codice inserito, vedere [/Fx](../build/reference/fx-merge-injected-code.md) . Classi base o interfacce utilizzate per una classe verrà visualizzato il codice inserito.   Inoltre, se una classe è inclusa per impostazione predefinita nel codice inserito e si specifica in modo esplicito tale classe come base per la coclasse, il provider di attributi utilizzerà il formato specificato nel codice.  
  
```  
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
|**Si applica a**|**class**, `struct`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi COM](../windows/com-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [TypeDef, Enum, Union e Struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [appobject](../windows/appobject.md)