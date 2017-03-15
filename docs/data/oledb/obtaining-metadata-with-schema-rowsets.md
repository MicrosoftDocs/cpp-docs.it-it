---
title: "Recupero di metadati con i rowset dello schema | Microsoft Docs"
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
  - "metadati, recupero di modelli OLE DB"
  - "OLE DB (modelli consumer), recupero di metadati del provider"
  - "rowset schema, recupero di metadati del provider OLE DB"
ms.assetid: 6b448461-82fb-4acf-816b-3cbb0ca1d186
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Recupero di metadati con i rowset dello schema
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Talvolta è necessario ottenere informazioni sul provider, il set di righe, la tabella, le colonne o altre informazioni sul database senza aprire il set di righe.  I dati sulla struttura del database sono chiamati metadati e possono essere recuperati con alcuni metodi diversi.  Un metodo consiste nell'usare set di righe dello schema.  
  
 I modelli OLE DB offrono un set di classi per recuperare le informazioni dello schema. Queste classi creano set di righe dello schema predefiniti e sono elencate in [Classi per i set di righe dello schema e classi typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md).  
  
> [!NOTE]
>  Se si usa OLAP e alcuni dei set di righe non sono supportati dalle classi per i set di righe dello schema, ad esempio se è presente un numero variabile di colonne, è consigliabile provare a usare `CManualAccessor` o `CDynamicAccessor`.  È possibile scorrere verso il basso le colonne e usare istruzioni case per gestire i possibili tipi di dati per ogni colonna.  
  
## Modello di catalogo\/schema  
 ANSI SQL definisce un modello di catalogo\/schema per gli archivi dati, usato da OLE DB.  In questo modello i cataloghi \(database\) contengono schemi e questi contengono tabelle.  
  
-   **Catalogo** Catalogo è un altro nome per un database.  Si tratta di una raccolta di schemi correlati.  Per elencare i cataloghi \(database\) che appartengono a una determinata origine dati, usare [CCatalog](../../data/oledb/ccatalogs-ccataloginfo.md).  Poiché molti database hanno un solo catalogo, i metadati vengono talvolta chiamati semplicemente informazioni dello schema.  
  
-   **Schema** Uno schema è una raccolta di oggetti di database di proprietà di un utente o creati da un determinato utente.  Per elencare gli schemi di cui è proprietario un utente specifico, usare [CSchemata](../../data/oledb/cschemata-cschematainfo.md).  
  
     Nella terminologia di Microsoft SQL Server e ODBC 2.x uno schema è un proprietario \(ad esempio, dbo è un tipico nome di schema\).  Inoltre, SQL Server archivia i metadati in un set di tabelle: una tabella contiene un elenco di tutte le tabelle e un'altra contiene un elenco di tutte le colonne.  Nei database di Microsoft Access non esiste l'equivalente di uno schema.  
  
-   **Tabella** Le tabelle sono raccolte di colonne disposte in base a ordini specifici.  Per elencare le tabelle definite in un catalogo specifico \(database\) e le informazioni su tali tabelle, usare [CTables](../../data/oledb/ctables-ctableinfo.md).  
  
## Restrizioni  
 Quando si esegue una query per le informazioni dello schema, è possibile usare restrizioni per specificare il tipo di informazioni a cui si è interessati.  È possibile immaginare le restrizioni come un filtro o un qualificatore in una query.  Ad esempio, nella query:  
  
```  
SELECT * FROM authors where l_name = 'pivo'  
```  
  
 `l_name` è una restrizione.  Questo è un esempio molto semplice con una sola restrizione, ma le classi per i set di righe dello schema supportano diverse restrizioni.  
  
 Le [classi typedef per i set di righe dello schema](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) incapsulano tutti i set di righe dello schema OLE DB, in modo che sia possibile accedere a un set di righe dello schema come per qualsiasi altro set di righe creandone un'istanza e aprendolo.  Ad esempio, la classe typedef [CColumns](../../data/oledb/ccolumns-ccolumnsinfo.md) viene definita in questo modo:  
  
```  
CRestrictions<CAccessor<CColumnsInfo>  
```  
  
 La classe [CRestrictions](../../data/oledb/crestrictions-class.md) fornisce il supporto per le restrizioni.  Dopo aver creato un'istanza del set di righe dello schema, chiamare [CRestrictions::Open](../../data/oledb/crestrictions-open.md).  Questo metodo restituisce un set di risultati basato sulle restrizioni specificate.  
  
 Per specificare le restrizioni, fare riferimento a [Appendice B: Set di righe dello schema](http://go.microsoft.com/fwlink/?LinkId=64681) e cercare il set di righe usato.  Ad esempio, **CColumns** corrisponde al [set di righe COLUMNS](http://go.microsoft.com/fwlink/?LinkId=64682). Questo argomento elenca le colonne di restrizione nel set di righe COLUMNS: TABLE\_CATALOG, TABLE\_SCHEMA, TABLE\_NAME, COLUMN\_NAME.  Nello specificare le restrizioni, è necessario seguire questo ordine.  
  
 Di conseguenza, se si vuole applicare una restrizione in base al nome di tabella, ad esempio, notare che TABLE\_NAME è la terza colonna di restrizione e quindi chiamare **Open**, specificando il nome di tabella desiderato come terzo parametro di restrizione, come mostrato nell'esempio seguente.  
  
#### Per usare set di righe dello schema  
  
1.  È necessario includere il file di intestazione Atldbsch.h \(che, naturalmente, è anche necessario per il supporto dei consumer\).  
  
2.  Creare un'istanza di un oggetto set di righe dello schema nel file di intestazione del consumer o del documento.  Se si vuole ottenere le informazioni della tabella, dichiarare un oggetto **CTables**, mentre per le informazioni della colonna, dichiarare un oggetto **CColumns**.  Questo esempio mostra come recuperare le colonne nella tabella degli autori:  
  
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
  
3.  Per recuperare le informazioni, accedere al membro dati appropriato dell'oggetto set di righe dello schema, ad esempio `ColumnSchemaRowset.m_szColumnName`.  Questo corrisponde a COLUMN\_NAME.  Per determinare la colonna OLE DB a cui appartiene ogni membro dati, vedere [CColumns](../../data/oledb/ccolumns-ccolumnsinfo.md).  
  
 Per informazioni di riferimento sul set di righe dello schema, vedere le classi typedef fornite nei modelli OLE DB \(vedere [Classi per i set di righe dello schema e classi typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)\).  
  
 Per altre informazioni sui set di righe dello schema OLE DB, incluse le colonne di restrizione, vedere [Appendice B: Set di righe dello schema](http://go.microsoft.com/fwlink/?LinkId=64681) nelle informazioni di riferimento per programmatori OLE DB.  
  
 Per esempi più complessi di come usare le classi per i set di righe dello schema, vedere gli esempi [CatDB](http://msdn.microsoft.com/it-it/003d516b-2bf6-444e-8be5-4ebaa0b66046) e [DBViewer](http://msdn.microsoft.com/it-it/07620f99-c347-4d09-9ebc-2459e8049832).  
  
 Per informazioni sul supporto dei provider per i set di righe dello schema, vedere [Supporto dei set di righe dello schema](../../data/oledb/supporting-schema-rowsets.md).  
  
## Vedere anche  
 [Utilizzo delle funzioni di accesso](../../data/oledb/using-accessors.md)