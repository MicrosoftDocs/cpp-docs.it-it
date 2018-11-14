---
title: Macro e funzioni globali per modelli consumer OLE DB
ms.date: 11/04/2016
f1_keywords:
- vc.templates.ole
- ATL.AtlTraceErrorRecords
- ATL::AtlTraceErrorRecords
- AtlTraceErrorRecords
- BEGIN_ACCESSOR
- BEGIN_ACCESSOR_MAP
- END_ACCESSOR
- END_ACCESSOR_MAP
- BEGIN_COLUMN_MAP
- BLOB_ENTRY
- BLOB_ENTRY_LENGTH
- BLOB_ENTRY_LENGTH_STATUS
- BLOB_ENTRY_STATUS
- BLOB_NAME
- BLOB_NAME_LENGTH
- BLOB_NAME_LENGTH_STATUS
- BLOB_NAME_STATUS
- BOOKMARK_ENTRY
- COLUMN_ENTRY
- COLUMN_ENTRY_EX
- COLUMN_ENTRY_LENGTH
- COLUMN_ENTRY_LENGTH_STATUS
- COLUMN_ENTRY_PS
- COLUMN_ENTRY_PS_LENGTH
- COLUMN_ENTRY_PS_LENGTH_STATUS
- COLUMN_ENTRY_PS_STATUS
- COLUMN_ENTRY_STATUS
- COLUMN_ENTRY_TYPE
- COLUMN_ENTRY_TYPE_SIZE
- COLUMN_NAME
- COLUMN_NAME_EX
- COLUMN_NAME_LENGTH
- COLUMN_NAME_LENGTH_STATUS
- COLUMN_NAME_PS
- COLUMN_NAME_PS_LENGTH
- COLUMN_NAME_PS_LENGTH_STATUS
- COLUMN_NAME_PS_STATUS
- COLUMN_NAME_STATUS
- COLUMN_NAME_TYPE
- COLUMN_NAME_TYPE_PS
- COLUMN_NAME_TYPE_SIZE
- COLUMN_NAME_TYPE_STATUS
- END_COLUMN_MAP
- DEFINE_COMMAND
- DEFINE_COMMAND_EX
- BEGIN_PARAM_MAP
- END_PARAM_MAP
- SET_PARAM_TYPE
helpviewer_keywords:
- OLE DB consumer templates, macros
- macros, OLE DB consumer template
- AtlTraceErrorRecords function
- BEGIN_ACCESSOR macro, syntax
- BEGIN_ACCESSOR macro
- BEGIN_ACCESSOR_MAP macro
- END_ACCESSOR macro
- END_ACCESSOR_MAP macro
- BEGIN_COLUMN_MAP macro
- BLOB_ENTRY macro
- BLOB_ENTRY_LENGTH macro
- BLOB_ENTRY_LENGTH_STATUS macro
- BLOB_ENTRY_STATUS macro
- BLOB_NAME macro
- BLOB_NAME_LENGTH macro
- BLOB_NAME_LENGTH_STATUS macro
- BLOB_NAME_STATUS macro
- BOOKMARK_ENTRY macro
- COLUMN_ENTRY macro
- COLUMN_ENTRY_EX macro
- COLUMN_ENTRY_LENGTH macro
- COLUMN_ENTRY_LENGTH_STATUS macro
- COLUMN_ENTRY_PS macro
- COLUMN_ENTRY_PS_LENGTH macro
- COLUMN_ENTRY_PS_LENGTH_STATUS macro
- COLUMN_ENTRY_PS_STATUS macro
- COLUMN_ENTRY_STATUS macro
- COLUMN_ENTRY_TYPE macro
- COLUMN_ENTRY_TYPE_SIZE macro
- COLUMN_NAME macro
- COLUMN_NAME_EX macro
- COLUMN_NAME_LENGTH macro
- COLUMN_NAME_LENGTH_STATUS macro
- COLUMN_NAME_PS macro
- COLUMN_NAME_PS_LENGTH macro
- COLUMN_NAME_PS_LENGTH_STATUS macro
- COLUMN_NAME_PS_STATUS macro
- COLUMN_NAME_STATUS macro
- COLUMN_NAME_TYPE macro
- COLUMN_NAME_TYPE_PS macro
- COLUMN_NAME_TYPE_SIZE macro
- COLUMN_NAME_TYPE_STATUS macro
- END_COLUMN_MAP macro
- DEFINE_COMMAND macro
- DEFINE_COMMAND_EX macro
- BEGIN_PARAM_MAP macro
- END_PARAM_MAP macro
- SET_PARAM_TYPE macro
ms.assetid: 8765eb7b-32dd-407c-bacf-8890ef959837
ms.openlocfilehash: 4254c2637c4ed937a3196310ffa83c48504911af
ms.sourcegitcommit: c40469825b6101baac87d43e5f4aed6df6b078f5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2018
ms.locfileid: "51557115"
---
# <a name="macros-and-global-functions-for-ole-db-consumer-templates"></a>Macro e funzioni globali per modelli consumer OLE DB

I modelli Consumer OLE DB includono le seguenti macro e funzioni globali:

## <a name="global-functions"></a>Funzioni globali

