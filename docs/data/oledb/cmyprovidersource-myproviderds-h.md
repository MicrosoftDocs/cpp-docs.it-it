---
title: "CMyProviderSource (MyProviderDS.H) | Microsoft Docs"
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
  - ""myproviderds.h""
  - "cmyprovidersource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMyProviderSource (classe) in MyProviderDS.H"
  - "provider OLE DB, file generati dalla procedura guidata"
ms.assetid: c143d48e-59c8-4f67-9141-3aab51859b92
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMyProviderSource (MyProviderDS.H)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nelle classi del provider viene utilizzata l'ereditarietà multipla.  Nel codice che segue viene illustrata la catena di ereditarietà dell'oggetto DataSource.  
  
```  
/////////////////////////////////////////////////////////////////////////  
// CMyProviderSource  
class ATL_NO_VTABLE CMyProviderSource :   
   public CComObjectRootEx<CComSingleThreadModel>,  
   public CComCoClass<CMyProviderSource, &CLSID_MyProvider>,  
   public IDBCreateSessionImpl<CMyProviderSource, CMyProviderSession>,  
   public IDBInitializeImpl<CMyProviderSource>,  
   public IDBPropertiesImpl<CMyProviderSource>,  
   public IPersistImpl<CMyProviderSource>,  
   public IInternalConnectionImpl<CMyProviderSource>  
```  
  
 Tutti i componenti COM derivano da `CComObjectRootEx` e `CComCoClass`.  `CComObjectRootEx` fornisce l'implementazione completa per l'interfaccia **IUnknown** ed è in grado di gestire qualsiasi modello di threading.  `CComCoClass` gestisce l'eventuale supporto necessario per gli errori.  Se si desidera inviare al client informazioni più dettagliate sugli errori, è possibile utilizzare alcune API di errore di `CComCoClass`.  
  
 L'oggetto DataSource eredita inoltre da diverse classi "Impl".  Ciascuna classe fornisce l'implementazione per un'interfaccia.  L'oggetto DataSource implementa le interfacce `IPersist`, `IDBProperties`, **IDBInitialize** e **IDBCreateSession**.  Ogni interfaccia è richiesta da OLE DB per implementare l'oggetto DataSource.  È possibile scegliere se supportare determinate funzionalità ereditando da una di queste classi "Impl".  Se si desidera supportare l'interfaccia **IDBDataSourceAdmin**, sarà necessario ereditare dalla classe **IDBDataSourceAdminImpl** per ottenere la funzionalità desiderata.  
  
## Mappa COM  
 Ogni volta che il client chiama `QueryInterface` per richiedere un'interfaccia nell'origine dati, la chiamata passa attraverso la mappa COM riportata di seguito.  
  
```  
BEGIN_COM_MAP(CMyProviderSource)  
   COM_INTERFACE_ENTRY(IDBCreateSession)  
   COM_INTERFACE_ENTRY(IDBInitialize)  
   COM_INTERFACE_ENTRY(IDBProperties)  
   COM_INTERFACE_ENTRY(IPersist)  
   COM_INTERFACE_ENTRY(IInternalConnection)  
END_COM_MAP()  
```  
  
 Le macro COM\_INTERFACE\_ENTRY provengono da ATL e comunicano all'implementazione di `QueryInterface` in `CComObjectRootEx` di restituire le interfacce appropriate.  
  
## Mappa delle proprietà  
 Nella mappa delle proprietà sono specificate tutte le proprietà designate dal provider:  
  
