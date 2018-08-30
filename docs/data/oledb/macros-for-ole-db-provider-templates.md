---
title: Macro per modelli Provider OLE DB | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- vc.templates.ole
- BEGIN_PROPERTY_SET
- BEGIN_PROPERTY_SET_EX
- BEGIN_PROPSET_MAP
- CHAIN_PROPERTY_SET
- END_PROPERTY_SET
- END_PROPSET_MAP
- PROPERTY_INFO_ENTRY
- PROPERTY_INFO_ENTRY_EX
- PROPERTY_INFO_ENTRY_VALUE
- BEGIN_PROVIDER_COLUMN_MAP
- END_PROVIDER_COLUMN_MAP
- PROVIDER_COLUMN_ENTRY
- PROVIDER_COLUMN_ENTRY_FIXED
- PROVIDER_COLUMN_ENTRY_GN
- PROVIDER_COLUMN_ENTRY_LENGTH
- PROVIDER_COLUMN_ENTRY_STR
- PROVIDER_COLUMN_ENTRY_TYPE_LENGTH
- PROVIDER_COLUMN_ENTRY_WSTR
- BEGIN_SCHEMA_MAP
- END_SCHEMA_MAP
- SCHEMA_ENTRY
dev_langs:
- C++
helpviewer_keywords:
- OLE DB provider templates, macros
- macros, OLE DB Provider Templates
- Provider Template macros (OLE DB)
- OLE DB Provider Template macros
- BEGIN_PROPERTY_SET macro
- BEGIN_PROPERTY_SET_EX macro
- BEGIN_PROPSET_MAP macro
- CHAIN_PROPERTY_SET macro
- END_PROPERTY_SET macro
- END_PROPSET_MAP macro
- PROPERTY_INFO_ENTRY macro
- PROPERTY_INFO_ENTRY_EX macro
- PROPERTY_INFO_ENTRY_VALUE macro
- BEGIN_PROVIDER_COLUMN_MAP macro
- END_PROVIDER_COLUMN_MAP macro
- PROVIDER_COLUMN_ENTRY macro
- PROVIDER_COLUMN_ENTRY_FIXED macro
- PROVIDER_COLUMN_ENTRY_GN macro
- PROVIDER_COLUMN_ENTRY_LENGTH macro
- PROVIDER_COLUMN_ENTRY_STR macro
- PROVIDER_COLUMN_ENTRY_TYPE_LENGTH macro
- PROVIDER_COLUMN_ENTRY_WSTR macro
- BEGIN_SCHEMA_MAP macro
- END_SCHEMA_MAP macro
- SCHEMA_ENTRY macro
ms.assetid: 909482c5-64ab-4e52-84a9-1c07091db183
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: e2456eed4f55fe5a5f68552cfe91e5785fc99cf5
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43209021"
---
# <a name="macros-for-ole-db-provider-templates"></a>Macro per i modelli di provider OLE DB
Le macro di Provider OLE DB per i modelli offrono funzionalità nelle categorie seguenti:  
  
## <a name="property-set-map-macros"></a>Macro della mappa di Set di proprietà  
  
