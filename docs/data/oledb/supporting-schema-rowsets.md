---
title: Supporto dei set di righe dello schema
ms.date: 11/04/2016
helpviewer_keywords:
- schema rowsets
- OLE DB consumer templates, schema rowsets
- OLE DB providers, schema rowsets
- OLE DB, schema rowsets
ms.assetid: 71c5e14b-6e33-4502-a2d9-a1dc6d6e9ba0
ms.openlocfilehash: f8809754cc79d2a8c3d0f7bd32630ad9cab70a43
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57423105"
---
# <a name="supporting-schema-rowsets"></a>Supporto dei set di righe dello schema

I set di righe dello schema consentono agli utenti di ottenere informazioni su un archivio dati senza conoscere la struttura sottostante, o schema. Ad esempio, un archivio dati potrebbe essere tabelle organizzate in una gerarchia definita dall'utente, pertanto non vi sarebbe alcun modo per assicurarsi di conoscere lo schema, ad eccezione per leggerlo. (Un altro esempio, le procedure guidate di Visual C++ utilizzano set di righe dello schema per generare le funzioni di accesso per il consumer). Per consentire al consumer di eseguire questa operazione, l'oggetto del provider sessione espone i metodi sul [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) interfaccia. Nelle applicazioni Visual C++, si utilizza il [IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md) classe per implementare `IDBSchemaRowset`.

`IDBSchemaRowsetImpl` supporta i metodi seguenti:

- [CheckRestrictions](../../data/oledb/idbschemarowsetimpl-checkrestrictions.md) controlla la validità delle restrizioni rispetto a un set di righe dello schema.

- [CreateSchemaRowset](../../data/oledb/idbschemarowsetimpl-createschemarowset.md) implementa un'oggetto funzione COM per l'oggetto specificato dal parametro di modello.

- [SetRestrictions](../../data/oledb/idbschemarowsetimpl-setrestrictions.md) specifica le restrizioni supportate su un set di righe dello schema specifico.

