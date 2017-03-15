---
title: "rdx | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.rdx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rdx attribute"
ms.assetid: ff8e4312-c1ad-4934-bdaa-86f54409651e
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# rdx
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea una chiave del Registro di sistema o modificare una chiave del Registro di sistema esistente.  
  
## Sintassi  
  
```  
  
      [ rdx(   
   key,   
   valuename=NULL,   
   regtype   
) ]  
```  
  
#### Parametri  
 `key`  
 Il nome della chiave da creare o aprire.  
  
 `valuename`\(facoltativo\)  
 specifica il campo di valore da impostare.  Se un campo di valore con questo nome non esiste nella chiave, viene aggiunto.  
  
 *regtype*  
 Il tipo della chiave del Registro di sistema che è stata aggiunta.  Può essere: **testo**,  **DWORD**,  **binario**, o  `CString`.  
  
## Note  
 **rdx** L'attributo di C\+\+ crea o modifica una chiave del Registro di sistema esistente per un componente COM.  L'attributo consente di aggiungere una macro di BEGIN\_RDX\_MAP oggetto che implementa il membro di destinazione.  `RegistryDataExchange`, una funzione inserita come conseguenza di una macro di BEGIN\_RDX\_MAP, può essere utilizzata per trasferire i dati tra il Registro di sistema e i membri dati  
  
 Questo attributo può essere utilizzato con [coclasse](../windows/coclass.md),  [progid](../windows/progid.md), o  [vi\_progid](../windows/vi-progid.md) attributi o altri attributi che implica uno di questi.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe** o  `struct` membro|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Esempio  
 Il codice seguente aggiunge una chiave del Registro di sistema chiamata MyValue al sistema che descrive il componente COM di CMyClass.  
  
```  
// cpp_attr_ref_rdx.cpp  
// compile with: /LD /link /OPT:NOREF  
#define _ATL_ATTRIBUTES  
#include "atlbase.h"  
  
[module (name="MyLib")];  
  
class CMyClass {  
public:  
   CMyClass() {  
      strcpy_s(m_sz, "SomeValue");  
   }  
  
   [ rdx(key = "HKCR\\MyApp.MyApp.1", valuename = "MyValue", regtype = "text")]   
   char m_sz[256];  
};  
```  
  
## Vedere anche  
 [COM Attributes](../windows/com-attributes.md)   
 [registration\_script](../windows/registration-script.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)