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
ms.openlocfilehash: 8e92c30e8d62ade095167880917ad70da8e59b36
ms.sourcegitcommit: 72161bcd21d1ad9cc3f12261aa84a5b026884afa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2020
ms.locfileid: "90742918"
---
# <a name="ccustomsource-customdsh"></a>CCustomSource (CustomDS. h)

Le classi del provider utilizzano l'ereditarietà multipla. Nel codice seguente viene illustrata la catena di ereditarietà per l'oggetto origine dati:

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

Tutti i componenti COM derivano da `CComObjectRootEx` e `CComCoClass` . `CComObjectRootEx` fornisce tutte le implementazioni per l' `IUnknown` interfaccia. Consente di gestire qualsiasi modello di Threading. `CComCoClass` gestisce qualsiasi supporto di errore richiesto. Se si desidera inviare al client informazioni dettagliate sugli errori, è possibile utilizzare alcune delle API di errore in `CComCoClass` .

L'oggetto origine dati eredita anche da diverse classi ' Impl '. Ogni classe fornisce l'implementazione di per un'interfaccia. L'oggetto origine dati implementa le `IPersist` interfacce,, `IDBProperties` `IDBInitialize` e `IDBCreateSession` . Ogni interfaccia è richiesta da OLE DB per implementare l'oggetto origine dati. È possibile scegliere di supportare o meno la funzionalità specifica ereditando o non ereditando da una di queste classi ' Impl '. Se si desidera supportare l' `IDBDataSourceAdmin` interfaccia, è possibile ereditare dalla `IDBDataSourceAdminImpl` classe per ottenere la funzionalità necessaria.

## <a name="com-map"></a>Mappa COM

Ogni volta che il client chiama `QueryInterface` un'interfaccia nell'origine dati, passa attraverso la mappa com seguente:

```cpp
BEGIN_COM_MAP(CCustomSource)
   COM_INTERFACE_ENTRY(IDBCreateSession)
   COM_INTERFACE_ENTRY(IDBInitialize)
   COM_INTERFACE_ENTRY(IDBProperties)
   COM_INTERFACE_ENTRY(IPersist)
   COM_INTERFACE_ENTRY(IInternalConnection)
END_COM_MAP()
```

Le macro COM_INTERFACE_ENTRY provengano da ATL e indicano all'implementazione di `QueryInterface` in `CComObjectRootEx` per restituire le interfacce appropriate.

## <a name="property-map"></a>Mappa delle proprietà

Il mapping delle proprietà specifica tutte le proprietà assegnate dal provider:

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

Le proprietà in OLE DB sono raggruppate. L'oggetto origine dati dispone di due gruppi di proprietà: uno per il set di DBPROPSET_DATASOURCEINFO e uno per il set di DBPROPSET_DBINIT. Il set di DBPROPSET_DATASOURCEINFO corrisponde alle proprietà relative al provider e alla relativa origine dati. Il set di DBPROPSET_DBINIT corrisponde alle proprietà utilizzate in fase di inizializzazione. I modelli di provider OLE DB gestiscono questi set con le macro PROPERTY_SET. Le macro creano un blocco che contiene una matrice di proprietà. Ogni volta che il client chiama l' `IDBProperties` interfaccia, il provider utilizza il mapping delle proprietà.

Non è necessario implementare ogni proprietà nella specifica. Tuttavia, è necessario supportare le proprietà obbligatorie. Per ulteriori informazioni, vedere la specifica di conformità di livello 0. Se non si vuole supportare una proprietà, è possibile rimuoverla dalla mappa. Se si desidera supportare una proprietà, aggiungerla alla mappa utilizzando una macro PROPERTY_INFO_ENTRY. La macro corrisponde alla `UPROPINFO` struttura, come illustrato nel codice seguente:

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

Ogni elemento nella struttura rappresenta le informazioni per la gestione della proprietà. Contiene un oggetto `DBPROPID` per determinare il GUID e l'ID per la proprietà. Contiene anche le voci per determinare il tipo e il valore della proprietà.

Se si desidera modificare il valore predefinito di una proprietà (si noti che un consumer può modificare il valore di una proprietà scrivibile in qualsiasi momento), è possibile utilizzare la PROPERTY_INFO_ENTRY_VALUE o la macro PROPERTY_INFO_ENTRY_EX. Queste macro consentono di specificare un valore per una proprietà corrispondente. La macro PROPERTY_INFO_ENTRY_VALUE è una notazione abbreviata che consente di modificare il valore. La macro PROPERTY_INFO_ENTRY_VALUE chiama la macro PROPERTY_INFO_ENTRY_EX. Questa macro consente di aggiungere o modificare tutti gli attributi nella `UPROPINFO` struttura.

Se si desidera definire un set di proprietà personalizzato, è possibile aggiungerne uno creando una combinazione BEGIN_PROPSET_MAP/END_PROPSET_MAP aggiuntiva. Definire un GUID per il set di proprietà e quindi definire le proprie proprietà. Se si dispone di proprietà specifiche del provider, aggiungerle a un nuovo set di proprietà anziché utilizzarne una esistente. In questo modo si evitano problemi nelle versioni successive di OLE DB.

## <a name="user-defined-property-sets"></a>Set di proprietà definiti dall'utente

Visual C++ supporta i set di proprietà definiti dall'utente. Non è necessario eseguire l'override di `GetProperties` o `GetPropertyInfo` . Al contrario, i modelli rilevano qualsiasi set di proprietà definito dall'utente e lo aggiungono all'oggetto appropriato.

Se si dispone di un set di proprietà definito dall'utente che deve essere disponibile al momento dell'inizializzazione, ovvero prima che il consumer chiami `IDBInitialize::Initialize` , è possibile specificarlo utilizzando il flag UPROPSET_USERINIT insieme alla macro BEGIN_PROPERTY_SET_EX. Il set di proprietà deve trovarsi nell'oggetto origine dati affinché questo funzioni, come richiesto dalla specifica OLE DB. Ad esempio:

```cpp
BEGIN_PROPERTY_SET_EX(DBPROPSET_MYPROPSET, UPROPSET_USERINIT)
   PROPERTY_INFO_ENTRY(DBPROP_MYPROP)
END_PROPERTY_SET_EX(DBPROPSET_MYPROPSET)
```

## <a name="see-also"></a>Vedere anche

[File generati dalla procedura guidata del provider](../../data/oledb/provider-wizard-generated-files.md)<br/>
