---
title: Supporto dei rowset dello Schema | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- schema rowsets
- OLE DB consumer templates, schema rowsets
- OLE DB providers, schema rowsets
- OLE DB, schema rowsets
ms.assetid: 71c5e14b-6e33-4502-a2d9-a1dc6d6e9ba0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 95f1455fde75ec835486cbcc3d590822891d14f5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33111757"
---
# <a name="supporting-schema-rowsets"></a>Supporto dei set di righe dello schema
Set di righe dello schema consente agli utenti di ottenere informazioni su un archivio dati senza conoscere la struttura sottostante, o schema. Ad esempio, un archivio dati potrebbe essere tabelle organizzate in una gerarchia definita dall'utente, pertanto non vi sarà alcun modo per garantire informazioni dello schema, ad eccezione per leggerlo. (Ad esempio, si noti che le procedure guidate di Visual C++ rowset dello schema per generare le funzioni di accesso per il consumer.) Per consentire a tale scopo, l'oggetto del provider sessione espone i metodi nel [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) interfaccia. Nelle applicazioni Visual C++, utilizzare il [IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md) classe per implementare **IDBSchemaRowset**.  
  
 `IDBSchemaRowsetImpl` supporta i metodi seguenti:  
  
-   [CheckRestrictions](../../data/oledb/idbschemarowsetimpl-checkrestrictions.md) controlla la validità delle restrizioni rispetto a un set di righe dello schema.  
  
-   [CreateSchemaRowset](../../data/oledb/idbschemarowsetimpl-createschemarowset.md) implementa una funzione di creazione oggetto COM per l'oggetto specificato dal parametro di modello.  
  
-   [SetRestrictions](../../data/oledb/idbschemarowsetimpl-setrestrictions.md) specifica le restrizioni supportate su un set di righe dello schema specifico.  
  
