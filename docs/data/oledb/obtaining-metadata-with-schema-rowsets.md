---
title: Recupero di metadati con i rowset dello schema
ms.date: 10/24/2018
helpviewer_keywords:
- schema rowsets, getting OLE DB provider metadata
- OLE DB consumer templates, getting provider metadata
- metadata, getting (OLE DB Templates)
ms.assetid: 6b448461-82fb-4acf-816b-3cbb0ca1d186
ms.openlocfilehash: 37418cc91913ed840d1601aab9005b476bf29ee0
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91508984"
---
# <a name="obtaining-metadata-with-schema-rowsets"></a>Recupero di metadati con i rowset dello schema

Talvolta è necessario ottenere informazioni sul provider, il set di righe, la tabella, le colonne o altre informazioni sul database senza aprire il set di righe. I dati sulla struttura del database sono chiamati metadati e possono essere recuperati con alcuni metodi diversi. Un metodo consiste nell'usare set di righe dello schema.

OLE DB modelli forniscono un set di classi per recuperare le informazioni sullo schema; Queste classi creano set di righe dello schema predefiniti e sono elencate in classi di [set di righe dello schema e classi typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md).

> [!NOTE]
> Se si usa OLAP e alcuni dei set di righe non sono supportati dalle classi per i set di righe dello schema, ad esempio se è presente un numero variabile di colonne, è consigliabile provare a usare `CManualAccessor` o `CDynamicAccessor`. È possibile scorrere verso il basso le colonne e usare istruzioni case per gestire i possibili tipi di dati per ogni colonna.

## <a name="catalogschema-model"></a>Modello di catalogo/schema

ANSI SQL definisce un modello di catalogo/schema per gli archivi dati, usato da OLE DB. In questo modello, i cataloghi (database) hanno schemi e schemi con tabelle.

- **Catalogo** di Un catalogo è un altro nome per un database. Si tratta di una raccolta di schemi correlati. Per elencare i cataloghi (database) appartenenti a una determinata origine dati, utilizzare [CCatalog](./schema-rowset-classes-and-typedef-classes.md#catalog). Poiché in molti database è presente un solo catalogo, i metadati vengono talvolta definiti informazioni sullo schema.

- **Schema** di Uno schema è una raccolta di oggetti di database di proprietà o creati da un determinato utente. Per elencare gli schemi di proprietà di un determinato utente, utilizzare [CSchemata](./schema-rowset-classes-and-typedef-classes.md#schemata).

   Nella terminologia di Microsoft SQL Server e ODBC 2.x uno schema è un proprietario (ad esempio, dbo è un tipico nome di schema). Inoltre, SQL Server archivia i metadati in un set di tabelle: una tabella contiene un elenco di tutte le tabelle e un'altra contiene un elenco di tutte le colonne. Non esiste alcun equivalente a uno schema in un database di Microsoft Access.

- **Tabella** di Le tabelle sono raccolte di colonne disposte in ordini specifici. Per elencare le tabelle definite in un determinato catalogo (database) e le informazioni su tali tabelle, utilizzare [CTables](./schema-rowset-classes-and-typedef-classes.md#table)).

## <a name="restrictions"></a>Restrizioni

Quando si esegue una query per le informazioni sullo schema, è possibile utilizzare le restrizioni per specificare il tipo di informazioni a cui si è interessati. È possibile immaginare le restrizioni come un filtro o un qualificatore in una query. Ad esempio, nella query:

```sql
SELECT * FROM authors WHERE l_name = 'pivo'
```

`l_name` è una restrizione. Si tratta di un semplice esempio con una sola restrizione. le classi del set di righe dello schema supportano diverse restrizioni.

Le [classi typedef del set di righe dello schema](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) incapsulano tutti i set di righe dello schema OLE DB in modo che sia possibile accedere a un set di righe dello schema esattamente come qualsiasi altro set di righe creando un'istanza e aprendolo Ad esempio, la classe typedef [CColumns](./schema-rowset-classes-and-typedef-classes.md#columns) è definita come segue:

```cpp
CRestrictions<CAccessor<CColumnsInfo>
```

La classe [CRestrictions](../../data/oledb/crestrictions-class.md) fornisce il supporto per le restrizioni. Dopo aver creato un'istanza del set di righe dello schema, chiamare [CRestrictions:: Open](./crestrictions-class.md#open). Questo metodo restituisce un set di risultati basato sulle restrizioni specificate.

Per specificare le restrizioni, vedere l' [Appendice B: set di righe dello schema](/previous-versions/windows/desktop/ms712921(v=vs.85)) e cercare il set di righe in uso. Ad esempio, `CColumns` corrisponde al [set di righe COLUMNS](/previous-versions/windows/desktop/ms723052(v=vs.85)). in questo argomento vengono elencate le colonne di restrizione nel set di righe COLUMNS: TABLE_CATALOG, TABLE_SCHEMA, TABLE_NAME column_name. Nello specificare le restrizioni, è necessario seguire questo ordine.

Se, ad esempio, si desidera limitare il nome della tabella, TABLE_NAME è la terza colonna di restrizione, quindi chiamare `Open` , specificando il nome della tabella desiderata come terzo parametro di restrizione, come illustrato nell'esempio seguente.

### <a name="to-use-schema-rowsets"></a>Per usare set di righe dello schema

1. Includere il file `Atldbsch.h` di intestazione (necessario `Atldbcli.h` anche per il supporto per gli utenti).

1. Creare un'istanza di un oggetto set di righe dello schema nel file di intestazione del consumer o del documento. Per informazioni sulle tabelle, dichiarare un `CTables` oggetto; se si desidera ottenere informazioni sulla colonna, dichiarare un `CColumns` oggetto. Questo esempio mostra come recuperare le colonne nella tabella degli autori:

    ```cpp
    CDataSource ds;
    ds.Open();
    CSession ss;
    ss.Open(ds);
    CColumns columnSchemaRowset;
    // TABLE_NAME is the third restriction column, so
    // specify "authors" as the third restriction parameter:
    HRESULT hr = columnSchemaRowset.Open(ss, NULL, NULL, L"authors");
    hr = columnSchemaRowset.MoveFirst();
    while (hr == S_OK)
    {
       hr = columnSchemaRowset.MoveNext();
    }
    ```

1. Per recuperare le informazioni, accedere al membro dati appropriato dell'oggetto set di righe dello schema, ad esempio `ColumnSchemaRowset.m_szColumnName`. Questo membro dati corrisponde a COLUMN_NAME. Per vedere a quale colonna OLE DB ogni membro dati corrisponde, vedere [CColumns](./schema-rowset-classes-and-typedef-classes.md#columns).

Per il riferimento del set di righe dello schema, le classi typedef fornite nei modelli di OLE DB (vedere [classi del set di righe dello schema e classi typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)).

Per ulteriori informazioni sui set di righe dello schema OLE DB, incluse le colonne di restrizione, vedere [Appendice B: set di righe dello schema](/previous-versions/windows/desktop/ms712921(v=vs.85)) nella Guida **di riferimento per i programmatori di OLE DB**.

Per esempi più complessi sull'uso delle classi dei set di righe dello schema, vedere gli esempi di [catdb](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Consumer) e [DBVIEWER](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Consumer) .

Per informazioni sul supporto del provider per i set di righe dello schema, vedere [supporto dei set di righe dello schema](../../data/oledb/supporting-schema-rowsets.md).

## <a name="see-also"></a>Vedere anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)