|||  
|-|-|  
|[BEGIN_PROPERTY_SET](#begin_property_set)|Contrassegna l'inizio di un set di proprietà.|  
|[BEGIN_PROPERTY_SET_EX](#begin_property_set_ex)|Contrassegna l'inizio di un set di proprietà.|  
|[BEGIN_PROPSET_MAP](#begin_propset_map)|Segni di che inizio di una proprietà impostata che possono essere nascosti o definiti all'esterno dell'ambito del provider.|  
|[CHAIN_PROPERTY_SET](#chain_property_set)|Unisce i gruppi di proprietà.|  
|[END_PROPERTY_SET](#end_property_set)|Contrassegna la fine di un set di proprietà.|  
|[END_PROPSET_MAP](#end_propset_map)|Contrassegna la fine di una mappa di set di proprietà.|  
|[PROPERTY_INFO_ENTRY](#property_info_entry)|Imposta una proprietà specifica in una proprietà impostata su un valore predefinito.|  
|[PROPERTY_INFO_ENTRY_EX](#property_info_entry_ex)|Imposta una proprietà specifica in una proprietà impostata su un valore fornito dall'utente. È inoltre possibile impostare le opzioni e i flag.|  
|[PROPERTY_INFO_ENTRY_VALUE](#property_info_entry_value)|Imposta una proprietà specifica in una proprietà impostata su un valore fornito dall'utente.|  
  
## <a name="column-map-macros"></a>Macro della mappa colonna  
  
|||  
|-|-|  
|[BEGIN_PROVIDER_COLUMN_MAP](#begin_provider_column_map)|Contrassegna l'inizio delle voci della mappa colonna provider.|  
|[END_PROVIDER_COLUMN_MAP](#end_provider_column_map)|Contrassegna la fine delle voci della mappa colonna provider.|  
|[PROVIDER_COLUMN_ENTRY](#provider_column_entry)|Rappresenta una colonna specifica è supportata dal provider.|  
|[PROVIDER_COLUMN_ENTRY_FIXED](#provider_column_entry_fixed)|Rappresenta una colonna specifica è supportata dal provider. È possibile specificare il tipo di dati di colonna.|  
|[PROVIDER_COLUMN_ENTRY_GN](#provider_column_entry_gn)|Rappresenta una colonna specifica è supportata dal provider. È possibile specificare le dimensioni della colonna, tipo di dati, precisione, scala e GUID set di righe dello schema.|  
|[PROVIDER_COLUMN_ENTRY_LENGTH](#provider_column_entry_length)|Rappresenta una colonna specifica è supportata dal provider. È possibile specificare la dimensione della colonna.|  
|[PROVIDER_COLUMN_ENTRY_STR](#provider_column_entry_str)|Rappresenta una colonna specifica è supportata dal provider. Presuppone che il tipo di colonna è una stringa.|  
|[PROVIDER_COLUMN_ENTRY_TYPE_LENGTH](#provider_column_entry_type_length)|Rappresenta una colonna specifica è supportata dal provider. Ad esempio PROVIDER_COLUMN_ENTRY_LENGTH, ma consente anche di specificare il tipo di dati della colonna così come dimensione.|  
|[PROVIDER_COLUMN_ENTRY_WSTR](#provider_column_entry_wstr)|Rappresenta una colonna specifica è supportata dal provider. Presuppone che il tipo di colonna è una stringa di caratteri Unicode.|  
  
## <a name="schema-rowset-macros"></a>Macro di set di righe dello schema  
  
|||  
|-|-|  
|[BEGIN_SCHEMA_MAP](#begin_schema_map)|Contrassegna l'inizio di una mappa di schema.|  
|[END_SCHEMA_MAP](#end_schema_map)|Contrassegna la fine di una mappa di schema.|  
|[SCHEMA_ENTRY](#schema_entry)|Associa un GUID a una classe.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  

### <a name="begin_property_set"></a> BEGIN_PROPERTY_SET
Mapping di set di segni di che inizio di una proprietà impostata in una proprietà.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
BEGIN_PROPERTY_SET(guid)  
```  
  
#### <a name="parameters"></a>Parametri  
 *guid*  
 [in] La proprietà GUID.  
  
#### <a name="example"></a>Esempio  
 Vedere [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).  

### <a name="begin_property_set_ex"></a> BEGIN_PROPERTY_SET_EX
Mapping di set di segni di che inizio di una proprietà impostata in una proprietà.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
BEGIN_PROPERTY_SET_EX(guid, flags)  
```  
  
#### <a name="parameters"></a>Parametri  
 *guid*  
 [in] La proprietà GUID.  
  
 *flags*  
 [in] UPROPSET_HIDDEN per qualsiasi set di proprietà che non si desidera esporre o UPROPSET_PASSTHROUGH per un provider che espone le proprietà definite all'esterno dell'ambito del provider.  
  
#### <a name="example"></a>Esempio  
 Vedere [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).  

### <a name="begin_propset_map"></a> BEGIN_PROPSET_MAP
Segni di inizio della proprietà set di voci della mappa.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
BEGIN_PROPSET_MAP(Class)  
```  
  
#### <a name="parameters"></a>Parametri  
 *Classe*  
 [in] La classe in cui viene specificata questa proprietà è impostata. Un set di proprietà può essere specificato in oggetti OLE DB seguenti:  
  
-   [Oggetti origine dei dati](/previous-versions/windows/desktop/ms721278\(v=vs.85\))  
  
-   [Oggetti di sessione](/previous-versions/windows/desktop/ms711572\(v=vs.85\))  
  
-   [Comandi](/previous-versions/windows/desktop/ms724608\(v=vs.85\))  
  
#### <a name="example"></a>Esempio  
 Ecco un esempio di mapping dei set di proprietà:  
  
 [!code-cpp[NVC_OLEDB_Provider#3](../../data/oledb/codesnippet/cpp/begin-propset-map_1.h)]  

### <a name="chain_property_set"></a> CHAIN_PROPERTY_SET
Questa macro unisce i gruppi di proprietà.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
CHAIN_PROPERTY_SET(ChainClass)  
```  
  
#### <a name="parameters"></a>Parametri  
 *ChainClass*  
 [in] Il nome della classe di proprietà di catena per. Si tratta di una classe generata dalla procedura guidata progetto ATL che già contiene una mappa (ad esempio una classe di oggetto origine dati, comando o sessione).  
  
#### <a name="remarks"></a>Note  
 È possibile concatenare un set di proprietà da un'altra classe per la propria classe, quindi accedere alle proprietà direttamente dalla classe.  
  
> [!CAUTION]
>  Usare questa macro in modo sporadico. Uso non corretto può causare un consumer di eseguire il test di conformità OLE DB.  

### <a name="end_property_set"></a> END_PROPERTY_SET
Contrassegna la fine di un set di proprietà.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
END_PROPERTY_SET(guid)  
```  
  
#### <a name="parameters"></a>Parametri  
 *guid*  
 [in] La proprietà GUID.  
  
#### <a name="example"></a>Esempio  
 Vedere [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).  

### <a name="end_propset_map"></a> END_PROPSET_MAP
Contrassegni la fine del proprietà set di voci della mappa.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
END_PROPSET_MAP()  
```  
  
#### <a name="example"></a>Esempio  
 Vedere [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).  

### <a name="property_info_entry"></a> PROPERTY_INFO_ENTRY
Rappresenta una proprietà specifica in un insieme di proprietà.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
PROPERTY_INFO_ENTRY(dwPropID)  
```  
  
#### <a name="parameters"></a>Parametri  
 *dwPropID*  
 [in] Oggetto [DBPROPID](/previous-versions/windows/desktop/ms723882\(v=vs.85\)) valore che può essere usato in combinazione con la proprietà GUID per identificare una proprietà del set.  
  
#### <a name="remarks"></a>Note  
 La macro imposta il valore della proprietà di tipo `DWORD` su un valore predefinito definito in ATLDB. H. Per impostare la proprietà su un valore di propria scelta, usare [PROPERTY_INFO_ENTRY_VALUE](../../data/oledb/property-info-entry-value.md). Per impostare il [VARTYPE](https://msdn.microsoft.com/317b911b-1805-402d-a9cb-159546bc88b4) e [DBPROPFLAGS](/previous-versions/windows/desktop/ms724342\(v=vs.85\)) per la proprietà nello stesso momento, utilizzare [PROPERTY_INFO_ENTRY_EX](../../data/oledb/property-info-entry-ex.md).  
  
#### <a name="example"></a>Esempio  
 Vedere [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).  

### <a name="property_info_entry_ex"></a> PROPERTY_INFO_ENTRY_EX
Rappresenta una proprietà specifica in un insieme di proprietà.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
PROPERTY_INFO_ENTRY_EX(dwPropID, vt, dwFlags, value, options)  
```  
  
#### <a name="parameters"></a>Parametri  
 *dwPropID*  
 [in] Oggetto [DBPROPID](/previous-versions/windows/desktop/ms723882\(v=vs.85\)) valore che può essere usato in combinazione con la proprietà GUID per identificare una proprietà del set.  
  
 *vt*  
 [in] Il [VARTYPE](https://msdn.microsoft.com/317b911b-1805-402d-a9cb-159546bc88b4) di questa voce di proprietà.  
  
 *dwFlags*  
 [in] Oggetto [DBPROPFLAGS](/previous-versions/windows/desktop/ms724342\(v=vs.85\)) che descrive questa voce di proprietà.  
  
 *valore*  
 [in] Il valore della proprietà di tipo `DWORD`.  
  
 *Opzioni*  
 DBPROPOPTIONS_REQUIRED o DBPROPOPTIONS_SETIFCHEAP. In genere, un provider non è necessario impostare *opzioni* quanto è impostato dal consumer.  
  
#### <a name="remarks"></a>Note  
 Con questa macro è possibile specificare direttamente il valore della proprietà di tipo `DWORD` nonché le opzioni e i flag. Per impostare semplicemente una proprietà sul valore predefinito indicato in ATLDB.H, usare [PROPERTY_INFO_ENTRY](../../data/oledb/property-info-entry.md). Per impostare una proprietà su un valore a scelta, senza impostare opzioni o flag, usare [PROPERTY_INFO_ENTRY_VALUE](../../data/oledb/property-info-entry-value.md).  
  
#### <a name="example"></a>Esempio  
 Vedere [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).  

### <a name="property_info_entry_value"></a> PROPERTY_INFO_ENTRY_VALUE
Rappresenta una proprietà specifica in un insieme di proprietà.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
PROPERTY_INFO_ENTRY_VALUE(dwPropID, value)  
```  
  
#### <a name="parameters"></a>Parametri  
 *dwPropID*  
 [in] Oggetto [DBPROPID](/previous-versions/windows/desktop/ms723882\(v=vs.85\)) valore che può essere usato in combinazione con la proprietà GUID per identificare una proprietà del set.  
  
 *valore*  
 [in] Il valore della proprietà di tipo `DWORD`.  
  
#### <a name="remarks"></a>Note  
 Con questa macro, è possibile specificare direttamente il valore della proprietà di tipo `DWORD`. Per impostare la proprietà sul valore predefinito definito in ATLDB. H, usare [PROPERTY_INFO_ENTRY](../../data/oledb/property-info-entry.md). Per impostare il valore, flag e le opzioni per la proprietà, utilizzare [PROPERTY_INFO_ENTRY_EX](../../data/oledb/property-info-entry-ex.md).  
  
#### <a name="example"></a>Esempio  
 Vedere [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).  

### <a name="begin_provider_column_map"></a> BEGIN_PROVIDER_COLUMN_MAP
Contrassegna l'inizio delle voci della mappa colonna provider.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
BEGIN_PROVIDER_COLUMN_MAP(theClass)  
```  
  
#### <a name="parameters"></a>Parametri  
 *theClass*  
 [in] Il nome della classe a cui appartiene questa mappa.  
  
#### <a name="example"></a>Esempio  
 Ecco la mappa delle colonne di un provider di esempio:  
  
 [!code-cpp[NVC_OLEDB_Provider#4](../../data/oledb/codesnippet/cpp/begin-provider-column-map_1.h)]  

### <a name="end_provider_column_map"></a> END_PROVIDER_COLUMN_MAP
Contrassegna la fine delle voci della mappa colonna provider.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
END_PROVIDER_COLUMN_MAP()  
```  
  
#### <a name="example"></a>Esempio  
 Visualizzare [BEGIN_PROVIDER_COLUMN_MAP](../../data/oledb/begin-provider-column-map.md).  

### <a name="provider_column_entry"></a> PROVIDER_COLUMN_ENTRY
Rappresenta una colonna specifica è supportata dal provider.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
PROVIDER_COLUMN_ENTRY (name, ordinal, member)  
```  
  
#### <a name="parameters"></a>Parametri  
 *name*  
 [in] Il nome della colonna.  
  
 *Numero ordinale*  
 [in] Numero di colonna. A meno che la colonna è una colonna del segnalibro, il numero di colonna non deve essere 0.  
  
 *Membro*  
 [in] La variabile membro in `dataClass` corrispondente alla colonna.  

### <a name="provider_column_entry_fixed"></a> PROVIDER_COLUMN_ENTRY_FIXED
Rappresenta una colonna specifica è supportata dal provider.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
PROVIDER_COLUMN_ENTRY_FIXED(name, ordinal, dbtype, member)  
```  
  
#### <a name="parameters"></a>Parametri  
 *name*  
 [in] Il nome della colonna.  
  
 *Numero ordinale*  
 [in] Numero di colonna. A meno che la colonna è una colonna del segnalibro, il numero di colonna non deve essere 0.  
  
 *DbType*  
 [in] Il tipo di dati [DBTYPE](/previous-versions/windows/desktop/ms711251\(v=vs.85\)).  
  
 *Membro*  
 [in] La variabile membro in `dataClass` che archivia i dati.  
  
#### <a name="remarks"></a>Note  
 Consente di specificare il tipo di dati di colonna.  
  
#### <a name="example"></a>Esempio  
 Visualizzare [BEGIN_PROVIDER_COLUMN_MAP](../../data/oledb/begin-provider-column-map.md).  

### <a name="provider_column_entry_gn"></a> PROVIDER_COLUMN_ENTRY_GN
Rappresenta una colonna specifica è supportata dal provider.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
PROVIDER_COLUMN_ENTRY_GN (name, ordinal, flags, colSize, dbtype, precision, scale, guid)  
```  
  
#### <a name="parameters"></a>Parametri  
 *name*  
 [in] Il nome della colonna.  
  
 *Numero ordinale*  
 [in] Numero di colonna. A meno che la colonna è una colonna del segnalibro, il numero di colonna non deve essere 0.  
  
 *flags*  
 [in] Specifica come vengono restituiti dati. Vedere le `dwFlags` descrizione nella finestra [strutture DBBINDING](/previous-versions/windows/desktop/ms716845\(v=vs.85\)).  
  
 *colSize*  
 [in] La dimensione della colonna.  
  
 *DbType*  
 [in] Indica il tipo di dati del valore. Vedere le `wType` descrizione nella finestra [strutture DBBINDING](/previous-versions/windows/desktop/ms716845\(v=vs.85\)).  
  
 *precision*  
 [in] Indica la precisione da utilizzare durante il recupero dei dati, se *dbType* è DBTYPE_NUMERIC o DBTYPE_DECIMAL. Vedere le `bPrecision` descrizione nella finestra [strutture DBBINDING](/previous-versions/windows/desktop/ms716845\(v=vs.85\)).  
  
 *Scalabilità*  
 [in] Indica la scala da usare durante il recupero dei dati se dbType DBTYPE_NUMERIC o DBTYPE_DECIMAL. Vedere le `bScale` descrizione nella finestra [strutture DBBINDING](/previous-versions/windows/desktop/ms716845\(v=vs.85\)).  
  
 *guid*  
 Un GUID di rowset dello schema. Visualizzare [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686\(v=vs.85\)) nel *riferimento per programmatori OLE DB* per un elenco di set di righe dello schema e i relativi GUID.  
  
#### <a name="remarks"></a>Note  
 Consente di specificare le dimensioni della colonna, tipo di dati, precisione, scala e GUID set di righe dello schema.  

### <a name="provider_column_entry_length"></a> PROVIDER_COLUMN_ENTRY_LENGTH
Rappresenta una colonna specifica è supportata dal provider.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
PROVIDER_COLUMN_ENTRY_LENGTH(name, ordinal, size, member)  
```  
  
#### <a name="parameters"></a>Parametri  
 *name*  
 [in] Il nome della colonna.  
  
 *Numero ordinale*  
 [in] Numero di colonna. A meno che la colonna è una colonna del segnalibro, il numero di colonna non deve essere 0.  
  
 *size*  
 [in] Le dimensioni di colonna in byte.  
  
 *Membro*  
 [in] La variabile membro in `dataClass` che archivia i dati della colonna.  
  
#### <a name="remarks"></a>Note  
 Consente di specificare la dimensione della colonna.  
  
#### <a name="example"></a>Esempio  
 Visualizzare [BEGIN_PROVIDER_COLUMN_MAP](../../data/oledb/begin-provider-column-map.md). 

### <a name="provider_column_entry_str"></a> PROVIDER_COLUMN_ENTRY_STR
Rappresenta una colonna specifica è supportata dal provider.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
PROVIDER_COLUMN_ENTRY_STR(name, ordinal, member)  
```  
  
#### <a name="parameters"></a>Parametri  
 *name*  
 [in] Il nome della colonna.  
  
 *Numero ordinale*  
 [in] Numero di colonna. A meno che la colonna è una colonna del segnalibro, il numero di colonna non deve essere 0.  
  
 *Membro*  
 [in] La variabile membro nella classe di dati che archiviano i dati.  
  
#### <a name="remarks"></a>Note  
 Usare questa macro quando i dati della colonna viene considerati [DBTYPE_STR](/previous-versions/windows/desktop/ms711251\(v=vs.85\)).  
  
#### <a name="example"></a>Esempio  
 Visualizzare [BEGIN_PROVIDER_COLUMN_MAP](../../data/oledb/begin-provider-column-map.md).   

### <a name="provider_column_entry_type_length"></a> PROVIDER_COLUMN_ENTRY_TYPE_LENGTH
Rappresenta una colonna specifica è supportata dal provider.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
PROVIDER_COLUMN_ENTRY_TYPE_LENGTH(name, ordinal, dbtype, size, member)  
```  
  
#### <a name="parameters"></a>Parametri  
 *name*  
 [in] Il nome della colonna.  
  
 *Numero ordinale*  
 [in] Numero di colonna. A meno che la colonna è una colonna del segnalibro, il numero di colonna non deve essere 0.  
  
 *DbType*  
 [in] Il tipo di dati [DBTYPE](/previous-versions/windows/desktop/ms711251\(v=vs.85\)).  
  
 *size*  
 [in] Le dimensioni di colonna in byte.  
  
 *Membro*  
 [in] La variabile membro nella classe di dati che archiviano i dati.  
  
#### <a name="remarks"></a>Note  
 Simile a [PROVIDER_COLUMN_ENTRY_LENGTH](../../data/oledb/provider-column-entry-length.md) ma consente anche di specificare il tipo di dati della colonna così come dimensione.  

### <a name="provider_column_entry_wstr"></a> PROVIDER_COLUMN_ENTRY_WSTR
Rappresenta una colonna specifica è supportata dal provider.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
PROVIDER_COLUMN_ENTRY_WSTR(name, ordinal, member)  
```  
  
#### <a name="parameters"></a>Parametri  
 *name*  
 [in] Il nome della colonna.  
  
 *Numero ordinale*  
 [in] Numero di colonna. A meno che la colonna è una colonna del segnalibro, il numero di colonna non deve essere 0.  
  
 *Membro*  
 [in] La variabile membro nella classe di dati che archiviano i dati.  
  
#### <a name="remarks"></a>Note  
 Usare questa macro quando i dati della colonna sono un valore null terminato stringa di caratteri Unicode [DBTYPE_WSTR](/previous-versions/windows/desktop/ms711251\(v=vs.85\)).  

### <a name="begin_schema_map"></a> BEGIN_SCHEMA_MAP
Indica l'inizio di una mappa di schema.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
BEGIN_SCHEMA_MAP(SchemaClass);  
```  
  
#### <a name="parameters"></a>Parametri  
 *SchemaClass*  
 La classe che contiene la mappa. In genere si tratterà della classe di sessione.  
  
#### <a name="remarks"></a>Note  
 Visualizzare [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686\(v=vs.85\)) nel SDK di Windows per altre informazioni sui set di righe dello schema.  

### <a name="end_schema_map"></a> END_SCHEMA_MAP
Indica la fine della mappa dello schema.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
END_SCHEMA_MAP()  
```  
  
#### <a name="see-also"></a>Vedere anche  
 [Classe IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md)

### <a name="schema_entry"></a> SCHEMA_ENTRY
Associa un GUID a una classe.  
  
#### <a name="syntax"></a>Sintassi  
  
```cpp
SCHEMA_ENTRY(guid,  
   rowsetClass);   
```  
  
#### <a name="parameters"></a>Parametri  
 *guid*  
 Un GUID di rowset dello schema. Visualizzare [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686\(v=vs.85\)) nel *riferimento per programmatori OLE DB* per un elenco di set di righe dello schema e i relativi GUID.  
  
 *RowsetClass*  
 La classe che verrà creata per rappresentare il set di righe dello schema.  
  
#### <a name="remarks"></a>Note  
 [IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md) quindi possibile eseguire una query della mappa per un elenco di GUID o può creare un set di righe se gli viene assegnato un GUID. Set di righe dello schema `IDBSchemaRowsetImpl` crea è simile a uno standard `CRowsetImpl`-derivato (classe), ad eccezione del fatto che deve fornire un `Execute` metodo che ha la firma seguente:  
  
```cpp  
HRESULT Execute (LONG* pcRowsAffected,  
    ULONG cRestrictions,  
    const VARIANT* rgRestrictions);  
```  
  
 Ciò `Execute` funzione inserisce i dati del set di righe. La creazione guidata progetto ATL crea, come descritto in [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686\(v=vs.85\)) nel *riferimento per programmatori OLE DB*, tre iniziale i set di righe dello schema nel progetto per ognuno dei tre schemi OLE DB obbligatori:  
  
-   DBSCHEMA_TABLES  
  
-   DBSCHEMA_COLUMNS  
  
-   DBSCHEMA_PROVIDER_TYPES  
  
 La procedura guidata aggiunge anche tre voci corrispondenti nel mapping dello schema. Visualizzare [creazione di un Provider OLE DB modello](../../data/oledb/creating-an-ole-db-provider.md) per altre informazioni sull'utilizzo la procedura guidata per creare un provider.  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un Provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)   
 [Riferimenti ai modelli di Provider OLE DB](../../data/oledb/ole-db-provider-templates-reference.md)    
 [Macro per i modelli di provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   