-   [IDBSchemaRowset:: GetRowset](../../data/oledb/idbschemarowsetimpl-getrowset.md) restituisce un set di righe dello schema (ereditato dall'interfaccia).  
  
-   [GetSchemas](../../data/oledb/idbschemarowsetimpl-getschemas.md) restituisce un elenco di set di righe dello schema accessibili da `IDBSchemaRowsetImpl::GetRowset` (ereditato dall'interfaccia).  
  
## <a name="atl-ole-db-provider-wizard-support"></a>Supporto della procedura guidata Provider ATL OLE DB  
 La creazione guidata Provider OLE DB ATL crea tre classi dello schema nel file di intestazione della sessione:  
  
-   **C** *ShortName* **SessionTRSchemaRowset**  
  
-   **C** *ShortName* **SessionColSchemaRowset**  
  
-   **C** *ShortName* **SessionPTSchemaRowset**  
  
 Queste classi di rispondono alle richieste consumer di informazioni sullo schema; Si noti che la specifica OLE DB è necessario che questi tre rowset dello schema supportati:  
  
-   **C** *ShortName* **SessionTRSchemaRowset** gestisce le richieste di informazioni di tabella (la `DBSCHEMA_TABLES` set di righe dello schema).  
  
-   **C** *ShortName* **SessionColSchemaRowset** gestisce le richieste di informazioni sulle colonne (la **DBSCHEMA_COLUMNS** set di righe dello schema). La procedura guidata fornisce le implementazioni di esempio per queste classi, che restituiscono informazioni sullo schema per un provider di tipo DOS.  
  
-   **C** *ShortName* **SessionPTSchemaRowset** gestisce le richieste di informazioni sullo schema relative al tipo di provider (il **DBSCHEMA_PROVIDER_TYPES** dello schema set di righe). Restituisce l'implementazione predefinita fornita dalla procedura guidata `S_OK`.  
  
 È possibile personalizzare queste classi per gestire le informazioni sullo schema appropriate al provider:  
  
-   In **C***ShortName***SessionTRSchemaRowset**, è necessario compilare i campi di descrizione del catalogo e tabella (**trData. M_sztype**, **M_sztable** , e **M_szdesc**). Nell'esempio viene generato dalla procedura guidata utilizza solo una riga (tabella). Altri provider possono restituire più di una tabella.  
  
-   In **C***ShortName***SessionColSchemaRowset**, si passa il nome della tabella come un **DBID**.  
  
## <a name="setting-restrictions"></a>Impostazione delle restrizioni  
 Un concetto importante nel supporto di set di righe dello schema dall'impostazione di restrizioni, che viene operata mediante `SetRestrictions`. Le restrizioni consentono agli utenti di recuperare solo le righe corrispondenti (ad esempio, trovare tutte le colonne nella tabella "MyTable"). Sono facoltative e, nel caso in cui nessuna sia supportata (impostazione predefinita), vengono restituiti sempre tutti i dati. Per un esempio di un provider che supporta le restrizioni, vedere il [UpdatePV](http://msdn.microsoft.com/en-us/c8bed873-223c-4a7d-af55-f90138c6f38f) esempio.  
  
## <a name="setting-up-the-schema-map"></a>Configurare il mapping dello Schema  
 Impostare una mappa di schema, ad esempio questo ad esempio UpdatePV:  
  
```  
BEGIN_SCHEMA_MAP(CUpdateSession)  
    SCHEMA_ENTRY(DBSCHEMA_TABLES, CUpdateSessionTRSchemaRowset)  
    SCHEMA_ENTRY(DBSCHEMA_COLUMNS, CUpdateSessionColSchemaRowset)  
    SCHEMA_ENTRY(DBSCHEMA_PROVIDER_TYPES, CUpdateSessionPTSchemaRowset)  
END_SCHEMA_MAP()  
```  
  
 Per supportare **IDBSchemaRowset**, è necessario supportare `DBSCHEMA_TABLES`, **DBSCHEMA_COLUMNS**, e **DBSCHEMA_PROVIDER_TYPES**. È possibile aggiungere ulteriori rowset dello schema a propria discrezione.  
  
 Dichiarare una classe di rowset dello schema con un `Execute` metodo, ad esempio `CUpdateSessionTRSchemaRowset` in UpdatePV:  
  
```  
class CUpdateSessionTRSchemaRowset :   
    public CSchemaRowsetImpl < CUpdateSessionTRSchemaRowset,   
                              CTABLESRow, CUpdateSession >  
...  
// Execute looks like this; what pointers does the consumer use?  
    HRESULT Execute(DBROWCOUNT* pcRowsAffected,   
                    ULONG cRestrictions, const VARIANT* rgRestrictions)  
```  
  
 Si noti che `CUpdateSession` eredita da `IDBSchemaRowsetImpl`, pertanto dispone di tutti i metodi per la gestione delle restrizioni. Utilizzando `CSchemaRowsetImpl`, dichiarare tre classi figlio (elencate nel mapping dello schema precedente): `CUpdateSessionTRSchemaRowset`, `CUpdateSessionColSchemaRowset`, e `CUpdateSessionPTSchemaRowset`. Ognuna di queste classi figlio è un `Execute` metodo che gestisce il rispettivo set di restrizioni (criteri di ricerca). Ogni `Execute` metodo confronta i valori del `cRestrictions` e `rgRestrictions` parametri. Vedere la descrizione di questi parametri, [SetRestrictions](../../data/oledb/idbschemarowsetimpl-setrestrictions.md).  
  
 Per ulteriori informazioni sulle restrizioni corrispondano a un set di righe dello schema specifico, consultare la tabella di righe dello schema GUID in [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) nel *riferimento per programmatori OLE DB* di Windows SDK.  
  
 Ad esempio, se è supportato il **TABLE_NAME** restrizione sul `DBSCHEMA_TABLES`, è necessario eseguire le operazioni seguenti:  
  
 In primo luogo, cercare `DBSCHEMA_TABLES` e che supporta quattro restrizioni (in ordine).  
  
|Restrizione di set di righe dello schema|Valore di restrizione|  
|-------------------------------|-----------------------|  
|**TABLE_CATALOG**|0x1 (binario 1)|  
|**TABLE_SCHEMA**|0x2 (10 binario)|  
|**TABLE_NAME**|0x4 (100 binario)|  
|**TABLE_TYPE**|0x8 (1000 binario)|  
  
 Successivamente, si noti che esiste un bit per ogni tipo di restrizione. Poiché si desidera supportare **TABLE_NAME** solo, si restituirà 0x4 nel `rgRestrictions` elemento. Se si supporta **TABLE_CATALOG** e **TABLE_NAME**, sarebbe necessario restituire 0x5 (101 binario).  
  
 Per impostazione predefinita, l'implementazione restituisce 0 (non supporta restrizioni) per qualsiasi richiesta. UpdatePV è riportato un esempio di un provider che supporta le restrizioni.  
  
### <a name="example"></a>Esempio  
 Questo codice è tratto dal [UpdatePV](http://msdn.microsoft.com/en-us/c8bed873-223c-4a7d-af55-f90138c6f38f) esempio. Che supporta i tre set di righe dello schema obbligatori: `DBSCHEMA_TABLES`, **DBSCHEMA_COLUMNS**, e **DBSCHEMA_PROVIDER_TYPES**. Come un esempio di come implementare il supporto dello schema nel provider, in questo argomento vengono illustrati l'implementazione di **DBSCHEMA_TABLE** set di righe.  
  
> [!NOTE]
>  Il codice di esempio potrebbero essere diversi da quello riportato di seguito; è possibile che il codice di esempio come la versione più aggiornata.  
  
 Aggiunta del supporto dello schema il primo passaggio consiste nel determinare le restrizioni che si intende supportare. Per determinare le restrizioni sono disponibili per il set di righe dello schema, esaminare la specifica OLE DB per la definizione di **IDBSchemaRowset**. Dopo la definizione principale, verrà visualizzata una tabella contenente il nome del set di righe dello schema, il numero di restrizioni e le colonne di limitazione. Selezionare il set di righe dello schema che si desidera supportare e prendere nota del numero di restrizioni e le colonne di restrizione. Ad esempio, `DBSCHEMA_TABLES` supporta quattro restrizioni (**TABLE_CATALOG**, **TABLE_SCHEMA**, **TABLE_NAME**, e **TABLE_TYPE** ):  
  
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
  
 Un bit rappresenta ogni colonna di restrizione. Se si desidera supportare una restrizione (ovvero, è possibile eseguire una query da essa), impostare il bit su 1. Se non si desidera supportare una restrizione, impostare tale bit a zero. Dalla riga di codice riportato in precedenza, che supporta il **TABLE_NAME** e **TABLE_TYPE** restrizioni per il `DBSCHEMA_TABLES` set di righe. Si tratta la terza (maschera di bit 100) e la quarta restrizioni (maschera di bit 1000). Pertanto, la maschera di bit di UpdatePv è 1100 (o 0x0C):  
  
```  
if (InlineIsEqualGUID(rguidSchema[l], DBSCHEMA_TABLES))  
    rgRestrictions[l] = 0x0C;  
```  
  
 Le operazioni seguenti `Execute` funzione è simile a quelli nei set di righe regolare. Sono disponibili tre argomenti: `pcRowsAffected`, `cRestrictions`, e `rgRestrictions`. Il `pcRowsAffected` variabile è un parametro di output che il provider può restituire il conteggio delle righe nel set di righe dello schema. Il `cRestrictions` è un parametro di input contenente il numero di restrizioni passata dal consumer al provider. Il `rgRestrictions` parametro è una matrice di **VARIANT** i valori che contengono i valori di restrizione.  
  
```  
HRESULT Execute(DBROWCOUNT* pcRowsAffected, ULONG cRestrictions,   
                const VARIANT* rgRestrictions)  
```  
  
 Il `cRestrictions` variabile è basata sul numero totale di restrizioni per un set di righe dello schema, indipendentemente dal fatto che il provider supporti tali. UpdatePv supporta due restrizioni (il terzo e quarto), questo codice cerca solo un `cRestrictions` valore maggiore o uguale a tre.  
  
 Il valore per il **TABLE_NAME** restrizione viene archiviata in `rgRestrictions[2]` (nuovo, la terza restrizione in una matrice in base zero è 2). È necessario verificare che la restrizione non `VT_EMPTY` per effettivamente il suo supporto. Si noti che **VT_NULL** non è uguale a `VT_EMPTY`. **VT_NULL** specifica un valore di restrizione valido.  
  
 La definizione di UpdatePv di un nome di tabella è un nome di percorso completo in un file di testo. Estrarre il valore di restrizione e quindi si tenta di aprire il file per assicurarsi che il file esista effettivamente. Se il file non esiste, restituire `S_OK`. Ciò potrebbe sembrare un bit con le versioni precedenti ma quali il codice è realtà comunicare al consumer è che non vi sono tabelle non supportate per il nome specificato. Il `S_OK` restituito indica che il codice eseguito correttamente.  
  
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
  
 Supporto della quarta restrizione (**TABLE_TYPE**) è simile alla restrizione di terzi. Verificare che il valore non è `VT_EMPTY`. Questa restrizione restituisce solo il tipo di tabella, **tabella**. Per determinare i valori validi per il `DBSCHEMA_TABLES`, vedere l'appendice B del *riferimento per programmatori OLE DB* nel **tabelle** sezione set di righe.  
  
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
  
 Si tratta in cui si crea effettivamente una voce di riga per il set di righe. La variabile `trData` corrisponde a **CTABLESRow**, una struttura definita nei modelli provider OLE DB. **CTABLESRow** corrisponde alla **tabelle** definizione di set di righe nell'appendice B della specifica OLE DB. È solo una riga per aggiungere in quanto è possibile supportare una tabella alla volta.  
  
```  
// Bring over the data:  
wcspy_s(trData.m_szType, OLESTR("TABLE"), 5);  

wcspy_s(trData.m_szDesc, OLESTR("The Directory Table"), 19);  

wcsncpy_s(trData.m_szTable, T2OLE(szFile), _TRUNCATE());  
```  
  
 UpdatePV imposta solo tre colonne: **TABLE_NAME**, **TABLE_TYPE**, e **descrizione**. È opportuno prendere nota delle colonne per cui si restituiscono informazioni, perché queste informazioni sono necessarie quando si implementa `GetDBStatus`:  
  
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
  
 Il `GetDBStatus` funzione è molto importante per il corretto funzionamento del set di righe dello schema. Poiché che non restituiscono dati per ogni colonna di **tabelle** set di righe, è necessario specificare le colonne che restituiscono dati per e che non.  
  
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
  
 Poiché il `Execute` funzione restituisce i dati per il **TABLE_NAME**, **TABLE_TYPE**, e **descrizione** i campi dal **tabelle**set di righe, è possibile vedere l'appendice B della specifica OLE DB e determinare (contando dall'alto verso il basso) che sono numeri ordinali 3, 4 e 6. Per ognuna di queste colonne, restituire **DBSTATUS_S_OK**. Per tutte le altre colonne restituire **DBSTATUS_S_ISNULL**. È importante restituire lo stato, poiché un consumer potrebbe non riconoscere che il valore restituito è **NULL** o altri valori. Tenere presente che **NULL** non equivale a vuoto.  
  
 Per ulteriori informazioni sull'interfaccia di set di righe dello schema OLE DB, vedere il [IDBSchemaRowset](../../data/oledb/idbschemarowsetimpl-class.md) interfaccia OLE DB Programmer riferimento.  
  
 Per informazioni su come usare i consumer **IDBSchemaRowset** metodi, vedere [recupero di metadati con i rowset dello Schema](../../data/oledb/obtaining-metadata-with-schema-rowsets.md).  
  
 Per un esempio di un provider che supporta i set di righe dello schema, vedere il [UpdatePV](http://msdn.microsoft.com/en-us/c8bed873-223c-4a7d-af55-f90138c6f38f) esempio.  
  
## <a name="see-also"></a>Vedere anche  
 [Tecniche avanzate del provider](../../data/oledb/advanced-provider-techniques.md)