```  
BEGIN_PROPSET_MAP(CMyProviderSource)  
   BEGIN_PROPERTY_SET(DBPROPSET_DATASOURCEINFO)  
      PROPERTY_INFO_ENTRY(ACTIVESESSIONS)  
      PROPERTY_INFO_ENTRY(ASYNCTXNABORT)  
      PROPERTY_INFO_ENTRY(ASYNCTXNCOMMIT)  
      PROPERTY_INFO_ENTRY(BYREFACCESSORS)  
      PROPERTY_INFO_ENTRY_VALUE(CATALOGLOCATION, DBPROPVAL_CL_START)  
      PROPERTY_INFO_ENTRY(CATALOGTERM)  
      PROPERTY_INFO_ENTRY(CATALOGUSAGE)  
      PROPERTY_INFO_ENTRY(COLUMNDEFINITION)  
      PROPERTY_INFO_ENTRY(CONCATNULLBEHAVIOR)  
      PROPERTY_INFO_ENTRY(DATASOURCENAME)  
      PROPERTY_INFO_ENTRY(DATASOURCEREADONLY)  
      PROPERTY_INFO_ENTRY(DBMSNAME)  
      PROPERTY_INFO_ENTRY(DBMSVER)  
      PROPERTY_INFO_ENTRY_VALUE(DSOTHREADMODEL, DBPROPVAL_RT_FREETHREAD)  
      PROPERTY_INFO_ENTRY(GROUPBY)  
      PROPERTY_INFO_ENTRY(HETEROGENEOUSTABLES)  
      PROPERTY_INFO_ENTRY(IDENTIFIERCASE)  
      PROPERTY_INFO_ENTRY(MAXINDEXSIZE)  
      PROPERTY_INFO_ENTRY(MAXROWSIZE)  
      PROPERTY_INFO_ENTRY(MAXROWSIZEINCLUDESBLOB)  
      PROPERTY_INFO_ENTRY(MAXTABLESINSELECT)  
      PROPERTY_INFO_ENTRY(MULTIPLEPARAMSETS)  
      PROPERTY_INFO_ENTRY(MULTIPLERESULTS)  
      PROPERTY_INFO_ENTRY(MULTIPLESTORAGEOBJECTS)  
      PROPERTY_INFO_ENTRY(MULTITABLEUPDATE)  
      PROPERTY_INFO_ENTRY(NULLCOLLATION)  
      PROPERTY_INFO_ENTRY(OLEOBJECTS)  
      PROPERTY_INFO_ENTRY(ORDERBYCOLUMNSINSELECT)  
      PROPERTY_INFO_ENTRY(OUTPUTPARAMETERAVAILABILITY)  
      PROPERTY_INFO_ENTRY(PERSISTENTIDTYPE)  
      PROPERTY_INFO_ENTRY(PREPAREABORTBEHAVIOR)  
      PROPERTY_INFO_ENTRY(PREPARECOMMITBEHAVIOR)  
      PROPERTY_INFO_ENTRY(PROCEDURETERM)  
      PROPERTY_INFO_ENTRY(PROVIDERNAME)  
      PROPERTY_INFO_ENTRY(PROVIDEROLEDBVER)  
      PROPERTY_INFO_ENTRY(PROVIDERVER)  
      PROPERTY_INFO_ENTRY(QUOTEDIDENTIFIERCASE)  
      PROPERTY_INFO_ENTRY(ROWSETCONVERSIONSONCOMMAND)  
      PROPERTY_INFO_ENTRY(SCHEMATERM)  
      PROPERTY_INFO_ENTRY(SCHEMAUSAGE)  
      PROPERTY_INFO_ENTRY(STRUCTUREDSTORAGE)  
      PROPERTY_INFO_ENTRY(SUBQUERIES)  
      PROPERTY_INFO_ENTRY(TABLETERM)  
      PROPERTY_INFO_ENTRY(USERNAME)  
   END_PROPERTY_SET(DBPROPSET_DATASOURCEINFO)  
   BEGIN_PROPERTY_SET(DBPROPSET_DBINIT)  
      PROPERTY_INFO_ENTRY(AUTH_PASSWORD)  
      PROPERTY_INFO_ENTRY(AUTH_PERSIST_SENSITIVE_AUTHINFO)  
      PROPERTY_INFO_ENTRY(AUTH_USERID)  
      PROPERTY_INFO_ENTRY(INIT_DATASOURCE)  
      PROPERTY_INFO_ENTRY(INIT_HWND)  
      PROPERTY_INFO_ENTRY(INIT_LCID)  
      PROPERTY_INFO_ENTRY(INIT_LOCATION)  
      PROPERTY_INFO_ENTRY(INIT_MODE)  
      PROPERTY_INFO_ENTRY(INIT_PROMPT)  
      PROPERTY_INFO_ENTRY(INIT_PROVIDERSTRING)  
      PROPERTY_INFO_ENTRY(INIT_TIMEOUT)  
   END_PROPERTY_SET(DBPROPSET_DBINIT)  
   BEGIN_PROPERTY_SET(DBPROPSET_DATASOURCE)  
      PROPERTY_INFO_ENTRY(CURRENTCATALOG)  
   END_PROPERTY_SET(DBPROPSET_DATASOURCE)  
   CHAIN_PROPERTY_SET(CMyProviderSession)  
END_PROPSET_MAP()  
```  
  
 Le proprietà in OLE DB sono suddivise in gruppi.  L'oggetto DataSource dispone di due gruppi di proprietà: uno per l'insieme **DBPROPSET\_DATASOURCEINFO** e uno per l'insieme **DBPROPSET\_DBINIT**.  L'insieme **DBPROPSET\_DATASOURCEINFO** corrisponde alle proprietà del provider e della relativa origine dati.  L'insieme **DBPROPSET\_DBINIT** corrisponde alle proprietà utilizzate all'inizializzazione.  Questi insiemi vengono gestiti dai modelli provider OLE DB con le macro PROPERTY\_SET.  che creano un blocco contenente una matrice di proprietà.  Ogni volta che il client chiama l'interfaccia `IDBProperties`, il provider utilizza la mappa delle proprietà.  
  
 Non è necessario implementare tutte le proprietà nella specifica,  ma è necessario supportare le proprietà obbligatorie. Per ulteriori informazioni, vedere la specifica di compatibilità con il livello 0.  Se non si desidera supportare una proprietà, rimuoverla dalla mappa.  Se si desidera supportare una proprietà, aggiungerla alla mappa mediante la macro PROPERTY\_INFO\_ENTRY.  La macro corrisponde alla struttura **UPROPINFO**, come illustrato nel codice riportato di seguito.  
  
