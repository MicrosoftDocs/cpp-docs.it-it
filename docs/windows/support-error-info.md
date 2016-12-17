---
title: "support_error_info | Microsoft Docs"
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
  - "vc-attr.support_error_info"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "support_error_info (attributo)"
ms.assetid: 20a2b55c-4738-4b35-a71d-e5e9c3a7e3bc
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# support_error_info
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Implementa il supporto per la restituzione di errori dettagliati.  
  
## Sintassi  
  
```  
  
[ support_error_info(  
   error_interface=  
uuid  
) ]  
  
```  
  
#### Parametri  
 **error\_interface**  
 L'identificatore dell'interfaccia che implementa **IErrorInfo**.  
  
## Note  
 L'attributo **support\_error\_info** di C\+\+ implementa il supporto per la restituzione di errori contestuali e dettagliati rilevati dall'oggetto di destinazione al client. Perché l'oggetto supporti gli errori, i metodi dell'interfaccia **IErrorInfo** devono essere implementati dall'oggetto. Per altre informazioni, vedere [Supporto di IDispatch e IErrorInfo](../atl/supporting-idispatch-and-ierrorinfo.md).  
  
 Questo attributo aggiunge la classe [ISupportErrorInfoImpl](../atl/reference/isupporterrorinfoimpl-class.md) come classe base per l'oggetto di destinazione. Questo genera un'implementazione predefinita di **ISupportErrorInfo** e può essere usato quando una singola interfaccia genera errori in un oggetto.  
  
## Esempio  
 Il codice seguente aggiunge il supporto predefinito per l'interfaccia **ISupportErrorInfo** all'oggetto `CMyClass`.  
  
```  
// cpp_attr_ref_support_error_info.cpp  
// compile with: /LD  
#define _ATL_ATTRIBUTES  
#include "atlbase.h"  
#include "atlcom.h"  
  
[module (name="mymod")];  
[object, uuid("f0b17d66-dc6e-4662-baaf-76758e09c878")]  
__interface IMyErrors  
{  
};  
  
[ coclass, support_error_info("IMyErrors"),  
  uuid("854dd392-bdc7-4781-8667-8757936f2a4f") ]  
class CMyClass  
{  
};  
```  
  
## Requisiti  
  
### Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**|  
|**Ripetibile**|Sì|  
|**Attributi obbligatori**|Nessuno|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [COM Attributes](../windows/com-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)