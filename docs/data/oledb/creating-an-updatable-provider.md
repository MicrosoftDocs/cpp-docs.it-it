---
title: Creazione di un provider aggiornabile
ms.date: 08/16/2018
helpviewer_keywords:
- OLE DB providers, updatable
- notifications, support in providers
- OLE DB providers, creating
ms.assetid: bdfd5c9f-1c6f-4098-822c-dd650e70ab82
ms.openlocfilehash: 720ceba397d17642402de4d44cbb4481852fa153
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365564"
---
# <a name="creating-an-updatable-provider"></a>Creazione di un provider aggiornabile

Visual Cè supporta i provider aggiornabili o provider che possono aggiornare (scrivere) l'archivio dati. In questo argomento viene illustrato come creare provider aggiornabili utilizzando i modelli OLE DB.

In questo argomento si presuppone che si stia iniziando con un provider utilizzabile. Esistono due passaggi per la creazione di un provider aggiornabile. È innanzitutto necessario decidere in che modo il provider apporterà modifiche all'archivio dati. in particolare, se le modifiche devono essere eseguite immediatamente o rinviate fino a quando non viene emesso un comando di aggiornamento. La sezione "[Rendere i provider aggiornabili](#vchowmakingprovidersupdatable)" descrive le modifiche e le impostazioni che è necessario eseguire nel codice del provider.

