---
title: Macro per i modelli di provider OLE DB
ms.date: 02/11/2019
f1_keywords:
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
ms.openlocfilehash: e72204102bfa47a9dd162499030a38c07bbfe46c
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91504009"
---
# <a name="macros-for-ole-db-provider-templates"></a>Macro per i modelli di provider OLE DB

Le macro del provider di modelli OLE DB offrono funzionalità nelle categorie seguenti:

## <a name="property-set-map-macros"></a>Macro della mappa del set di proprietà

| Nome | Descrizione |
|-|-|
|[BEGIN_PROPERTY_SET](#begin_property_set)|Contrassegna l'inizio di un set di proprietà.|
|[BEGIN_PROPERTY_SET_EX](#begin_property_set_ex)|Contrassegna l'inizio di un set di proprietà.|
|[BEGIN_PROPSET_MAP](#begin_propset_map)|Contrassegna l'inizio di un set di proprietà che può essere nascosto o definito al di fuori dell'ambito del provider.|
|[CHAIN_PROPERTY_SET](#chain_property_set)|Concatena insieme i gruppi di proprietà.|
|[END_PROPERTY_SET](#end_property_set)|Contrassegna la fine di un set di proprietà.|
|[END_PROPSET_MAP](#end_propset_map)|Contrassegna la fine di una mappa del set di proprietà.|
|[PROPERTY_INFO_ENTRY](#property_info_entry)|Imposta una proprietà specifica in una proprietà impostata su un valore predefinito.|
|[PROPERTY_INFO_ENTRY_EX](#property_info_entry_ex)|Imposta una proprietà specifica in una proprietà impostata su un valore fornito dall'utente. Consente inoltre di impostare flag e opzioni.|
|[PROPERTY_INFO_ENTRY_VALUE](#property_info_entry_value)|Imposta una proprietà specifica in una proprietà impostata su un valore fornito dall'utente.|

## <a name="column-map-macros"></a>Macro della mappa colonne

| Nome | Descrizione |
|-|-|
|[BEGIN_PROVIDER_COLUMN_MAP](#begin_provider_column_map)|Contrassegna l'inizio delle voci della mappa delle colonne del provider.|
|[END_PROVIDER_COLUMN_MAP](#end_provider_column_map)|Contrassegna la fine delle voci della mappa delle colonne del provider.|
|[PROVIDER_COLUMN_ENTRY](#provider_column_entry)|Rappresenta una colonna specifica supportata dal provider.|
|[PROVIDER_COLUMN_ENTRY_FIXED](#provider_column_entry_fixed)|Rappresenta una colonna specifica supportata dal provider. È possibile specificare il tipo di dati della colonna.|
|[PROVIDER_COLUMN_ENTRY_GN](#provider_column_entry_gn)|Rappresenta una colonna specifica supportata dal provider. È possibile specificare le dimensioni, il tipo di dati, la precisione, la scala e il GUID del set di righe dello schema della colonna.|
|[PROVIDER_COLUMN_ENTRY_LENGTH](#provider_column_entry_length)|Rappresenta una colonna specifica supportata dal provider. È possibile specificare le dimensioni della colonna.|
|[PROVIDER_COLUMN_ENTRY_STR](#provider_column_entry_str)|Rappresenta una colonna specifica supportata dal provider. Si presuppone che il tipo di colonna sia una stringa.|
|[PROVIDER_COLUMN_ENTRY_TYPE_LENGTH](#provider_column_entry_type_length)|Rappresenta una colonna specifica supportata dal provider. Come PROVIDER_COLUMN_ENTRY_LENGTH, ma consente anche di specificare il tipo di dati della colonna e le dimensioni.|
|[PROVIDER_COLUMN_ENTRY_WSTR](#provider_column_entry_wstr)|Rappresenta una colonna specifica supportata dal provider. Si presuppone che il tipo di colonna sia una stringa di caratteri Unicode.|

## <a name="schema-rowset-macros"></a>Macro set di righe dello schema

| Nome | Descrizione |
|-|-|
|[BEGIN_SCHEMA_MAP](#begin_schema_map)|Contrassegna l'inizio di una mappa dello schema.|
|[END_SCHEMA_MAP](#end_schema_map)|Contrassegna la fine di una mappa dello schema.|
|[SCHEMA_ENTRY](#schema_entry)|Associa un GUID a una classe.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

### <a name="begin_property_set"></a><a name="begin_property_set"></a> BEGIN_PROPERTY_SET

Contrassegna l'inizio di un set di proprietà in una mappa del set di proprietà.

#### <a name="syntax"></a>Sintassi

```cpp
BEGIN_PROPERTY_SET(guid)
```

#### <a name="parameters"></a>Parametri

*guid*<br/>
in GUID della proprietà.

#### <a name="example"></a>Esempio

Vedere [BEGIN_PROPSET_MAP](#begin_propset_map).

### <a name="begin_property_set_ex"></a><a name="begin_property_set_ex"></a> BEGIN_PROPERTY_SET_EX

Contrassegna l'inizio di un set di proprietà in una mappa del set di proprietà.

#### <a name="syntax"></a>Sintassi

```cpp
BEGIN_PROPERTY_SET_EX(guid, flags)
```

#### <a name="parameters"></a>Parametri

*guid*<br/>
in GUID della proprietà.

*flags*<br/>
in UPROPSET_HIDDEN per tutti i set di proprietà che non si desidera esporre o UPROPSET_PASSTHROUGH per un provider che espone proprietà definite al di fuori dell'ambito del provider.

#### <a name="example"></a>Esempio

Vedere [BEGIN_PROPSET_MAP](#begin_propset_map).

### <a name="begin_propset_map"></a><a name="begin_propset_map"></a> BEGIN_PROPSET_MAP

Contrassegna l'inizio delle voci della mappa del set di proprietà.

#### <a name="syntax"></a>Sintassi

```cpp
BEGIN_PROPSET_MAP(Class)
```

#### <a name="parameters"></a>Parametri

*Classe*<br/>
in Classe in cui viene specificato questo set di proprietà. È possibile specificare un set di proprietà negli oggetti OLE DB seguenti:

- [Oggetti origine dati](/previous-versions/windows/desktop/ms721278(v=vs.85))

- [Oggetti sessione](/previous-versions/windows/desktop/ms711572(v=vs.85))

- [Comandi](/previous-versions/windows/desktop/ms724608(v=vs.85))

#### <a name="example"></a>Esempio

Di seguito è riportato un esempio di mapping del set di proprietà:

[!code-cpp[NVC_OLEDB_Provider#3](../../data/oledb/codesnippet/cpp/begin-propset-map_1.h)]

### <a name="chain_property_set"></a><a name="chain_property_set"></a> CHAIN_PROPERTY_SET

Questa macro concatena i gruppi di proprietà.

#### <a name="syntax"></a>Sintassi

```cpp
CHAIN_PROPERTY_SET(ChainClass)
```

#### <a name="parameters"></a>Parametri

*ChainClass*<br/>
in Nome della classe per cui concatenare le proprietà. Si tratta di una classe generata dalla creazione guidata progetto ATL che contiene già una mappa, ad esempio una sessione, un comando o una classe di oggetti origine dati.

#### <a name="remarks"></a>Osservazioni

È possibile concatenare un set di proprietà da un'altra classe alla propria classe, quindi accedere alle proprietà direttamente dalla classe.

> [!CAUTION]
> Usare questa macro con moderazione. Un utilizzo non corretto può causare l'interruzione del OLE DB test di conformità da parte di un consumer.

### <a name="end_property_set"></a><a name="end_property_set"></a> END_PROPERTY_SET

Contrassegna la fine di un set di proprietà.

#### <a name="syntax"></a>Sintassi

```cpp
END_PROPERTY_SET(guid)
```

#### <a name="parameters"></a>Parametri

*guid*<br/>
in GUID della proprietà.

#### <a name="example"></a>Esempio

Vedere [BEGIN_PROPSET_MAP](#begin_propset_map).

### <a name="end_propset_map"></a><a name="end_propset_map"></a> END_PROPSET_MAP

Contrassegna la fine delle voci della mappa del set di proprietà.

#### <a name="syntax"></a>Sintassi

```cpp
END_PROPSET_MAP()
```

#### <a name="example"></a>Esempio

Vedere [BEGIN_PROPSET_MAP](#begin_propset_map).

### <a name="property_info_entry"></a><a name="property_info_entry"></a> PROPERTY_INFO_ENTRY

Rappresenta una proprietà specifica in un insieme di proprietà.

#### <a name="syntax"></a>Sintassi

```cpp
PROPERTY_INFO_ENTRY(dwPropID)
```

#### <a name="parameters"></a>Parametri

*dwPropID*<br/>
[in] Un valore [DBPROPID](/previous-versions/windows/desktop/ms723882(v=vs.85)) che può essere usato unitamente all'insieme di proprietà GUID per identificare una proprietà.

#### <a name="remarks"></a>Osservazioni

La macro imposta il valore della proprietà di tipo `DWORD` su un valore predefinito definito in ATLDB. H. Per impostare la proprietà su un valore di propria scelta, usare [PROPERTY_INFO_ENTRY_VALUE](#property_info_entry_value). Per impostare `VARTYPE` contemporaneamente e [DBPROPFLAGS](/previous-versions/windows/desktop/ms724342(v=vs.85)) per la proprietà, utilizzare [PROPERTY_INFO_ENTRY_EX](#property_info_entry_ex).

#### <a name="example"></a>Esempio

Vedere [BEGIN_PROPSET_MAP](#begin_propset_map).

### <a name="property_info_entry_ex"></a><a name="property_info_entry_ex"></a> PROPERTY_INFO_ENTRY_EX

Rappresenta una proprietà specifica in un insieme di proprietà.

#### <a name="syntax"></a>Sintassi

```cpp
PROPERTY_INFO_ENTRY_EX(dwPropID, vt, dwFlags, value, options)
```

#### <a name="parameters"></a>Parametri

*dwPropID*<br/>
[in] Un valore [DBPROPID](/previous-versions/windows/desktop/ms723882(v=vs.85)) che può essere usato unitamente all'insieme di proprietà GUID per identificare una proprietà.

*vt*<br/>
[in] Il `VARTYPE` di questa voce di proprietà. (Definito in Wtypes. h)

*dwFlags*<br/>
[in] Un valore [DBPROPFLAGS](/previous-versions/windows/desktop/ms724342(v=vs.85)) che descrive la voce di proprietà.

*value*<br/>
[in] Il valore della proprietà di tipo `DWORD`.

*options*<br/>
DBPROPOPTIONS_REQUIRED o DBPROPOPTIONS_SETIFCHEAP. In genere, non è necessario che un provider imposti le *Opzioni* perché è impostato dal consumer.

#### <a name="remarks"></a>Osservazioni

Con questa macro è possibile specificare direttamente il valore della proprietà di tipo `DWORD` nonché le opzioni e i flag. Per impostare semplicemente una proprietà sul valore predefinito indicato in ATLDB.H, usare [PROPERTY_INFO_ENTRY](#property_info_entry). Per impostare una proprietà su un valore a scelta, senza impostare opzioni o flag, usare [PROPERTY_INFO_ENTRY_VALUE](#property_info_entry_value).

#### <a name="example"></a>Esempio

Vedere [BEGIN_PROPSET_MAP](#begin_propset_map).

### <a name="property_info_entry_value"></a><a name="property_info_entry_value"></a> PROPERTY_INFO_ENTRY_VALUE

Rappresenta una proprietà specifica in un insieme di proprietà.

#### <a name="syntax"></a>Sintassi

```cpp
PROPERTY_INFO_ENTRY_VALUE(dwPropID, value)
```

#### <a name="parameters"></a>Parametri

*dwPropID*<br/>
[in] Un valore [DBPROPID](/previous-versions/windows/desktop/ms723882(v=vs.85)) che può essere usato unitamente all'insieme di proprietà GUID per identificare una proprietà.

*value*<br/>
[in] Il valore della proprietà di tipo `DWORD`.

#### <a name="remarks"></a>Osservazioni

Con questa macro è possibile specificare direttamente il valore della proprietà di tipo `DWORD` . Per impostare la proprietà su un valore predefinito definito in ATLDB. H, utilizzare [PROPERTY_INFO_ENTRY](#property_info_entry). Per impostare il valore, i flag e le opzioni per la proprietà, utilizzare [PROPERTY_INFO_ENTRY_EX](#property_info_entry_ex).

#### <a name="example"></a>Esempio

Vedere [BEGIN_PROPSET_MAP](#begin_propset_map).

### <a name="begin_provider_column_map"></a><a name="begin_provider_column_map"></a> BEGIN_PROVIDER_COLUMN_MAP

Contrassegna l'inizio delle voci della mappa delle colonne del provider.

#### <a name="syntax"></a>Sintassi

```cpp
BEGIN_PROVIDER_COLUMN_MAP(theClass)
```

#### <a name="parameters"></a>Parametri

*theClass*<br/>
in Nome della classe a cui appartiene la mappa.

#### <a name="example"></a>Esempio

Di seguito è riportato un esempio di mappa delle colonne del provider:

[!code-cpp[NVC_OLEDB_Provider#4](../../data/oledb/codesnippet/cpp/begin-provider-column-map_1.h)]

### <a name="end_provider_column_map"></a><a name="end_provider_column_map"></a> END_PROVIDER_COLUMN_MAP

Contrassegna la fine delle voci della mappa delle colonne del provider.

#### <a name="syntax"></a>Sintassi

```cpp
END_PROVIDER_COLUMN_MAP()
```

#### <a name="example"></a>Esempio

Vedere [BEGIN_PROVIDER_COLUMN_MAP](#begin_provider_column_map).

### <a name="provider_column_entry"></a><a name="provider_column_entry"></a> PROVIDER_COLUMN_ENTRY

Rappresenta una colonna specifica supportata dal provider.

#### <a name="syntax"></a>Sintassi

```cpp
PROVIDER_COLUMN_ENTRY (name, ordinal, member)
```

#### <a name="parameters"></a>Parametri

*nome*<br/>
in Nome della colonna.

*ordinale*<br/>
[in] Numero di colonna. A meno che la colonna non sia una colonna di segnalibri, il numero di colonna non deve essere 0.

*membro*<br/>
in Variabile membro in `dataClass` corrispondente alla colonna.

### <a name="provider_column_entry_fixed"></a><a name="provider_column_entry_fixed"></a> PROVIDER_COLUMN_ENTRY_FIXED

Rappresenta una colonna specifica supportata dal provider.

#### <a name="syntax"></a>Sintassi

```cpp
PROVIDER_COLUMN_ENTRY_FIXED(name, ordinal, dbtype, member)
```

#### <a name="parameters"></a>Parametri

*nome*<br/>
in Nome della colonna.

*ordinale*<br/>
[in] Numero di colonna. A meno che la colonna non sia una colonna di segnalibri, il numero di colonna non deve essere 0.

*DbType*<br/>
in Tipo di dati in [DbType](/previous-versions/windows/desktop/ms711251(v=vs.85)).

*membro*<br/>
in Variabile membro in `dataClass` che archivia i dati.

#### <a name="remarks"></a>Osservazioni

Consente di specificare il tipo di dati della colonna.

#### <a name="example"></a>Esempio

Vedere [BEGIN_PROVIDER_COLUMN_MAP](#begin_provider_column_map).

### <a name="provider_column_entry_gn"></a><a name="provider_column_entry_gn"></a> PROVIDER_COLUMN_ENTRY_GN

Rappresenta una colonna specifica supportata dal provider.

#### <a name="syntax"></a>Sintassi

```cpp
PROVIDER_COLUMN_ENTRY_GN (name, ordinal, flags, colSize, dbtype, precision, scale, guid)
```

#### <a name="parameters"></a>Parametri

*nome*<br/>
in Nome della colonna.

*ordinale*<br/>
[in] Numero di colonna. A meno che la colonna non sia una colonna di segnalibri, il numero di colonna non deve essere 0.

*flags*<br/>
in Specifica la modalità di restituzione dei dati. Vedere la `dwFlags` Descrizione in [strutture DBBINDING](/previous-versions/windows/desktop/ms716845(v=vs.85)).

*colSize*<br/>
in Dimensioni della colonna.

*DbType*<br/>
in Indica il tipo di dati del valore. Vedere la `wType` Descrizione in [strutture DBBINDING](/previous-versions/windows/desktop/ms716845(v=vs.85)).

*precisione*<br/>
in Indica la precisione da usare quando si recuperano dati se *DbType* è DBTYPE_NUMERIC o DBTYPE_DECIMAL. Vedere la `bPrecision` Descrizione in [strutture DBBINDING](/previous-versions/windows/desktop/ms716845(v=vs.85)).

*scale*<br/>
in Indica la scala da utilizzare quando si recuperano dati se dbType è DBTYPE_NUMERIC o DBTYPE_DECIMAL. Vedere la `bScale` Descrizione in [strutture DBBINDING](/previous-versions/windows/desktop/ms716845(v=vs.85)).

*guid*<br/>
GUID del set di righe dello schema. Per un elenco di set di righe dello schema e dei relativi GUID, vedere [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) nella documentazione di *riferimento per programmatori OLE DB* .

#### <a name="remarks"></a>Osservazioni

Consente di specificare le dimensioni, il tipo di dati, la precisione, la scala e il GUID del set di righe dello schema della colonna.

### <a name="provider_column_entry_length"></a><a name="provider_column_entry_length"></a> PROVIDER_COLUMN_ENTRY_LENGTH

Rappresenta una colonna specifica supportata dal provider.

#### <a name="syntax"></a>Sintassi

```cpp
PROVIDER_COLUMN_ENTRY_LENGTH(name, ordinal, size, member)
```

#### <a name="parameters"></a>Parametri

*nome*<br/>
in Nome della colonna.

*ordinale*<br/>
[in] Numero di colonna. A meno che la colonna non sia una colonna di segnalibri, il numero di colonna non deve essere 0.

*size*<br/>
in Dimensione della colonna in byte.

*membro*<br/>
in Variabile membro in `dataClass` che archivia i dati della colonna.

#### <a name="remarks"></a>Osservazioni

Consente di specificare le dimensioni della colonna.

#### <a name="example"></a>Esempio

Vedere [BEGIN_PROVIDER_COLUMN_MAP](#begin_provider_column_map).

### <a name="provider_column_entry_str"></a><a name="provider_column_entry_str"></a> PROVIDER_COLUMN_ENTRY_STR

Rappresenta una colonna specifica supportata dal provider.

#### <a name="syntax"></a>Sintassi

```cpp
PROVIDER_COLUMN_ENTRY_STR(name, ordinal, member)
```

#### <a name="parameters"></a>Parametri

*nome*<br/>
in Nome della colonna.

*ordinale*<br/>
[in] Numero di colonna. A meno che la colonna non sia una colonna di segnalibri, il numero di colonna non deve essere 0.

*membro*<br/>
in Variabile membro nella classe di dati che archivia i dati.

#### <a name="remarks"></a>Osservazioni

Utilizzare questa macro quando si presuppone che i dati della colonna siano [DBTYPE_STR](/previous-versions/windows/desktop/ms711251(v=vs.85)).

#### <a name="example"></a>Esempio

Vedere [BEGIN_PROVIDER_COLUMN_MAP](#begin_provider_column_map).

### <a name="provider_column_entry_type_length"></a><a name="provider_column_entry_type_length"></a> PROVIDER_COLUMN_ENTRY_TYPE_LENGTH

Rappresenta una colonna specifica supportata dal provider.

#### <a name="syntax"></a>Sintassi

```cpp
PROVIDER_COLUMN_ENTRY_TYPE_LENGTH(name, ordinal, dbtype, size, member)
```

#### <a name="parameters"></a>Parametri

*nome*<br/>
in Nome della colonna.

*ordinale*<br/>
[in] Numero di colonna. A meno che la colonna non sia una colonna di segnalibri, il numero di colonna non deve essere 0.

*DbType*<br/>
in Tipo di dati in [DbType](/previous-versions/windows/desktop/ms711251(v=vs.85)).

*size*<br/>
in Dimensione della colonna in byte.

*membro*<br/>
in Variabile membro nella classe di dati che archivia i dati.

#### <a name="remarks"></a>Osservazioni

Analogo a [PROVIDER_COLUMN_ENTRY_LENGTH](#provider_column_entry_length) ma consente inoltre di specificare il tipo di dati della colonna e le dimensioni.

### <a name="provider_column_entry_wstr"></a><a name="provider_column_entry_wstr"></a> PROVIDER_COLUMN_ENTRY_WSTR

Rappresenta una colonna specifica supportata dal provider.

#### <a name="syntax"></a>Sintassi

```cpp
PROVIDER_COLUMN_ENTRY_WSTR(name, ordinal, member)
```

#### <a name="parameters"></a>Parametri

*nome*<br/>
in Nome della colonna.

*ordinale*<br/>
[in] Numero di colonna. A meno che la colonna non sia una colonna di segnalibri, il numero di colonna non deve essere 0.

*membro*<br/>
in Variabile membro nella classe di dati che archivia i dati.

#### <a name="remarks"></a>Osservazioni

Utilizzare questa macro quando i dati della colonna sono stringhe di caratteri Unicode con terminazione null, [DBTYPE_WSTR](/previous-versions/windows/desktop/ms711251(v=vs.85)).

### <a name="begin_schema_map"></a><a name="begin_schema_map"></a> BEGIN_SCHEMA_MAP

Indica l'inizio di una mappa dello schema.

#### <a name="syntax"></a>Sintassi

```cpp
BEGIN_SCHEMA_MAP(SchemaClass);
```

#### <a name="parameters"></a>Parametri

*SchemaClass*<br/>
Classe che contiene la mappa. Si tratta in genere della classe Session.

#### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sui set di righe dello schema, vedere [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) nel Windows SDK.

### <a name="end_schema_map"></a><a name="end_schema_map"></a> END_SCHEMA_MAP

Indica la fine della mappa dello schema.

#### <a name="syntax"></a>Sintassi

```cpp
END_SCHEMA_MAP()
```

#### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere la [classe IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md).

### <a name="schema_entry"></a><a name="schema_entry"></a> SCHEMA_ENTRY

Associa un GUID a una classe.

#### <a name="syntax"></a>Sintassi

```cpp
SCHEMA_ENTRY(guid,
   rowsetClass);
```

#### <a name="parameters"></a>Parametri

*guid*<br/>
GUID del set di righe dello schema. Per un elenco di set di righe dello schema e dei relativi GUID, vedere [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) nella documentazione di *riferimento per programmatori OLE DB* .

*rowsetClass*<br/>
Classe che verrà creata per rappresentare il set di righe dello schema.

#### <a name="remarks"></a>Osservazioni

[IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md) può quindi eseguire una query sulla mappa per un elenco di GUID oppure può creare un set di righe se viene assegnato un GUID. Il set di righe dello schema `IDBSchemaRowsetImpl` viene creato in modo analogo a una `CRowsetImpl` classe derivata standard, ad eccezione del fatto che deve fornire un `Execute` metodo con la firma seguente:

```cpp
HRESULT Execute (LONG* pcRowsAffected,
    ULONG cRestrictions,
    const VARIANT* rgRestrictions);
```

Questa `Execute` funzione popola i dati del set di righe. La creazione guidata progetto ATL crea, come descritto in [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) in *OLE DB Programmer ' s Reference*, tre set di righe dello schema iniziali nel progetto per ognuno dei tre schemi OLE DB obbligatori:

- DBSCHEMA_TABLES

- DBSCHEMA_COLUMNS

- DBSCHEMA_PROVIDER_TYPES

La procedura guidata aggiunge anche tre voci corrispondenti nella mappa dello schema. Per ulteriori informazioni sull'utilizzo della procedura guidata per la creazione di un provider, vedere [creazione di un provider di modelli OLE DB](../../data/oledb/creating-an-ole-db-provider.md) .

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
[Creazione di un provider di OLE DB](../../data/oledb/creating-an-ole-db-provider.md)<br/>
[Riferimento ai modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-reference.md)<br/>
[Macro per i modelli di provider di OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)
