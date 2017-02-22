---
title: "CComModule Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComModule class"
  - "DLL modules [C++], ATL"
ms.assetid: f5face2c-8fd8-40e6-9ec3-54ab74701769
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 26
---
# CComModule Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

A partire da ATL 7,0, `CComModule` è deprecato: vedere [Classi del modulo ATL](../../atl/atl-module-classes.md) per ulteriori informazioni.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
class CComModule : public _ATL_MODULE  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComModule::GetClassObject](../Topic/CComModule::GetClassObject.md)|Crea un oggetto di un CLSID specificato.  Solo per eventi DLLs.|  
|[CComModule::GetModuleInstance](../Topic/CComModule::GetModuleInstance.md)|Restituisca il valore `m_hInst`.|  
|[CComModule::GetResourceInstance](../Topic/CComModule::GetResourceInstance.md)|Restituisca il valore `m_hInstResource`.|  
|[CComModule::GetTypeLibInstance](../Topic/CComModule::GetTypeLibInstance.md)|Restituisca il valore `m_hInstTypeLib`.|  
|[CComModule::Init](../Topic/CComModule::Init.md)|Inizializza i membri dati.|  
|[CComModule::RegisterClassHelper](../Topic/CComModule::RegisterClassHelper.md)|Fornisce la registrazione standard della classe di un oggetto nel Registro di sistema.|  
|[CComModule::RegisterClassObjects](../Topic/CComModule::RegisterClassObjects.md)|Registra oggetto classe.  Per i file EXE solo.|  
|[CComModule::RegisterServer](../Topic/CComModule::RegisterServer.md)|Aggiorna il Registro di sistema per ogni oggetto della mappa oggetto.|  
|[CComModule::RegisterTypeLib](../Topic/CComModule::RegisterTypeLib.md)|Registra una libreria dei tipi.|  
|[CComModule::RevokeClassObjects](../Topic/CComModule::RevokeClassObjects.md)|Revoca oggetto classe.  Per i file EXE solo.|  
|[CComModule::Term](../Topic/CComModule::Term.md)|Rilascia i membri dati.|  
|[CComModule::UnregisterClassHelper](../Topic/CComModule::UnregisterClassHelper.md)|Rimuove la registrazione standard della classe di un oggetto dal Registro di sistema.|  
|[CComModule::UnregisterServer](../Topic/CComModule::UnregisterServer.md)|Annulla la registrazione di ogni oggetto nella mappa oggetto.|  
|[CComModule::UpdateRegistryClass](../Topic/CComModule::UpdateRegistryClass.md)|I log o annulla la registrazione la registrazione standard della classe di un oggetto.|  
|[CComModule::UpdateRegistryFromResourceD](../Topic/CComModule::UpdateRegistryFromResourceD.md)|Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto.|  
|[CComModule::UpdateRegistryFromResourceS](../Topic/CComModule::UpdateRegistryFromResourceS.md)|Staticamente collegamenti al componente ATL il Registro Di Sistema.  Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComModule::m\_csObjMap](../Topic/CComModule::m_csObjMap.md)|Ensures è sincronizzato l'accesso alle informazioni sulla mappa oggetto.|  
|[CComModule::m\_csTypeInfoHolder](../Topic/CComModule::m_csTypeInfoHolder.md)|Ensures è sincronizzato l'accesso alle informazioni della libreria dei tipi.|  
|[CComModule::m\_csWindowCreate](../Topic/CComModule::m_csWindowCreate.md)|Ensures è sincronizzato l'accesso alle informazioni sulla classe della finestra e a dati statici utilizzati durante la creazione della finestra.|  
|[CComModule::m\_hInst](../Topic/CComModule::m_hInst.md)|Contiene l'handle dell'istanza del form.|  
|[CComModule::m\_hInstResource](../Topic/CComModule::m_hInstResource.md)|Per impostazione predefinita, contiene l'handle dell'istanza del form.|  
|[CComModule::m\_hInstTypeLib](../Topic/CComModule::m_hInstTypeLib.md)|Per impostazione predefinita, contiene l'handle dell'istanza del form.|  
|[CComModule::m\_pObjMap](../Topic/CComModule::m_pObjMap.md)|Punta alla mappa oggetto gestito dal modulo istanza.|  
  
## Note  
  
> [!NOTE]
>  Questa classe è deprecata e le procedure guidate della generazione di codice ATL ora utilizzano le classi derivate [CAtlModule](../../atl/reference/catlmodule-class.md) e [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md).  Vedere [Classi del modulo ATL](../../atl/atl-module-classes.md) per ulteriori informazioni.  Le informazioni che seguono forniscono alle applicazioni create con le versioni precedenti ATL.  `CComModule` fa parte di ATL per indietro funzionalità.  
  
 `CComModule` implementa un modulo server COM, consentendo a un client di accedere ai componenti del modulo.  `CComModule` supporta moduli DLL \(in\-process\) che EXE \(locale\).  
  
 Un'istanza `CComModule` utilizza una mappa oggetto per gestire un set di definizioni di oggetti di classe.  Questa mappa oggetto viene implementata come matrice di strutture `_ATL_OBJMAP_ENTRY` e contiene le informazioni per:  
  
-   Immissione e rimuovendo le descrizioni dell'oggetto nel Registro di sistema.  
  
-   Creare un'istanza degli oggetti attraverso una class factory.  
  
-   Stabilendo comunicazione tra un client e l'oggetto radice nel componente.  
  
-   Eseguire gestione della durata degli oggetti di classe.  
  
 Quando si esegue COM ATL AppWizard, la procedura guidata genera automaticamente `_Module`, un'istanza globale `CComModule` o una classe derivata da.  Per ulteriori informazioni sulla creazione guidata progetto ATL, vedere l'articolo [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).  
  
 Oltre a `CComModule`, ATL fornisce [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md), che implementa un modulo di apartment\- modello per i file EXE e servizi Windows.  Derivare il form da `CComAutoThreadModule` quando si desidera creare oggetti in più apartment.  
  
## Gerarchia di ereditarietà  
 [\_ATL\_MODULE](../Topic/_ATL_MODULE.md)  
  
 [CAtlModule](../../atl/reference/catlmodule-class.md)  
  
 [CAtlModuleT](../../atl/reference/catlmodulet-class.md)  
  
 `CComModule`  
  
## Requisiti  
 `Header:` atlbase.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)