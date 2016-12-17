---
title: "coclass | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.coclass"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "coclass attribute"
ms.assetid: 42da6a10-3af9-4b43-9a1d-689d00b61eb3
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# coclass
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

crea un oggetto COM, che può implementare un'interfaccia COM.  
  
## Sintassi  
  
```  
  
[coclass]  
  
```  
  
## Note  
 **coclasse** L'attributo di C\+\+ appoggia un costrutto coclass nel file generato con estensione .idl.  
  
 Quando si definisce una coclasse, è anche possibile specificare [uuid](../windows/uuid-cpp-attributes.md),  [versione](../windows/version-cpp.md),  [il threading](../windows/threading-cpp.md),  [vi\_progid](../windows/vi-progid.md)e  [progid](../windows/progid.md) attributi.  Se uno di essi non viene specificato, verrà generata un'eccezione.  
  
 se due file di intestazione contengono le classi con **coclasse** l'attributo e non specifica un GUID, il compilatore utilizzerà lo stesso GUID per entrambe le classi e che restituisce un errore di MIDL.  Pertanto, è necessario utilizzare `uuid` attributo quando si utilizzano  **coclasse**.  
  
 **Progetti ATL**  
  
 Quando questo attributo precede la definizione di classe o struttura in un progetto ATL:  
  
-   Inserisce il codice o i dati per supportare la registrazione automatica per l'oggetto.  
  
-   Inserisce il codice o i dati per supportare una factory della classe COM per l'oggetto.  
  
-   Inserisce il codice o i dati per distribuire **IUnknown** e rendere a un oggetto COM\-generabile.  
  
 In particolare, le classi di base aggiunti all'oggetto di destinazione:  
  
-   [classe di CComCoClass](../atl/reference/ccomcoclass-class.md) fornisce la factory della classe predefinita e il modello di aggregazione per l'oggetto.  
  
-   [classe di CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) dispone di un modello basato sulla classe del modello di threading specificata da  [il threading](../windows/threading-cpp.md) attributo.  se **il threading** l'attributo non viene specificato, il modello di threading apartment predefinito è.  
  
-   [IProvideClassInfo2Impl](../atl/reference/iprovideclassinfo2impl-class.md) se si aggiunge  [attribuire la non creabilità](../windows/noncreatable.md) l'attributo non è specificato per l'oggetto di destinazione.  
  
 Infine, un'interfaccia duale che non viene definita utilizzando IDL incorporato viene sostituita con la corrispondenza [IDispatchImpl](../atl/reference/idispatchimpl-class.md) classe.  Se l'interfaccia duale è definita in IDL incorporato, l'interfaccia particolare nell'elenco di classi base non viene modificata.  
  
 **coclasse** l'attributo inoltre rende disponibili le seguenti funzioni tramite il codice inserito, o nel caso di  `GetObjectCLSID`, come metodo statico nella classe di base  `CComCoClass`:  
  
-   `UpdateRegistry` registra le class factory della classe di destinazione.  
  
-   `GetObjectCLSID`, che è correlato alla registrazione, può essere utilizzato per ottenere il CLSID della classe di destinazione.  
  
-   **GetObjectFriendlyName** per impostazione predefinita restituisce una stringa nel formato “\<nome della classe di destinazione\>  `Object`“.  Se questa funzione è già presente, non aggiunto.  Aggiungere questa funzione alla classe di destinazione per restituire un nome più descrittivo da quello generato automaticamente.  
  
-   **GetProgID**, che è correlato alla registrazione, restituisce la stringa specificata con  [progid](../windows/progid.md) attributo.  
  
-   **GetVersionIndependentProgID** ha la stessa funzionalità di  **GetProgID**, ma restituisce la stringa specificata con  [vi\_progid](../windows/vi-progid.md).  
  
 Le modifiche seguenti, che sono correlate alla mappa COM, vengono effettuate alla classe di destinazione:  
  
-   Una mappa COM viene aggiunto con voci per tutte le interfacce della classe di destinazione deriva da e tutte le voci specificate da [Punti di ingresso dell'interfaccia COM](../mfc/com-interface-entry-points.md) attributo o quelli obbligatori da  [aggrega](../windows/aggregates.md) attributo.  
  
-   [OBJECT\_ENTRY\_AUTO](../Topic/OBJECT_ENTRY_AUTO.md) la macro viene inserita nella mappa COM.  Questa macro equivale a [OBJECT\_ENTRY](http://msdn.microsoft.com/it-it/abd10ee2-54f0-4f94-9ec2-ddf8f4c8c8cd) in termini di funzionalità ma non deve fare parte della mappa COM della classe di destinazione.  
  
 Il nome della coclasse generata nel file IDL per la classe avrà lo stesso nome della classe.  Ad esempio e facendo riferimento all'esempio seguente, per accedere all'ID di classe per una coclasse CMyClass, in un client tramite il file di intestazione generato da MIDL, utilizzare CLSID\_CMyClass.  
  
## Esempio  
 Nel codice seguente viene illustrato come utilizzare **coclasse** attributo:  
  
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
  
 Di seguito viene illustrato come eseguire l'override dell'implementazione predefinita di una funzione presente nel codice hanno inserito da **coclasse** attributo.  vedere [\/Fx](../build/reference/fx-merge-injected-code.md) per ulteriori informazioni sulla visualizzazione codice inserito.  Tutte le classi di base o interfacce utilizzate per una classe verranno visualizzate nel codice inserito.   Inoltre, se una classe è inclusa per impostazione predefinita nel codice inserito e in modo esplicito si specifica tale classe come base per la coclasse, il provider di attributo utilizzerà il form specificato nel codice.  
  
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
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**,  `struct`|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [COM Attributes](../windows/com-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [appobject](../windows/appobject.md)