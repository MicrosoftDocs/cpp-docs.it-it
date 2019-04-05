---
title: Creazione di un provider aggiornabile
ms.date: 08/16/2018
helpviewer_keywords:
- OLE DB providers, updatable
- notifications, support in providers
- OLE DB providers, creating
ms.assetid: bdfd5c9f-1c6f-4098-822c-dd650e70ab82
ms.openlocfilehash: d3f8314e7cd57617e35e50a67a4562d4055cb93a
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59024739"
---
# <a name="creating-an-updatable-provider"></a>Creazione di un provider aggiornabile

Visual C++ supporta i provider in grado di aggiornare o provider aggiornabili (scrivere) nell'archivio dati. In questo argomento illustra come creare provider aggiornabile usando i modelli OLE DB.

Questo argomento si presuppone che si inizi con un provider utilizzabile. Esistono due passaggi per la creazione di un provider aggiornabile. È prima necessario decidere come il provider verrà apportate modifiche all'archivio dati; in particolare, se le modifiche devono essere eseguite immediatamente o posticipata fino a quando non viene eseguito un comando update. La sezione "[rendendo provider aggiornabili](#vchowmakingprovidersupdatable)" descrive le modifiche e le impostazioni necessarie nel codice del provider.

Successivamente, è necessario assicurarsi che di provider contiene tutte le funzionalità necessarie per supportare che il consumer può richiedere di esso. Se l'utente vuole aggiornare l'archivio dati, il provider deve contenere codice che rende persistenti i dati nell'archivio dati. Ad esempio, si potrebbe usare la libreria Run-Time di C o MFC per eseguire queste operazioni nell'origine dati. La sezione "[scrittura all'origine dati](#vchowwritingtothedatasource)" viene descritto come scrivere nell'origine dati, gestire i valori NULL e predefiniti e impostare i flag di colonna.

> [!NOTE]
> [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) è riportato un esempio di un provider aggiornabile. UpdatePV è uguale a MyProv, ma con il supporto aggiornabile.

##  <a name="vchowmakingprovidersupdatable"></a> Provider di rendere aggiornabili

La chiave per prendere un provider aggiornabile è comprendere le operazioni che si desidera che il provider per eseguire l'archivio dati e come si desidera che il provider per eseguire tali operazioni. In particolare, il problema principale è che gli aggiornamenti nell'archivio dati sono per essere eseguita immediatamente o posticipata (batch) fino a quando non viene eseguito un comando update.

È prima necessario decidere se si desidera ereditare `IRowsetChangeImpl` o `IRowsetUpdateImpl` nella classe del set di righe. A seconda di quale di questi si sceglie di implementare, saranno interessate le funzionalità dei tre metodi: `SetData`, `InsertRows`, e `DeleteRows`.

- Se si eredita da [IRowsetChangeImpl](../../data/oledb/irowsetchangeimpl-class.md), chiamando questi tre metodi modificato immediatamente l'archivio dati.

