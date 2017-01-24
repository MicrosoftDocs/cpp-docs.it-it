---
title: "com_interface_entry (C++) | Microsoft Docs"
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
  - "vc-attr.com_interface_entry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "com_interface_entry attribute"
ms.assetid: 10368f81-b99b-4a0f-ba4f-a142e6911a5c
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# com_interface_entry (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Aggiunge una voce dell'interfaccia nella mappa COM della classe di destinazione.  
  
## Sintassi  
  
```  
  
     [ com_interface_entry(   
  com_interface_entry  
) ]  
```  
  
#### Parametri  
 *com\_interface\_entry*  
 Stringa contenente il testo effettivo della voce.  Per un elenco di valori possibili, vedere [macro di COM\_INTERFACE\_ENTRY](../Topic/COM_INTERFACE_ENTRY%20Macros.md).  
  
## Note  
 `com_interface_entry` L'attributo di C\+\+ inserisce il contenuto integrale di una stringa di caratteri nella mappa dell'interfaccia COM dell'oggetto di destinazione.  Se l'attributo viene applicato una volta all'oggetto di destinazione, la voce viene inserita l'inizio del mapping esistente dell'interfaccia.  Se l'attributo viene applicato ripetutamente allo stesso oggetto di destinazione, le voci vengono inserite all'inizio del mapping dell'interfaccia nell'ordine in cui vengono ricevute.  
  
 L'attributo richiede che [coclasse](../windows/coclass.md),  [progid](../windows/progid.md), o  [vi\_progid](../windows/vi-progid.md) attributo o un altro attributo che implica uno di questi\) viene applicato anche allo stesso elemento.  Se qualsiasi singolo attributo viene utilizzato, gli altri due vengono applicate automaticamente.  Ad esempio, se **progid** viene applicato,  **vi\_progid** e  **coclasse** anche applicati.  
  
 Poiché il primo utilizzo di `com_interface_entry` fa sì che la nuova interfaccia per essere inserito all'inizio del mapping dell'interfaccia, deve essere uno dei seguenti tipi di COM\_INTERFACE\_ENTRY:  
  
-   COM\_INTERFACE\_ENTRY  
  
-   COM\_INTERFACE\_ENTRY\_IID  
  
-   COM\_INTERFACE\_ENTRY2  
  
-   COM\_INTERFACE\_ENTRY2\_IID  
  
 Utilizzi aggiuntivi di `com_interface_entry` l'attributo può utilizzare tutti i tipi supportati di COM\_INTERFACE\_ENTRY.  
  
 Questa restrizione è necessaria perché ATL utilizza la prima voce nella mappa dell'interfaccia come identità **IUnknown**; pertanto, la voce deve essere un'interfaccia valida.  Ad esempio, il seguente esempio di codice non è valida perché la prima voce nella mappa dell'interfaccia non specifica una vera e propria interfaccia COM.  
  
```  
[ coclass, com_interface_entry =  
    "COM_INTERFACE_ENTRY_NOINTERFACE(IDebugTest)"  
]  
   class CMyClass  
   {  
   };  
```  
  
## Esempio  
 Il seguente codice aggiunge due voci nel mapping esistente dell'interfaccia COM **CMyBaseClass**.  il primo è un'interfaccia standard e la seconda nasconde **IDebugTest** interfaccia.  
  
```  
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
  
 La mappa risultante di un oggetto COM per **CMyBaseClass** è la seguente:  
  
```  
BEGIN_COM_MAP(CMyClass)  
    COM_INTERFACE_ENTRY (IMyClass)  
    COM_INTERFACE_ENTRY_NOINTERFACE(IDebugTest)  
    COM_INTERFACE_ENTRY(IMyClass)  
    COM_INTERFACE_ENTRY2(IDispatch, IMyClass)  
    COM_INTERFACE_ENTRY(IDebugTest)  
    COM_INTERFACE_ENTRY(IProvideClassInfo)  
END_COM_MAP()  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**,  `struct`|  
|**ripetibile**|Sì|  
|**attributi obbligatori**|Uno o più dei seguenti elementi: **coclasse**,  **progid**, o  **vi\_progid**.|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [COM Attributes](../windows/com-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)