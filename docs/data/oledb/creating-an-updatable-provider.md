---
title: Creazione di un Provider aggiornabile | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB providers, updatable
- notifications, support in providers
- OLE DB providers, creating
ms.assetid: bdfd5c9f-1c6f-4098-822c-dd650e70ab82
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 317ccd043b3a69489f9cbd2737ad7741389863c5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33098641"
---
# <a name="creating-an-updatable-provider"></a>Creazione di un provider aggiornabile
Visual C++ supporta provider aggiornabile o i provider che è possibile aggiornare (scrivere) nell'archivio dati. In questo argomento viene illustrato come creare provider aggiornabili utilizzando i modelli OLE DB.  
  
 In questo argomento si presuppone che si inizi con un provider utilizzabile. Sono disponibili due passaggi per la creazione di un provider aggiornabile. È innanzitutto necessario decidere come il provider verrà apportate modifiche all'archivio dati; in particolare, se le modifiche devono essere effettuate immediatamente o posticipata finché non viene eseguito un comando di aggiornamento. La sezione "[provider per renderli aggiornabili](#vchowmakingprovidersupdatable)" descrive le modifiche e le impostazioni necessarie nel codice del provider.  
  
 Successivamente, è necessario assicurarsi che provider contiene tutte le funzionalità per supportare che il consumer può richiedere di esso. Se il consumer deve aggiornare l'archivio dati, il provider deve contenere codice che mantiene i dati nell'archivio dati. Ad esempio, utilizzare la libreria di Run-Time C o MFC per eseguire tali operazioni sull'origine dati. La sezione "[scrittura all'origine dati](#vchowwritingtothedatasource)" viene descritto come scrivere l'origine dati, gestire **NULL** e i valori predefiniti e impostare i flag di colonna.  
  
> [!NOTE]
>  UpdatePV è un esempio di un provider aggiornabile. UpdatePV è uguale a MyProv, ma con supporto aggiornabile.  
  
##  <a name="vchowmakingprovidersupdatable"></a> Rendendo provider aggiornabili  
 La chiave per la creazione di un provider aggiornabile è comprendere quali operazioni si desidera che il provider esegua all'archivio dati e come si vuole che il provider per eseguire tali operazioni. In particolare, il problema principale è che gli aggiornamenti all'archivio dati devono essere eseguita immediatamente o posticipata (batch) fino a quando non viene eseguito un comando di aggiornamento.  
  
 È innanzitutto necessario decidere se ereditare da `IRowsetChangeImpl` o `IRowsetUpdateImpl` nella classe del set di righe. In base all'implementazione scelta, saranno interessate le funzionalità dei tre metodi: `SetData`, **InsertRows**, e `DeleteRows`.  
  
-   Se si eredita da [IRowsetChangeImpl](../../data/oledb/irowsetchangeimpl-class.md), chiamando questi tre metodi modificato immediatamente l'archivio dati.  
  
-   Se si eredita da [IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md), i metodi di rinviare le modifiche all'archivio dati finché non si chiama **aggiornamento**, `GetOriginalData`, o **Annulla**. Se l'aggiornamento comporta diverse modifiche, esse vengono eseguite in modalità batch (si noti che l'invio in batch di modifiche può aggiungere overhead di memoria considerevole).  
  
 Si noti che `IRowsetUpdateImpl` deriva da `IRowsetChangeImpl`. Di conseguenza, `IRowsetUpdateImpl` offre solo modifica funzionalità oltre a funzionalità di batch.  
  
#### <a name="to-support-updatability-in-your-provider"></a>Per supportare l'aggiornamento nel provider  
  
1.  Nella classe del set di righe, ereditare da `IRowsetChangeImpl` o `IRowsetUpdateImpl`. Queste classi forniscono interfacce appropriate per modificare l'archivio dati:  
  
     **Aggiunta di IRowsetChange**  
  
     Aggiungere `IRowsetChangeImpl` alla catena di ereditarietà di utilizzo del formato:  
  
    ```  
    IRowsetChangeImpl< rowset-name, storage-name >  
    ```  
  
     Aggiungere inoltre `COM_INTERFACE_ENTRY(IRowsetChange)` per il `BEGIN_COM_MAP` sezione nella classe del set di righe.  
  
     **Aggiunta di IRowsetUpdate**  
  
     Aggiungere `IRowsetUpdate` alla catena di ereditarietà di utilizzo del formato:  
  
    ```  
    IRowsetUpdateImpl< rowset-name, storage>  
    ```  
  
    > [!NOTE]
    >  È necessario rimuovere il `IRowsetChangeImpl` riga dalla catena di ereditarietà. Questa eccezione alla direttiva indicata in precedenza deve includere il codice per `IRowsetChangeImpl`.  
  
2.  Aggiungere quanto segue alla mappa COM (**BEGIN_COM_MAP... END_COM_MAP**):  
  
    |Se si implementa|Aggiungere alla mappa COM|  
    |----------------------|--------------------|  
    |`IRowsetChangeImpl`|`COM_INTERFACE_ENTRY(IRowsetChange)`|  
    |`IRowsetUpdateImpl`|`COM_INTERFACE_ENTRY(IRowsetChange)COM_INTERFACE_ENTRY(IRowsetUpdate)`|  
  
3.  Nel comando, aggiungere quanto segue alla mappa del set di proprietà (**BEGIN_PROPSET_MAP... END_PROPSET_MAP**):  
  
    |Se si implementa|Aggiungere alla mappa di set di proprietà|  
    |----------------------|-----------------------------|  
    |`IRowsetChangeImpl`|`PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)`|  
    |`IRowsetUpdateImpl`|`PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)PROPERTY_INFO_ENTRY_VALUE(IRowsetUpdate, VARIANT_FALSE)`|  
  
4.  Nel mapping dei set di proprietà, è necessario anche includere tutte le seguenti impostazioni riportate di seguito:  
  
    ```  
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
  
     È possibile trovare i valori utilizzati per queste chiamate della macro cercando in Atldb. h per l'ID di proprietà e i valori (se Atldb. h è diverso dalla documentazione online, Atldb. h sostituisce la documentazione).  
  
    > [!NOTE]
    >  Molti di **VARIANT_FALSE** e `VARIANT_TRUE` impostazioni sono necessarie per i modelli OLE DB; la specifica OLE DB è indicato che possono essere in lettura/scrittura, ma i modelli OLE DB possono supportare solo un valore.  
  
     **Se si implementa IRowsetChangeImpl**  
  
     Se si implementa `IRowsetChangeImpl`, è necessario impostare le proprietà seguenti per il provider. Queste proprietà vengono utilizzate principalmente per richiedere interfacce tramite **ICommandProperties:: SetProperties**.  
  
    -   `DBPROP_IRowsetChange`: Verrà impostata automaticamente **DBPROP_IRowsetChange**.  
  
    -   `DBPROP_UPDATABILITY`: Una maschera di bit che specifica i metodi supportati `IRowsetChange`: `SetData`, `DeleteRows`, o `InsertRow`.  
  
    -   `DBPROP_CHANGEINSERTEDROWS`: Il consumer può chiamare **IRowsetChange:: DeleteRows** o `SetData` per le righe appena inserite.  
  
    -   `DBPROP_IMMOBILEROWS`: Set di righe non riordinerà le righe inserite o aggiornate.  
  
     **Se si implementa IRowsetUpdateImpl**  
  
     Se si implementa `IRowsetUpdateImpl`, è necessario impostare le proprietà seguenti per il provider inoltre a tutte le proprietà per `IRowsetChangeImpl` elencati in precedenza:  
  
    -   `DBPROP_IRowsetUpdate`.  
  
    -   `DBPROP_OWNINSERT`: Deve essere READ_ONLY e VARIANT_TRUE.  
  
    -   `DBPROP_OWNUPDATEDELETE`: Deve essere READ_ONLY e VARIANT_TRUE.  
  
    -   `DBPROP_OTHERINSERT`: Deve essere READ_ONLY e VARIANT_TRUE.  
  
    -   `DBPROP_OTHERUPDATEDELETE`: Deve essere READ_ONLY e VARIANT_TRUE.  
  
    -   `DBPROP_REMOVEDELETED`: Deve essere READ_ONLY e VARIANT_TRUE.  
  
    -   `DBPROP_MAXPENDINGROWS`.  
  
        > [!NOTE]
        >  Se si supportano le notifiche, potrebbe essere anche altre proprietà. vedere la sezione `IRowsetNotifyCP` per questo elenco.  
  
     Ad esempio di come vengono impostate le proprietà, vedere la proprietà di mappa **CUpdateCommand** (in rowset) in [UpdatePV](http://msdn.microsoft.com/en-us/c8bed873-223c-4a7d-af55-f90138c6f38f).  
  
##  <a name="vchowwritingtothedatasource"></a> Scrittura all'origine dati  
 Per leggere dall'origine dati, chiamare il **Execute** (funzione). Per scrivere l'origine dati, chiamare il `FlushData` (funzione). (In senso generale, scaricamento mezzi per salvare le modifiche apportate a una tabella o indice su disco).  
  
```  
FlushData(HROW, HACCESSOR);  
```  
  
 L'handle di riga (*HROW*) e l'handle di accesso (*HACCESSOR*) argomenti consentono di specificare l'area in cui scrivere. In genere si scrive un singolo campo dati alla volta.  
  
 Il `FlushData` metodo scrive i dati nel formato in cui è memorizzato in origine. Se non si esegue l'override di questa funzione, il provider funzionerà correttamente, ma le modifiche non verranno scaricate nell'archivio dati.  
  
### <a name="when-to-flush"></a>Quando lo scaricamento  
 La chiamata di modelli di provider `FlushData` ogni volta che i dati devono essere scritte nell'archivio dati; ciò in genere (ma non sempre) si verifica come risultato di chiamate alle funzioni seguenti:  
  
-   **IRowsetChange::DeleteRows**  
  
-   **IRowsetChange::SetData**  
  
-   **IRowsetChange::** (se è disponibile nuovi dati da inserire nella riga)  
  
-   **IRowsetUpdate::Update**  
  
### <a name="how-it-works"></a>Come funziona  
 Il consumer effettua una chiamata che richiede uno scaricamento (ad esempio **aggiornamento**) e la chiamata viene passata al provider, che esegue sempre le operazioni seguenti:  
  
-   Chiamate `SetDBStatus` ogni volta che si dispone di un valore di stato associato (vedere *Guida per programmatori OLE DB*, capitolo 6, *le parti di dati: stato*).  
  
-   Controlla il flag di colonna.  
  
-   Chiama `IsUpdateAllowed`.  
  
 Questi tre passaggi garantiscono la protezione. Il provider chiama quindi `FlushData`.  
  
### <a name="how-to-implement-flushdata"></a>Come implementare FlushData  
 Per implementare `FlushData`, è necessario prendere in considerazione diversi fattori:  
  
-   Assicurarsi che l'archivio dati è possibile gestire le modifiche.  
  
-   Gestione **NULL** valori.  
  
-   Gestire i valori predefiniti.  
  
 Per implementare la propria `FlushData` metodo, è necessario:  
  
-   Passare alla classe del set di righe.  
  
-   Nel set di righe classe inserire la dichiarazione di:  
  
```  
HRESULT FlushData(HROW, HACCESSOR)  
{  
    // Insert your implementation here and return an HRESULT.  
}  
```  
  
-   Fornire un'implementazione di `FlushData`.  
  
 L'implementazione di `FlushData` archivia solo le righe e colonne che vengono effettivamente aggiornate. È possibile utilizzare il *HROW* e *HACCESSOR* parametri per determinare la riga corrente e la colonna viene archiviata per l'ottimizzazione.  
  
 In genere, la sfida collabora con un archivio di dati nativi. Se possibile, provare a:  
  
-   Mantenere il metodo di scrittura nell'archivio di dati più semplice possibile.  
  
-   Gestire **NULL** values (facoltativo ma consigliato).  
  
-   Gestire i valori predefiniti (facoltativi ma consigliato).  
  
 Il modo migliore per eseguire è che i valori effettivi specificati nell'archivio dati per **NULL** e i valori predefiniti. È consigliabile se è possibile estrapolare tali dati. Se non consiglia di non consentire **NULL** e i valori predefiniti.  
  
 Nell'esempio seguente come `FlushData` viene implementato nel `RUpdateRowset` classe il [UpdatePV](http://msdn.microsoft.com/en-us/c8bed873-223c-4a7d-af55-f90138c6f38f) esempio (vedere rowset nel codice di esempio):  
  
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
 Per gestire le modifiche dal provider, è innanzitutto necessario assicurarsi che l'archivio dati (ad esempio un file di testo o file video) ha le funzionalità che consentono di apportare modifiche. In caso contrario, è necessario creare tale codice separatamente dal progetto del provider.  
  
### <a name="handling-null-data"></a>Gestione dati NULL  
 È possibile che un utente finale invierà **NULL** dati. Quando si scrive **NULL** valori ai campi dell'origine dati, si possono verificare problemi potenziali. Si immagini un'applicazione di immissione di ordini che accetta i valori per città e CAP. sarà possibile accettare i valori di uno o entrambi, ma non nessuno, perché in questo caso sarebbe impossibile recapito. Pertanto è necessario limitare alcune combinazioni di **NULL** valori nei campi appropriati per l'applicazione.  
  
 Gli sviluppatori di provider, è necessario considerare come verranno memorizzati tali dati, come verranno letti i dati dall'archivio dati e come è possibile specificare che all'utente. In particolare, è necessario considerare come modificare lo stato di dati di set di righe di dati nell'origine dati (ad esempio DataStatus = **NULL**). Decidere quale valore da restituire quando un utente accede a un campo contenente un **NULL** valore.  
  
 Esaminare il codice nel [UpdatePV](http://msdn.microsoft.com/en-us/c8bed873-223c-4a7d-af55-f90138c6f38f) ; esempio viene illustrato come è possibile gestire un provider **NULL** dati. Nell'esempio UpdatePV, il provider Archivia **NULL** dati scrivendo la stringa "NULL" nell'archivio dati. Quando legge **NULL** archiviano i dati dai dati, della stringa e quindi svuota il buffer, la creazione di un **NULL** stringa. Include inoltre un override di `IRowsetImpl::GetDBStatus` in cui viene restituito **DBSTATUS_S_ISNULL** se tale valore è vuoto.  
  
### <a name="marking-nullable-columns"></a>Contrassegno delle colonne che ammettono valori null  
 Se si implementano anche rowset dello schema (vedere `IDBSchemaRowsetImpl`), l'implementazione deve essere specificato nella **DBSCHEMA_COLUMNS** set di righe (in genere contrassegnati nel provider da **C***xxx*** SchemaColSchemaRowset**) che la colonna è nullable.  
  
 È inoltre necessario specificare che tutte le colonne che ammettono valori null contengono il **DBCOLUMNFLAGS_ISNULLABLE** nella versione del valore di `GetColumnInfo`.  
  
 Nell'implementazione di modelli OLE DB, se non è possibile contrassegnare le colonne che ammettono i valori null, il provider presuppone che si deve contenere un valore e non consentirà al consumer di inviare valori null.  
  
 L'esempio seguente mostra come **CommonGetColInfo** funzione è implementata **CUpdateCommand** (vedere UpProvRS) in UpdatePV. Si noti come le colonne hanno **DBCOLUMNFLAGS_ISNULLABLE** per le colonne che ammettono valori null.  
  
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
 Come con **NULL** dati, è necessario gestire le modifiche ai valori predefiniti.  
  
 Il valore predefinito di `FlushData` e **Execute** deve restituire `S_OK`. Pertanto, se non si esegue l'override di questa funzione, le modifiche vengano visualizzate abbia esito positivo (`S_OK` verrà restituito), ma non verranno trasmesse all'archivio dati.  
  
 Nel [UpdatePV](http://msdn.microsoft.com/en-us/c8bed873-223c-4a7d-af55-f90138c6f38f) sample (in rowset), il `SetDBStatus` metodo gestisce i valori predefiniti, come segue:  
  
```  
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
 Se si supportano i valori predefiniti le colonne, è necessario impostare utilizzando i metadati di  **\< ***classe provider***> SchemaRowset** classe. Impostare *m_bColumnHasDefault* = `VARIANT_TRUE`.  
  
 Inoltre necessario impostare i flag di colonna, vengono specificati utilizzando il **DBCOLUMNFLAGS** tipo enumerato. I flag di colonna vengono descritte le caratteristiche della colonna.  
  
 Ad esempio, nel `CUpdateSessionColSchemaRowset` classe [UpdatePV](http://msdn.microsoft.com/en-us/c8bed873-223c-4a7d-af55-f90138c6f38f) (in Session. h), la prima colonna è impostata in questo modo:  
  
```  
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
  
 Questo codice specifica, ad esempio, che la colonna supporta un valore predefinito di 0, che è scrivibile, e che tutti i dati nella colonna hanno la stessa lunghezza. Se si desiderano che i dati in una colonna a lunghezza variabile, è necessario non impostare questo flag.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)