- Se si eredita da [IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md), i metodi di rinviare le modifiche all'archivio dati finché non si chiama `Update`, `GetOriginalData`, o `Undo`. Se l'aggiornamento implica molte modifiche, vengono eseguiti in modalità batch (si noti che l'invio in batch delle modifiche può aggiungere overhead notevole della memoria).

Si noti che `IRowsetUpdateImpl` deriva da `IRowsetChangeImpl`. Di conseguenza, `IRowsetUpdateImpl` offre solo modifica funzionalità oltre a funzionalità di batch.

### <a name="to-support-updatability-in-your-provider"></a>Per supportare aggiornabilità nel provider

1. Nella classe del set di righe, ereditare `IRowsetChangeImpl` o `IRowsetUpdateImpl`. Queste classi forniscono interfacce appropriate per modificare l'archivio dati:

   **Aggiunta di IRowsetChange**

   Aggiungere `IRowsetChangeImpl` alla catena di ereditarietà usando questo formato:

    ```cpp
    IRowsetChangeImpl< rowset-name, storage-name >
    ```

   Aggiungere inoltre `COM_INTERFACE_ENTRY(IRowsetChange)` per il `BEGIN_COM_MAP` sezione nella classe del set di righe.

   **Aggiunta di IRowsetUpdate**

   Aggiungere `IRowsetUpdate` alla catena di ereditarietà usando questo formato:

    ```cpp
    IRowsetUpdateImpl< rowset-name, storage>
    ```

   > [!NOTE]
   > È necessario rimuovere il `IRowsetChangeImpl` riga dalla catena di ereditarietà. Questa eccezione per la direttiva menzionata in precedenza deve includere il codice per `IRowsetChangeImpl`.

1. Aggiungere il codice seguente alla mappa COM (`BEGIN_COM_MAP ... END_COM_MAP`):

   |  Se si implementa   |           Aggiungere alla mappa COM             |
   |---------------------|--------------------------------------|
   | `IRowsetChangeImpl` | `COM_INTERFACE_ENTRY(IRowsetChange)` |
   | `IRowsetUpdateImpl` | `COM_INTERFACE_ENTRY(IRowsetUpdate)` |

   | Se si implementa | Aggiungere alla mappa proprietà |
   |----------------------|-----------------------------|
   | `IRowsetChangeImpl` | `PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)` |
   | `IRowsetUpdateImpl` | `PROPERTY_INFO_ENTRY_VALUE(IRowsetUpdate, VARIANT_FALSE)` |

1. Nel comando, aggiungere il codice seguente alla mappa del set di proprietà (`BEGIN_PROPSET_MAP ... END_PROPSET_MAP`):

   |  Se si implementa   |                                             Aggiungere alla mappa proprietà                                              |
   |---------------------|------------------------------------------------------------------------------------------------------------------|
   | `IRowsetChangeImpl` |                            `PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)`                             |
   | `IRowsetUpdateImpl` | `PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)PROPERTY_INFO_ENTRY_VALUE(IRowsetUpdate, VARIANT_FALSE)` |

1. Nel mapping dei set di proprietà, è necessario anche includere tutte le impostazioni seguenti riportati di seguito:

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

   È possibile trovare i valori usati in queste chiamate della macro esaminando in Atldb. h per l'ID di proprietà e i valori (se Atldb. h è diverso dalla documentazione online, Atldb. h sostituisce la documentazione).

   > [!NOTE]
   > Numero dei `VARIANT_FALSE` e `VARIANT_TRUE` impostazioni sono necessarie per i modelli OLE DB; indica che la specifica OLE DB possono essere di lettura/scrittura, ma i modelli OLE DB possono supportare solo un valore.

   **Se si implementa IRowsetChangeImpl**

   Se si implementa `IRowsetChangeImpl`, è necessario impostare le proprietà seguenti per il provider. Queste proprietà vengono utilizzate principalmente per richiedere interfacce tramite `ICommandProperties::SetProperties`.

   - `DBPROP_IRowsetChange`: Verrà impostata automaticamente `DBPROP_IRowsetChange`.

   - `DBPROP_UPDATABILITY`: Maschera di bit che specifica i metodi supportati in `IRowsetChange`: `SetData`, `DeleteRows`, o `InsertRow`.

   - `DBPROP_CHANGEINSERTEDROWS`: Il consumer può chiamare `IRowsetChange::DeleteRows` o `SetData` per le righe appena inserite.

   - `DBPROP_IMMOBILEROWS`: Set di righe non verranno riordinate righe inserite o aggiornate.

   **Se si implementa IRowsetUpdateImpl**

   Se si implementa `IRowsetUpdateImpl`, è necessario impostare anche le proprietà seguenti per il provider a tutte le proprietà per `IRowsetChangeImpl` elencate in precedenza:

   - `DBPROP_IRowsetUpdate`.

   - `DBPROP_OWNINSERT`: Deve essere VARIANT_TRUE e READ_ONLY.

   - `DBPROP_OWNUPDATEDELETE`: Deve essere VARIANT_TRUE e READ_ONLY.

   - `DBPROP_OTHERINSERT`: Deve essere VARIANT_TRUE e READ_ONLY.

   - `DBPROP_OTHERUPDATEDELETE`: Deve essere VARIANT_TRUE e READ_ONLY.

   - `DBPROP_REMOVEDELETED`: Deve essere VARIANT_TRUE e READ_ONLY.

   - `DBPROP_MAXPENDINGROWS`.

   > [!NOTE]
   > Se si supportano le notifiche, potrebbe essere anche altre proprietà non corretta. vedere la sezione sulla `IRowsetNotifyCP` per questo elenco.

##  <a name="vchowwritingtothedatasource"></a> La scrittura all'origine dati

Per leggere dall'origine dati, chiamare il `Execute` (funzione). Per scrivere nell'origine dati, chiamare il `FlushData` (funzione). (In senso generale, scaricamento mezzi per salvare le modifiche apportate a una tabella o indice su disco).

```cpp
FlushData(HROW, HACCESSOR);
```

L'handle di riga (HROW) e gli argomenti di handle (HACCESSOR) della funzione di accesso consentono di specificare l'area in cui scrivere. In genere, si scrittura un singolo campo dati alla volta.

Il `FlushData` metodo scrive i dati nel formato in cui è stato archiviato originalmente. Se non si esegue l'override di questa funzione, il provider funzioneranno correttamente ma le modifiche non verranno scaricate nell'archivio dati.

### <a name="when-to-flush"></a>Quando lo scaricamento

I modelli di provider chiamano FlushData ogni volta che i dati devono essere scritti nell'archivio dati; Ciò in genere (ma non sempre) si verifica come risultato di chiamate alle funzioni seguenti:

- `IRowsetChange::DeleteRows`

- `IRowsetChange::SetData`

- `IRowsetChange::InsertRows` (se sono presenti nuovi dati da inserire nella riga)

- `IRowsetUpdate::Update`

### <a name="how-it-works"></a>Come funziona

Il consumer effettua una chiamata che richiede uno scaricamento (ad esempio Update) e questa chiamata viene passata al provider, che esegue sempre le operazioni seguenti:

- Le chiamate `SetDBStatus` ogni volta che si dispone di un valore di stato associato.

- Controlla il flag di colonna.

- Chiama `IsUpdateAllowed`.

Questi tre passaggi garantiscono la protezione. Chiama quindi il provider `FlushData`.

### <a name="how-to-implement-flushdata"></a>Come implementare FlushData

Per implementare `FlushData`, è necessario prendere in considerazione diversi fattori:

Assicurarsi che l'archivio dati può gestire le modifiche.

La gestione dei valori NULL.

### <a name="handling-default-values"></a>Gestire i valori predefiniti.

Per implementare il proprio `FlushData` metodo, è necessario:

- Passare alla classe del set di righe.

- Nel set di righe classe inserire la dichiarazione di:

   ```cpp
   HRESULT FlushData(HROW, HACCESSOR)
   {
      // Insert your implementation here and return an HRESULT.
   }
   ```

- Fornire un'implementazione di `FlushData`.

L'implementazione di `FlushData` archivia solo le righe e colonne che vengono effettivamente aggiornate. È possibile usare i parametri di tipo HACCESSOR e HROW per determinare la riga corrente e la colonna viene archiviato per l'ottimizzazione.

In genere, la maggiore difficoltà sta lavorando con il proprio archivio dati nativi. Se possibile, provare a:

- Mantenere il metodo di scrittura nell'archivio di dati più semplice possibile.

- Gestire i valori NULL (facoltativi ma consigliato).

- Gestire i valori predefiniti (facoltativi ma consigliato).

La cosa migliore da fare è avere valori effettivi specificati nell'archivio dati per valori NULL e predefiniti. È consigliabile se è possibile estrapolare tali dati. In caso contrario, consiglia di non consentire valori NULL e predefiniti.

L'esempio seguente illustra come `FlushData` viene implementato nel `RUpdateRowset` classe la `UpdatePV` esempio (vedere rowset nel codice di esempio):

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

Per il provider gestire le modifiche, è necessario innanzitutto assicurarsi che l'archivio dati (ad esempio un file di testo o file video) con funzionalità che consentono di apportare modifiche su di esso. In caso contrario, è necessario creare separatamente che il codice dal progetto del provider.

### <a name="handling-null-data"></a>La gestione dati NULL

È possibile che un utente finale invia i dati NULL. Quando si scrivono i valori NULL per i campi dell'origine dati, si possono verificare problemi potenziali. Si immagini un'applicazione di immissione di ordini che accetta i valori per città e CAP. sarà possibile accettare i valori di uno o entrambi, ma non nessuno, perché in tal caso sarebbe impossibile recapito. Pertanto necessario limitare determinate combinazioni di valori NULL nei campi appropriati per l'applicazione.

Lo sviluppatore di provider, è necessario valutare come verranno archiviati i dati, come verranno letti i dati dall'archivio dati e come si specifica che all'utente. In particolare, è necessario considerare come modificare lo stato dei dati dei set di righe di dati nell'origine dati (ad esempio DataStatus = NULL). Decidere quale valore da restituire quando un utente accede a un campo contenente un valore NULL.

Esaminare il codice dell'esempio UpdatePV; viene illustrato come un provider può gestire i dati NULL. Nell'esempio UpdatePV, il provider archivia i dati NULL scrivendo la stringa "NULL" nell'archivio dati. Quando legge i dati NULL dall'archivio dati, tale stringa viene quindi svuota il buffer, creazione di una stringa NULL. htm. Include inoltre un override di `IRowsetImpl::GetDBStatus` in cui si restituisce DBSTATUS_S_ISNULL se tale valore è vuoto.

### <a name="marking-nullable-columns"></a>Contrassegno delle colonne ammette valori null

Se si implementa anche i set di righe dello schema (vedere `IDBSchemaRowsetImpl`), l'implementazione deve specificare nel set di righe DBSCHEMA_COLUMNS (in genere contrassegnati nel provider con CxxxSchemaColSchemaRowset) che la colonna è nullable.

Devi anche specificare che tutte le colonne nullable contengano il valore DBCOLUMNFLAGS_ISNULLABLE nella versione del `GetColumnInfo`.

Nell'implementazione di modelli OLE DB, se non si riesce a contrassegnare le colonne che ammette valori null, il provider presuppone che si deve contenere un valore e non consentirà al consumer di inviare valori null.

L'esempio seguente illustra come il `CommonGetColInfo` funzione è implementata nel CUpdateCommand (vedere UpProvRS) in UpdatePV. Si noti come le colonne hanno DBCOLUMNFLAGS_ISNULLABLE per le colonne nullable.

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

Oltre ai valori NULL, l'utente è tenuto a gestire le modifiche ai valori predefiniti.

Il valore predefinito `FlushData` e `Execute` consiste nel restituire S_OK. Pertanto, se non si esegue l'override di questa funzione, le modifiche vengano visualizzate abbia esito positivo (verrà restituito S_OK), ma non verrà trasmesso all'archivio dati.

Nel `UpdatePV` esempio (in rowset), il `SetDBStatus` metodo gestisce i valori predefiniti, come indicato di seguito:

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

Se si supportano i valori predefiniti per le colonne, è necessario impostarla usando i metadati nel \<classe provider\>SchemaRowset classe. Impostare `m_bColumnHasDefault = VARIANT_TRUE`.

È anche la responsabilità di impostare il flag di colonna, che vengono specificate mediante il DBCOLUMNFLAGS tipo enumerato. I flag di colonna vengono descritte le caratteristiche della colonna.

Ad esempio, nelle `CUpdateSessionColSchemaRowset` classe `UpdatePV` (in Session. h), la prima colonna è impostata in questo modo:

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

Questo codice specifica, tra le altre cose, che la colonna supporta un valore predefinito pari a 0, che essere scrivibile, e che tutti i dati della colonna hanno la stessa lunghezza. Se si desidera che i dati in una colonna a lunghezza variabile, non si imposterebbe questo flag.

## <a name="see-also"></a>Vedere anche

[Creazione di un provider OLE DB](creating-an-ole-db-provider.md)