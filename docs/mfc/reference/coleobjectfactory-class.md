---
title: "COleObjectFactory Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleObjectFactory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "class factories, COleObjectFactory class"
  - "COleObjectFactory class"
  - "creazione di oggetti, oggetti OLE"
  - "oggetti [C++], creazione di OLE"
  - "OLE class factory"
  - "oggetti OLE"
  - "oggetti OLE, creazione"
  - "OLE, class factory"
ms.assetid: ab179c1e-4af2-44aa-a576-37c48149b427
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# COleObjectFactory Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa il class factory OLE, che crea oggetti OLE come server, gli oggetti ActiveX e documenti.  
  
## Sintassi  
  
```  
class COleObjectFactory : public CCmdTarget  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleObjectFactory::COleObjectFactory](../Topic/COleObjectFactory::COleObjectFactory.md)|Costruisce un oggetto `COleObjectFactory`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleObjectFactory::GetClassID](../Topic/COleObjectFactory::GetClassID.md)|Restituisce l'id della classe OLE oggetti che la factory crea.|  
|[COleObjectFactory::IsLicenseValid](../Topic/COleObjectFactory::IsLicenseValid.md)|Determina se la licenza del controllo è valida.|  
|[COleObjectFactory::IsRegistered](../Topic/COleObjectFactory::IsRegistered.md)|Indica se la factory dell'oggetto viene registrata con le DLL di sistema OLE.|  
|[COleObjectFactory::Register](../Topic/COleObjectFactory::Register.md)|Registrazione della factory dell'oggetto con le DLL di sistema OLE.|  
|[COleObjectFactory::RegisterAll](../Topic/COleObjectFactory::RegisterAll.md)|Registra le factory dell'oggetto di qualsiasi applicazione con le DLL di sistema OLE.|  
|[COleObjectFactory::Revoke](../Topic/COleObjectFactory::Revoke.md)|Revoca la registrazione della factory dell'oggetto con le DLL di sistema OLE.|  
|[COleObjectFactory::RevokeAll](../Topic/COleObjectFactory::RevokeAll.md)|Revoca le registrazioni delle factory dell'oggetto di un'applicazione con le DLL di sistema OLE.|  
|[COleObjectFactory::UnregisterAll](../Topic/COleObjectFactory::UnregisterAll.md)|Annulla la registrazione di tutte le factory dell'oggetto di un'applicazione.|  
|[COleObjectFactory::UpdateRegistry](../Topic/COleObjectFactory::UpdateRegistry.md)|Registrazione della factory dell'oggetto dal Registro di sistema OLE.|  
|[COleObjectFactory::UpdateRegistryAll](../Topic/COleObjectFactory::UpdateRegistryAll.md)|Registra le factory dell'oggetto di qualsiasi applicazione al Registro di sistema OLE.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleObjectFactory::GetLicenseKey](../Topic/COleObjectFactory::GetLicenseKey.md)|Richiede una chiave univoca dalla DLL del controllo.|  
|[COleObjectFactory::OnCreateObject](../Topic/COleObjectFactory::OnCreateObject.md)|Chiamato dal framework per creare un nuovo oggetto del tipo della factory.|  
|[COleObjectFactory::VerifyLicenseKey](../Topic/COleObjectFactory::VerifyLicenseKey.md)|Verifica che la chiave incorporata nel controllo corrisponda alla chiave incorporata nel contenitore.|  
|[COleObjectFactory::VerifyUserLicense](../Topic/COleObjectFactory::VerifyUserLicense.md)|Verifica che il controllo venga concesso in licenza per l'utilizzo in fase di progettazione.|  
  
## Note  
 La classe `COleObjectFactory` ha funzioni membro per eseguire le seguenti funzioni:  
  
-   Gestire la registrazione degli oggetti.  
  
-   Aggiornamento del registro di sistema OLE e la registrazione di runtime che informa OLE gli oggetti sono in esecuzione e pronte per ricevere messaggi.  
  
-   Applicando le licenze limitando l'utilizzo del controllo a quelli concessi in licenza design\-time e le applicazioni concessi in licenza in fase di esecuzione.  
  
-   Registrare le factory dell'oggetto controllo con il Registro di sistema OLE.  
  
 Per ulteriori informazioni sulla creazione di un oggetto, vedere gli articoli [oggetti dati e origini dati \(OLE\)](../../mfc/data-objects-and-data-sources-ole.md) e [oggetti dati e origini dati: creazione e distruzione](../../mfc/data-objects-and-data-sources-creation-and-destruction.md).  Per ulteriori informazioni sulla registrazione, vedere l'articolo [registrazione](../../mfc/registration.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleObjectFactory`  
  
## Requisiti  
 **Header:** afxdisp.h  
  
## Vedere anche  
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleTemplateServer Class](../../mfc/reference/coletemplateserver-class.md)