- [IDBSchemaRowset:: GetRowset](../../data/oledb/idbschemarowsetimpl-getrowset.md) restituisce un set di righe dello schema (ereditato dall'interfaccia).

- [GetSchemas](../../data/oledb/idbschemarowsetimpl-getschemas.md) restituisce un elenco di set di righe dello schema accessibili da `IDBSchemaRowsetImpl::GetRowset` (ereditato dall'interfaccia).

## <a name="atl-ole-db-provider-wizard-support"></a>Supporto ATL OLE DB Provider della procedura guidata

Il **Creazione guidata Provider OLE DB ATL** crea tre classi dello schema nel file di intestazione di sessione:

- **C**<em>ShortName</em>**SessionTRSchemaRowset**

- **C**<em>ShortName</em>**SessionColSchemaRowset**

- **C**<em>ShortName</em>**SessionPTSchemaRowset**

Queste classi di rispondono alle richieste consumer di informazioni sullo schema; Si noti che la specifica OLE DB richiede che tali set di righe dello tre schema supportati:

- **C**<em>ShortName</em>**SessionTRSchemaRowset** gestisce le richieste per le informazioni della tabella (righe dello schema DBSCHEMA_TABLES).

- **C**<em>ShortName</em>**SessionColSchemaRowset** gestisce le richieste di informazioni sulle colonne (righe dello schema DBSCHEMA_COLUMNS). La procedura guidata fornisce le implementazioni di esempio per queste classi, che restituiscono informazioni sullo schema per un provider di DOS.

- **C**<em>ShortName</em>**SessionPTSchemaRowset** gestisce le richieste di informazioni sullo schema relative al tipo di provider (DBSCHEMA_PROVIDER_TYPES di righe dello schema). L'implementazione predefinita fornita dalla procedura guidata restituisce S_OK.

È possibile personalizzare queste classi per gestire le informazioni sullo schema appropriate per il provider:

- Nelle **C**<em>ShortName</em>**SessionTRSchemaRowset**, è necessario compilare i campi di descrizione del catalogo e tabella (`trData.m_szType`, `trData.m_szTable`e `trData.m_szDesc`). L'esempio generato dalla procedura guidata Usa solo una riga (tabella). Altri provider di servizi potrebbe restituire più di una tabella.

- Nelle **C**<em>ShortName</em>**SessionColSchemaRowset**, si passa il nome della tabella come un `DBID`.

## <a name="setting-restrictions"></a>Impostazione delle restrizioni

Un concetto importante nel supporto di set di righe dello schema dall'impostazione di restrizioni, come accade con `SetRestrictions`. Le restrizioni consentono agli utenti di recuperare solo le righe corrispondenti (ad esempio, trovare tutte le colonne nella tabella "MyTable"). Sono facoltative e, nel caso in cui nessuna sia supportata (impostazione predefinita), vengono restituiti sempre tutti i dati. Per un esempio di un provider che supporta le restrizioni, vedere la [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) esempio.

## <a name="setting-up-the-schema-map"></a>Configurare il mapping dello Schema

Configurare un mapping dello schema di questo tipo, ad esempio UpdatePV:

```cpp
BEGIN_SCHEMA_MAP(CUpdateSession)
    SCHEMA_ENTRY(DBSCHEMA_TABLES, CUpdateSessionTRSchemaRowset)
    SCHEMA_ENTRY(DBSCHEMA_COLUMNS, CUpdateSessionColSchemaRowset)
    SCHEMA_ENTRY(DBSCHEMA_PROVIDER_TYPES, CUpdateSessionPTSchemaRowset)
END_SCHEMA_MAP()
```

Per supportare `IDBSchemaRowset`, è necessario supportare DBSCHEMA_PROVIDER_TYPES DBSCHEMA_TABLES e DBSCHEMA_COLUMNS. È possibile aggiungere ulteriori rowset dello schema a discrezione dell'utente.

Dichiarare una classe di set di righe dello schema con un `Execute` metodo come `CUpdateSessionTRSchemaRowset` in `UpdatePV`:

```cpp
class CUpdateSessionTRSchemaRowset :
    public CSchemaRowsetImpl < CUpdateSessionTRSchemaRowset,
                              CTABLESRow, CUpdateSession >
...
// Execute looks like this; what pointers does the consumer use?
    HRESULT Execute(DBROWCOUNT* pcRowsAffected,
                    ULONG cRestrictions, const VARIANT* rgRestrictions)
```

`CUpdateSession` eredita da `IDBSchemaRowsetImpl`, pertanto tutti i metodi per la gestione delle restrizioni. Usando `CSchemaRowsetImpl`, dichiara tre classi figlio (elencate nella mappa dello schema precedente): `CUpdateSessionTRSchemaRowset`, `CUpdateSessionColSchemaRowset`, e `CUpdateSessionPTSchemaRowset`. Ognuna di queste classi figlio ha un `Execute` metodo che gestisce il rispettivo set di restrizioni (criteri di ricerca). Ciascuna `Execute` metodo confronta i valori del *cRestrictions* e *rgRestrictions* parametri. Vedere la descrizione di questi parametri nella [SetRestrictions](../../data/oledb/idbschemarowsetimpl-setrestrictions.md).

Per altre informazioni sulle restrizioni corrispondano a un set di righe dello schema specifico, vedere la tabella del set di righe dello schema GUID nelle [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) nel **riferimento per programmatori OLE DB** nel SDK di Windows .

Ad esempio, se si supporta la restrizione nome_tabella su DBSCHEMA_TABLES, si potrebbe eseguire le operazioni seguenti:

In primo luogo, cercare DBSCHEMA_TABLES e che supporta quattro restrizioni (in ordine).

|Restrizione di set di righe dello schema|Valore di restrizione|
|-------------------------------|-----------------------|
|TABLE_CATALOG|0x1 (binario 1)|
|TABLE_SCHEMA|0x2 (binario 10)|
|TABLE_NAME|0x4 (binario 100)|
|TABLE_TYPE|0x8 (1000 binaria)|

Successivamente, sussiste un bit per ogni limitazione. Poiché si desidera supportare solo TABLE_NAME, sarebbe necessario restituire 0x4 nel `rgRestrictions` elemento. Se è supportato a TABLE_CATALOG e nome_tabella, sarebbe necessario restituire 0x5 (101 binaria).

Per impostazione predefinita, l'implementazione restituisce 0 (non supporta restrizioni) per tutte le richieste. UpdatePV è un esempio di un provider che supporta le restrizioni.

### <a name="example"></a>Esempio

Questo codice è tratto dal [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) esempio. `UpdatePv` supporta i tre set di righe dello schema necessario: DBSCHEMA_TABLES DBSCHEMA_COLUMNS e DBSCHEMA_PROVIDER_TYPES. Ad esempio di come implementare il supporto dello schema nel provider, in questo argomento illustra che implementa il set di righe DBSCHEMA_TABLE.

> [!NOTE]
> Il codice di esempio potrebbe essere diverso da quello riportato di seguito; è consigliabile considerare il codice di esempio come la versione più aggiornata.

Il primo passaggio per aggiungere supporto per lo schema è per determinare le restrizioni che si intende supportare. Per determinare le restrizioni che sono disponibili per il set di righe dello schema, esaminare la specifica OLE DB per la definizione di `IDBSchemaRowset`. Dopo la definizione principale, verrà visualizzata una tabella che contiene il nome di set di righe dello schema, il numero di restrizioni e le colonne di limitazione. Selezionare il set di righe dello schema che si desidera supportare e prendere nota del numero di restrizioni e le colonne di restrizione. Ad esempio, DBSCHEMA_TABLES supporta quattro restrizioni (TABLE_CATALOG, TABLE_SCHEMA, TABLE_NAME e TABLE_TYPE):

```cpp
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

Ogni colonna di restrizione è rappresentata da un bit. Se si prevede di supportare una restrizione (vale a dire, è possibile eseguire una query da esso), impostare tale bit su 1. Se non si desidera supportare una restrizione, impostare tale bit a zero. Dalla riga di codice riportato in precedenza, `UpdatePV` supporta le restrizioni di TABLE_NAME e TABLE_TYPE nel set di righe DBSCHEMA_TABLES. Si tratta il terzo (maschera di bit 100) e il quarta restrizioni (maschera di bit 1000). Pertanto, la maschera di bit per `UpdatePv` è 1100 (o 0x0C):

```cpp
if (InlineIsEqualGUID(rguidSchema[l], DBSCHEMA_TABLES))
    rgRestrictions[l] = 0x0C;
```

Nell'esempio `Execute` funzione è simile a quelli nei normali set di righe. Si dispone di tre argomenti: *pcRowsAffected*, *cRestrictions*, e *rgRestrictions*. Il *pcRowsAffected* variabile è un parametro di output che il provider può restituire il conteggio delle righe nel set di righe dello schema. Il *cRestrictions* è un parametro di input che contiene il numero di restrizioni passata dal consumer al provider. Il *rgRestrictions* parametro è una matrice di valori di variante che contengono i valori di restrizione.

```cpp
HRESULT Execute(DBROWCOUNT* pcRowsAffected, ULONG cRestrictions,
                const VARIANT* rgRestrictions)
```

Il *cRestrictions* variabile è basata sul numero totale di restrizioni per un set di righe dello schema, indipendentemente dal fatto che il provider li supporta. Poiché UpdatePv supporta due restrizioni (terza e quarta), questo codice cerca solo un *cRestrictions* valore maggiore o uguale a tre.

Il valore della restrizione TABLE_NAME viene archiviato *rgRestrictions [2]* (anche in questo caso, la terza restrizione in una matrice in base zero è 2). Verificare che la restrizione non è VT_EMPTY effettivamente supportarla. Si noti che VT_NULL non è uguale a VT_EMPTY. Ma specifica un valore di restrizione valida.

Il `UpdatePv` definizione di un nome di tabella è un nome percorso completo in un file di testo. Estrarre il valore della restrizione e quindi provare ad aprire il file per assicurarsi che il file effettivamente esistenti. Se il file non esiste, restituisce S_OK. Ciò potrebbe sembrare un po' complessa, ma il codice viene effettivamente comunicare al consumer è che non vi sono alcun tabelle supportate per il nome specificato. Il valore restituito S_OK significa che il codice eseguito correttamente.

```cpp
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

Che supporta la restrizione quarta (TABLE_TYPE) è simile alla restrizione di terza. Verificare che il valore non è VT_EMPTY. Questa restrizione restituisce solo il tipo di tabella, tabella. Per determinare i valori validi per il DBSCHEMA_TABLES, esaminare **appendice B** delle **riferimento per programmatori OLE DB** nella sezione di set di righe di tabelle.

```cpp
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

Si tratta in cui si crea effettivamente una voce di riga per il set di righe. La variabile `trData` corrisponde a `CTABLESRow`, una struttura definita nei modelli di provider OLE DB. `CTABLESRow` corrisponde alla definizione del set di righe di tabelle nel **appendice B** della specifica OLE DB. È sufficiente una riga da aggiungere in quanto si può supportare solo una tabella alla volta.

```cpp
// Bring over the data:
wcspy_s(trData.m_szType, OLESTR("TABLE"), 5);

wcspy_s(trData.m_szDesc, OLESTR("The Directory Table"), 19);

wcsncpy_s(trData.m_szTable, T2OLE(szFile), _TRUNCATE());
```

`UpdatePV` Imposta solo tre colonne: TABLE_NAME, TABLE_TYPE, and DESCRIPTION. Prendere nota delle colonne per cui si restituiscono informazioni, perché queste informazioni sono necessarie quando si implementa `GetDBStatus`:

```cpp
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

Il `GetDBStatus` funzione è importante per il corretto funzionamento del set di righe dello schema. Poiché che non restituiscono dati per ogni colonna nel set di righe di tabelle, è necessario specificare quali colonne che restituiscono dati per cui non fosse possibile.

```cpp
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

Poiché le `Execute` funzione restituisce i dati per i campi TABLE_NAME TABLE_TYPE e descrizione dal set di righe di tabelle, è possibile esaminare **appendice B** della specifica OLE DB e determinare (tramite il conteggio dall'alto verso il basso) che siano numeri ordinali 3, 4 e 6. Per ognuno di tali colonne, restituire DBSTATUS_S_OK. Per tutte le altre colonne restituisce DBSTATUS_S_ISNULL. È importante restituire lo stato, poiché un consumer non riconosce che il valore restituito è NULL o qualche altro. Anche in questo caso, notare che NULL non equivale a vuoto.

Per altre informazioni sull'interfaccia del set di righe dello schema OLE DB, vedere la [IDBSchemaRowset](../../data/oledb/idbschemarowsetimpl-class.md) dell'interfaccia nel **riferimento per programmatori OLE DB**.

Per informazioni su come usare i consumer `IDBSchemaRowset` metodi, vedere [recupero di metadati con i rowset dello Schema](../../data/oledb/obtaining-metadata-with-schema-rowsets.md).

Per un esempio di un provider che supporta i set di righe dello schema, vedere la [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) esempio.

## <a name="see-also"></a>Vedere anche

[Tecniche avanzate del provider](../../data/oledb/advanced-provider-techniques.md)
