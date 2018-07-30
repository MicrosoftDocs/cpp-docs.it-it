---
title: Recupero di metadati con i rowset dello Schema | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- schema rowsets, getting OLE DB provider metadata
- OLE DB consumer templates, getting provider metadata
- metadata, getting (OLE DB Templates)
ms.assetid: 6b448461-82fb-4acf-816b-3cbb0ca1d186
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 9d86984dc67dd5cbea6fe52ff1c8b099e5b061f5
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39337190"
---
# <a name="obtaining-metadata-with-schema-rowsets"></a>Recupero di metadati con i rowset dello schema
Talvolta è necessario ottenere informazioni sul provider, il set di righe, la tabella, le colonne o altre informazioni sul database senza aprire il set di righe. I dati sulla struttura del database sono chiamati metadati e possono essere recuperati con alcuni metodi diversi. Un metodo consiste nell'usare set di righe dello schema.  
  
 Modelli OLE DB offrono un set di classi per recuperare le informazioni dello schema. Queste classi creano set di righe dello schema predefinito e sono racchiusi [classi Rowset dello Schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md).  
  
> [!NOTE]
>  Se si usa OLAP e alcuni dei set di righe non sono supportati dalle classi per i set di righe dello schema, ad esempio se è presente un numero variabile di colonne, è consigliabile provare a usare `CManualAccessor` o `CDynamicAccessor`. È possibile scorrere verso il basso le colonne e usare istruzioni case per gestire i possibili tipi di dati per ogni colonna.  
  
## <a name="catalogschema-model"></a>Modello di catalogo/schema  
 ANSI SQL definisce un modello di catalogo/schema per gli archivi dati, usato da OLE DB. In questo modello i cataloghi (database) contengono schemi e questi contengono tabelle.  
  
-   **Catalogo** un catalogo è un altro nome per un database. Si tratta di una raccolta di schemi correlati. Per elencare i cataloghi (database) che appartengono a una determinata origine dati, usare [CCatalog](../../data/oledb/ccatalogs-ccataloginfo.md). Poiché molti database hanno un solo catalogo, i metadati vengono talvolta chiamati semplicemente informazioni dello schema.  
  
-   **Schema** uno schema è una raccolta di oggetti di database che appartengono o sono stati creati da un utente specifico. Per elencare gli schemi di proprietà di un determinato utente, usare [CSchemata](../../data/oledb/cschemata-cschematainfo.md).  
  
     In condizioni per Microsoft SQL Server e ODBC 2.x, uno schema è un proprietario (ad esempio, dbo è un tipico nome di schema). Inoltre, SQL Server archivia i metadati in un set di tabelle: una tabella contiene un elenco di tutte le tabelle e un'altra tabella contiene un elenco di tutte le colonne. Nei database di Microsoft Access non esiste l'equivalente di uno schema.  
  
-   **Tabella** le tabelle sono raccolte di colonne disposte in un ordine specifico. Per elencare le tabelle definite in un catalogo specifico (database) e informazioni su tali tabelle, usare [CTables](../../data/oledb/ctables-ctableinfo.md)).  
  
## <a name="restrictions"></a>Restrizioni  
 Quando si esegue una query per le informazioni dello schema, è possibile usare restrizioni per specificare il tipo di informazioni a cui si è interessati. È possibile immaginare le restrizioni come un filtro o un qualificatore in una query. Ad esempio, nella query:  
  
```sql  
SELECT * FROM authors where l_name = 'pivo'  
```  
  
 `l_name` è una restrizione. Questo è un esempio molto semplice con una sola restrizione, ma le classi per i set di righe dello schema supportano diverse restrizioni.  
  
 Il [classi typedef di set di righe dello schema](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) incapsulano tutti i rowset dello schema OLE DB in modo che è possibile accedere a un set di righe dello schema come qualsiasi altro set di righe da un'istanza e aprendolo. Ad esempio, la classe typedef [CColumns](../../data/oledb/ccolumns-ccolumnsinfo.md) viene definito come:  
  
