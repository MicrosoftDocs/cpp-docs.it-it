---
title: "CMyProviderSession (MyProviderSess.H) | Microsoft Docs"
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
  - "cmyprovidersession"
  - ""myprovidersess.h""
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMyProviderSession (classe) in MyProviderSess.H"
  - "provider OLE DB, file generati dalla procedura guidata"
ms.assetid: d37ad471-cf05-49c5-aa47-cd10824d777f
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMyProviderSession (MyProviderSess.H)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In MyProviderSess.H è contenuta la dichiarazione e l'implementazione dell'oggetto Session OLE DB.  L'oggetto origine dati crea l'oggetto sessione e rappresenta una conversazione tra un consumer e un provider.  Per una stessa origine dati possono essere aperte più sessioni contemporaneamente.  Di seguito è riportato l'elenco di ereditarietà per `CMyProviderSession` :  
  
```  
/////////////////////////////////////////////////////////////////////////  
// CMyProviderSession  
class ATL_NO_VTABLE CMyProviderSession :   
   public CComObjectRootEx<CComSingleThreadModel>,  
   public IGetDataSourceImpl<CMyProviderSession>,  
   public IOpenRowsetImpl<CMyProviderSession>,  
   public ISessionPropertiesImpl<CMyProviderSession>,  
   public IObjectWithSiteSessionImpl<CMyProviderSession>,  
   public IDBSchemaRowsetImpl<CMyProviderSession>,  
   public IDBCreateCommandImpl<CMyProviderSession, CMyProviderCommand>  
```  
  
 L'oggetto Session eredita da **IGetDataSource**, `IOpenRowset`, **ISessionProperties** e **IDBCreateCommand**.  L'interfaccia **IGetDataSource** consente a una sessione di recuperare l'origine dati da cui è stata creata.  Questo risulta utile se è necessario ottenere proprietà dall'origine dati creata o altre informazioni ottenibili dall'origine dati.  L'interfaccia **ISessionProperties** gestisce tutte le proprietà della sessione.  Le interfacce `IOpenRowset` e **IDBCreateCommand** vengono utilizzate per le operazioni sul database.  Se il provider supporta i comandi, verrà implementata l'interfaccia **IDBCreateCommand** che viene utilizzata per creare l'oggetto Command in grado di eseguire i comandi.  Il provider implementa sempre l'oggetto `IOpenRowset` utilizzato per generare un rowset semplice da un provider.  Si tratta di un rowset predefinito di un provider, ad esempio `"select * from mytable"`.  
  
 Con la procedura guidata vengono inoltre generate tre classi di sessione: `CMyProviderSessionColSchema`, `CMyProviderSessionPTSchema` e `CMyProviderSessionTRSchema`.  Queste sessioni vengono utilizzate per i rowset dello schema  che consentono al provider di restituire metadati al consumer senza che quest'ultimo debba eseguire una query o recuperare dati.  Il recupero di metadati può essere molto più veloce rispetto alla ricerca delle capacità di un provider.  
  
 Secondo la specifica OLE DB è necessario che i provider che implementano l'interfaccia **IDBSchemaRowset** supportino tre tipi di rowset dello schema: **DBSCHEMA\_COLUMNS**, **DBSCHEMA\_PROVIDER\_TYPES** e `DBSCHEMA_TABLES`.  Con la procedura guidata vengono generate implementazioni per ciascun rowset dello schema.  Ciascuna classe generata dalla procedura guidata contiene un metodo `Execute` in cui è possibile restituire al provider i dati relativi alle tabelle, alle colonne e ai tipi di dati supportati.  Questi dati sono in genere noti in fase di compilazione.  
  
## Vedere anche  
 [File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)