Successivamente, è necessario assicurarsi che il provider contiene tutte le funzionalità per supportare tutto ciò che il consumer potrebbe richiedere di esso. Se il consumer desidera aggiornare l'archivio dati, deve contenere codice che rende persistenti i dati nell'archivio dati. Ad esempio, è possibile utilizzare la libreria di runtime del linguaggio C o MFC per eseguire tali operazioni sull'origine dati. La sezione "[Scrittura nell'origine dati](#vchowwritingtothedatasource)" descrive come scrivere nell'origine dati, gestire NULL e i valori predefiniti e impostare i flag di colonna.

> [!NOTE]
> [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) è un esempio di provider aggiornabile. UpdatePV è uguale a MyProv ma con supporto aggiornabile.

## <a name="making-providers-updatable"></a><a name="vchowmakingprovidersupdatable"></a>Rendere aggiornabili i provider

La chiave per rendere un provider aggiornabile è comprendere quali operazioni si desidera vengano eseguite dal provider nell'archivio dati e come si desidera che il provider esegua tali operazioni. In particolare, il problema principale è se gli aggiornamenti all'archivio dati devono essere eseguiti immediatamente o posticipati (in batch) fino a quando non viene emesso un comando di aggiornamento.

È innanzitutto necessario decidere `IRowsetChangeImpl` `IRowsetUpdateImpl` se ereditare da o nella classe del set di righe. A seconda di quale di questi si sceglie di implementare, la funzionalità di tre metodi sarà influenzata: `SetData`, `InsertRows`e `DeleteRows`.

- Se si eredita da [IRowsetChangeImpl](../../data/oledb/irowsetchangeimpl-class.md), la chiamata a questi tre metodi modifica immediatamente l'archivio dati.

- Se si eredita da [IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md), i metodi rinviano le modifiche all'archivio dati fino a quando non si chiama `Update`, `GetOriginalData`, o `Undo`. Se l'aggiornamento prevede più modifiche, vengono eseguite in modalità batch (si noti che le modifiche in batch possono aggiungere un notevole sovraccarico di memoria).

Si `IRowsetUpdateImpl` noti `IRowsetChangeImpl`che deriva da . In `IRowsetUpdateImpl` questo modo, offre funzionalità di modifica più funzionalità batch.

### <a name="to-support-updatability-in-your-provider"></a>Per supportare l'aggiornabilità nel providerTo support updatability in your provider

1. Nella classe del set `IRowsetChangeImpl` `IRowsetUpdateImpl`di righe ereditare da o . Queste classi forniscono interfacce appropriate per la modifica dell'archivio dati:These classes provide appropriate interfaces for changing the data store:

   **Aggiunta di IRowsetChange**

   Aggiungi `IRowsetChangeImpl` alla tua catena di ereditarietà utilizzando questo modulo:

    ```cpp
    IRowsetChangeImpl< rowset-name, storage-name >
    ```

   Aggiungere `COM_INTERFACE_ENTRY(IRowsetChange)` anche `BEGIN_COM_MAP` alla sezione nella classe del set di righe.

   **Aggiunta di IRowsetUpdate**

   Aggiungi `IRowsetUpdate` alla tua catena di ereditarietà utilizzando questo modulo:

    ```cpp
    IRowsetUpdateImpl< rowset-name, storage>
    ```

   > [!NOTE]
   > È necessario `IRowsetChangeImpl` rimuovere la riga dalla catena di ereditarietà. Questa eccezione alla direttiva menzionata `IRowsetChangeImpl`in precedenza deve includere il codice per .

1. Aggiungere quanto segue alla`BEGIN_COM_MAP ... END_COM_MAP`mappa COM ( ):

   |  Se si implementa   |           Aggiungi alla mappa COM             |
   |---------------------|--------------------------------------|
   | `IRowsetChangeImpl` | `COM_INTERFACE_ENTRY(IRowsetChange)` |
   | `IRowsetUpdateImpl` | `COM_INTERFACE_ENTRY(IRowsetUpdate)` |

   | Se si implementa | Aggiungi alla mappa dell'insieme di proprietà |
   |----------------------|-----------------------------|
   | `IRowsetChangeImpl` | `PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)` |
   | `IRowsetUpdateImpl` | `PROPERTY_INFO_ENTRY_VALUE(IRowsetUpdate, VARIANT_FALSE)` |

1. Nel comando aggiungere quanto segue alla mappa`BEGIN_PROPSET_MAP ... END_PROPSET_MAP`dell'insieme di proprietà ( ):

   |  Se si implementa   |                                             Aggiungi alla mappa dell'insieme di proprietà                                              |
   |---------------------|------------------------------------------------------------------------------------------------------------------|
   | `IRowsetChangeImpl` |                            `PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)`                             |
   | `IRowsetUpdateImpl` | `PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)PROPERTY_INFO_ENTRY_VALUE(IRowsetUpdate, VARIANT_FALSE)` |

1. Nella mappa dell'insieme di proprietà, è necessario includere anche tutte le impostazioni seguenti come vengono visualizzate di seguito:

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

   È possibile trovare i valori utilizzati in queste chiamate di macro esaminando in Atldb.h gli ID e i valori delle proprietà (se Atldb.h è diverso dalla documentazione online, Atldb.h sostituisce la documentazione).

   > [!NOTE]
   > Molte delle `VARIANT_FALSE` `VARIANT_TRUE` impostazioni e sono richieste dai modelli OLE DB; la specifica OLE DB indica che possono essere di lettura/scrittura, ma i modelli OLE DB possono supportare un solo valore.

   **Se si implementa IRowsetChangeImpl**

   Se si `IRowsetChangeImpl`implementa , è necessario impostare le proprietà seguenti nel provider. Queste proprietà vengono utilizzate principalmente per `ICommandProperties::SetProperties`richiedere interfacce tramite .

   - `DBPROP_IRowsetChange`: impostando questa `DBPROP_IRowsetChange`opzione viene impostato automaticamente .

   - `DBPROP_UPDATABILITY`: maschera di bit che `IRowsetChange`specifica `SetData` `DeleteRows`i `InsertRow`metodi supportati in : , , o .

   - `DBPROP_CHANGEINSERTEDROWS`: il `IRowsetChange::DeleteRows` consumer `SetData` può chiamare o per le righe appena inserite.

   - `DBPROP_IMMOBILEROWS`: il set di righe non riordina le righe inserite o aggiornate.

   **Se si implementa IRowsetUpdateImpl**

   Se si `IRowsetUpdateImpl`implementa , è necessario impostare le proprietà seguenti sul `IRowsetChangeImpl` provider, oltre a impostare tutte le proprietà per le proprietà elencate in precedenza:

   - `DBPROP_IRowsetUpdate`.

   - `DBPROP_OWNINSERT`: deve essere READ_ONLY E VARIANT_TRUE.

   - `DBPROP_OWNUPDATEDELETE`: deve essere READ_ONLY E VARIANT_TRUE.

   - `DBPROP_OTHERINSERT`: deve essere READ_ONLY E VARIANT_TRUE.

   - `DBPROP_OTHERUPDATEDELETE`: deve essere READ_ONLY E VARIANT_TRUE.

   - `DBPROP_REMOVEDELETED`: deve essere READ_ONLY E VARIANT_TRUE.

   - `DBPROP_MAXPENDINGROWS`.

   > [!NOTE]
   > Se si supportano le notifiche, si potrebbe anche avere alcune altre proprietà pure; vedere la `IRowsetNotifyCP` sezione relativa a questo elenco.

## <a name="writing-to-the-data-source"></a><a name="vchowwritingtothedatasource"></a>Scrittura nell'origine datiWriting to the Data Source

Per leggere dall'origine dati, chiamare la `Execute` funzione. Per scrivere nell'origine dati, chiamare la `FlushData` funzione. In senso generale, lo svuotamento significa salvare le modifiche apportate a una tabella o a un indice su disco.

```cpp
FlushData(HROW, HACCESSOR);
```

Gli argomenti dell'handle di riga (HROW) e dell'handle della funzione di accesso (HACCESSOR) consentono di specificare l'area da scrivere. In genere, si scrive un singolo campo dati alla volta.

Il `FlushData` metodo scrive i dati nel formato in cui sono stati originariamente archiviati. Se non si esegue l'override di questa funzione, il provider funzionerà correttamente ma le modifiche non verranno scaricate nell'archivio dati.

### <a name="when-to-flush"></a>Quando scaricare

I modelli di provider chiamano FlushData ogni volta che i dati devono essere scritti nell'archivio dati. questo si verifica in genere (ma non sempre) come risultato di chiamate alle seguenti funzioni:

- `IRowsetChange::DeleteRows`

- `IRowsetChange::SetData`

- `IRowsetChange::InsertRows`(se sono presenti nuovi dati da inserire nella riga)

- `IRowsetUpdate::Update`

### <a name="how-it-works"></a>Come funziona

Il consumer effettua una chiamata che richiede uno scaricamento (ad esempio Update) e questa chiamata viene passata al provider, che esegue sempre le operazioni seguenti:The consumer makes a call that requires a flush (such as Update) and this call is passed to the provider, which always does the following:

- Chiama `SetDBStatus` ogni volta che si dispone di un valore di stato associato.

- Controlla i flag di colonna.

- Chiama `IsUpdateAllowed`.

Questi tre passaggi contribuiscono a garantire la sicurezza. Quindi il `FlushData`provider chiama .

### <a name="how-to-implement-flushdata"></a>Come implementare FlushData

Per `FlushData`implementare , è necessario prendere in considerazione diversi problemi:

Assicurarsi che l'archivio dati sia in grado di gestire le modifiche.

Gestione dei valori NULL.

### <a name="handling-default-values"></a>Gestione dei valori predefiniti.

Per implementare `FlushData` un metodo personalizzato, è necessario:To implement your own method, you need to:

- Passare alla classe del set di righe.

- Nella classe rowset inserire la dichiarazione di:

   ```cpp
   HRESULT FlushData(HROW, HACCESSOR)
   {
      // Insert your implementation here and return an HRESULT.
   }
   ```

- Fornire un'implementazione di `FlushData`.

Una buona `FlushData` implementazione di archivia solo le righe e le colonne effettivamente aggiornate. È possibile utilizzare i parametri HROW e HACCESSOR per determinare la riga e la colonna correnti archiviate per l'ottimizzazione.

In genere, la sfida più grande consiste nell'utilizzare il proprio archivio dati nativo. Se possibile, provare a:

- Mantenere il metodo di scrittura nell'archivio dati il più semplice possibile.

- Gestire i valori NULL (facoltativo ma consigliato).

- Gestire i valori predefiniti (facoltativo ma consigliato).

La cosa migliore da fare è avere i valori specificati effettivi nell'archivio dati per i valori NULL e predefiniti. È meglio estrapolare questi dati. In caso contrario, si consiglia di non consentire valori NULL e predefiniti.

L'esempio seguente `FlushData` mostra come `RUpdateRowset` viene `UpdatePV` implementato nella classe nell'esempio (vedere Rowset.h nel codice di esempio):The following example shows how is implemented in the class in the sample (see Rowset.h in the sample code):

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

### <a name="handling-changes"></a>Gestione delle modificheHandling Changes

Affinché il provider gestisca le modifiche, è innanzitutto necessario assicurarsi che l'archivio dati (ad esempio un file di testo o un file video) disponga di strutture che consentono di apportare modifiche. In caso contrario, è necessario creare tale codice separatamente dal progetto provider.

### <a name="handling-null-data"></a>Gestione dei dati NULLHandling NULL Data

È possibile che un utente finale invierà dati NULL. Quando si scrivono valori NULL nei campi nell'origine dati, possono essere presenti potenziali problemi. Immaginate un'applicazione per l'ordinazione che accetta valori per città e codice postale; potrebbe accettare uno o entrambi i valori, ma non nessuno dei due, perché in tal caso la consegna sarebbe impossibile. È pertanto necessario limitare determinate combinazioni di valori NULL nei campi che hanno senso per l'applicazione.

In qualità di sviluppatore del provider, è necessario considerare come verranno archiviati, come verranno letti dall'archivio dati e come specificarli all'utente. In particolare, è necessario considerare come modificare lo stato dei dati del set di righe nell'origine dati (ad esempio, DataStatus - NULL). È possibile decidere quale valore restituire quando un consumer accede a un campo contenente un valore NULL.

Esaminare il codice nell'esempio UpdatePV; viene illustrato come un provider può gestire i dati NULL. In UpdatePV, il provider archivia i dati NULL scrivendo la stringa "NULL" nell'archivio dati. Quando legge i dati NULL dall'archivio dati, vede tale stringa e quindi svuota il buffer, creando una stringa NULL. Ha anche un `IRowsetImpl::GetDBStatus` override di in cui restituisce DBSTATUS_S_ISNULL se il valore di dati è vuoto.

### <a name="marking-nullable-columns"></a>Contrassegno di colonne nullableMarking Nullable Columns

Se si implementano anche `IDBSchemaRowsetImpl`rowset dello schema (vedere ), l'implementazione deve specificare nel DBSCHEMA_COLUMNS set di righe (in genere contrassegnato nel provider da CxxxSchemaColSchemaRowset) che la colonna è nullable.

È inoltre necessario specificare che tutte le colonne nullable `GetColumnInfo`contengono il valore DBCOLUMNFLAGS_ISNULLABLE nella versione di .

Nell'implementazione dei modelli OLE DB, se non si riesce a contrassegnare le colonne come nullable, il provider presuppone che devono contenere un valore e non consentirà al consumer di inviargli valori null.

Nell'esempio seguente `CommonGetColInfo` viene illustrata l'implementazione della funzione in CUpdateCommand (vedere UpProvRS.cpp) in UpdatePV. Si noti come le colonne hanno questo DBCOLUMNFLAGS_ISNULLABLE per le colonne che possono essere annullato.

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

Come per i dati NULL, è necessario gestire la modifica dei valori predefiniti.

L'impostazione predefinita di `FlushData` e `Execute` deve restituire S_OK. Pertanto, se non si esegue l'override di questa funzione, le modifiche sembrano avere esito positivo (S_OK verranno restituite), ma non verranno trasmesse all'archivio dati.

Nell'esempio `UpdatePV` (in Rowset.h), il metodo gestisce i `SetDBStatus` valori predefiniti come segue:

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

Se si supportano valori predefiniti nelle colonne, è \<necessario\>impostarlo utilizzando i metadati nella classe provider SchemaRowset classe. Impostare `m_bColumnHasDefault = VARIANT_TRUE`.

È inoltre necessario impostare i flag di colonna, specificati utilizzando il tipo enumerato DBCOLUMNFLAGS. I flag di colonna descrivono le caratteristiche delle colonne.

Ad esempio, `CUpdateSessionColSchemaRowset` nella `UpdatePV` classe in (in Session.h), la prima colonna viene impostata in questo modo:For example, in the class in (in Session.h), the first column is set up this way:

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

Questo codice specifica, tra le altre cose, che la colonna supporta un valore predefinito pari a 0, che è scrivibile e che tutti i dati nella colonna hanno la stessa lunghezza. Se si desidera che i dati in una colonna abbiano una lunghezza variabile, non è necessario impostare questo flag.

## <a name="see-also"></a>Vedere anche

[Creazione di un provider OLE DBCreating an OLE DB Provider](creating-an-ole-db-provider.md)
