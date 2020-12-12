---
description: 'Altre informazioni su: supporto dei set di righe dello schema'
title: Supporto dei set di righe dello schema
ms.date: 11/04/2016
helpviewer_keywords:
- schema rowsets
- OLE DB consumer templates, schema rowsets
- OLE DB providers, schema rowsets
- OLE DB, schema rowsets
ms.assetid: 71c5e14b-6e33-4502-a2d9-a1dc6d6e9ba0
ms.openlocfilehash: 029b05f594dda01112cd975543462f92e351b1c3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97272734"
---
# <a name="supporting-schema-rowsets"></a>Supporto dei set di righe dello schema

I set di righe dello schema consentono ai consumer di ottenere informazioni su un archivio dati senza conoscere la struttura, o lo schema, sottostante. Un archivio dati può ad esempio contenere tabelle organizzate in una gerarchia definita dall'utente, quindi non ci sarebbe alcun modo per conoscere lo schema, se non leggendolo. Come altro esempio, le procedure guidate di Visual C++ usano set di righe dello schema per generare funzioni di accesso per il consumer. Per consentire al consumer di eseguire questa operazione, l'oggetto sessione del provider espone i metodi sull'interfaccia [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) . Nelle applicazioni Visual C++ si usa la classe [IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md) per implementare `IDBSchemaRowset`.

`IDBSchemaRowsetImpl` supporta i metodi seguenti:

