---
title: CMyProviderSource (MyProviderDS. H) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- myproviderds.h
- cmyprovidersource
dev_langs:
- C++
helpviewer_keywords:
- OLE DB providers, wizard-generated files
- CMyProviderSource class in MyProviderDS.H
ms.assetid: c143d48e-59c8-4f67-9141-3aab51859b92
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f141ad7565a78ff4e7a02b3847287879b81ccd6d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cmyprovidersource-myproviderdsh"></a>CMyProviderSource (MyProviderDS.H)
Le classi del provider utilizzano l'ereditarietà multipla. Il codice seguente mostra la catena di ereditarietà per l'oggetto origine dati:  
  
```cpp
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
  
 Tutti i componenti COM derivano da `CComObjectRootEx` e `CComCoClass`. `CComObjectRootEx` fornisce l'implementazione per il **IUnknown** interfaccia. Può gestire qualsiasi modello di threading. `CComCoClass` gestisce l'eventuale supporto necessario per l'errore. Se si desidera inviare informazioni sugli errori più completi al client, è possibile utilizzare alcune API di errore in `CComCoClass`.  
  
 L'oggetto origine dati eredita anche da diverse classi di 'Impl'. Ogni classe fornisce l'implementazione di un'interfaccia. L'origine dati oggetto implementa il `IPersist`, `IDBProperties`, **IDBInitialize**, e **IDBCreateSession** interfacce. Ogni interfaccia è richiesta da parte di OLE DB per implementare l'oggetto origine dati. È possibile scegliere di supportare o meno specifica funzionalità da cui ereditano o che non eredita da una di queste classi di 'Impl'. Se si desidera supportare la **IDBDataSourceAdmin** interfaccia, si eredita dal **IDBDataSourceAdminImpl** classe per ottenere le funzionalità necessarie.  
  
## <a name="com-map"></a>Mappa COM  
 Ogni volta che il client chiama `QueryInterface` per un'interfaccia sull'origine dati, passano attraverso la mappa COM seguente:  
  
```  
BEGIN_COM_MAP(CMyProviderSource)  
   COM_INTERFACE_ENTRY(IDBCreateSession)  
   COM_INTERFACE_ENTRY(IDBInitialize)  
   COM_INTERFACE_ENTRY(IDBProperties)  
   COM_INTERFACE_ENTRY(IPersist)  
   COM_INTERFACE_ENTRY(IInternalConnection)  
END_COM_MAP()  
```  
  
 Le macro COM_INTERFACE_ENTRY da ATL e comunicano all'implementazione di `QueryInterface` in `CComObjectRootEx` per restituire le interfacce appropriate.  
  
## <a name="property-map"></a>Mapping di proprietà  
 Il mapping di proprietà specifica tutte le proprietà designate dal provider:  
  
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
  
 Proprietà in OLE DB sono raggruppate. L'oggetto origine dati dispone di due gruppi di proprietà: uno per il **DBPROPSET_DATASOURCEINFO** e uno per il **DBPROPSET_DBINIT** impostato. Il **DBPROPSET_DATASOURCEINFO** set corrisponde alle proprietà del provider e la relativa origine dati. Il **DBPROPSET_DBINIT** set corrisponde alle proprietà utilizzate in fase di inizializzazione. Modelli Provider OLE DB gestire questi gruppi con le macro PROPERTY_SET. Le macro di creano un blocco che contiene una matrice di proprietà. Ogni volta che il client chiama il `IDBProperties` , il provider utilizza il mapping di proprietà.  
  
 Non è necessario implementare tutte le proprietà nella specifica. Tuttavia, è necessario supportare le proprietà obbligatorie. vedere la specifica di conformità di livello 0 per altre informazioni. Se si preferisce non supporta una proprietà, è possibile rimuoverlo dalla mappa. Se si desidera supportare una proprietà, aggiungerlo mediante una macro PROPERTY_INFO_ENTRY nella mappa. La macro corrisponde al **UPROPINFO** struttura come illustrato nel codice seguente:  
  
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
  
 Ogni elemento nella struttura rappresenta le informazioni per la gestione della proprietà. Contiene un **DBPROPID** per determinare il GUID e l'ID per la proprietà. Contiene inoltre le voci per determinare il tipo e il valore della proprietà.  
  
 Se si desidera modificare il valore predefinito di una proprietà (si noti che un utente è possibile modificare il valore di una proprietà modificabile in qualsiasi momento), è possibile utilizzare macro PROPERTY_INFO_ENTRY_VALUE o PROPERTY_INFO_ENTRY_EX. Queste macro consentono di specificare un valore per una proprietà corrispondente. La macro PROPERTY_INFO_ENTRY_VALUE è una notazione a sintassi abbreviata che consente di modificare il valore. La macro PROPERTY_INFO_ENTRY_VALUE richiama la macro PROPERTY_INFO_ENTRY_EX. Questa macro consente di aggiungere o modificare tutti gli attributi di **UPROPINFO** struttura.  
  
 Se si desidera definire il proprio set di proprietà, è possibile aggiungere uno da un ulteriore combinazione BEGIN_PROPSET_MAP/END_PROPSET_MAP. È necessario definire un GUID per il set di proprietà, quindi definire le proprietà personalizzate. Se si dispone di proprietà specifiche del provider, aggiungerli a un nuovo insieme anziché uno esistente. Ciò consente di evitare problemi nelle versioni successive di OLE DB.  
  
## <a name="user-defined-property-sets"></a>Set di proprietà definite dall'utente  
 Visual C++ supporta set di proprietà definite dall'utente. Non è necessario eseguire l'override **GetProperties** o `GetPropertyInfo`. Al contrario, i modelli di rilevare qualsiasi set di proprietà definite dall'utente e aggiungerlo all'oggetto appropriato.  
  
 Se si dispone di un set di proprietà definite dall'utente che deve essere disponibile in fase di inizializzazione (ovvero prima che il consumer chiama **IDBInitialize:: Initialize**), è possibile specificare questo valore utilizzando il **UPROPSET_USERINIT** flag in combinazione con la macro BEGIN_PROPERTY_SET_EX. Il set di proprietà deve essere l'oggetto origine dati per il funzionamento (come richiede la specifica OLE DB). Ad esempio:  
  
```  
BEGIN_PROPERTY_SET_EX(DBPROPSET_MYPROPSET, UPROPSET_USERINIT)  
   PROPERTY_INFO_ENTRY(DBPROP_MYPROP)  
END_PROPERTY_SET_EX(DBPROPSET_MYPROPSET)  
```  
  
## <a name="see-also"></a>Vedere anche  
 [File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)