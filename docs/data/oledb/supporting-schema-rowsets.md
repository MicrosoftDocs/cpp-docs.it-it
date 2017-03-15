---
title: "Supporto dei rowset dello schema | Microsoft Docs"
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
  - "OLE DB (modelli consumer), rowset schema"
  - "provider OLE DB, rowset schema"
  - "OLE DB, rowset schema"
  - "rowset schema"
ms.assetid: 71c5e14b-6e33-4502-a2d9-a1dc6d6e9ba0
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Supporto dei rowset dello schema
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I rowset dello schema consentono ai consumer di ottenere informazioni su un archivio dati senza conoscerne la struttura o lo schema sottostante.  È ad esempio possibile che un archivio dati contenga tabelle organizzate in una gerarchia definita dall'utente, pertanto non sarebbe possibile conoscerne lo schema se non leggendolo. Un altro esempio è rappresentato dal fatto che nelle procedure guidate di Visual C\+\+ vengono utilizzati i rowset dello schema per generare funzioni di accesso per il consumer. Per consentire queste operazioni al consumer, l'oggetto Session del provider espone alcuni metodi sull'interfaccia [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx).  Nelle applicazioni Visual C\+\+ si utilizza la classe [IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md) per implementare **IDBSchemaRowset**.  
  
 `IDBSchemaRowsetImpl` supporta i seguenti metodi:  
  
-   [CheckRestrictions](../../data/oledb/idbschemarowsetimpl-checkrestrictions.md) che controlla la validità delle restrizioni facendo riferimento a un rowset dello schema.  
  
-   [CreateSchemaRowset](../../data/oledb/idbschemarowsetimpl-createschemarowset.md) che implementa una funzione di creazione di un oggetto COM per l'oggetto specificato dal parametro del modello.  
  
-   [SetRestrictions](../../data/oledb/idbschemarowsetimpl-setrestrictions.md) che specifica le restrizioni supportate su un particolare rowset dello schema.  
  
-   [IDBSchemaRowset::GetRowset](../../data/oledb/idbschemarowsetimpl-getrowset.md) che restituisce un rowset dello schema, ereditato dall'interfaccia.  
  
-   [GetSchemas](../../data/oledb/idbschemarowsetimpl-getschemas.md) che restituisce l'elenco dei rowset dello schema accessibili da `IDBSchemaRowsetImpl::GetRowset`, ereditato dall'interfaccia.  
  
## Supporto della Creazione guidata provider OLE DB ATL  
 Con la Creazione guidata provider OLE DB ATL vengono create tre classi di schema nel file di intestazione della sessione:  
  
-   **C** *NomeBreve* **SessionTRSchemaRowset**  
  
-   **C** *NomeBreve* **SessionColSchemaRowset**  
  
-   **C** *NomeBreve* **SessionPTSchemaRowset**  
  
 Queste classi consentono di rispondere alle richieste di informazioni sullo schema effettuate dal consumer. Tenere presente che la specifica OLE DB richiede il supporto dei seguenti tre rowset dello schema:  
  
-   **C** *NomeBreve* **SessionTRSchemaRowset** gestisce le richieste di informazioni sulle tabelle \(rowset dello schema `DBSCHEMA_TABLES`\).  
  
-   **C** *NomeBreve* **SessionColSchemaRowset** gestisce le richieste di informazioni sulle colonne \(rowset dello schema **DBSCHEMA\_COLUMNS**\).  Con la procedura guidata vengono fornite implementazioni di esempio per queste classi per la restituzione di informazioni relative allo schema per un provider DOS.  
  
-   **C** *NomeBreve* **SessionPTSchemaRowset** gestisce le richieste di informazioni sullo schema relative al tipo di provider \(rowset dello schema **DBSCHEMA\_PROVIDER\_TYPES**\).  Con l'implementazione predefinita fornita nella procedura guidata viene restituito `S_OK`.  
  
 È possibile personalizzare queste classi in modo che vengano gestite informazioni sullo schema appropriate al provider:  
  