- [CheckRestrictions](./idbschemarowsetimpl-class.md#checkrestrictions) controlla la validità delle restrizioni rispetto a un set di righe dello schema.

- [CreateSchemaRowset](./idbschemarowsetimpl-class.md#createschemarowset) implementa una funzione di creazione di oggetti COM per l'oggetto specificato dal parametro di modello.

- [SetRestrictions](./idbschemarowsetimpl-class.md#setrestrictions) specifica le restrizioni supportate in un set di righe dello schema specifico.

- [IDBSchemaRowset::GetRowset](./idbschemarowsetimpl-class.md#getrowset) restituisce un set di righe dello schema (ereditato dall'interfaccia).

- [GetSchemas](./idbschemarowsetimpl-class.md#getschemas) restituisce un elenco di set di righe dello schema accessibili da `IDBSchemaRowsetImpl::GetRowset` (ereditato dall'interfaccia).

## <a name="atl-ole-db-provider-wizard-support"></a>Supporto della Creazione guidata provider OLE DB ATL

::: moniker range="msvc-160"

La Creazione guidata provider OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=msvc-150"

La **Creazione guidata provider OLE DB ATL** crea tre classi di schema nel file di intestazione della sessione:

- **C**<em>NomeBreve</em>**SessionTRSchemaRowset**

- **C**<em>NomeBreve</em>**SessionColSchemaRowset**

- **C**<em>NomeBreve</em>**SessionPTSchemaRowset**

Queste classi rispondono alle richieste del consumer di informazioni sullo schema. Si noti che la specifica OLE DB richiede che siano supportati questi tre set di righe dello schema:

- **C**<em>NomeBreve</em>**SessionTRSchemaRowset** gestisce le richieste di informazioni sulle tabelle (set di righe dello schema DBSCHEMA_TABLES).

- **C**<em>NomeBreve</em>**SessionColSchemaRowset** gestisce le richieste di informazioni sulle colonne (set di righe dello schema DBSCHEMA_COLUMNS). La procedura guidata fornisce implementazioni di esempio per queste classi, che restituiscono informazioni sullo schema per un provider DOS.

- **C**<em>NomeBreve</em>**SessionPTSchemaRowset** gestisce le richieste di informazioni sullo schema relative al tipo di provider (set di righe dello schema DBSCHEMA_PROVIDER_TYPES). L'implementazione predefinita fornita dalla procedura guidata restituisce S_OK.

È possibile personalizzare queste classi per gestire le informazioni sullo schema appropriate per il provider:

- In **C**<em>NomeBreve</em>**SessionTRSchemaRowset** è necessario compilare i campi relativi a catalogo, tabella e descrizione (`trData.m_szType`, `trData.m_szTable` e `trData.m_szDesc`). L'esempio generato dalla procedura guidata usa solo una riga (tabella). Altri provider potrebbero restituire più di una tabella.

- In **C**<em>NomeBreve</em>**SessionColSchemaRowset** il nome della tabella viene passato come `DBID`.

::: moniker-end

## <a name="setting-restrictions"></a>Impostazione di restrizioni

Un concetto importante nel supporto dei set di righe dello schema è l'impostazione di restrizioni, che è possibile eseguire tramite `SetRestrictions`. Le restrizioni consentono agli utenti di recuperare solo le righe corrispondenti (ad esempio, trovare tutte le colonne nella tabella "MyTable"). Sono facoltative e, nel caso in cui nessuna sia supportata (impostazione predefinita), vengono restituiti sempre tutti i dati. Per un esempio di provider che supporta le restrizioni, vedere l'esempio [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV).

## <a name="setting-up-the-schema-map"></a>Impostazione della mappa di schema

Impostare una mappa di schema come la seguente in Session.h in UpdatePV:

```cpp
BEGIN_SCHEMA_MAP(CUpdateSession)
    SCHEMA_ENTRY(DBSCHEMA_TABLES, CUpdateSessionTRSchemaRowset)
    SCHEMA_ENTRY(DBSCHEMA_COLUMNS, CUpdateSessionColSchemaRowset)
    SCHEMA_ENTRY(DBSCHEMA_PROVIDER_TYPES, CUpdateSessionPTSchemaRowset)
END_SCHEMA_MAP()
```

Per supportare `IDBSchemaRowset`, è necessario supportare DBSCHEMA_TABLES, DBSCHEMA_COLUMNS e DBSCHEMA_PROVIDER_TYPES. È possibile aggiungere altri set di righe dello schema a propria discrezione.

Dichiarare una classe di set di righe dello schema con un metodo `Execute` come `CUpdateSessionTRSchemaRowset` in `UpdatePV`:

```cpp
class CUpdateSessionTRSchemaRowset :
    public CSchemaRowsetImpl < CUpdateSessionTRSchemaRowset,
                              CTABLESRow, CUpdateSession >
...
// Execute looks like this; what pointers does the consumer use?
    HRESULT Execute(DBROWCOUNT* pcRowsAffected,
                    ULONG cRestrictions, const VARIANT* rgRestrictions)
```

`CUpdateSession` eredita da `IDBSchemaRowsetImpl`, quindi ha tutti i metodi per la gestione delle restrizioni. Usando `CSchemaRowsetImpl`, dichiarare tre classi figlio (elencate nella mappa di schema precedente): `CUpdateSessionTRSchemaRowset`, `CUpdateSessionColSchemaRowset` e `CUpdateSessionPTSchemaRowset`. Ognuna di queste classi figlio ha un metodo `Execute` che gestisce il rispettivo set di restrizioni (criteri di ricerca). Ogni metodo `Execute` confronta i valori dei parametri *cRestrictions* e *rgRestrictions*. Vedere la descrizione di questi parametri in [SetRestrictions](./idbschemarowsetimpl-class.md#setrestrictions).

Per altre informazioni sulle restrizioni corrispondenti a un particolare set di righe dello schema, vedere la tabella dei GUID dei set di righe dello schema in [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) nella **guida di riferimento per programmatori OLE DB** in Windows SDK.

Se, ad esempio, si supporta la restrizione TABLE_NAME in DBSCHEMA_TABLES, procedere come segue:

Prima di tutto, cercare DBSCHEMA_TABLES e vedere che supporta quattro restrizioni (in ordine).

|Restrizione del set di righe dello schema|Valore della restrizione|
|-------------------------------|-----------------------|
|TABLE_CATALOG|0x1 (valore binario 1)|
|TABLE_SCHEMA|0x2 (valore binario 10)|
|TABLE_NAME|0x4 (valore binario 100)|
|TABLE_TYPE|0x8 (valore binario 1000)|

Notare quindi che c'è un bit per ogni restrizione. Poiché si vuole supportare solo la restrizione TABLE_NAME, è necessario restituire 0x4 nell'elemento `rgRestrictions`. Per supportare TABLE_CATALOG e TABLE_NAME, sarebbe necessario restituire 0x5 (valore binario 101).

Per impostazione predefinita, l'implementazione restituisce 0 (non è supportata alcuna restrizione) per qualsiasi richiesta. UpdatePV è un esempio di provider che supporta le restrizioni.

### <a name="example"></a>Esempio

Il codice è tratto dall'esempio [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV). `UpdatePv` supporta i tre set di righe dello schema richiesti: DBSCHEMA_TABLES, DBSCHEMA_COLUMNS e DBSCHEMA_PROVIDER_TYPES. Per fornire un esempio di come implementare il supporto dello schema nel provider, questo argomento illustra l'implementazione del set di righe DBSCHEMA_TABLE.

> [!NOTE]
> Il codice di esempio può essere diverso da quello riportato di seguito. Considerare il codice di esempio come la versione più aggiornata.

Il primo passaggio per aggiungere il supporto dello schema consiste nel determinare le restrizioni da supportare. Per determinare le restrizioni disponibili per il set di righe dello schema, esaminare la specifica OLE DB per la definizione di `IDBSchemaRowset`. Dopo la definizione principale, è presente una tabella che contiene il nome del set di righe dello schema, il numero di restrizioni e le colonne delle restrizioni. Selezionare il set di righe dello schema da supportare e prendere nota del numero di restrizioni e delle colonne delle restrizioni. DBSCHEMA_TABLES supporta ad esempio quattro restrizioni (TABLE_CATALOG, TABLE_SCHEMA, TABLE_NAME e TABLE_TYPE):

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

Ogni colonna delle restrizioni è rappresentata da un bit. Se si vuole supportare una restrizione (ovvero è possibile eseguire una query in base a essa), impostare tale bit su 1. Se non si vuole supportare una restrizione, impostare tale bit su zero. Dalla riga di codice precedente, `UpdatePV` supporta le restrizioni TABLE_NAME e TABLE_TYPE nel set di righe DBSCHEMA_TABLES. Si tratta della terza (maschera di bit 100) e della quarta (maschera di bit 1000) restrizione. La maschera di bit per `UpdatePv` è quindi 1100 (o 0x0C):

```cpp
if (InlineIsEqualGUID(rguidSchema[l], DBSCHEMA_TABLES))
    rgRestrictions[l] = 0x0C;
```

La funzione `Execute` seguente è simile a quelle nei normali set di righe. Ci sono tre argomenti: *pcRowsAffected*, *cRestrictions* e *rgRestrictions*. La variabile *pcRowsAffected* è un parametro di output in cui il provider può restituire il conteggio delle righe nel set di righe dello schema. Il parametro *cRestrictions* è un parametro di input che contiene il numero di restrizioni passate dal consumer al provider. Il parametro *rgRestrictions* è una matrice di valori VARIANT che contengono i valori delle restrizioni.

```cpp
HRESULT Execute(DBROWCOUNT* pcRowsAffected, ULONG cRestrictions,
                const VARIANT* rgRestrictions)
```

La variabile *cRestrictions* è basata sul numero totale di restrizioni per un set di righe dello schema, indipendentemente dal supporto del provider. Poiché UpdatePv supporta due restrizioni (terza e quarta), questo codice cerca solo un valore *cRestrictions* maggiore o uguale a tre.

Il valore per la restrizione TABLE_NAME è archiviato in *rgRestrictions[2]* (anche in questo caso la terza restrizione in una matrice in base zero è 2). Verificare che la restrizione non sia VT_EMPTY per poterla supportare. Si noti che VT_NULL non è uguale a VT_EMPTY. VT_NULL specifica un valore di restrizione valido.

La definizione di `UpdatePv` di un nome di tabella è un nome di percorso completo di un file di testo. Estrarre il valore della restrizione e quindi provare ad aprire il file per assicurarsi che il file esista effettivamente. Se il file non esiste, restituire S_OK. Ciò potrebbe sembrare un comportamento inverso, ma il codice sta effettivamente comunicando al consumer che non sono state trovate tabelle supportate con il nome specificato. Il valore restituito S_OK significa che il codice è stato eseguito correttamente.

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

Il supporto della quarta restrizione (TABLE_TYPE) è simile a quello della terza restrizione. Controllare che il valore non sia VT_EMPTY. Questa restrizione restituisce solo il tipo di tabella, TABLE. Per determinare i valori validi per DBSCHEMA_TABLES, esaminare l'**appendice B** della **guida di riferimento per programmatori OLE DB** nella sezione relativa al set di righe TABLES.

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

Questo punto è quello in cui si crea effettivamente una voce di riga per il set di righe. La variabile `trData` corrisponde a `CTABLESRow`, una struttura definita nei modelli di provider OLE DB. `CTABLESRow` corrisponde alla definizione del set di righe TABLES nell'**appendice B** della specifica OLE DB. C'è una sola una riga da aggiungere perché si può supportare solo una tabella alla volta.

```cpp
// Bring over the data:
wcspy_s(trData.m_szType, OLESTR("TABLE"), 5);

wcspy_s(trData.m_szDesc, OLESTR("The Directory Table"), 19);

wcsncpy_s(trData.m_szTable, T2OLE(szFile), _TRUNCATE());
```

`UpdatePV` imposta solo tre colonne: TABLE_NAME, TABLE_TYPE e DESCRIPTION. Prendere nota delle colonne per cui si restituiscono le informazioni, perché queste informazioni sono necessarie quando si implementa `GetDBStatus`:

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

La funzione `GetDBStatus` è importante per il corretto funzionamento del set di righe dello schema. Poiché non si restituiscono dati per ogni colonna nel set di righe TABLES, è necessario specificare per quali colonne vengono restituiti i dati e per quali no.

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

Poiché la funzione `Execute` restituisce i dati per i campi TABLE_NAME, TABLE_TYPE e DESCRIPTION del set di righe TABLES, è possibile cercare nell'**appendice B** della specifica OLE DB e determinare (contando dall'alto in basso) che si tratta degli ordinali 3, 4 e 6. Per ognuna di queste colonne, restituire DBSTATUS_S_OK. Per tutte le altre colonne, restituire DBSTATUS_S_ISNULL. È importante restituire questo stato perché un consumer potrebbe non comprendere che il valore restituito è NULL o un altro valore. Anche in questo caso, NULL non equivale a vuoto.

Per altre informazioni sull'interfaccia del set di righe dello schema OLE DB, vedere l'interfaccia [IDBSchemaRowset](../../data/oledb/idbschemarowsetimpl-class.md) nella **guida di riferimento per programmatori OLE DB**.

Per informazioni su come i consumer possono usare i metodi `IDBSchemaRowset`, vedere [Recupero di metadati con i set di righe dello schema](../../data/oledb/obtaining-metadata-with-schema-rowsets.md).

Per un esempio di provider che supporta i set di righe dello schema, vedere l'esempio [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV).

## <a name="see-also"></a>Vedi anche

[Tecniche avanzate per i provider](../../data/oledb/advanced-provider-techniques.md)
