---
title: Recupero di metadati con i rowset dello Schema | Documenti Microsoft
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
ms.openlocfilehash: da5a715be2ac6dc94ace25ee98781d2e9a4c5f8e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33114734"
---
# <a name="obtaining-metadata-with-schema-rowsets"></a>Recupero di metadati con i rowset dello schema
Talvolta è necessario ottenere informazioni sul provider, il set di righe, la tabella, le colonne o altre informazioni sul database senza aprire il set di righe. I dati sulla struttura del database sono chiamati metadati e possono essere recuperati con alcuni metodi diversi. Un metodo consiste nell'usare set di righe dello schema.  
  
 Modelli OLE DB offrono un set di classi per recuperare le informazioni dello schema. Queste classi creano set di righe dello schema predefiniti e sono elencate nella [classi Rowset dello Schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md).  
  
> [!NOTE]
>  Se si usa OLAP e alcuni dei set di righe non sono supportati dalle classi per i set di righe dello schema, ad esempio se è presente un numero variabile di colonne, è consigliabile provare a usare `CManualAccessor` o `CDynamicAccessor`. È possibile scorrere verso il basso le colonne e usare istruzioni case per gestire i possibili tipi di dati per ogni colonna.  
  
## <a name="catalogschema-model"></a>Modello di catalogo/schema  
 ANSI SQL definisce un modello di catalogo/schema per gli archivi dati, usato da OLE DB. In questo modello i cataloghi (database) contengono schemi e questi contengono tabelle.  
  
-   **Catalogo** un catalogo è un nome diverso per un database. Si tratta di una raccolta di schemi correlati. Per elencare i cataloghi (database) appartenenti a una determinata origine dati, utilizzare [CCatalog](../../data/oledb/ccatalogs-ccataloginfo.md). Poiché molti database hanno un solo catalogo, i metadati vengono talvolta chiamati semplicemente informazioni dello schema.  
  
-   **Schema** uno schema è una raccolta di oggetti di database che appartengono o sono stati creati da un determinato utente. Per elencare gli schemi di proprietà di un determinato utente, utilizzare [CSchemata](../../data/oledb/cschemata-cschematainfo.md).  
  
     In Microsoft SQL Server e ODBC 2. x, uno schema è un proprietario (ad esempio, dbo è un tipico nome di schema). Inoltre, SQL Server archivia i metadati in un set di tabelle: una tabella contiene un elenco di tutte le tabelle e un'altra tabella contiene un elenco di tutte le colonne. Nei database di Microsoft Access non esiste l'equivalente di uno schema.  
  
-   **Tabella** le tabelle sono raccolte di colonne disposte in base a ordini specifici. Per elencare le tabelle definite in un determinato catalogo (database) e informazioni su tali tabelle, utilizzare [CTables](../../data/oledb/ctables-ctableinfo.md)).  
  
## <a name="restrictions"></a>Restrizioni  
 Quando si esegue una query per le informazioni dello schema, è possibile usare restrizioni per specificare il tipo di informazioni a cui si è interessati. È possibile immaginare le restrizioni come un filtro o un qualificatore in una query. Ad esempio, nella query:  
  
```  
SELECT * FROM authors where l_name = 'pivo'  
```  
  
 `l_name` è una restrizione. Questo è un esempio molto semplice con una sola restrizione, ma le classi per i set di righe dello schema supportano diverse restrizioni.  
  
 Il [classi typedef di set di righe dello schema](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) incapsulano tutti i rowset dello schema OLE DB in modo che è possibile accedere a un set di righe dello schema come qualsiasi altro set di righe creandone un'istanza e aprendolo. Ad esempio, la classe typedef [CColumns](../../data/oledb/ccolumns-ccolumnsinfo.md) è definito come:  
  
```  
CRestrictions<CAccessor<CColumnsInfo>  
```  
  
 Il [CRestrictions](../../data/oledb/crestrictions-class.md) classe fornisce il supporto per le restrizioni. Dopo aver creato un'istanza del set di righe dello schema, chiamare [CRestrictions:: Open](../../data/oledb/crestrictions-open.md). Questo metodo restituisce un set di risultati basato sulle restrizioni specificate.  
  
 Per specificare le restrizioni, fare riferimento a [appendice b: Schema Rowsets](http://go.microsoft.com/fwlink/p/?linkid=64681) e cercare il set di righe che si sta utilizzando. Ad esempio, **CColumns** corrisponde alla [set di righe COLUMNS](http://go.microsoft.com/fwlink/p/?linkid=64682); questo argomento elenca le colonne di restrizione nel set di righe COLUMNS: TABLE_CATALOG, TABLE_SCHEMA, TABLE_NAME, COLUMN_NAME. Nello specificare le restrizioni, è necessario seguire questo ordine.  
  
 In tal caso, ad esempio, se si desidera limitare in base al nome di tabella, notare che TABLE_NAME è la terza colonna di restrizione e quindi chiamare **aprire**, specificando il nome di tabella desiderato come terzo parametro di restrizione, come illustrato nell'esempio seguente.  
  
#### <a name="to-use-schema-rowsets"></a>Per usare set di righe dello schema  
  
1.  È necessario includere il file di intestazione Atldbsch.h (che, naturalmente, è anche necessario per il supporto dei consumer).  
  
2.  Creare un'istanza di un oggetto set di righe dello schema nel file di intestazione del consumer o del documento. Se si desidera visualizzare nella tabella, dichiarare un **CTables** oggetto; se si desiderano informazioni di colonna, dichiarare un **CColumns** oggetto. Questo esempio mostra come recuperare le colonne nella tabella degli autori:  
  
    ```  
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
  
3.  Per recuperare le informazioni, accedere al membro dati appropriato dell'oggetto set di righe dello schema, ad esempio `ColumnSchemaRowset.m_szColumnName`. Questo corrisponde a COLUMN_NAME. Per ogni membro dati corrispondente per la colonna di OLE DB, vedere [CColumns](../../data/oledb/ccolumns-ccolumnsinfo.md).  
  
 Per il riferimento del set di righe dello schema, le classi typedef fornite nei modelli OLE DB (vedere [classi Rowset dello Schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)).  
  
 Per ulteriori informazioni sui set di righe dello schema OLE DB, incluse le colonne di restrizione, vedere [appendice b: Schema Rowsets](http://go.microsoft.com/fwlink/p/?linkid=64681) in riferimento OLE DB Programmer.  
  
 Per esempi più complessi di come utilizzare classi rowset dello schema, vedere il [CatDB](http://msdn.microsoft.com/en-us/003d516b-2bf6-444e-8be5-4ebaa0b66046) e [DBViewer](http://msdn.microsoft.com/en-us/07620f99-c347-4d09-9ebc-2459e8049832) esempi.  
  
 Per informazioni sul supporto di provider di set di righe dello schema, vedere [supporto dei rowset dello Schema](../../data/oledb/supporting-schema-rowsets.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)