|||
|-|-|
|[AtlTraceErrorRecords](#atltraceerrorrecords)|Trasferisce le informazioni di Record errori OLE DB per il dispositivo di dump se viene restituito un errore.|

## <a name="accessor-map-macros"></a>Macro della mappa della funzione di accesso

|||
|-|-|
|[BEGIN_ACCESSOR](#begin_accessor)|Contrassegna l'inizio di una voce della funzione di accesso.|
|[BEGIN_ACCESSOR_MAP](#begin_accessor_map)|Contrassegna l'inizio delle voci della mappa delle funzioni di accesso.|
|[END_ACCESSOR](#end_accessor)|Contrassegna la fine di una voce della funzione di accesso.|
|[END_ACCESSOR_MAP](#end_accessor_map)|Contrassegna la fine delle voci della mappa della funzione di accesso.|

## <a name="column-map-macros"></a>Macro della mappa colonna

|||
|-|-|
|[BEGIN_COLUMN_MAP](#begin_column_map)|Contrassegna l'inizio delle voci della mappa colonna nella classe di record utente.|
|[BLOB_ENTRY](#blob_entry)|Utilizzato per associare un oggetto binario di grandi dimensioni (BLOB).|
|[BLOB_ENTRY_LENGTH](#blob_entry_length)|Restituisce la lunghezza della colonna di dati BLOB.|
|[BLOB_ENTRY_LENGTH_STATUS](#blob_entry_length_status)|Restituisce la lunghezza e lo stato della colonna di dati BLOB.|
|[BLOB_ENTRY_STATUS](#blob_entry_status)|Segnala lo stato della colonna di dati BLOB.|
|[BLOB_NAME](#blob_name)|Utilizzato per associare un oggetto binario di grandi dimensioni in base al nome di colonna.|
|[BLOB_NAME_LENGTH](#blob_name_length)|Restituisce la lunghezza della colonna di dati BLOB.|
|[BLOB_NAME_LENGTH_STATUS](#blob_name_length_status)|Restituisce la lunghezza e lo stato della colonna di dati BLOB.|
|[BLOB_NAME_STATUS](#blob_name_status)|Segnala lo stato della colonna di dati BLOB.|
|[BOOKMARK_ENTRY](#bookmark_entry)|Rappresenta una voce di segnalibri nel set di righe. Una voce segnalibro è un tipo speciale di voce di colonna.|
|[COLUMN_ENTRY](#column_entry)|Rappresenta un'associazione a una colonna specifica nel database.|
|[COLUMN_ENTRY_EX](#column_entry_ex)|Rappresenta un'associazione a una specifica colonna nel database. Supporta *tipo*, *lunghezza*, *precisione*, *scalabilità*, e *stato* parametri.|
|[COLUMN_ENTRY_LENGTH](#column_entry_length)|Rappresenta un'associazione a una specifica colonna nel database. Supporta il *lunghezza* variabile.|
|[COLUMN_ENTRY_LENGTH_STATUS](#column_entry_length_status)|Rappresenta un'associazione a una specifica colonna nel database. Supporta *lo stato* e *lunghezza* parametri.|
|[COLUMN_ENTRY_PS](#column_entry_ps)|Rappresenta un'associazione a una specifica colonna nel database. Supporta *precisione* e *scalabilità* parametri.|
|[COLUMN_ENTRY_PS_LENGTH](#column_entry_ps_length)|Rappresenta un'associazione a una specifica colonna nel database. Supporta il *lunghezza* variabile *precisione* e *scalabilità* parametri.|
|[COLUMN_ENTRY_PS_LENGTH_STATUS](#column_entry_ps_length_status)|Rappresenta un'associazione a una specifica colonna nel database. Supporta *lo stato* e *lunghezza* variabili *precisione* e *scalabilità* parametri.|
|[COLUMN_ENTRY_PS_STATUS](#column_entry_ps_status)|Rappresenta un'associazione a una specifica colonna nel database. Supporta il *lo stato* variabile *precisione* e *scalabilità* parametri.|
|[COLUMN_ENTRY_STATUS](#column_entry_status)|Rappresenta un'associazione a una specifica colonna nel database. Supporta il *stato* variabile.|
|[COLUMN_ENTRY_TYPE](#column_entry_type)|Rappresenta un'associazione a una colonna specifica nel database. Supporta *tipo* parametro.|
|[COLUMN_ENTRY_TYPE_SIZE](#column_entry_type_size)|Rappresenta un'associazione a una specifica colonna nel database. Supporta *tipo* e *dimensioni* parametri.|
|[COLUMN_NAME](#column_name)|Rappresenta un'associazione a una colonna specifica nel database in base al nome.|
|[COLUMN_NAME_EX](#column_name_ex)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica del tipo di dati, dimensioni, precisione, scala, lunghezza di colonna e stato della colonna.|
|[COLUMN_NAME_LENGTH](#column_name_length)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica della lunghezza della colonna.|
|[COLUMN_NAME_LENGTH_STATUS](#column_name_length_status)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica della lunghezza di colonna e lo stato.|
|[COLUMN_NAME_PS](#column_name_ps)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica di precisione e scala.|
|[COLUMN_NAME_PS_LENGTH](#column_name_ps_length)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica di lunghezza e precisione, scala e colonna.|
|[COLUMN_NAME_PS_LENGTH_STATUS](#column_name_ps_length_status)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica di precisione, scala, lunghezza di colonna e stato della colonna.|
|[COLUMN_NAME_PS_STATUS](#column_name_ps_status)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica di precisione, scala e colonna stato.|
|[COLUMN_NAME_STATUS](#column_name_status)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica di stato della colonna.|
|[COLUMN_NAME_TYPE](#column_name_type)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica del tipo di dati.|
|[COLUMN_NAME_TYPE_PS](#column_name_type_ps)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica del tipo di dati, precisione e scala.|
|[COLUMN_NAME_TYPE_SIZE](#column_name_type_size)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica del tipo di dati e dimensioni.|
|[COLUMN_NAME_TYPE_STATUS](#column_name_type_status)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica dello stato di tipo e alla colonna di dati.|
|[END_COLUMN_MAP](#end_column_map)|Contrassegna la fine delle voci della mappa di colonna.|

## <a name="command-macros"></a>Macro di comando

|||
|-|-|
|[DEFINE_COMMAND](#define_command)|Specifica il comando che verrà utilizzato per creare il set di righe quando si usa la [CCommand](../../data/oledb/ccommand-class.md) classe. Accetta solo i tipi di stringa che corrisponde al tipo di applicazione specificata (ANSI o Unicode). È consigliabile usare [DEFINE_COMMAND_EX](../../data/oledb/define-command-ex.md) anziché DEFINE_COMMAND.|
|[DEFINE_COMMAND_EX](#define_command_ex)|Specifica il comando che verrà utilizzato per creare il set di righe quando si usa la [CCommand](../../data/oledb/ccommand-class.md) classe. Supporta le applicazioni ANSI e Unicode.|

## <a name="parameter-map-macros"></a>Macro della mappa di parametro

|||
|-|-|
|[BEGIN_PARAM_MAP](#begin_param_map)|Contrassegna l'inizio delle voci della mappa parametro nella classe di record utente.|
|[END_PARAM_MAP](#end_param_map)|Contrassegna la fine delle voci della mappa di parametro.|
|[SET_PARAM_TYPE](#set_param_type)|Specifica le macro COLUMN_ENTRY che seguono il set_param_type (macro) come input, output o input/output.|

### <a name="atltraceerrorrecords"></a> AtlTraceErrorRecords

Trasferisce le informazioni di Record errori OLE DB per il dispositivo di dump se viene restituito un errore.

#### <a name="syntax"></a>Sintassi

```cpp
inline void AtlTraceErrorRecords(HRESULT hrErr = S_OK);
```

#### <a name="parameters"></a>Parametri

*hErr*<br/>
[in] HRESULT restituito da una funzione membro di modello del Consumer OLE DB.

#### <a name="remarks"></a>Note

Se *hErr* S_OK, non è `AtlTraceErrorRecords` trasferisce le informazioni di Record errori OLE DB per il dispositivo di dump (il **Debug** scheda della finestra di Output o un file). Le informazioni del Record di errore, che vengano ottenute dal provider, includono il numero di riga, origine, descrizione, file della Guida, contesto e GUID per ogni voce di record di errore. `AtlTraceErrorRecords` Queste informazioni solo nelle build di debug di dump. Nelle build di rilascio, è uno stub vuoto ottimizzato out.

#### <a name="see-also"></a>Vedere anche

[Classe CDBErrorInfo](../../data/oledb/cdberrorinfo-class.md)

### <a name="begin_accessor"></a> BEGIN_ACCESSOR

Contrassegna l'inizio di una voce della funzione di accesso.

#### <a name="syntax"></a>Sintassi

```cpp
BEGIN_ACCESSOR(num, bAuto)
```

#### <a name="parameters"></a>Parametri

*num*<br/>
[in] Il numero di offset uguale a zero per la funzione di accesso in questa mappa della funzione di accesso.

*bAuto*<br/>
[in] Specifica se la funzione di accesso è una funzione di accesso automatica o una funzione di accesso manuali. Se **true**, la funzione di accesso viene automaticamente; se **false**, la funzione di accesso è manuale. Una funzione di accesso automatica significa che i dati vengono recuperati automaticamente nelle operazioni di spostamento.

#### <a name="remarks"></a>Note

Nel caso di più funzioni di accesso su un set di righe, è necessario specificare BEGIN_ACCESSOR_MAP e usare la macro BEGIN_ACCESSOR per ogni singola funzione di accesso. La macro BEGIN_ACCESSOR viene completata con la macro END_ACCESSOR. La macro BEGIN_ACCESSOR_MAP viene completata con end_accessor_map (macro).

#### <a name="example"></a>Esempio

Visualizzare [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md).

### <a name="begin_accessor_map"></a> BEGIN_ACCESSOR_MAP

Contrassegna l'inizio delle voci della mappa delle funzioni di accesso.

#### <a name="syntax"></a>Sintassi

```cpp
BEGIN_ACCESSOR_MAP(x, num)
```

#### <a name="parameters"></a>Parametri

*x*<br/>
[in] Nome della classe di record utente.

*num*<br/>
[in] Il numero delle funzioni di accesso in questa mappa.

#### <a name="remarks"></a>Note

Nel caso di più funzioni di accesso su un set di righe, è necessario specificare BEGIN_ACCESSOR_MAP all'inizio e usare la macro BEGIN_ACCESSOR per ogni singola funzione di accesso. La macro BEGIN_ACCESSOR viene completata con la macro END_ACCESSOR. La mappa della funzione di accesso è stata completata con end_accessor_map (macro).

In presenza di una sola funzione di accesso nel record utente, usare la macro [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md).

#### <a name="example"></a>Esempio

```cpp
class CArtistsAccessor
{
public:
// Data Elements
   TCHAR m_szFirstName[21];
   TCHAR m_szLastName[31];
   short m_nAge;

// Output binding map
BEGIN_ACCESSOR_MAP(CArtistsAccessor, 2)
   BEGIN_ACCESSOR(0, true)
      COLUMN_ENTRY(1, m_szFirstName)
      COLUMN_ENTRY(2, m_szLastName)
   END_ACCESSOR()
   BEGIN_ACCESSOR(1, false) // Not an auto accessor
      COLUMN_ENTRY(3, m_nAge)
   END_ACCESSOR()
END_ACCESSOR_MAP()

   HRESULT OpenDataSource()
   {
      CDataSource _db;
      _db.Open();
      return m_session.Open(_db);
   }

   void CloseDataSource()
   {
      m_session.Close();
   }

   CSession m_session;

   DEFINE_COMMAND_EX(CArtistsAccessor, L" \
   SELECT \
      FirstName, \
      LastName, \
      Age \
      FROM Artists")
};
```

### <a name="end_accessor"></a> END_ACCESSOR

Contrassegna la fine di una voce della funzione di accesso.

#### <a name="syntax"></a>Sintassi

```cpp
END_ACCESSOR()
```

#### <a name="remarks"></a>Note

Per più funzioni di accesso su un set di righe, è necessario specificare BEGIN_ACCESSOR_MAP e usare la macro BEGIN_ACCESSOR per ogni singola funzione di accesso. La macro BEGIN_ACCESSOR viene completata con la macro END_ACCESSOR. La macro BEGIN_ACCESSOR_MAP viene completata con end_accessor_map (macro).

#### <a name="example"></a>Esempio

Visualizzare [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md).

### <a name="end_accessor_map"></a> END_ACCESSOR_MAP

Contrassegna la fine delle voci della mappa della funzione di accesso.

#### <a name="syntax"></a>Sintassi

```cpp
END_ACCESSOR_MAP()
```

#### <a name="remarks"></a>Note

Per più funzioni di accesso su un set di righe, è necessario specificare BEGIN_ACCESSOR_MAP e usare la macro BEGIN_ACCESSOR per ogni singola funzione di accesso. La macro BEGIN_ACCESSOR viene completata con la macro END_ACCESSOR. La macro BEGIN_ACCESSOR_MAP viene completata con end_accessor_map (macro).

#### <a name="example"></a>Esempio

Visualizzare [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md).

### <a name="begin_column_map"></a> BEGIN_COLUMN_MAP

Segna l'inizio di una voce della mappa delle colonne.

#### <a name="syntax"></a>Sintassi

```cpp
BEGIN_COLUMN_MAP(x)
```

#### <a name="parameters"></a>Parametri

*x*<br/>
[in] Il nome della classe di record utente derivata da `CAccessor`.

#### <a name="remarks"></a>Note

Questa macro viene usata nel caso di un'unica funzione di accesso su un set di righe. Se ci sono più funzioni di accesso su un set di righe, usare [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md).

Il BEGIN_COLUMN_MAP (macro) è stata completata con il END_COLUMN_MAP (macro). Questa macro viene usata quando è richiesta una sola funzione di accesso nel record utente.

Le colonne corrispondono ai campi nel set di righe che si desidera associare.

#### <a name="example"></a>Esempio

Ecco un esempio di mappa delle colonne e dei parametri:

<!--[!CODE [NVC_OLEDB_Consumer#16](../codesnippet/vs_snippets_cpp/nvc_oledb_consumer#16)]  -->

### <a name="blob_entry"></a> BLOB_ENTRY

Utilizzato con BEGIN_COLUMN_MAP ed END_COLUMN_MAP per associare un oggetto binario di grandi dimensioni ([BLOB](https://docs.microsoft.com/previous-versions/windows/desktop/ms711511(v=vs.85))).

#### <a name="syntax"></a>Sintassi

```cpp
BLOB_ENTRY(nOrdinal, IID, flags, data)
```

#### <a name="parameters"></a>Parametri

*nOrdinal*<br/>
[in] Numero di colonna.

*IID*<br/>
[in] Interfaccia GUID, ad esempio `IDD_ISequentialStream`, usata per recuperare il BLOB.

*flags*<br/>
[in] Flag di modalità di archiviazione come definito dal modello di archivio strutturato OLE (ad esempio, `STGM_READ`).

*data*<br/>
[in] Membro dati corrispondente nel record utente.

#### <a name="example"></a>Esempio

Visualizzare [modo in cui è possibile recuperare un BLOB?](../../data/oledb/retrieving-a-blob.md).

### <a name="blob_entry_length"></a> BLOB_ENTRY_LENGTH

Utilizzato con BEGIN_COLUMN_MAP ed END_COLUMN_MAP per associare un oggetto binario di grandi dimensioni ([BLOB](https://docs.microsoft.com/previous-versions/windows/desktop/ms711511(v=vs.85))). Simile a [BLOB_ENTRY](../../data/oledb/blob-entry.md), ad eccezione del fatto che questa macro ottiene anche la lunghezza in byte della colonna BLOB.

#### <a name="syntax"></a>Sintassi

```cpp
BLOB_ENTRY_LENGTH(nOrdinal, IID, flags, data, length)
```

#### <a name="parameters"></a>Parametri

*nOrdinal*<br/>
[in] Numero di colonna.

*IID*<br/>
[in] Interfaccia GUID, ad esempio `IDD_ISequentialStream`, usata per recuperare il BLOB.

*flags*<br/>
[in] Flag di modalità di archiviazione come definito dal modello di archivio strutturato OLE (ad esempio, `STGM_READ`).

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*length*<br/>
[out] La lunghezza (effettiva) in byte della colonna BLOB.

#### <a name="example"></a>Esempio

Visualizzare [modo in cui è possibile recuperare un BLOB?](../../data/oledb/retrieving-a-blob.md).

### <a name="blob_entry_length_status"></a> BLOB_ENTRY_LENGTH_STATUS

Utilizzato con BEGIN_COLUMN_MAP ed END_COLUMN_MAP per associare un oggetto binario di grandi dimensioni ([BLOB](https://docs.microsoft.com/previous-versions/windows/desktop/ms711511(v=vs.85))). Simile a [BLOB_ENTRY](../../data/oledb/blob-entry.md), ad eccezione del fatto che questa macro ottiene anche la lunghezza e stato della colonna BLOB.

#### <a name="syntax"></a>Sintassi

```cpp
BLOB_ENTRY_LENGTH_STATUS(
    nOrdinal,
    IID,
    flags,
    data,
    length,
    status )
```

#### <a name="parameters"></a>Parametri

*nOrdinal*<br/>
[in] Numero di colonna.

*IID*<br/>
[in] Interfaccia GUID, ad esempio `IDD_ISequentialStream`, usata per recuperare il BLOB.

*flags*<br/>
[in] Flag di modalità di archiviazione come definito dal modello di archivio strutturato OLE (ad esempio, `STGM_READ`).

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*length*<br/>
[out] La lunghezza (effettiva) in byte della colonna BLOB.

*status*<br/>
[out] Lo stato della colonna di dati BLOB.

#### <a name="example"></a>Esempio

Visualizzare [modo in cui è possibile recuperare un BLOB?](../../data/oledb/retrieving-a-blob.md).

### <a name="blob_entry_status"></a> BLOB_ENTRY_STATUS

Utilizzato con BEGIN_COLUMN_MAP o BEGIN_ACCESSOR_MAP per associare un oggetto binario di grandi dimensioni ([BLOB](https://docs.microsoft.com/previous-versions/windows/desktop/ms711511(v=vs.85))). Simile a [BLOB_ENTRY](../../data/oledb/blob-entry.md), ad eccezione del fatto che questa macro ottiene anche lo stato della colonna BLOB.

#### <a name="syntax"></a>Sintassi

```cpp
BLOB_ENTRY_STATUS(nOrdinal, IID, flags, data, status)
```

#### <a name="parameters"></a>Parametri

*nOrdinal*<br/>
[in] Numero di colonna.

*IID*<br/>
[in] Interfaccia GUID, ad esempio `IDD_ISequentialStream`, usata per recuperare il BLOB.

*flags*<br/>
[in] Flag di modalità di archiviazione come definito dal modello di archivio strutturato OLE (ad esempio, `STGM_READ`).

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*status*<br/>
[out] Lo stato del campo BLOB.

#### <a name="example"></a>Esempio

Visualizzare [modo in cui è possibile recuperare un BLOB?](../../data/oledb/retrieving-a-blob.md).

### <a name="blob_name"></a> BLOB_NAME

Utilizzato con BEGIN_COLUMN_MAP ed END_COLUMN_MAP per associare un oggetto binario di grandi dimensioni ([BLOB](https://docs.microsoft.com/previous-versions/windows/desktop/ms711511(v=vs.85))). Simile a [BLOB_ENTRY](../../data/oledb/blob-entry.md), ad eccezione del fatto che questa macro accetta un nome di colonna anziché un numero di colonna.

#### <a name="syntax"></a>Sintassi

```cpp
BLOB_NAME(pszName, IID, flags, data )
```

#### <a name="parameters"></a>Parametri

*pszName*<br/>
[in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile farlo inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.

*IID*<br/>
[in] Interfaccia GUID, ad esempio `IDD_ISequentialStream`, usata per recuperare il BLOB.

*flags*<br/>
[in] Flag di modalità di archiviazione come definito dal modello di archivio strutturato OLE (ad esempio, `STGM_READ`).

*data*<br/>
[in] Membro dati corrispondente nel record utente.

#### <a name="example"></a>Esempio

Visualizzare [modo in cui è possibile recuperare un BLOB?](../../data/oledb/retrieving-a-blob.md).

### <a name="blob_name_length"></a> BLOB_NAME_LENGTH

Utilizzato con BEGIN_COLUMN_MAP ed END_COLUMN_MAP per associare un oggetto binario di grandi dimensioni ([BLOB](https://docs.microsoft.com/previous-versions/windows/desktop/ms711511(v=vs.85))). Simile a [BLOB_NAME](../../data/oledb/blob-name.md), ad eccezione del fatto che questa macro ottiene anche la lunghezza in byte della colonna di dati BLOB.

#### <a name="syntax"></a>Sintassi

```cpp
BLOB_NAME_LENGTH(pszName, IID, flags, data, length )
```

#### <a name="parameters"></a>Parametri

*pszName*<br/>
[in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile farlo inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.

*IID*<br/>
[in] Interfaccia GUID, ad esempio `IDD_ISequentialStream`, usata per recuperare il BLOB.

*flags*<br/>
[in] Flag di modalità di archiviazione come definito dal modello di archivio strutturato OLE (ad esempio, `STGM_READ`).

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*length*<br/>
[out] La lunghezza (effettiva) in byte della colonna BLOB.

### <a name="blob_name_length_status"></a> BLOB_NAME_LENGTH_STATUS

Utilizzato con BEGIN_COLUMN_MAP ed END_COLUMN_MAP per associare un oggetto binario di grandi dimensioni ([BLOB](https://docs.microsoft.com/previous-versions/windows/desktop/ms711511(v=vs.85))). Simile a [BLOB_NAME](../../data/oledb/blob-name.md), ad eccezione del fatto che questa macro ottiene anche la lunghezza e stato della colonna di dati BLOB.

#### <a name="syntax"></a>Sintassi

```cpp
BLOB_NAME_LENGTH_STATUS(pszName, IID, flags, data, length, status )
```

#### <a name="parameters"></a>Parametri

*pszName*<br/>
[in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile farlo inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.

*IID*<br/>
[in] Interfaccia GUID, ad esempio `IDD_ISequentialStream`, usata per recuperare il BLOB.

*flags*<br/>
[in] Flag di modalità di archiviazione come definito dal modello di archivio strutturato OLE (ad esempio, `STGM_READ`).

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*length*<br/>
[out] La lunghezza (effettiva) in byte della colonna BLOB.

*status*<br/>
[out] Lo stato del campo BLOB.

### <a name="blob_name_status"></a> BLOB_NAME_STATUS

Utilizzato con BEGIN_COLUMN_MAP ed END_COLUMN_MAP per associare un oggetto binario di grandi dimensioni ([BLOB](https://docs.microsoft.com/previous-versions/windows/desktop/ms711511(v=vs.85))). Simile a [BLOB_NAME](../../data/oledb/blob-name.md), ad eccezione del fatto che questa macro ottiene anche lo stato della colonna di dati BLOB.

#### <a name="syntax"></a>Sintassi

```cpp
BLOB_NAME_STATUS(pszName, IID, flags, data, status )
```

#### <a name="parameters"></a>Parametri

*pszName*<br/>
[in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile farlo inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.

*IID*<br/>
[in] Interfaccia GUID, ad esempio `IDD_ISequentialStream`, usata per recuperare il BLOB.

*flags*<br/>
[in] Flag di modalità di archiviazione come definito dal modello di archivio strutturato OLE (ad esempio, `STGM_READ`).

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*status*<br/>
[out] Lo stato del campo BLOB.

### <a name="bookmark_entry"></a> BOOKMARK_ENTRY

Associa la colonna del segnalibro.

#### <a name="syntax"></a>Sintassi

```cpp
BOOKMARK_ENTRY(variable)
```

#### <a name="parameters"></a>Parametri

*Variabile*<br/>
[in] La variabile da associare alla colonna del segnalibro.

#### <a name="example"></a>Esempio

```cpp
class CArtistsBookmark
{
public:
// Data Elements
   CBookmark<4> m_bookmark;
   short m_nAge;
   TCHAR m_szFirstName[21];
   TCHAR m_szLastName[31];

// Output binding map
BEGIN_COLUMN_MAP(CArtistsBookmark)
   BOOKMARK_ENTRY(m_bookmark)
   COLUMN_ENTRY(1, m_nAge)
   COLUMN_ENTRY(2, m_szFirstName)
   COLUMN_ENTRY(3, m_szLastName)
END_COLUMN_MAP()

   void GetRowsetProperties(CDBPropSet* pPropSet)
   {
      pPropSet->AddProperty(DBPROP_BOOKMARKS, true);
   }

   HRESULT OpenDataSource()
   {
      CDataSource _db;
      _db.Open();
      return m_session.Open(_db);
   }

   void CloseDataSource()
   {
      m_session.Close();
   }

   CSession m_session;

   DEFINE_COMMAND_EX(CArtistsBookmark, L" \
   SELECT \
      Age, \
      FirstName, \
      LastName \
      FROM Artists")
};
```

#### <a name="see-also"></a>Vedere anche

[Classe CBookmark](../../data/oledb/cbookmark-class.md)<br/>
[DBPROP_BOOKMARKS](https://docs.microsoft.com/previous-versions/windows/desktop/ms709728(v=vs.85))

### <a name="column_entry"></a> COLUMN_ENTRY

Rappresenta un'associazione sul rowset alla colonna specifica nel set di righe.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_ENTRY(nOrdinal, data)
```

#### <a name="parameters"></a>Parametri

Visualizzare [DBBINDING](https://docs.microsoft.com/previous-versions/windows/desktop/ms716845(v=vs.85)) nel *riferimento per programmatori OLE DB*.

*nOrdinal*<br/>
[in] Numero di colonna.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

#### <a name="remarks"></a>Note

COLUMN_ENTRY (macro) viene usato nelle posizioni seguenti:

- Tra i [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) e [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macro.

- Tra i [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) e [END_ACCESSOR](../../data/oledb/end-accessor.md) macro.

- Tra i [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) e [END_PARAM_MAP](../../data/oledb/end-param-map.md) macro.

#### <a name="example"></a>Esempio

Vedere gli esempi negli argomenti macro [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) e [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md).

### <a name="column_entry_ex"></a> COLUMN_ENTRY_EX

Rappresenta un'associazione sul rowset alla colonna specifica nel database.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_ENTRY_EX(nOrdinal, wType, nLength, nPrecision, nScale, data, length, status)
```

#### <a name="parameters"></a>Parametri

Visualizzare [DBBINDING](https://docs.microsoft.com/previous-versions/windows/desktop/ms716845(v=vs.85)) nel *riferimento per programmatori OLE DB*.

*nOrdinal*<br/>
[in] Numero di colonna.

*wType*<br/>
[in] Il tipo di dati.

*nLength*<br/>
[in] Le dimensioni dei dati in byte.

*nPrecision*<br/>
[in] La precisione massima da utilizzare durante il recupero dei dati e *wType* è `DBTYPE_NUMERIC`. In caso contrario, questo parametro viene ignorato.

*nScale*<br/>
[in] Scala da usare durante il recupero dei dati e *wType* viene `DBTYPE_NUMERIC` o `DBTYPE_DECIMAL`.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*length*<br/>
[in] Variabile da associare alla lunghezza della colonna.

*status*<br/>
[in] Variabile da associare allo stato della colonna.

#### <a name="remarks"></a>Note

Column_entry_ex (macro) viene usato nelle posizioni seguenti:

- Tra i [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) e [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macro.

- Tra i [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) e [END_ACCESSOR](../../data/oledb/end-accessor.md) macro.

- Tra i [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) e [END_PARAM_MAP](../../data/oledb/end-param-map.md) macro.

#### <a name="example"></a>Esempio

Visualizzare [BOOKMARK_ENTRY](../../data/oledb/bookmark-entry.md).

### <a name="column_entry_length"></a> COLUMN_ENTRY_LENGTH

Rappresenta un'associazione sul rowset alla colonna specifica nel database.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_ENTRY_LENGTH(nOrdinal, data, length)
```

#### <a name="parameters"></a>Parametri

Visualizzare [DBBINDING](https://docs.microsoft.com/previous-versions/windows/desktop/ms716845(v=vs.85)) nel *riferimento per programmatori OLE DB*.

*nOrdinal*<br/>
[in] Il numero di colonna, a partire da uno. Segnalibro corrisponde alla colonna da zero.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*length*<br/>
[in] Variabile da associare alla lunghezza della colonna.

#### <a name="remarks"></a>Note

Questa macro supporta il *lunghezza* variabile. Viene utilizzata nelle seguenti posizioni:

- Tra i [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) e [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macro.

- Tra i [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) e [END_ACCESSOR](../../data/oledb/end-accessor.md) macro.

- Tra i [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) e [END_PARAM_MAP](../../data/oledb/end-param-map.md) macro.

### <a name="column_entry_length_status"></a> COLUMN_ENTRY_LENGTH_STATUS

Rappresenta un'associazione sul rowset alla colonna specifica nel database.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_ENTRY_LENGTH_STATUS(nOrdinal, data, length, status)
```

#### <a name="parameters"></a>Parametri

Visualizzare [DBBINDING](https://docs.microsoft.com/previous-versions/windows/desktop/ms716845(v=vs.85)) nel *riferimento per programmatori OLE DB*.

*nOrdinal*<br/>
[in] Numero di colonna.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*length*<br/>
[in] Variabile da associare alla lunghezza della colonna.

*status*<br/>
[in] Variabile da associare allo stato della colonna.

#### <a name="remarks"></a>Note

Utilizzare questa macro quando si desidera supportare le variabili di stato e di lunghezza. Viene utilizzata nelle seguenti posizioni:

- Tra i [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) e [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macro.

- Tra i [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) e [END_ACCESSOR](../../data/oledb/end-accessor.md) macro.

- Tra i [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) e [END_PARAM_MAP](../../data/oledb/end-param-map.md) macro.

### <a name="column_entry_ps"></a> COLUMN_ENTRY_PS

Rappresenta un'associazione sul rowset alla colonna specifica nel set di righe.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_ENTRY_PS(nOrdinal, nPrecision, nScale, data)
```

#### <a name="parameters"></a>Parametri

Visualizzare [DBBINDING](https://docs.microsoft.com/previous-versions/windows/desktop/ms716845(v=vs.85)) nel *riferimento per programmatori OLE DB*.

*nOrdinal*<br/>
[in] Numero di colonna.

*nPrecision*<br/>
[in] Precisione massima della colonna che si desidera associare.

*nScale*<br/>
[in] Scala della colonna che si desidera associare.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

#### <a name="remarks"></a>Note

Consente di specificare la precisione e la scala della colonna che si desidera associare. Viene utilizzata nelle seguenti posizioni:

- Tra i [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) e [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macro.

- Tra i [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) e [END_ACCESSOR](../../data/oledb/end-accessor.md) macro.

- Tra i [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) e [END_PARAM_MAP](../../data/oledb/end-param-map.md) macro.

### <a name="column_entry_ps_length"></a> COLUMN_ENTRY_PS_LENGTH

Rappresenta un'associazione sul rowset alla colonna specifica nel database.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_ENTRY_PS_LENGTH(nOrdinal, nPrecision, nScale, data, length)
```

#### <a name="parameters"></a>Parametri

Visualizzare [DBBINDING](https://docs.microsoft.com/previous-versions/windows/desktop/ms716845(v=vs.85)) nel *riferimento per programmatori OLE DB*.

*nOrdinal*<br/>
[in] Il numero di colonna, a partire da uno. Segnalibro corrisponde alla colonna da zero.

*nPrecision*<br/>
[in] Precisione massima della colonna che si desidera associare.

*nScale*<br/>
[in] Scala della colonna che si desidera associare.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*length*<br/>
[in] Variabile da associare alla lunghezza della colonna.

#### <a name="remarks"></a>Note

Consente di specificare la precisione e la scala della colonna che si desidera associare. Questa macro supporta il *lunghezza* variabile. Viene utilizzata nelle seguenti posizioni:

- Tra i [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) e [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macro.

- Tra i [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) e [END_ACCESSOR](../../data/oledb/end-accessor.md) macro.

- Tra i [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) e [END_PARAM_MAP](../../data/oledb/end-param-map.md) macro.

### <a name="column_entry_ps_length_status"></a> COLUMN_ENTRY_PS_LENGTH_STATUS

Rappresenta un'associazione sul rowset alla colonna specifica nel database.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_ENTRY_PS_LENGTH_STATUS(nOrdinal, nPrecision, nScale, data, length, status)
```

#### <a name="parameters"></a>Parametri

Visualizzare [DBBINDING](https://docs.microsoft.com/previous-versions/windows/desktop/ms716845(v=vs.85)) nel *riferimento per programmatori OLE DB*.

*nOrdinal*<br/>
[in] Numero di colonna.

*nPrecision*<br/>
[in] Precisione massima della colonna che si desidera associare.

*nScale*<br/>
[in] Scala della colonna che si desidera associare.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*length*<br/>
[in] Variabile da associare alla lunghezza della colonna.

*status*<br/>
[in] Variabile da associare allo stato della colonna.

#### <a name="remarks"></a>Note

Consente di specificare la precisione e la scala della colonna che si desidera associare. Utilizzare questa macro quando si desidera supportare le variabili di stato e di lunghezza. Viene utilizzata nelle seguenti posizioni:

- Tra i [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) e [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macro.

- Tra i [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) e [END_ACCESSOR](../../data/oledb/end-accessor.md) macro.

- Tra i [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) e [END_PARAM_MAP](../../data/oledb/end-param-map.md) macro.

### <a name="column_entry_ps_status"></a> COLUMN_ENTRY_PS_STATUS

Rappresenta un'associazione sul rowset alla colonna specifica nel database.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_ENTRY_PS_STATUS(nOrdinal, nPrecision, nScale, data, status)
```

#### <a name="parameters"></a>Parametri

Visualizzare [DBBINDING](https://docs.microsoft.com/previous-versions/windows/desktop/ms716845(v=vs.85)) nel *riferimento per programmatori OLE DB*.

*nOrdinal*<br/>
[in] Numero di colonna.

*nPrecision*<br/>
[in] Precisione massima della colonna che si desidera associare.

*nScale*<br/>
[in] Scala della colonna che si desidera associare.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*status*<br/>
[in] Variabile da associare allo stato della colonna.

#### <a name="remarks"></a>Note

Consente di specificare la precisione e la scala della colonna che si desidera associare. Questa macro supporta il *stato* variabile. Viene utilizzata nelle seguenti posizioni:

- Tra i [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) e [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macro.

- Tra i [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) e [END_ACCESSOR](../../data/oledb/end-accessor.md) macro.

- Tra i [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) e [END_PARAM_MAP](../../data/oledb/end-param-map.md) macro.

### <a name="column_entry_status"></a> COLUMN_ENTRY_STATUS

Rappresenta un'associazione sul rowset alla colonna specifica nel database.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_ENTRY_STATUS(nOrdinal, data, status)
```

#### <a name="parameters"></a>Parametri

Visualizzare [DBBINDING](https://docs.microsoft.com/previous-versions/windows/desktop/ms716845(v=vs.85)) nel *riferimento per programmatori OLE DB*.

*nOrdinal*<br/>
[in] Numero di colonna.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*status*<br/>
[in] Variabile da associare allo stato della colonna.

#### <a name="remarks"></a>Note

Questa macro supporta il *stato* variabile. Viene utilizzata nelle seguenti posizioni:

- Tra i [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) e [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macro.

- Tra i [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) e [END_ACCESSOR](../../data/oledb/end-accessor.md) macro.

- Tra i [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) e [END_PARAM_MAP](../../data/oledb/end-param-map.md) macro.

### <a name="column_entry_type"></a> COLUMN_ENTRY_TYPE

Rappresenta un'associazione a una specifica colonna nel database. Supporta *tipo* parametro.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_ENTRY_TYPE (nOrdinal, wType, data)
```

#### <a name="parameters"></a>Parametri

*nOrdinal*<br/>
[in] Numero di colonna.

*wType*<br/>
[in] Tipo di dati della voce di colonna.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

#### <a name="remarks"></a>Note

Questa macro è una variante specializzata del [COLUMN_ENTRY](../../data/oledb/column-entry.md) macro che fornisce un metodo che specifica il tipo di dati.

### <a name="column_entry_type_size"></a> COLUMN_ENTRY_TYPE_SIZE

Rappresenta un'associazione a una specifica colonna nel database. Supporta *tipo* e *dimensioni* parametri.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_ENTRY_TYPE_SIZE(nOrdinal, wType, nLength, data)
```

#### <a name="parameters"></a>Parametri

*nOrdinal*<br/>
[in] Numero di colonna.

*wType*<br/>
[in] Tipo di dati della voce di colonna.

*nLength*<br/>
[in] Dimensione della voce di colonna in byte.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

#### <a name="remarks"></a>Note

Questa macro è una variante specializzata del [COLUMN_ENTRY](../../data/oledb/column-entry.md) macro che fornisce un modo di specificare le dimensioni dei dati e il tipo.

### <a name="column_name"></a> COLUMN_NAME

Rappresenta un'associazione sul rowset alla colonna specifica nel set di righe. Simile a [COLUMN_ENTRY](../../data/oledb/column-entry.md), ad eccezione del fatto che questa macro accetta il nome di colonna anziché il numero di colonna.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_NAME(pszName, data)
```

#### <a name="parameters"></a>Parametri

*pszName*<br/>
[in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile farlo inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

#### <a name="remarks"></a>Note

Le macro COLUMN_NAME _ * sono usate nelle stesse posizioni [COLUMN_ENTRY](../../data/oledb/column-entry.md):

- Tra i [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) e [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macro.

- Tra i [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) e [END_ACCESSOR](../../data/oledb/end-accessor.md) macro.

- Tra i [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) e [END_PARAM_MAP](../../data/oledb/end-param-map.md) macro.

### <a name="column_name_ex"></a> COLUMN_NAME_EX

Rappresenta un'associazione sul rowset alla colonna specifica nel set di righe. Simile a [COLUMN_NAME](../../data/oledb/column-name.md), ad eccezione del fatto che questa macro accetta inoltre il tipo di dati, dimensioni, precisione, scala, lunghezza di colonna e stato della colonna.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_NAME_EX(pszName, wType, nLength, nPrecision, nScale, data, length, status )
```

#### <a name="parameters"></a>Parametri

*pszName*<br/>
[in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile farlo inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.

*wType*<br/>
[in] Il tipo di dati.

*nLength*<br/>
[in] Le dimensioni dei dati in byte.

*nPrecision*<br/>
[in] La precisione massima da utilizzare durante il recupero dei dati e *wType* è `DBTYPE_NUMERIC`. In caso contrario, questo parametro viene ignorato.

*nScale*<br/>
[in] Scala da usare durante il recupero dei dati e *wType* viene `DBTYPE_NUMERIC` o `DBTYPE_DECIMAL`.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*length*<br/>
[in] Variabile da associare alla lunghezza della colonna.

*status*<br/>
[in] Variabile da associare allo stato della colonna.

#### <a name="remarks"></a>Note

Visualizzare [COLUMN_NAME](../../data/oledb/column-name.md) per informazioni su in cui vengono usate le macro COLUMN_NAME _ *.

### <a name="column_name_length"></a> COLUMN_NAME_LENGTH

Rappresenta un'associazione sul rowset alla colonna specifica nel set di righe. Simile a [COLUMN_NAME](../../data/oledb/column-name.md), ad eccezione del fatto che questa macro accetta anche la lunghezza della colonna.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_NAME_LENGTH(pszName, data, length)
```

#### <a name="parameters"></a>Parametri

*pszName*<br/>
[in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile farlo inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*length*<br/>
[in] Variabile da associare alla lunghezza della colonna.

#### <a name="remarks"></a>Note

Visualizzare [COLUMN_NAME](../../data/oledb/column-name.md) per informazioni su in cui vengono usate le macro COLUMN_NAME _ *.

### <a name="column_name_length_status"></a> COLUMN_NAME_LENGTH_STATUS

Rappresenta un'associazione sul rowset alla colonna specifica nel set di righe. Simile a [COLUMN_NAME](../../data/oledb/column-name.md), ad eccezione del fatto che questa macro accetta anche la lunghezza della colonna e stato della colonna.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_NAME_LENGTH_STATUS(pszName, data, length, status )
```

#### <a name="parameters"></a>Parametri

*pszName*<br/>
[in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile farlo inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*length*<br/>
[in] Variabile da associare alla lunghezza della colonna.

*status*<br/>
[in] Variabile da associare allo stato della colonna.

#### <a name="remarks"></a>Note

Visualizzare [COLUMN_NAME](../../data/oledb/column-name.md) per informazioni su in cui vengono usate le macro COLUMN_NAME _ *.

### <a name="column_name_ps"></a> COLUMN_NAME_PS

Rappresenta un'associazione sul rowset alla colonna specifica nel set di righe. Simile a [COLUMN_NAME](../../data/oledb/column-name.md), ad eccezione del fatto che questa macro accetta inoltre precisione e scala.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_NAME_PS(pszName, nPrecision, nScale, data )
```

#### <a name="parameters"></a>Parametri

*pszName*<br/>
[in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile farlo inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.

*nPrecision*<br/>
[in] Precisione massima della colonna che si desidera associare.

*nScale*<br/>
[in] Scala della colonna che si desidera associare.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

#### <a name="remarks"></a>Note

Visualizzare [COLUMN_NAME](../../data/oledb/column-name.md) per informazioni su in cui vengono usate le macro COLUMN_NAME _ *.

### <a name="column_name_ps_length"></a> COLUMN_NAME_PS_LENGTH

Rappresenta un'associazione sul rowset alla colonna specifica nel set di righe. Simile a [COLUMN_NAME](../../data/oledb/column-name.md), ad eccezione del fatto che questa macro accetta inoltre lunghezza e precisione, scala e colonna.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_NAME_PS_LENGTH(pszName, nPrecision, nScale, data, length )
```

#### <a name="parameters"></a>Parametri

*pszName*<br/>
[in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile farlo inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.

*nPrecision*<br/>
[in] Precisione massima della colonna che si desidera associare.

*nScale*<br/>
[in] Scala della colonna che si desidera associare.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*length*<br/>
[in] Variabile da associare alla lunghezza della colonna.

#### <a name="remarks"></a>Note

Visualizzare [COLUMN_NAME](../../data/oledb/column-name.md) per informazioni su in cui vengono usate le macro COLUMN_NAME _ *.

### <a name="column_name_ps_length_status"></a> COLUMN_NAME_PS_LENGTH_STATUS

Rappresenta un'associazione sul rowset alla colonna specifica nel set di righe. Simile a [COLUMN_NAME](../../data/oledb/column-name.md), ad eccezione del fatto che questa macro accetta inoltre precisione, scala, lunghezza di colonna e stato della colonna.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_NAME_PS_LENGTH_STATUS(pszName, nPrecision, nScale, data, length, status )
```

#### <a name="parameters"></a>Parametri

*pszName*<br/>
[in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile farlo inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.

*nPrecision*<br/>
[in] Precisione massima della colonna che si desidera associare.

*nScale*<br/>
[in] Scala della colonna che si desidera associare.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*length*<br/>
[in] Variabile da associare alla lunghezza della colonna.

*status*<br/>
[in] Variabile da associare allo stato della colonna.

#### <a name="remarks"></a>Note

Visualizzare [COLUMN_NAME](../../data/oledb/column-name.md) per informazioni su in cui vengono usate le macro COLUMN_NAME _ *.

### <a name="column_name_ps_status"></a> COLUMN_NAME_PS_STATUS

Rappresenta un'associazione sul rowset alla colonna specifica nel set di righe. Simile a [COLUMN_NAME](../../data/oledb/column-name.md), ad eccezione del fatto che questa macro accetta inoltre lo stato di precisione, scala e colonna.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_NAME_PS_STATUS(pszName, nPrecision, nScale, data, status )
```

#### <a name="parameters"></a>Parametri

*pszName*<br/>
[in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile farlo inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.

*nPrecision*<br/>
[in] Precisione massima della colonna che si desidera associare.

*nScale*<br/>
[in] Scala della colonna che si desidera associare.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*status*<br/>
[in] Variabile da associare allo stato della colonna.

#### <a name="remarks"></a>Note

Visualizzare [COLUMN_NAME](../../data/oledb/column-name.md) per informazioni su in cui vengono usate le macro COLUMN_NAME _ *.

### <a name="column_name_status"></a> COLUMN_NAME_STATUS

Rappresenta un'associazione sul rowset alla colonna specifica nel set di righe. Simile a [COLUMN_NAME](../../data/oledb/column-name.md), ad eccezione del fatto che questa macro accetta inoltre stato della colonna.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_NAME_STATUS(pszName, data, status )
```

#### <a name="parameters"></a>Parametri

*pszName*<br/>
[in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile farlo inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

*status*<br/>
[in] Variabile da associare allo stato della colonna.

#### <a name="remarks"></a>Note

Visualizzare [COLUMN_NAME](../../data/oledb/column-name.md) per informazioni su in cui vengono usate le macro COLUMN_NAME _ *.

### <a name="column_name_type"></a> COLUMN_NAME_TYPE

Rappresenta un'associazione sul rowset alla colonna specifica nel set di righe. Simile a [COLUMN_NAME](../../data/oledb/column-name.md), ad eccezione del fatto che questa macro accetta inoltre il tipo di dati.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_NAME_TYPE(pszName, wType, data)
```

#### <a name="parameters"></a>Parametri

*pszName*<br/>
[in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile farlo inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.

*wType*<br/>
[in] Il tipo di dati.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

#### <a name="remarks"></a>Note

Visualizzare [COLUMN_NAME](../../data/oledb/column-name.md) per informazioni su in cui vengono usate le macro COLUMN_NAME _ *.

### <a name="column_name_type_ps"></a> COLUMN_NAME_TYPE_PS

Rappresenta un'associazione sul rowset alla colonna specifica nel set di righe. Simile a [COLUMN_NAME](../../data/oledb/column-name.md), ad eccezione del fatto che questa macro accetta inoltre il tipo di dati, precisione e scala.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_NAME_TYPE_PS(pszName, wType, nPrecision, nScale, data)
```

#### <a name="parameters"></a>Parametri

*pszName*<br/>
[in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile farlo inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.

*wType*<br/>
[in] Il tipo di dati.

*nPrecision*<br/>
[in] La precisione massima da utilizzare durante il recupero dei dati e *wType* è `DBTYPE_NUMERIC`. In caso contrario, questo parametro viene ignorato.

*nScale*<br/>
[in] Scala da usare durante il recupero dei dati e *wType* viene `DBTYPE_NUMERIC` o `DBTYPE_DECIMAL`.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

#### <a name="remarks"></a>Note

Visualizzare [COLUMN_NAME](../../data/oledb/column-name.md) per informazioni su in cui vengono usate le macro COLUMN_NAME _ *.

### <a name="column_name_type_size"></a> COLUMN_NAME_TYPE_SIZE

Rappresenta un'associazione sul rowset alla colonna specifica nel set di righe. Simile a [COLUMN_NAME](../../data/oledb/column-name.md), ad eccezione del fatto che questa macro accetta inoltre il tipo di dati e le dimensioni.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_NAME_TYPE_SIZE(pszName, wType, nLength, data)
```

#### <a name="parameters"></a>Parametri

*pszName*<br/>
[in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile farlo inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.

*wType*<br/>
[in] Il tipo di dati.

*nLength*<br/>
[in] Le dimensioni dei dati in byte.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

#### <a name="remarks"></a>Note

Visualizzare [COLUMN_NAME](../../data/oledb/column-name.md) per informazioni su in cui vengono usate le macro COLUMN_NAME _ *.

### <a name="column_name_type_status"></a> COLUMN_NAME_TYPE_STATUS

Rappresenta un'associazione sul rowset alla colonna specifica nel set di righe. Simile a [COLUMN_NAME](../../data/oledb/column-name.md), ad eccezione del fatto che questa macro accetta inoltre lo stato di tipo e alla colonna di dati.

#### <a name="syntax"></a>Sintassi

```cpp
COLUMN_NAME_TYPE_STATUS(pszName, wType, status, data)
```

#### <a name="parameters"></a>Parametri

*pszName*<br/>
[in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile farlo inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.

*wType*<br/>
[in] Il tipo di dati.

*status*<br/>
[in] Variabile da associare allo stato della colonna.

*data*<br/>
[in] Membro dati corrispondente nel record utente.

#### <a name="remarks"></a>Note

Visualizzare [COLUMN_NAME](../../data/oledb/column-name.md) per informazioni su in cui vengono usate le macro COLUMN_NAME _ *.

### <a name="end_column_map"></a> END_COLUMN_MAP

Contrassegna la fine delle voci della mappa di colonna.

#### <a name="syntax"></a>Sintassi

```cpp
END_COLUMN_MAP()
```

#### <a name="remarks"></a>Note

Viene usato con una funzione di accesso singolo in un set di righe. Il BEGIN_COLUMN_MAP (macro) è stata completata con il END_COLUMN_MAP (macro).

#### <a name="example"></a>Esempio

Visualizzare [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md).

### <a name="define_command"></a> DEFINE_COMMAND

Specifica il comando che verrà utilizzato per creare il set di righe quando si usa la [CCommand](../../data/oledb/ccommand-class.md) classe. Accetta solo i tipi di stringa che corrisponde al tipo di applicazione specificata (ANSI o Unicode).

> [!NOTE]
>  È consigliabile usare [DEFINE_COMMAND_EX](../../data/oledb/define-command-ex.md) anziché DEFINE_COMMAND.

#### <a name="syntax"></a>Sintassi

```cpp
DEFINE_COMMAND(x, szCommand)
```

#### <a name="parameters"></a>Parametri

*x*<br/>
[in] Il nome della classe di record (comando) utente.

*szCommand*<br/>
[in] La stringa di comando che verrà utilizzata per creare il set di righe quando si usa [CCommand](../../data/oledb/ccommand-class.md).

#### <a name="remarks"></a>Note

La stringa di comando specificato verrà usata come impostazione predefinita se non si specifica nel testo del comando il [CCommand::](../../data/oledb/ccommand-open.md) (metodo).

Questa macro accetta stringhe ANSI se si compila l'applicazione come ANSI o Unicode stringhe se si compila l'applicazione come Unicode. È consigliabile usare [DEFINE_COMMAND_EX](../../data/oledb/define-command-ex.md) anziché DEFINE_COMMAND, perché il primo accetta stringhe Unicode, indipendentemente dal tipo di applicazione ANSI o Unicode.

#### <a name="example"></a>Esempio

Visualizzare [BOOKMARK_ENTRY](../../data/oledb/bookmark-entry.md).

### <a name="define_command_ex"></a> DEFINE_COMMAND_EX

Specifica il comando che verrà utilizzato per creare il set di righe quando si usa la [CCommand](../../data/oledb/ccommand-class.md) classe. Supporta le applicazioni Unicode e ANSI.

#### <a name="syntax"></a>Sintassi

```cpp
DEFINE_COMMAND_EX(x, wszCommand)
```

#### <a name="parameters"></a>Parametri

*x*<br/>
[in] Il nome della classe di record (comando) utente.

*wszCommand*<br/>
[in] La stringa di comando che verrà utilizzata per creare il set di righe quando si usa [CCommand](../../data/oledb/ccommand-class.md).

#### <a name="remarks"></a>Note

La stringa di comando specificato verrà usata come impostazione predefinita se non si specifica nel testo del comando il [CCommand::](../../data/oledb/ccommand-open.md) (metodo).

Questa macro accetta stringhe Unicode, indipendentemente dal tipo di applicazione. Questa macro è preferita rispetto [DEFINE_COMMAND](../../data/oledb/define-command.md) poiché supporta Unicode, nonché applicazioni ANSI.

#### <a name="example"></a>Esempio

Visualizzare [BOOKMARK_ENTRY](../../data/oledb/bookmark-entry.md).

### <a name="begin_param_map"></a> BEGIN_PARAM_MAP

Contrassegna l'inizio delle voci della mappa dei parametri.

#### <a name="syntax"></a>Sintassi

```cpp
BEGIN_PARAM_MAP(x)
```

#### <a name="parameters"></a>Parametri

*x*<br/>
[in] Nome della classe di record utente.

#### <a name="remarks"></a>Note

I parametri vengono utilizzati da [comandi](https://docs.microsoft.com/previous-versions/windows/desktop/ms724608(v=vs.85)).

#### <a name="example"></a>Esempio

Vedere l'esempio per la [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) macro.

### <a name="end_param_map"></a> END_PARAM_MAP

Contrassegna la fine delle voci della mappa di parametro.

#### <a name="syntax"></a>Sintassi

```cpp
END_PARAM_MAP()
```

#### <a name="example"></a>Esempio

Vedere l'esempio per la [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) macro.

### <a name="set_param_type"></a> SET_PARAM_TYPE

Specifica le macro COLUMN_ENTRY che seguono la macro input SET_PARAM_TYPE, output o input/output.

#### <a name="syntax"></a>Sintassi

```cpp
SET_PARAM_TYPE(type)
```

#### <a name="parameters"></a>Parametri

*type*<br/>
[in] Tipo da impostare per il parametro.

#### <a name="remarks"></a>Note

I provider supportano solo i tipi di parametro input/output supportati dall'origine dati sottostante. Il tipo è una combinazione di uno o più `DBPARAMIO` valori (vedere [strutture DBBINDING](https://docs.microsoft.com/previous-versions/windows/desktop/ms716845(v=vs.85)) nel *riferimento per programmatori OLE DB*):

- `DBPARAMIO_NOTPARAM` La funzione di accesso non ha parametri. In genere, si imposta `eParamIO` a questo valore nelle funzioni di accesso di riga per ricordare all'utente che i parametri vengono ignorati.

- `DBPARAMIO_INPUT` Un parametro di input.

- `DBPARAMIO_OUTPUT` Un parametro di output.

- `DBPARAMIO_INPUT | DBPARAMIO_OUTPUT` Il parametro è sia un parametro di input e output.

#### <a name="example"></a>Esempio

```cpp
class CArtistsProperty
{
public:
   short m_nReturn;
   short m_nAge;
   TCHAR m_szFirstName[21];
   TCHAR m_szLastName[31];

BEGIN_PARAM_MAP(CArtistsProperty)
   SET_PARAM_TYPE(DBPARAMIO_OUTPUT)
   COLUMN_ENTRY(1, m_nReturn)
   SET_PARAM_TYPE(DBPARAMIO_INPUT)
   COLUMN_ENTRY(2, m_nAge)
END_PARAM_MAP()

BEGIN_COLUMN_MAP(CArtistsProperty)
   COLUMN_ENTRY(1, m_szFirstName)
   COLUMN_ENTRY(2, m_szLastName)
END_COLUMN_MAP()

   HRESULT OpenDataSource()
   {
      CDataSource _db;
      _db.Open();
      return m_session.Open(_db);
   }

   void CloseDataSource()
   {
      m_session.Close();
   }

   CSession m_session;

   DEFINE_COMMAND_EX(CArtistsProperty, L" \
      { ? = SELECT Age FROM Artists WHERE Age < ? }")
};
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)<br/>
[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)