---
title: CCustomSource (CustomDS.H)
ms.date: 10/22/2018
f1_keywords:
- myproviderds.h
- cmyprovidersource
- customds.h
- ccustomsource
helpviewer_keywords:
- OLE DB providers, wizard-generated files
- CMyProviderSource class in MyProviderDS.H
- CCustomSource class in CustomDS.H
ms.assetid: c143d48e-59c8-4f67-9141-3aab51859b92
ms.openlocfilehash: 296e7848b1d756fe0aba6156be2501db45bb092b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62230556"
---
# <a name="ccustomsource-customdsh"></a>CCustomSource (CustomDS.h)

Le classi del provider utilizzano l'ereditarietà multipla. Il codice seguente mostra la catena di ereditarietà per l'oggetto origine dati:

```cpp
/////////////////////////////////////////////////////////////////////////
// CCustomSource
class ATL_NO_VTABLE CCustomSource :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CCustomSource, &CLSID_Custom>,
   public IDBCreateSessionImpl<CCustomSource, CCustomSession>,
   public IDBInitializeImpl<CCustomSource>,
   public IDBPropertiesImpl<CCustomSource>,
   public IPersistImpl<CCustomSource>,
   public IInternalConnectionImpl<CCustomSource>
```

Tutti i componenti COM derivano da `CComObjectRootEx` e `CComCoClass`. `CComObjectRootEx` fornisce l'implementazione completa per il `IUnknown` interfaccia. Può gestire qualsiasi modello di threading. `CComCoClass` gestisce l'eventuale supporto necessario per l'errore. Se si desidera restituire informazioni più dettagliate sugli errori al client, è possibile usare alcune API di errore in `CComCoClass`.

Eredita anche l'oggetto origine dati da diverse classi di 'Impl'. Ogni classe fornisce l'implementazione per un'interfaccia. L'origine dati oggetto implementa la `IPersist`, `IDBProperties`, `IDBInitialize`, e `IDBCreateSession` interfacce. Ogni interfaccia è necessaria da parte di OLE DB per implementare l'oggetto origine dati. È possibile scegliere di supportare o meno una funzionalità specifica che ereditano o che non eredita da una di queste classi di 'Impl'. Se si desidera supportare le `IDBDataSourceAdmin` interfaccia, si eredita dal `IDBDataSourceAdminImpl` classe per ottenere le funzionalità necessarie.

## <a name="com-map"></a>Mappa COM

Ogni volta che il client chiama `QueryInterface` per un'interfaccia sull'origine dati, la chiamata passa attraverso la mappa COM seguente:

```cpp
/////////////////////////////////////////////////////////////////////////
// CCustomSource
class ATL_NO_VTABLE CCustomSource : 
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CCustomSource, &CLSID_Custom>,
   public IDBCreateSessionImpl<CCustomSource, CCustomSession>,
   public IDBInitializeImpl<CCustomSource>,
   public IDBPropertiesImpl<CCustomSource>,
   public IPersistImpl<CCustomSource>,
   public IInternalConnectionImpl<CCustomSource>
```

Tutti i componenti COM derivano da `CComObjectRootEx` e `CComCoClass`. `CComObjectRootEx` fornisce l'implementazione completa per il `IUnknown` interfaccia. Può gestire qualsiasi modello di threading. `CComCoClass` gestisce l'eventuale supporto necessario per l'errore. Se si desidera restituire informazioni più dettagliate sugli errori al client, è possibile usare alcune API di errore in `CComCoClass`.

Eredita anche l'oggetto origine dati da diverse classi di 'Impl'. Ogni classe fornisce l'implementazione per un'interfaccia. L'origine dati oggetto implementa la `IPersist`, `IDBProperties`, `IDBInitialize`, e `IDBCreateSession` interfacce. Ogni interfaccia è necessaria da parte di OLE DB per implementare l'oggetto origine dati. È possibile scegliere di supportare o meno una funzionalità specifica che ereditano o che non eredita da una di queste classi di 'Impl'. Se si desidera supportare le `IDBDataSourceAdmin` interfaccia, si eredita dal `IDBDataSourceAdminImpl` classe per ottenere le funzionalità necessarie.

## <a name="com-map"></a>Mappa COM

Ogni volta che il client chiama `QueryInterface` per un'interfaccia sull'origine dati, la chiamata passa attraverso la mappa COM seguente:

