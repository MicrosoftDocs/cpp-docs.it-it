---
title: "Creazione di un provider aggiornabile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "notifiche, supporto nei provider"
  - "provider OLE DB, creazione"
  - "provider OLE DB, aggiornabile"
ms.assetid: bdfd5c9f-1c6f-4098-822c-dd650e70ab82
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Creazione di un provider aggiornabile
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In Visual C\+\+ 6.0 erano supportati solo provider in sola lettura.  In Visual C\+\+ .NET sono supportati provider aggiornabili, ovvero provider in grado di aggiornare l'archivio dati scrivendovi dati.  In questo argomento verrà illustrato come creare provider aggiornabili utilizzando i modelli OLE DB.  
  
 A tal fine si presupporrà l'esistenza di un provider già funzionante.  Per creare un provider aggiornabile sono necessari due passaggi.  In primo luogo è necessario decidere in che modo il provider apporterà modifiche all'archivio dati, in particolare se le modifiche dovranno essere rese effettive immediatamente o solo tramite esecuzione di un comando di aggiornamento.  Nella sezione [Modifica dei provider per renderli aggiornabili](#vchowmakingprovidersupdatable) vengono illustrate le modifiche e le impostazioni necessarie nel codice del provider.  
  
 In secondo luogo è necessario verificare che il provider contenga tutte le funzionalità necessarie per supportare quelle eventualmente richieste dal consumer.  Se il consumer deve aggiornare l'archivio dati, nel provider dovrà essere incluso il codice per la memorizzazione permanente dei dati nell'archivio dati.  Per eseguire queste operazioni sull'origine dati è ad esempio possibile utilizzare la libreria di runtime del linguaggio C o MFC.  Nella sezione [Scrittura nell'origine dati](#vchowwritingtothedatasource) viene descritto come scrivere nell'origine dati, come trattare i valori **NULL** e predefiniti e come impostare i flag di colonna.  
  
> [!NOTE]
>  UpdatePV è un esempio di provider aggiornabile.  È uguale a MyProv, ma con l'aggiunta del supporto per l'aggiornamento.  
  
##  <a name="vchowmakingprovidersupdatable"></a> Modifica dei provider per renderli aggiornabili  
 Per rendere aggiornabile un provider è innanzitutto importante determinare quali operazioni si desidera che il provider esegua sull'archivio dati e in che modo dovranno essere eseguite queste operazioni.  In particolare è importante definire se gli aggiornamenti all'archivio dati dovranno essere eseguiti immediatamente oppure rimandati in batch fino all'esecuzione di un comando di aggiornamento.  
  
 In primo luogo è necessario decidere se ereditare da `IRowsetChangeImpl` o `IRowsetUpdateImpl` nella classe del rowset.  In base all'implementazione scelta, saranno interessate le funzionalità di tre metodi: `SetData`, **InsertRows** e `DeleteRows`.  
  
-   Se si eredita da [IRowsetChangeImpl](../../data/oledb/irowsetchangeimpl-class.md), chiamando questi tre metodi l'archivio dati verrà modificato immediatamente.  
  
-   Se si eredita da [IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md), le modifiche all'archivio dati verranno rimandate fino a quando verrà chiamato **Update**, `GetOriginalData` o **Undo**.  Se l'aggiornamento comprende diverse modifiche, esse verranno apportate in batch. Tenere presente che l'esecuzione di modifiche in batch può comportare un considerevole sovraccarico di memoria.  
  
 `IRowsetUpdateImpl` deriva da `IRowsetChangeImpl` e pertanto offre non solo funzionalità di modifica, ma anche funzionalità di esecuzione in batch.  
  
#### Per rendere aggiornabile un provider  
  
1.  Nella classe del rowset ereditare da `IRowsetChangeImpl` o `IRowsetUpdateImpl`.  Queste classi offrono interfacce corrette per la modifica dell'archivio dati.  
  
     **Aggiunta di IRowsetChange**  
  
     Aggiungere `IRowsetChangeImpl` alla catena di ereditarietà utilizzando il seguente codice:  
  
    ```  
    IRowsetChangeImpl< rowset-name, storage-name >  
    ```  
  
     Aggiungere inoltre `COM_INTERFACE_ENTRY(IRowsetChange)` alla sezione `BEGIN_COM_MAP` della classe del rowset.  
  
     **Aggiunta di IRowsetUpdate**  
  
     Aggiungere `IRowsetUpdate` alla catena di ereditarietà utilizzando il seguente codice:  
  
    ```  
    IRowsetUpdateImpl< rowset-name, storage>  
    ```  
  
    > [!NOTE]
    >  È opportuno rimuovere la riga di `IRowsetChangeImpl` dalla catena di ereditarietà.  Questa eccezione alla direttiva sopra esposta deve includere il codice di `IRowsetChangeImpl`.  
  
2.  Aggiungere quanto segue alla mappa COM \(**BEGIN\_COM\_MAP ... END\_COM\_MAP**\):  
  
    |Implementazione scelta|Codice da aggiungere alla mappa COM|  
    |----------------------------|-----------------------------------------|  
    |`IRowsetChangeImpl`|`COM_INTERFACE_ENTRY(IRowsetChange)`|  
    |`IRowsetUpdateImpl`|`COM_INTERFACE_ENTRY(IRowsetChange)COM_INTERFACE_ENTRY(IRowsetUpdate)`|  
  
3.  Nel comando aggiungere quanto segue alla mappa degli insiemi di proprietà \(**BEGIN\_PROPSET\_MAP ... END\_PROPSET\_MAP**\):  
  
    |Implementazione scelta|Codice da aggiungere alla mappa degli insiemi di proprietà|  
    |----------------------------|----------------------------------------------------------------|  
    |`IRowsetChangeImpl`|`PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)`|  
    |`IRowsetUpdateImpl`|`PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)PROPERTY_INFO_ENTRY_VALUE(IRowsetUpdate, VARIANT_FALSE)`|  
  
4.  Nella mappa degli insiemi di proprietà includere inoltre tutte le impostazioni riportate di seguito:  
  
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
  
     Per conoscere i valori utilizzati in queste chiamate di macro, cercare nel file Atldb.h gli ID e i valori delle proprietà. Se Atldb.h presenta differenze rispetto alla documentazione online, il file è da considerare prioritario rispetto alla documentazione.  
  
    > [!NOTE]
    >  Molte impostazioni di **VARIANT\_FALSE** e `VARIANT_TRUE` sono necessarie per i modelli OLE DB. Nella specifica OLE DB è indicato che possono essere di lettura\/scrittura, tuttavia nei modelli OLE DB è supportato un solo valore.  
  
     **Se si implementa IRowsetChangeImpl**  
  
     Se si implementa `IRowsetChangeImpl`, sarà necessario impostare per il provider le proprietà elencate di seguito.  Queste proprietà sono utilizzate principalmente per richiedere interfacce tramite **ICommandProperties::SetProperties**.  
  
    -   `DBPROP_IRowsetChange`: verrà impostata automaticamente **DBPROP\_IRowsetChange**.  
  
    -   `DBPROP_UPDATABILITY`: maschera di bit che specifica i metodi supportati con `IRowsetChange`, ovvero `SetData`, `DeleteRows` o `InsertRow`.  
  
    -   `DBPROP_CHANGEINSERTEDROWS`: il consumer può chiamare **IRowsetChange::DeleteRows** o `SetData` per le righe appena inserite.  
  
    -   `DBPROP_IMMOBILEROWS`: nel rowset le righe inserite o aggiornate non verranno riordinate.  
  
     **Se si implementa IRowsetUpdateImpl**  
  
     Se si implementa `IRowsetUpdateImpl`, oltre a tutte le proprietà già elencate per `IRowsetChangeImpl` sarà necessario impostare per il provider le seguenti proprietà:  
  
    -   `DBPROP_IRowsetUpdate`.  
  
    -   `DBPROP_OWNINSERT`: deve essere READ\_ONLY e VARIANT\_TRUE.  
  
    -   `DBPROP_OWNUPDATEDELETE`: deve essere READ\_ONLY e VARIANT\_TRUE.  
  
    -   `DBPROP_OTHERINSERT`: deve essere READ\_ONLY e VARIANT\_TRUE.  
  
    -   `DBPROP_OTHERUPDATEDELETE`: deve essere READ\_ONLY e VARIANT\_TRUE.  
  
    -   `DBPROP_REMOVEDELETED`: deve essere READ\_ONLY e VARIANT\_TRUE.  
  
    -   `DBPROP_MAXPENDINGROWS`.  
  
        > [!NOTE]
        >  Se si supportano le notifiche, potrebbero essere necessarie anche altre proprietà. Per un elenco di tali proprietà, vedere la sezione relativa a `IRowsetNotifyCP`.  
  
     Per un esempio di impostazione delle proprietà, vedere la mappa degli insiemi di proprietà in **CUpdateCommand** \(nel file Rowset.h\) nell'esempio [UpdatePV](http://msdn.microsoft.com/it-it/c8bed873-223c-4a7d-af55-f90138c6f38f).  
  
##  <a name="vchowwritingtothedatasource"></a> Scrittura nell'origine dati  
 Per leggere dall'origine dati, chiamare la funzione **Execute**.  Per scrivere nell'origine dati, chiamare la funzione `FlushData`. In termini generali, flush indica il salvataggio su disco delle modifiche apportate a una tabella o a un indice.  
  
```  
FlushData(HROW, HACCESSOR);  
```  
  
 Gli argomenti dell'handle della riga \(*HROW*\) e dell'handle della funzione di accesso \(*HACCESSOR*\) consentono di specificare l'area in cui scrivere.  In genere si scrive in un singolo campo di dati alla volta.  
  
 Il metodo `FlushData` consente di scrivere i dati nel formato in cui sono stati memorizzati in origine.  Se non si esegue l'override di questa funzione, il provider funzionerà correttamente, ma le modifiche non verranno scaricate e memorizzate nell'archivio dati.  
  
### Quando eseguire lo svuotamento con memorizzazione su disco  
 I modelli provider chiamano `FlushData` ogni volta che è necessario scrivere i dati nell'archivio dati. In genere, ma non sempre, questo si verifica in seguito alle chiamate alle seguenti funzioni:  
  
-   **IRowsetChange::DeleteRows**  
  
-   **IRowsetChange::SetData**  
  
-   **IRowsetChange::InsertRows** se sono presenti nuovi dati da inserire nella riga  
  
-   **IRowsetUpdate::Update**  
  
### Funzionamento  
 Il consumer effettua una chiamata che richiede uno svuotamento, ad esempio **Update**, e questa chiamata viene passata al provider che esegue sempre le seguenti operazioni:  
  
-   Chiama `SetDBStatus` ogni volta che è presente un limite per il valore di stato. Vedere *OLE DB Programmers Reference*, capitolo 6 *Data Parts: Status*.  
  
-   Controlla i flag delle colonne.  
  
-   Chiama `IsUpdateAllowed`.  
  
 Questi tre passaggi garantiscono la sicurezza.  Il provider chiama quindi `FlushData`.  
  
### Implementazione di FlushData  
 Per implementare `FlushData` è necessario:  
  
-   Verificare che l'archivio dati sia in grado di gestire le modifiche.  
  
-   Gestire i valori **NULL**.  
  
-   Gestire i valori predefiniti.  
  
 Per implementare un metodo `FlushData` personalizzato, attenersi alla seguente procedura:  
  
-   Scorrere il codice fino alla classe del rowset.  
  
-   Nella classe del rowset inserire la seguente dichiarazione:  
  
```  
HRESULT FlushData(HROW, HACCESSOR)  
{  
    // Insert your implementation here and return an HRESULT.  
}  
```  
  
-   Fornire un'implementazione di `FlushData`.  
  
 L'implementazione di `FlushData` può essere considerata ottimale se vengono memorizzate solo le righe e le colonne effettivamente aggiornate.  È possibile utilizzare i parametri *HROW* e *HACCESSOR* per determinare quale riga e quale colonna vengono memorizzate per l'ottimizzazione.  
  
 In genere i maggiori problemi possono derivare dall'utilizzo di un archivio dati personalizzato nativo.  Se possibile, tentare di operare come segue:  
  
-   Mantenere il più semplice possibile il metodo di scrittura nell'archivio dati.  
  
-   Gestire i valori **NULL** \(facoltativo ma consigliato\).  
  
-   Gestire i valori predefiniti \(facoltativo ma consigliato\).  
  
 Si consiglia di rendere disponibili nell'archivio dati valori effettivi specificati per i valori **NULL** e predefiniti.  Sarebbe inoltre opportuno estrapolare tali dati.  In caso contrario, si consiglia di non consentire valori **NULL** e predefiniti.  
  
 Di seguito è riportato un esempio di implementazione di `FlushData` nella classe `RUpdateRowset` dell'esempio [UpdatePV](http://msdn.microsoft.com/it-it/c8bed873-223c-4a7d-af55-f90138c6f38f). Vedere Rowset.h nel codice di esempio.  
  
```  
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
  
### Gestione delle modifiche  
 Affinché il provider sia in grado di gestire le modifiche, assicurarsi innanzitutto che l'archivio dati, ad esempio un file di testo o un file video, presenti le funzionalità che consentono di apportare modifiche.  In caso contrario, sarà opportuno creare tale codice separatamente dal progetto del provider.  
  
### Gestione dei dati NULL  
 È possibile che un utente finale invii dati **NULL**.  Quando si scrivono valori **NULL** nei campi dell'origine dati, si possono verificare alcuni problemi.  Si immagini, ad esempio, un'applicazione per l'immissione di ordini che accetta i valori relativi a città e CAP. Potranno essere accettati uno solo dei valori o entrambi, ma non nessuno dei due, perché in tal caso sarebbe impossibile effettuare la consegna.  Sarà pertanto necessario limitare alcune combinazioni di valori **NULL** in determinati campi, in base allo scopo dell'applicazione.  
  
 Durante lo sviluppo del provider è necessario definire come verranno memorizzati i dati, come verranno letti i dati dall'archivio dati e come verranno comunicate le informazioni all'utente.  In particolare è necessario determinare in che modo modificare lo stato dei dati del rowset nell'origine dati, ad esempio DataStatus \= **NULL**.  È necessario decidere quale valore restituire quando un consumer accede a un campo che contiene un valore **NULL**.  
  
 Vedere il codice dell'esempio [UpdatePV](http://msdn.microsoft.com/it-it/c8bed873-223c-4a7d-af55-f90138c6f38f) in cui viene illustrato in che modo un provider può gestire dati **NULL**.  In UpdatePV il provider memorizza i dati **NULL** scrivendo la stringa "NULL" nell'archivio dati.  Quando vengono letti i dati **NULL** dall'archivio dati, dopo la lettura della stringa viene svuotato il buffer creando una stringa **NULL**.  Viene inoltre eseguito un override di `IRowsetImpl::GetDBStatus` con cui viene restituito **DBSTATUS\_S\_ISNULL** se tale valore è vuoto.  
  
### Contrassegno delle colonne nullable  
 Se si implementano anche rowset dello schema \(vedere `IDBSchemaRowsetImpl`\), sarà opportuno specificare che la colonna è nullable nel rowset **DBSCHEMA\_COLUMNS**, contrassegnato in genere nel provider da **C***xxx***SchemaColSchemaRowset**.  
  
 È inoltre necessario specificare che tutte le colonne che sono nullable contengono il valore **DBCOLUMNFLAGS\_ISNULLABLE** nella versione di `GetColumnInfo` in uso.  
  
 Se nell'implementazione dei modelli OLE DB si omette di contrassegnare le colonne nullable, sarà dato per scontato che esse debbano contenere un valore e il provider non consentirà al consumer di inviare valori Null.  
  
 Nell'esempio riportato di seguito viene illustrata l'implementazione della funzione **CommonGetColInfo** in **CUpdateCommand** \(vedere UpProvRS.cpp\) in UpdatePV.  Le colonne nullable sono contrassegnate da **DBCOLUMNFLAGS\_ISNULLABLE**.  
  
```  
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
  
### Valori predefiniti  
 Oltre ai valori **NULL**, è necessario gestire anche le modifiche ai valori predefiniti.  
  
 Per impostazione predefinita, `FlushData` ed **Execute** restituiscono `S_OK`.  Se pertanto non si effettua l'override della funzione, le modifiche verranno apparentemente apportate in modo corretto, restituendo `S_OK`, ma non verranno in realtà trasmesse all'archivio dati.  
  
 Nell'esempio [UpdatePV](http://msdn.microsoft.com/it-it/c8bed873-223c-4a7d-af55-f90138c6f38f) in Rowset.h il metodo `SetDBStatus` gestisce i valori predefiniti come segue:  
  
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
  
### Flag delle colonne  
 Se le colonne supportino valori predefiniti, è necessario impostarlo tramite metadati nella classe **\<***classe provider***\>SchemaRowset**.  Impostare *m\_bColumnHasDefault* \= `VARIANT_TRUE`.  
  
 È inoltre necessario impostare i flag delle colonne, che possono essere specificati mediante il tipo enumerato **DBCOLUMNFLAGS**.  I flag delle colonne descrivono le caratteristiche delle colonne.  
  
 Nella classe `CUpdateSessionColSchemaRowset` in Session.h dell'esempio [UpdatePV](http://msdn.microsoft.com/it-it/c8bed873-223c-4a7d-af55-f90138c6f38f) la prima colonna è impostata, ad esempio, come segue:  
  
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
  
 Nel codice viene specificato, tra l'altro, che la colonna supporta un valore predefinito di 0, che è scrivibile e che tutti i dati della colonna hanno la stessa lunghezza.  Se si desidera che i dati di una colonna abbiano lunghezza variabile, non impostare questo flag.  
  
## Vedere anche  
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)