```  
struct UPROPINFO  
{  
   DBPROPID    dwPropId;  
   ULONG       ulIDS;  
   VARTYPE     VarType;  
   DBPROPFLAGS dwFlags;  
   union  
   {  
      DWORD dwVal;  
      LPOLESTR szVal;  
   };  
   DBPROPOPTIONS dwOption;  
};  
```  
  
 Ciascun elemento della struttura rappresenta le informazioni per la gestione della proprietà.  Contiene un **DBPROPID** che consente di determinare il GUID e l'ID della proprietà,  oltre a voci che consentono di determinare il tipo e il valore della proprietà.  
  
 Se si desidera modificare il valore predefinito di una proprietà è possibile utilizzare la macro PROPERTY\_INFO\_ENTRY\_VALUE oppure PROPERTY\_INFO\_ENTRY\_EX. Tenere presente che un consumer è in grado di modificare il valore di una proprietà scrivibile in qualsiasi momento.  Queste macro consentono di specificare un valore per una proprietà corrispondente.  La macro PROPERTY\_INFO\_ENTRY\_VALUE è una notazione abbreviata che consente di modificare il valore.  La macro PROPERTY\_INFO\_ENTRY\_VALUE chiama la macro PROPERTY\_INFO\_ENTRY\_EX  che consente di aggiungere o modificare tutti gli attributi della struttura **UPROPINFO**.  
  
 Se si desidera definire un insieme di proprietà personalizzato, sarà possibile aggiungerlo creando un'ulteriore combinazione BEGIN\_PROPSET\_MAP\/END\_PROPSET\_MAP.  È necessario definire un GUID per l'insieme di proprietà, quindi definire le proprietà personalizzate.  Se sono presenti proprietà specifiche del provider, aggiungerle a un nuovo insieme di proprietà anziché a uno esistente.  In questo modo si eviteranno problemi con le versioni successive di OLE DB.  
  
## Insiemi di proprietà definiti dall'utente  
 In Visual C\+\+ .NET sono supportati gli insiemi di proprietà definiti dall'utente.  Non è più necessario pertanto eseguire l'override di **GetProperties** o `GetPropertyInfo`.  Tramite i modelli verranno rilevati eventuali insiemi di proprietà definiti dall'utente che saranno aggiunti all'oggetto appropriato.  
  
 Se è presente un insieme di proprietà definito dall'utente che deve essere disponibile in fase di inizializzazione, ovvero prima che il consumer chiami **IDBInitialize::Initialize**, sarà possibile specificarne la presenza utilizzando il flag **UPROPSET\_USERINIT** unitamente alla macro BEGIN\_PROPERTY\_SET\_EX.  A questo scopo è necessario che l'insieme di proprietà si trovi nell'oggetto DataSource come richiesto dalla specifica OLE DB.  Di seguito è riportato un esempio.  
  
```  
BEGIN_PROPERTY_SET_EX(DBPROPSET_MYPROPSET, UPROPSET_USERINIT)  
   PROPERTY_INFO_ENTRY(DBPROP_MYPROP)  
END_PROPERTY_SET_EX(DBPROPSET_MYPROPSET)  
```  
  
## Vedere anche  
 [File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)