---
title: Creazione di un provider aggiornabile
ms.date: 08/16/2018
helpviewer_keywords:
- OLE DB providers, updatable
- notifications, support in providers
- OLE DB providers, creating
ms.assetid: bdfd5c9f-1c6f-4098-822c-dd650e70ab82
ms.openlocfilehash: 2811cd56bdc87282b9d4395a9a79ba9b333dadee
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80211393"
---
# <a name="creating-an-updatable-provider"></a>Creazione di un provider aggiornabile

Visual C++ supporta provider aggiornabili o provider che possono aggiornare (scrivere) nell'archivio dati. In questo argomento viene illustrato come creare provider aggiornabili utilizzando modelli di OLE DB.

In questo argomento si presuppone che si inizi con un provider realizzabile. Per la creazione di un provider aggiornabile è necessario eseguire due passaggi. È innanzitutto necessario decidere in che modo il provider apporterà modifiche all'archivio dati; in particolare, se le modifiche devono essere eseguite immediatamente o rinviate fino a quando non viene emesso un comando di aggiornamento. La sezione "[rendere i provider aggiornabili](#vchowmakingprovidersupdatable)" descrive le modifiche e le impostazioni che è necessario eseguire nel codice del provider.

A questo punto, è necessario assicurarsi che il provider contenga tutte le funzionalità necessarie per supportare qualsiasi cosa possa essere richiesta dal consumer. Se il consumer desidera aggiornare l'archivio dati, il provider deve contenere codice che rende permanente i dati nell'archivio dati. È ad esempio possibile utilizzare la libreria di runtime del linguaggio C o MFC per eseguire tali operazioni sull'origine dati. Nella sezione "[scrittura nell'origine dati](#vchowwritingtothedatasource)" viene descritto come scrivere nell'origine dati, gestire i valori null e predefiniti e impostare i flag di colonna.

> [!NOTE]
> [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) è un esempio di provider aggiornabile. UpdatePV è lo stesso di, ma con supporto aggiornabile.

##  <a name="making-providers-updatable"></a><a name="vchowmakingprovidersupdatable"></a>Rendere aggiornabili i provider

La chiave per rendere un provider aggiornabile consiste nel comprendere le operazioni che si desidera che il provider esegua sull'archivio dati e il modo in cui si desidera che il provider esegua tali operazioni. In particolare, il problema principale consiste nel fatto che gli aggiornamenti all'archivio dati debbano essere eseguiti immediatamente o posticipati (in batch) finché non viene emesso un comando di aggiornamento.

È necessario innanzitutto decidere se ereditare da `IRowsetChangeImpl` o `IRowsetUpdateImpl` nella classe del set di righe. A seconda di quale di questi si sceglie di implementare, verranno interessate le funzionalità di tre metodi: `SetData`, `InsertRows`e `DeleteRows`.

- Se si eredita da [IRowsetChangeImpl](../../data/oledb/irowsetchangeimpl-class.md), la chiamata a questi tre metodi modifica immediatamente l'archivio dati.

- Se si eredita da [IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md), i metodi rinviano le modifiche all'archivio dati fino a quando non si chiama `Update`, `GetOriginalData`o `Undo`. Se l'aggiornamento comporta diverse modifiche, viene eseguito in modalità batch (si noti che le modifiche in batch possono aggiungere un notevole sovraccarico della memoria).

Si noti che `IRowsetUpdateImpl` deriva da `IRowsetChangeImpl`. Pertanto, `IRowsetUpdateImpl` fornisce funzionalità di modifica e funzionalità di batch.

### <a name="to-support-updatability-in-your-provider"></a>Per supportare aggiornabilità nel provider

1. Nella classe del set di righe ereditare da `IRowsetChangeImpl` o `IRowsetUpdateImpl`. Queste classi forniscono le interfacce appropriate per la modifica dell'archivio dati:

   **Aggiunta di IRowsetChange**

   Aggiungere `IRowsetChangeImpl` alla catena di ereditarietà usando il formato seguente:

    ```cpp
    IRowsetChangeImpl< rowset-name, storage-name >
    ```

   Aggiungere anche `COM_INTERFACE_ENTRY(IRowsetChange)` alla sezione `BEGIN_COM_MAP` della classe del set di righe.

   **Aggiunta di IRowsetUpdate**

   Aggiungere `IRowsetUpdate` alla catena di ereditarietà usando il formato seguente:

    ```cpp
    IRowsetUpdateImpl< rowset-name, storage>
    ```

   > [!NOTE]
   > Rimuovere la riga di `IRowsetChangeImpl` dalla catena di ereditarietà. Questa eccezione alla direttiva citata in precedenza deve includere il codice per `IRowsetChangeImpl`.

1. Aggiungere quanto segue alla mappa COM (`BEGIN_COM_MAP ... END_COM_MAP`):

   |  Se si implementa   |           Aggiungi a mappa COM             |
   |---------------------|--------------------------------------|
   | `IRowsetChangeImpl` | `COM_INTERFACE_ENTRY(IRowsetChange)` |
   | `IRowsetUpdateImpl` | `COM_INTERFACE_ENTRY(IRowsetUpdate)` |

   | Se si implementa | Aggiungi alla mappa del set di proprietà |
   |----------------------|-----------------------------|
   | `IRowsetChangeImpl` | `PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)` |
   | `IRowsetUpdateImpl` | `PROPERTY_INFO_ENTRY_VALUE(IRowsetUpdate, VARIANT_FALSE)` |

1. Nel comando aggiungere quanto segue alla mappa del set di proprietà (`BEGIN_PROPSET_MAP ... END_PROPSET_MAP`):

   |  Se si implementa   |                                             Aggiungi alla mappa del set di proprietà                                              |
   |---------------------|------------------------------------------------------------------------------------------------------------------|
   | `IRowsetChangeImpl` |                            `PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)`                             |
   | `IRowsetUpdateImpl` | `PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)PROPERTY_INFO_ENTRY_VALUE(IRowsetUpdate, VARIANT_FALSE)` |

1. Nella mappa del set di proprietà è necessario includere anche tutte le impostazioni seguenti, come visualizzato di seguito:

    ```cpp
    PROPERTY_INFO_ENTRY_VALUE(UPDATABILITY, DBPROPVAL_UP_CHANGE |
      DBPROPVAL_UP_INSERT | DBPROPVAL_UP_DELETE)
    PROPERTY_INFO_ENTRY_VALUE(CHANGEINSERTEDROWS, VARIANT_TRUE)
    PROPERTY_INFO_ENTRY_VALUE(IMMOBILEROWS, VARIANT_TRUE)

    PROPERTY_INFO_ENTRY_EX(OWNINSERT, VT_BOOL, DBPROPFLAGS_ROWSET |
      DBPROPFLAGS_READ, VARIANT_TRUE, 0)
    PROPERTY_INFO_ENTRY_EX(OWNUPDATEDELETE, VT_BOOL, DBPROPFLAGS_ROWSET |
      DBPROPFLAGS_READ, VARIANT_TRUE, 0)
    PROPERTY_INFO_ENTRY_EX(OTHERINSERT, VT_BOOL, DBPROPFLAGS_ROWSET |
      DBPROPFLAGS_READ, VARIANT_TRUE, 0)
    PROPERTY_INFO_ENTRY_EX(OTHERUPDATEDELETE, VT_BOOL, DBPROPFLAGS_ROWSET |
      DBPROPFLAGS_READ, VARIANT_TRUE, 0)
    PROPERTY_INFO_ENTRY_EX(REMOVEDELETED, VT_BOOL, DBPROPFLAGS_ROWSET |
      DBPROPFLAGS_READ, VARIANT_FALSE, 0)
    ```

   È possibile trovare i valori utilizzati in queste chiamate macro cercando in ATLDB. h la proprietà ID e valori (se Atldb. h è diverso dalla documentazione online, Atldb. h sostituisce la documentazione).

   > [!NOTE]
   > Molte delle impostazioni `VARIANT_FALSE` e `VARIANT_TRUE` sono richieste dai modelli di OLE DB. la specifica OLE DB indica che possono essere di lettura/scrittura, ma i modelli di OLE DB possono supportare solo un valore.

   **Se si implementa IRowsetChangeImpl**

   Se si implementa `IRowsetChangeImpl`, è necessario impostare le proprietà seguenti nel provider. Queste proprietà vengono utilizzate principalmente per richiedere interfacce tramite `ICommandProperties::SetProperties`.

   - `DBPROP_IRowsetChange`: l'impostazione consente di impostare automaticamente `DBPROP_IRowsetChange`.

   - `DBPROP_UPDATABILITY`: una maschera di maschera che specifica i metodi supportati su `IRowsetChange`: `SetData`, `DeleteRows`o `InsertRow`.

   - `DBPROP_CHANGEINSERTEDROWS`: il consumer può chiamare `IRowsetChange::DeleteRows` o `SetData` per le nuove righe inserite.

   - `DBPROP_IMMOBILEROWS`: il set di righe non riordina le righe inserite o aggiornate.

   **Se si implementa IRowsetUpdateImpl**

   Se si implementa `IRowsetUpdateImpl`, è necessario impostare le proprietà seguenti nel provider, oltre a impostare tutte le proprietà per `IRowsetChangeImpl` elencate in precedenza:

   - `DBPROP_IRowsetUpdate`.

   - `DBPROP_OWNINSERT`: deve essere READ_ONLY e VARIANT_TRUE.

   - `DBPROP_OWNUPDATEDELETE`: deve essere READ_ONLY e VARIANT_TRUE.

   - `DBPROP_OTHERINSERT`: deve essere READ_ONLY e VARIANT_TRUE.

   - `DBPROP_OTHERUPDATEDELETE`: deve essere READ_ONLY e VARIANT_TRUE.

   - `DBPROP_REMOVEDELETED`: deve essere READ_ONLY e VARIANT_TRUE.

   - `DBPROP_MAXPENDINGROWS`.

   > [!NOTE]
   > Se si supportano le notifiche, è possibile che siano presenti anche altre proprietà. per questo elenco, vedere la sezione `IRowsetNotifyCP`.

##  <a name="writing-to-the-data-source"></a><a name="vchowwritingtothedatasource"></a>Scrittura nell'origine dati

Per leggere dall'origine dati, chiamare la funzione `Execute`. Per scrivere nell'origine dati, chiamare la funzione `FlushData`. (In generale, lo scaricamento significa salvare le modifiche apportate a una tabella o a un indice su disco).

```cpp
FlushData(HROW, HACCESSOR);
```

Gli argomenti dell'handle di riga (HROW) e dell'handle della funzione di accesso (HACCESSOR) consentono di specificare l'area da scrivere. In genere, si scrive un singolo campo dati alla volta.

Il metodo `FlushData` scrive i dati nel formato in cui è stato originariamente archiviato. Se non si esegue l'override di questa funzione, il provider funzionerà correttamente, ma le modifiche non verranno scaricate nell'archivio dati.

### <a name="when-to-flush"></a>Quando scaricare

I modelli di provider chiamano FlushData ogni volta che è necessario scrivere dati nell'archivio dati. Questo in genere, ma non sempre, si verifica in seguito a chiamate alle funzioni seguenti:

- `IRowsetChange::DeleteRows`

- `IRowsetChange::SetData`

- `IRowsetChange::InsertRows` (se sono presenti nuovi dati da inserire nella riga)

- `IRowsetUpdate::Update`

### <a name="how-it-works"></a>Funzionamento

Il consumer effettua una chiamata che richiede uno scaricamento, ad esempio Update, e questa chiamata viene passata al provider, che esegue sempre le operazioni seguenti:

- Chiama `SetDBStatus` ogni volta che è stato associato un valore di stato.

- Verifica i flag della colonna.

- Chiama `IsUpdateAllowed`.

Questi tre passaggi consentono di garantire la sicurezza. Il provider chiama quindi `FlushData`.

### <a name="how-to-implement-flushdata"></a>Come implementare FlushData

Per implementare `FlushData`, è necessario tenere conto di diversi problemi:

Assicurarsi che l'archivio dati sia in grado di gestire le modifiche.

Gestione dei valori NULL.

### <a name="handling-default-values"></a>Gestione dei valori predefiniti.

Per implementare il proprio metodo di `FlushData`, è necessario:

- Passare alla classe del set di righe.

- Nella classe del set di righe inserire la dichiarazione di:

   ```cpp
   HRESULT FlushData(HROW, HACCESSOR)
   {
      // Insert your implementation here and return an HRESULT.
   }
   ```

- Fornire un'implementazione di `FlushData`.

Una corretta implementazione di `FlushData` archivia solo le righe e le colonne effettivamente aggiornate. È possibile utilizzare i parametri HROW e HACCESSOR per determinare la riga e la colonna correnti da archiviare per l'ottimizzazione.

In genere, il problema principale è quello di lavorare con il proprio archivio dati nativo. Se possibile, provare a:

- Tenere il metodo di scrittura nell'archivio dati il più semplice possibile.

- Gestire i valori NULL (facoltativo ma consigliato).

- Gestisce i valori predefiniti (facoltativo ma consigliato).

La cosa migliore da fare è avere valori specificati effettivi nell'archivio dati per valori NULL e predefiniti. È preferibile estrapolare questi dati. In caso contrario, è consigliabile non consentire valori NULL e predefiniti.

Nell'esempio seguente viene illustrato il modo in cui `FlushData` viene implementato nella classe `RUpdateRowset` nell'esempio `UpdatePV` (vedere rowset. h nel codice di esempio):

```cpp
///////////////////////////////////////////////////////////////////////////
// class RUpdateRowset (in rowset.h)
...
HRESULT FlushData(HROW, HACCESSOR)
{
    ATLTRACE2(atlTraceDBProvider, 0, "RUpdateRowset::FlushData\n");

    USES_CONVERSION;
    enum {
        sizeOfString = 256,
        sizeOfFileName = MAX_PATH
    };
    FILE*    pFile = NULL;
    TCHAR    szString[sizeOfString];
    TCHAR    szFile[sizeOfFileName];
    errcode  err = 0;

    ObjectLock lock(this);

    // From a filename, passed in as a command text,
    // scan the file placing data in the data array.
    if (m_strCommandText == (BSTR)NULL)
    {
        ATLTRACE( "RRowsetUpdate::FlushData -- "
                  "No filename specified\n");
        return E_FAIL;
    }

    // Open the file
    _tcscpy_s(szFile, sizeOfFileName, OLE2T(m_strCommandText));
    if ((szFile[0] == _T('\0')) ||
        ((err = _tfopen_s(&pFile, &szFile[0], _T("w"))) != 0))
    {
        ATLTRACE("RUpdateRowset::FlushData -- Could not open file\n");
        return DB_E_NOTABLE;
    }

    // Iterate through the row data and store it.
    for (long l=0; l<m_rgRowData.GetSize(); l++)
    {
        CAgentMan am = m_rgRowData[l];

        _putw((int)am.dwFixed, pFile);

        if (_tcscmp(&am.szCommand[0], _T("")) != 0)
            _stprintf_s(&szString[0], _T("%s\n"), am.szCommand);
        else
            _stprintf_s(&szString[0], _T("%s\n"), _T("NULL"));
        _fputts(szString, pFile);

        if (_tcscmp(&am.szText[0], _T("")) != 0)
            _stprintf_s(&szString[0], _T("%s\n"), am.szText);
        else
            _stprintf_s(&szString[0], _T("%s\n"), _T("NULL"));
        _fputts(szString, pFile);

        if (_tcscmp(&am.szCommand2[0], _T("")) != 0)
            _stprintf_s(&szString[0], _T("%s\n"), am.szCommand2);
        else
            _stprintf_s(&szString[0], _T("%s\n"), _T("NULL"));
        _fputts(szString, pFile);

        if (_tcscmp(&am.szText2[0], _T("")) != 0)
            _stprintf_s(&szString[0], _T("%s\n"), am.szText2);
        else
            _stprintf_s(&szString[0], _T("%s\n"), _T("NULL"));
        _fputts(szString, pFile);
    }

    if (fflush(pFile) == EOF || fclose(pFile) == EOF)
    {
        ATLTRACE("RRowsetUpdate::FlushData -- "
                 "Couldn't flush or close file\n");
    }

    return S_OK;
}
```

### <a name="handling-changes"></a>Gestione delle modifiche

Affinché il provider gestisca le modifiche, è prima di tutto necessario assicurarsi che l'archivio dati, ad esempio un file di testo o un file video, disponga di funzionalità che consentono di apportare modifiche. In caso contrario, è necessario creare tale codice separatamente dal progetto del provider.

### <a name="handling-null-data"></a>Gestione dei dati NULL

È possibile che un utente finale invii dati NULL. Quando si scrivono valori NULL nei campi dell'origine dati, è possibile che si verifichino potenziali problemi. Immaginate un'applicazione per l'esecuzione di ordini che accetti valori per città e Cap; potrebbe accettare uno o entrambi i valori, ma non nessuno di essi, perché in tal caso il recapito sarebbe impossibile. È pertanto necessario limitare determinate combinazioni di valori NULL nei campi che hanno senso per l'applicazione.

Lo sviluppatore del provider deve prendere in considerazione la modalità di archiviazione dei dati, la modalità di lettura dei dati dall'archivio dati e il modo in cui tali dati vengono specificati all'utente. In particolare, è necessario considerare come modificare lo stato dei dati dei set di righe nell'origine dati (ad esempio, DataStatus = NULL). Decidere quale valore restituire quando un utente accede a un campo contenente un valore NULL.

Esaminare il codice nell'esempio UpdatePV. viene illustrato come un provider è in grado di gestire i dati NULL. In UpdatePV il provider archivia i dati NULL scrivendo la stringa "NULL" nell'archivio dati. Quando legge i dati NULL dall'archivio dati, vede tale stringa e quindi svuota il buffer creando una stringa NULL. Dispone inoltre di un override del `IRowsetImpl::GetDBStatus` in cui restituisce DBSTATUS_S_ISNULL se il valore dei dati è vuoto.

### <a name="marking-nullable-columns"></a>Contrassegno di colonne nullable

Se si implementano anche set di righe dello schema (vedere `IDBSchemaRowsetImpl`), l'implementazione deve specificare nel set di righe DBSCHEMA_COLUMNS, in genere contrassegnato nel provider da CxxxSchemaColSchemaRowset, che la colonna ammette i valori null.

È anche necessario specificare che tutte le colonne che ammettono i valori null contengano il valore DBCOLUMNFLAGS_ISNULLABLE nella versione della `GetColumnInfo`.

Nell'implementazione dei modelli di OLE DB, se le colonne non vengono contrassegnate come Nullable, il provider presuppone che debbano contenere un valore e non consenta al consumer di inviare i valori null.

Nell'esempio seguente viene illustrato il modo in cui la funzione `CommonGetColInfo` viene implementata in CUpdateCommand (vedere la pagina relativa a come ottenere i. cpp) in UpdatePV. Si noti come le colonne abbiano questo DBCOLUMNFLAGS_ISNULLABLE per le colonne che ammettono i valori null.

```cpp
/////////////////////////////////////////////////////////////////////////////
// CUpdateCommand (in UpProvRS.cpp)

ATLCOLUMNINFO* CommonGetColInfo(IUnknown* pPropsUnk, ULONG* pcCols, bool bBookmark)
{
    static ATLCOLUMNINFO _rgColumns[6];
    ULONG ulCols = 0;

    if (bBookmark)
    {
        ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Bookmark"), 0,
                            sizeof(DWORD), DBTYPE_BYTES,
                            0, 0, GUID_NULL, CAgentMan, dwBookmark,
                            DBCOLUMNFLAGS_ISBOOKMARK)
        ulCols++;
    }

    // Next set the other columns up.
    // Add a fixed length entry for OLE DB conformance testing purposes
    ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Fixed"), 1, 4, DBTYPE_UI4,
                        10, 255, GUID_NULL, CAgentMan, dwFixed,
                        DBCOLUMNFLAGS_WRITE |
                        DBCOLUMNFLAGS_ISFIXEDLENGTH)
    ulCols++;

    ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Command"), 2, 16, DBTYPE_STR,
                        255, 255, GUID_NULL, CAgentMan, szCommand,
                        DBCOLUMNFLAGS_WRITE | DBCOLUMNFLAGS_ISNULLABLE)
    ulCols++;
    ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Text"), 3, 16, DBTYPE_STR,
                        255, 255, GUID_NULL, CAgentMan, szText,
                        DBCOLUMNFLAGS_WRITE | DBCOLUMNFLAGS_ISNULLABLE)
    ulCols++;

    ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Command2"), 4, 16, DBTYPE_STR,
                        255, 255, GUID_NULL, CAgentMan, szCommand2,
                        DBCOLUMNFLAGS_WRITE | DBCOLUMNFLAGS_ISNULLABLE)
    ulCols++;
    ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Text2"), 5, 16, DBTYPE_STR,
                        255, 255, GUID_NULL, CAgentMan, szText2,
                        DBCOLUMNFLAGS_WRITE | DBCOLUMNFLAGS_ISNULLABLE)
    ulCols++;

    if (pcCols != NULL)
    {
        *pcCols = ulCols;
    }

    return _rgColumns;
}
```

### <a name="default-values"></a>Valori predefiniti

Come per i dati NULL, si ha la responsabilità di gestire la modifica dei valori predefiniti.

Il valore predefinito di `FlushData` e `Execute` consiste nel restituire S_OK. Se pertanto non si esegue l'override di questa funzione, le modifiche appariranno correttamente (S_OK verrà restituito), ma non verranno trasmesse all'archivio dati.

Nell'esempio `UpdatePV` (in rowset. h) il metodo `SetDBStatus` gestisce i valori predefiniti come indicato di seguito:

```cpp
virtual HRESULT SetDBStatus(DBSTATUS* pdbStatus, CSimpleRow* pRow,
                            ATLCOLUMNINFO* pColInfo)
{
    ATLASSERT(pRow != NULL && pColInfo != NULL && pdbStatus != NULL);

    void* pData = NULL;
    char* pDefaultData = NULL;
    DWORD* pFixedData = NULL;

    switch (*pdbStatus)
    {
        case DBSTATUS_S_DEFAULT:
            pData = (void*)&m_rgRowData[pRow->m_iRowset];
            if (pColInfo->wType == DBTYPE_STR)
            {
                pDefaultData = (char*)pData + pColInfo->cbOffset;
                strcpy_s(pDefaultData, "Default");
            }
            else
            {
                pFixedData = (DWORD*)((BYTE*)pData +
                                          pColInfo->cbOffset);
                *pFixedData = 0;
                return S_OK;
            }
            break;
        case DBSTATUS_S_ISNULL:
        default:
            break;
    }
    return S_OK;
}
```

### <a name="column-flags"></a>Flag di colonna

Se per le colonne sono supportati i valori predefiniti, è necessario impostarli usando i metadati della classe provider \<\>classe SchemaRowset. Impostare `m_bColumnHasDefault = VARIANT_TRUE`.

È anche necessario impostare i flag di colonna, che vengono specificati usando il tipo enumerato DBCOLUMNFLAGS. I flag di colonna descrivono le caratteristiche della colonna.

Ad esempio, nella classe `CUpdateSessionColSchemaRowset` in `UpdatePV` (in Session. h) la prima colonna viene configurata in questo modo:

```cpp
// Set up column 1
trData[0].m_ulOrdinalPosition = 1;
trData[0].m_bIsNullable = VARIANT_FALSE;
trData[0].m_bColumnHasDefault = VARIANT_TRUE;
trData[0].m_nDataType = DBTYPE_UI4;
trData[0].m_nNumericPrecision = 10;
trData[0].m_ulColumnFlags = DBCOLUMNFLAGS_WRITE |
                            DBCOLUMNFLAGS_ISFIXEDLENGTH;
lstrcpyW(trData[0].m_szColumnDefault, OLESTR("0"));
m_rgRowData.Add(trData[0]);
```

Questo codice specifica, tra le altre cose, che la colonna supporta un valore predefinito pari a 0, che sia scrivibile e che tutti i dati nella colonna abbiano la stessa lunghezza. Se si desidera che i dati di una colonna abbiano una lunghezza variabile, non impostare questo flag.

## <a name="see-also"></a>Vedere anche

[Creazione di un provider OLE DB](creating-an-ole-db-provider.md)