```cpp
BEGIN_COM_MAP(CCustomSource)
   COM_INTERFACE_ENTRY(IDBCreateSession)
   COM_INTERFACE_ENTRY(IDBInitialize)
   COM_INTERFACE_ENTRY(IDBProperties)
   COM_INTERFACE_ENTRY(IPersist)
   COM_INTERFACE_ENTRY(IInternalConnection)
END_COM_MAP()
```

Le macro COM_INTERFACE_ENTRY sono compresi tra ATL e indicare l'implementazione di `QueryInterface` in `CComObjectRootEx` per restituire le interfacce appropriate.

## <a name="property-map"></a>Proprietà mappa

Il mapping di proprietà specifica tutte le proprietà assegnate dal provider:

```cpp
BEGIN_PROPSET_MAP(CCustomSource)
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
   CHAIN_PROPERTY_SET(CCustomSession)
END_PROPSET_MAP()
```

Le proprietà in OLE DB vengono raggruppate. L'oggetto origine dati dispone di due gruppi di proprietà: uno per il DBPROPSET_DATASOURCEINFO impostato e uno per il DBPROPSET_DBINIT impostato. Il set DBPROPSET_DATASOURCEINFO corrisponde alle proprietà sul provider e la relativa origine dati. Il set DBPROPSET_DBINIT corrisponde alla proprietà utilizzate in fase di inizializzazione. Questi set con le macro PROPERTY_SET di gestire i modelli di Provider OLE DB. Le macro di creano un blocco che contiene una matrice di proprietà. Ogni volta che il client chiama il `IDBProperties` interfaccia, il provider Usa il mapping di proprietà.

Non è necessario implementare tutte le proprietà nella specifica. Tuttavia, è necessario supportare le proprietà obbligatorie. vedere la specifica della conformità di livello 0 per altre informazioni. Se non si desidera supportare una proprietà, è possibile rimuoverlo dalla mappa. Se si desidera supportare una proprietà, aggiungerlo nell'oggetto map con un PROPERTY_INFO_ENTRY (macro). La macro corrisponde alla `UPROPINFO` struttura come illustrato nel codice seguente:

```cpp
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

Ogni elemento nella struttura rappresenta le informazioni per la gestione della proprietà. Contiene un `DBPROPID` per determinare il GUID e l'ID della proprietà. Contiene inoltre le voci per determinare il tipo e il valore della proprietà.

Se si desidera modificare il valore predefinito di una proprietà (si noti che un utente può modificare il valore di una proprietà scrivibile in qualsiasi momento), è possibile usare macro PROPERTY_INFO_ENTRY_VALUE o PROPERTY_INFO_ENTRY_EX. Queste macro consentono di specificare un valore per una proprietà corrispondente. La macro PROPERTY_INFO_ENTRY_VALUE è una notazione a sintassi abbreviata che consente di modificare il valore. La macro PROPERTY_INFO_ENTRY_VALUE chiama il PROPERTY_INFO_ENTRY_EX (macro). Questa macro consente di aggiungere o modificare tutti gli attributi nel `UPROPINFO` struttura.

Se si desidera definire il proprio set di proprietà, è possibile aggiungerne una combinazione di BEGIN_PROPSET_MAP/END_PROPSET_MAP aggiuntive. Definire un GUID per il set di proprietà e quindi definire le proprietà personalizzate. Se si dispone di proprietà specifiche del provider, aggiungerli a un nuovo insieme anziché uno esistente. Ciò evita i problemi nelle versioni più recenti di OLE DB.

## <a name="user-defined-property-sets"></a>Set di proprietà definito dall'utente

Visual C++ supporta i set di proprietà definito dall'utente. Non è necessario eseguire l'override `GetProperties` o `GetPropertyInfo`. Al contrario, i modelli di rilevare qualsiasi set di proprietà definito dall'utente e aggiungerlo all'oggetto appropriato.

Se si dispone di un set di proprietà definito dall'utente che deve essere disponibile in fase di inizializzazione (vale a dire, prima che il consumer chiama `IDBInitialize::Initialize`), è possibile specificare questo usando il flag UPROPSET_USERINIT insieme BEGIN_PROPERTY_SET_EX (macro). Il set di proprietà deve essere l'oggetto origine dati per il corretto funzionamento (come richiede la specifica OLE DB). Ad esempio:

```cpp
BEGIN_PROPERTY_SET_EX(DBPROPSET_MYPROPSET, UPROPSET_USERINIT)
   PROPERTY_INFO_ENTRY(DBPROP_MYPROP)
END_PROPERTY_SET_EX(DBPROPSET_MYPROPSET)
```

## <a name="see-also"></a>Vedere anche

[File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)<br/>
