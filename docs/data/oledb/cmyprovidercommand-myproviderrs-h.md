---
title: "CMyProviderCommand (MyProviderRS.H) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "cmyprovidercommand"
  - ""myproviderrs.h""
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMyProviderCommand (classe) in MyProviderRS.H"
  - "provider OLE DB, file generati dalla procedura guidata"
ms.assetid: b30b956e-cc91-4cf5-9fe6-f8b1ce9cc2a5
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMyProviderCommand (MyProviderRS.H)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMyProviderCommand` è l'implementazione dell'oggetto Command del provider.  Fornisce l'implementazione delle interfacce `IAccessor`, `ICommandText` e **ICommandProperties**.  L'interfaccia `IAccessor` è identica a quella presente nel rowset.  L'oggetto Command utilizza la funzione di accesso per specificare le associazioni per i parametri.  L'oggetto Rowset utilizza i parametri per specificare le associazioni per le colonne di output.  L'interfaccia `ICommandText` è utile per specificare un comando in formato testo.  In questo esempio l'interfaccia `ICommandText` viene utilizzata in un secondo momento durante l'aggiunta di codice personalizzato. Viene inoltre eseguito l'override del metodo `ICommand::Execute`.  L'interfaccia **ICommandProperties** gestisce tutte le proprietà degli oggetti Command e Rowset.  
  
```  
// CMyProviderCommand  
class ATL_NO_VTABLE CMyProviderCommand :   
class ATL_NO_VTABLE CMyProviderCommand :   
   public CComObjectRootEx<CComSingleThreadModel>,  
   public IAccessorImpl<CMyProviderCommand>,  
   public ICommandTextImpl<CMyProviderCommand>,  
   public ICommandPropertiesImpl<CMyProviderCommand>,  
   public IObjectWithSiteImpl<CMyProviderCommand>,  
   public IConvertTypeImpl<CMyProviderCommand>,  
   public IColumnsInfoImpl<CMyProviderCommand>  
```  
  
 L'interfaccia `IAccessor` gestisce tutte le associazioni utilizzate in comandi e rowset.  Il consumer chiama **IAccessor::CreateAccessor** con una matrice di strutture **DBBINDING**.  Ciascuna struttura **DBBINDING** contiene le informazioni relative alla gestione delle associazioni delle colonne, quali tipo e lunghezza.  Il provider riceve le strutture, quindi determina il tipo di trasferimento dei dati e l'eventuale necessità di conversioni.  L'interfaccia `IAccessor` viene utilizzata nell'oggetto Command per gestire eventuali parametri nel comando.  
  
 L'oggetto Command fornisce inoltre un'implementazione di `IColumnsInfo`.  OLE DB richiede l'interfaccia `IColumnsInfo` che consente al consumer di recuperare informazioni sui parametri dal comando.  L'oggetto Rowset utilizza l'interfaccia `IColumnsInfo` per restituire al provider informazioni sulle colonne di output.  
  
 Il provider contiene inoltre un'interfaccia denominata `IObjectWithSite` che è stata implementata in ATL 2.0 e consente all'oggetto di implementazione di passare informazioni su se stesso all'elemento figlio.  L'oggetto Command utilizza le informazioni di `IObjectWithSite` per comunicare agli oggetti Rowset generati informazioni sul relativo oggetto da cui sono generati.  
  
## Vedere anche  
 [File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)