```cpp  
CRestrictions<CAccessor<CColumnsInfo>  
```  
  
 Il [CRestrictions](../../data/oledb/crestrictions-class.md) classe fornisca il supporto per restrizione. Dopo aver creato un'istanza del set di righe dello schema, chiamare [CRestrictions:: Open](../../data/oledb/crestrictions-open.md). Questo metodo restituisce un set di risultati basato sulle restrizioni specificate.  
  
 Per specificare le restrizioni, vedere [appendice b: Schema Rowsets](http://go.microsoft.com/fwlink/p/?linkid=64681) e cercare il set di righe che si sta utilizzando. Ad esempio, `CColumns` corrisponde alla [set di righe COLUMNS](http://go.microsoft.com/fwlink/p/?linkid=64682); questo argomento elenca le colonne di restrizione nel set di righe COLUMNS: TABLE_CATALOG, TABLE_SCHEMA, TABLE_NAME, COLUMN_NAME. Nello specificare le restrizioni, è necessario seguire questo ordine.  
  
 Quindi, ad esempio, se si desidera limitare in base al nome di tabella, notare che TABLE_NAME è la terza colonna di restrizione e quindi chiamare `Open`, specificando il nome della tabella desiderato come terzo parametro di restrizione, come illustrato nell'esempio seguente.  
  
#### <a name="to-use-schema-rowsets"></a>Per usare set di righe dello schema  
  
1.  È necessario includere il file di intestazione Atldbsch.h (che, naturalmente, è anche necessario per il supporto dei consumer).  
  
2.  Creare un'istanza di un oggetto set di righe dello schema nel file di intestazione del consumer o del documento. Se si desidera che le informazioni della tabella, dichiarare un `CTables` oggetto; se si desiderano informazioni di colonna, dichiarare un `CColumns` oggetto. Questo esempio mostra come recuperare le colonne nella tabella degli autori:  
  
    ```cpp  
    CDataSource ds;  
    ds.Open();  
    CSession ss;  
    ss.Open();  
    CColumns ColumnSchemaRowset;  
    // TABLE_NAME is the third restriction column, so  
    // specify "authors" as the third restriction parameter:  
    hr = ColumnSchemaRowset.Open(ss, NULL, NULL, "authors");  
    hr = ColumnSchemaRowset.MoveFirst();  
    while (hr == S_OK)  
    {  
       hr = ColumnSchemaRowset.MoveNext();  
    }  
    ```  
  
3.  Per recuperare le informazioni, accedere al membro dati appropriato dell'oggetto set di righe dello schema, ad esempio `ColumnSchemaRowset.m_szColumnName`. Questo corrisponde a COLUMN_NAME. Per visualizzare la colonna OLE DB corrisponde a ciascun membro dati, vedere [CColumns](../../data/oledb/ccolumns-ccolumnsinfo.md).  
  
 Per il riferimento del set di righe dello schema, le classi typedef fornite nei modelli OLE DB (vedere [classi Rowset dello Schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)).  
  
 Per altre informazioni sui set di righe dello schema OLE DB, incluse le colonne di restrizione, vedere [appendice b: Schema Rowsets](http://go.microsoft.com/fwlink/p/?linkid=64681) nel riferimento delle per programmatori OLE DB.  
  
 Per esempi più complessi di come usare classi rowset dello schema, vedere la [CatDB](http://msdn.microsoft.com/003d516b-2bf6-444e-8be5-4ebaa0b66046) e [DBViewer](http://msdn.microsoft.com/07620f99-c347-4d09-9ebc-2459e8049832) esempi.  
  
 Per informazioni sul supporto del provider di set di righe dello schema, vedere [che supportano i set di righe dello Schema](../../data/oledb/supporting-schema-rowsets.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)