-   In **C***NomeBreve***SessionTRSchemaRowset** compilare i campi relativi a catalogo, tabella e descrizione \(**trData.m\_szType**, **trData.m\_szTable**, **trData.m\_szDesc**\).  Nell'esempio generato con la procedura guidata viene utilizzata una sola riga \(tabella\).  Altri provider possono restituire più tabelle.  
  
-   In **C***NomeBreve***SessionColSchemaRowset** passare il nome della tabella come valore **DBID**.  
  
## Impostazione di restrizioni  
 Una particolare importanza nell'ambito del supporto dei rowset dello schema è rivestita dall'impostazione di restrizioni, che viene operata mediante `SetRestrictions`.  Le restrizioni consentono ai consumer di recuperare solo le righe corrispondenti ai criteri impostati, ad esempio di trovare tutte le colonne della tabella "MyTable".  Le restrizioni sono facoltative e se, come da impostazione predefinita, non ne viene supportata alcuna, vengono restituiti tutti i dati.  Per un esempio di provider che supporta le restrizioni, vedere [UpdatePV](http://msdn.microsoft.com/it-it/c8bed873-223c-4a7d-af55-f90138c6f38f).  
  
## Impostazione di una mappa degli schemi  
 Impostare una mappa degli schemi analoga a quella riportata di seguito in Session.h nell'esempio UpdatePV:  
  
```  
BEGIN_SCHEMA_MAP(CUpdateSession)  
    SCHEMA_ENTRY(DBSCHEMA_TABLES, CUpdateSessionTRSchemaRowset)  
    SCHEMA_ENTRY(DBSCHEMA_COLUMNS, CUpdateSessionColSchemaRowset)  
    SCHEMA_ENTRY(DBSCHEMA_PROVIDER_TYPES, CUpdateSessionPTSchemaRowset)  
END_SCHEMA_MAP()  
```  
  
 Per supportare **IDBSchemaRowset** è necessario supportare `DBSCHEMA_TABLES`, **DBSCHEMA\_COLUMNS** e **DBSCHEMA\_PROVIDER\_TYPES**.  È possibile aggiungere ulteriori rowset dello schema a propria discrezione.  
  
 Dichiarare una classe di rowset dello schema con un metodo `Execute`, quale `CUpdateSessionTRSchemaRowset` nell'esempio UpdatePV:  
  
```  
class CUpdateSessionTRSchemaRowset :   
    public CSchemaRowsetImpl < CUpdateSessionTRSchemaRowset,   
                              CTABLESRow, CUpdateSession >  
...  
// Execute looks like this; what pointers does the consumer use?  
    HRESULT Execute(DBROWCOUNT* pcRowsAffected,   
                    ULONG cRestrictions, const VARIANT* rgRestrictions)  
```  
  
 Come si può notare, `CUpdateSession` eredita da `IDBSchemaRowsetImpl`, pertanto dispone di tutti i metodi per la gestione delle restrizioni.  Mediante `CSchemaRowsetImpl` dichiarare tre classi figlio, elencate in precedenza nella mappa degli schemi: `CUpdateSessionTRSchemaRowset`, `CUpdateSessionColSchemaRowset` e `CUpdateSessionPTSchemaRowset`.  Ciascuna di queste classi figlio presenta un metodo `Execute` che gestisce il rispettivo set di restrizioni, ovvero criteri di ricerca.  Ogni metodo `Execute` confronta i valori dei parametri `cRestrictions` e `rgRestrictions`.  Per una descrizione di questi parametri, vedere [SetRestrictions](../../data/oledb/idbschemarowsetimpl-setrestrictions.md).  
  
 Per ulteriori informazioni sulle limitazioni corrispondenti a un particolare set di righe dello schema, vedere la tabella dei GUID dei set di righe dello schema in [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) in *OLE DB Programmer's Reference* in [!INCLUDE[winsdkshort](../../atl/reference/includes/winsdkshort_md.md)].  
  
 Se ad esempio si supporta la restrizione **TABLE\_NAME** su `DBSCHEMA_TABLES`, si procederà come indicato di seguito.  
  
 Controllare in primo luogo `DBSCHEMA_TABLES` per verificare che supporti quattro restrizioni, nell'ordine.  
  
|Restrizione del rowset dello schema|Valore della restrizione|  
|-----------------------------------------|------------------------------|  
|**TABLE\_CATALOG**|0x1 \(1 binario\)|  
|**TABLE\_SCHEMA**|0x2 \(10 binario\)|  
|**TABLE\_NAME**|0x4 \(100 binario\)|  
|**TABLE\_TYPE**|0x8 \(1000 binario\)|  
  
 Come si può notare, è presente un bit per ciascuna restrizione.  Dal momento che si desidera supportare solo **TABLE\_NAME**, si restituirà 0x4 nell'elemento `rgRestrictions`.  Se si supportassero **TABLE\_CATALOG** e **TABLE\_NAME**, sarebbe necessario restituire 0x5 \(101 binario\).  
  
 Per impostazione predefinita, nell'implementazione viene restituito 0 per qualsiasi richiesta, quindi non è supportata alcuna restrizione.  UpdatePV è un esempio di provider che supporta le restrizioni.  
  
### Esempio  
 Il codice che segue è tratto dall'esempio [UpdatePV](http://msdn.microsoft.com/it-it/c8bed873-223c-4a7d-af55-f90138c6f38f) che supporta i tre rowset dello schema obbligatori: `DBSCHEMA_TABLES`, **DBSCHEMA\_COLUMNS** e **DBSCHEMA\_PROVIDER\_TYPES**.  Per fornire un esempio di implementazione del supporto degli schemi nel provider, in questo argomento verranno illustrati i passaggi necessari per l'implementazione del rowset **DBSCHEMA\_TABLE**.  
  
> [!NOTE]
>  È possibile che il codice di esempio sia diverso e più aggiornato rispetto a quello riportato di seguito.  
  
 Il primo passaggio per l'aggiunta del supporto degli schemi consiste nel determinare quali restrizioni si desidera supportare.  Per determinare le restrizioni disponibili per il rowset dello schema utilizzato, fare riferimento alla definizione di **IDBSchemaRowset** nella specifica OLE DB.  Dopo la definizione principale è presente una tabella contenente il nome del rowset dello schema, il numero di restrizioni e le colonne delle restrizioni.  Cercare il rowset dello schema che si desidera supportare e prendere nota del numero di restrizioni e delle colonne delle restrizioni.  `DBSCHEMA_TABLES` supporta, ad esempio, quattro restrizioni, ovvero **TABLE\_CATALOG**, **TABLE\_SCHEMA**, **TABLE\_NAME** e **TABLE\_TYPE**:  
  
```  
void SetRestrictions(ULONG cRestrictions, GUID* rguidSchema,   
   ULONG* rgRestrictions)  
{  
    for (ULONG l=0; l<cRestrictions; l++)  
    {  
        if (InlineIsEqualGUID(rguidSchema[l], DBSCHEMA_TABLES))  
            rgRestrictions[l] = 0x0C;  
        else if (InlineIsEqualGUID(rguidSchema[l], DBSCHEMA_COLUMNS))  
                 rgRestrictions[l] = 0x04;  
             else if (InlineIsEqualGUID(rguidSchema[l],  
                                        DBSCHEMA_PROVIDER_TYPES))  
                      rgRestrictions[l] = 0x00;  
   }  
}  
```  
  
 Ciascuna colonna di restrizione è rappresentata da un bit.  Se si desidera supportare una restrizione, ovvero poter eseguire una query in base a essa, impostare tale bit su 1.  Se non si desidera supportare una restrizione, impostare tale bit su zero.  Nella riga di codice riportata in precedenza UpdatePV supporta le restrizioni **TABLE\_NAME** e **TABLE\_TYPE** sul rowset `DBSCHEMA_TABLES`.  Si tratta delle restrizioni terza \(maschera di bit 100\) e quarta \(maschera di bit 1000\).  La maschera di bit di UpdatePv è pertanto 1100 \(o 0x0C\):  
  
```  
if (InlineIsEqualGUID(rguidSchema[l], DBSCHEMA_TABLES))  
    rgRestrictions[l] = 0x0C;  
```  
  
 La funzione `Execute` che segue è analoga a quelle presenti nei rowset standard.  Sono disponibili tre argomenti: `pcRowsAffected`, `cRestrictions` e `rgRestrictions`.  La variabile `pcRowsAffected` è un parametro di output con cui il provider può restituire il numero di righe nel rowset dello schema.  Il parametro `cRestrictions` è un parametro di input contenente il numero di restrizioni passate dal consumer al provider.  Il parametro `rgRestrictions` è una matrice di valori **VARIANT** contenente i valori delle restrizioni.  
  
```  
HRESULT Execute(DBROWCOUNT* pcRowsAffected, ULONG cRestrictions,   
                const VARIANT* rgRestrictions)  
```  
  
 La variabile `cRestrictions` è basata sul numero totale di restrizioni per un rowset dello schema, indipendentemente dal fatto che il provider supporti tali restrizioni.  UpdatePv supporta due restrizioni, la terza e la quarta, pertanto in questo codice viene cercato solo una valore `cRestrictions` maggiore o uguale a tre.  
  
 Il valore della restrizione **TABLE\_NAME** viene memorizzato in `rgRestrictions[2]`. Anche in questo caso la terza restrizione in una matrice a base zero sarà uguale a 2.  È necessario verificare che la restrizione non sia `VT_EMPTY` per poterla effettivamente supportare.  Tenere presente che **VT\_NULL** non corrisponde a `VT_EMPTY`,  ma specifica un valore di restrizione valido.  
  
 La definizione presente in UpdatePv per un nome di tabella è un nome di percorso completo di un file di testo.  Estrarre il valore della restrizione, quindi cercare di aprire il file per verificare che esso sia effettivamente presente.  Se il file non esiste, restituire `S_OK`.  Questa procedura potrebbe sembrare un po' complessa, ma in questo modo si consente di comunicare al consumer che non è presente alcuna tabella supportata con il nome specificato.  Il valore `S_OK` restituito indica che il codice è stato eseguito correttamente.  
  
```  
USES_CONVERSION;  
enum {  
            sizeOfszFile = 255  
};  
CTABLESRow  trData;  
FILE        *pFile = NULL;  
TCHAR       szFile[ sizeOfszFile ];  
errcode     err = 0;  
  
// Handle any restrictions sent to us. This only handles  
// the TABLE_NAME & TABLE_TYPE restictions (the 3rd and 4th   
// restrictions in DBSCHEMA_TABLES...look in IDBSchemaRowsets   
// in part 2 of the prog. ref) so your restrictions are 0x08 & 0x04   
// for a total of (0x0C)  
if (cRestrictions >= 3 && rgRestrictions[2].vt != VT_EMPTY)  
{  
    CComBSTR bstrName = rgRestrictions[2].bstrVal;  
    if ((rgRestrictions[2].vt == VT_BSTR) && (bstrName != (BSTR)NULL))  
    {  
        // Check to see if the file exists  
        _tcscpy_s(&szFile[0], sizeOfszFile, OLE2T(bstrName));  
        if (szFile[0] == _T('\0') ||   
           ((err = _tfopen(&pFile, &szFile[0], _T("r"))) == 0))  
        {  
            return S_OK;// Their restriction was invalid return no data  
        }  
        else  
        {  
            fclose(pFile);  
        }  
    }  
}  
```  
  
 Il supporto della quarta restrizione, **TABLE\_TYPE**, viene implementato in modo analogo al supporto della terza.  Controllare che il valore non sia `VT_EMPTY`.  Questa restrizione restituisce solo il tipo di tabella, **TABLE**.  Per determinare i valori validi per `DBSCHEMA_TABLES`, vedere la sezione relativa al rowset **TABLES** nell'appendice B di *OLE DB Programmer's Reference* \(informazioni in lingua inglese\).  
  
```  
// TABLE_TYPE restriction:  
if (cRestrictions >=4 && rgRestrictions[3].vt != VT_EMPTY)  
{  
    CComBSTR bstrType = rgRestrictions[3].bstrVal;  
    if ((rgRestrictions[3].vt == VT_BSTR) && (bstrType != (BSTR)NULL))  
    {  
        // This is kind of a blind restriction.  
        // This only actually supports  
        // TABLES so if you get anything else,   
        // just return an empty rowset.  
        if (_tcscmp(_T("TABLE"), OLE2T(bstrType)) != 0)  
            return S_OK;  
    }  
}  
```  
  
 A questo punto si creerà una voce di riga per il rowset.  La variabile `trData` corrisponde a **CTABLESRow**, una struttura definita nei modelli provider OLE DB.  **CTABLESRow** corrisponde alla definizione del rowset **TABLES** presente nell'appendice B della specifica OLE DB.  È possibile aggiungere una sola riga poiché è possibile supportare un'unica tabella per volta.  
  
```  
// Bring over the data:  
wcspy_s(trData.m_szType, OLESTR("TABLE"), 5);  
wcspy_s(trData.m_szDesc, OLESTR("The Directory Table"), 19);  
wcsncpy_s(trData.m_szTable, T2OLE(szFile), _TRUNCATE());  
```  
  
 In UpdatePV sono impostate solo tre colonne: **TABLE\_NAME**, **TABLE\_TYPE** e **DESCRIPTION**.  È opportuno prendere nota delle colonne per le quali si restituiscono informazioni, poiché questi dati saranno necessari al momento dell'implementazione di `GetDBStatus`:  
  
```  
    _ATLTRY  
    {  
        m_rgRowData.Add(trData);  
    }  
    _ATLCATCHALL()  
    {  
        return E_OUTOFMEMORY;  
    }  
    //if (!m_rgRowData.Add(trData))  
    //    return E_OUTOFMEMORY;  
    *pcRowsAffected = 1;  
    return S_OK;  
}  
```  
  
 La funzione `GetDBStatus` è molto importante per il corretto funzionamento del rowset dello schema.  Poiché che non si restituiscono dati per tutte le colonne del rowset **TABLES**, è necessario specificare per quali colonne si restituiscono dati.  
  
```  
virtual DBSTATUS GetDBStatus(CSimpleRow* , ATLCOLUMNINFO* pColInfo)  
{  
    ATLASSERT(pColInfo != NULL);  
  
    switch(pColInfo->iOrdinal)  
    {  
    case 3:     // TABLE_NAME  
    case 4:     // TABLE_TYPE  
    case 6:     // DESCRIPTION  
        return DBSTATUS_S_OK;  
        break;  
    default:  
        return DBSTATUS_S_ISNULL;  
    break;  
    }  
}  
```  
  
 Poiché la funzione `Execute` restituisce i dati per i campi **TABLE\_NAME**, **TABLE\_TYPE** e **DESCRIPTION** dal rowset **TABLES**, vedere l'appendice B della specifica OLE DB e determinare se si tratta degli ordinali 3, 4 e 6, contando dall'alto in basso.  Per ognuna di queste colonne restituire **DBSTATUS\_S\_OK**.  Per tutte le altre colonne restituire **DBSTATUS\_S\_ISNULL**.  È importante restituire questo stato perché è possibile che un consumer non sia in grado di interpretare se il valore restituito è **NULL** o altri valori.  Come già precisato, **NULL** non equivale a vuoto.  
  
 Per ulteriori informazioni sull'interfaccia del rowset dello schema OLE DB, vedere l'interfaccia [IDBSchemaRowset](../../data/oledb/idbschemarowsetimpl-class.md) in OLE DB Programmer's Reference \(informazioni in lingua inglese\).  
  
 Per informazioni su come possono essere utilizzati i metodi **IDBSchemaRowset** dai consumer, vedere [Ottenimento di metadati con rowset dello schema](../../data/oledb/obtaining-metadata-with-schema-rowsets.md).  
  
 Per un esempio di provider in grado di supportare i rowset dello schema, vedere [UpdatePV](http://msdn.microsoft.com/it-it/c8bed873-223c-4a7d-af55-f90138c6f38f).  
  
## Vedere anche  
 [Tecniche avanzate del provider](../../data/oledb/advanced-provider-techniques.md)