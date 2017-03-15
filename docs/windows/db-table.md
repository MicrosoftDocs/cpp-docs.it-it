---
title: "db_table | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.db_table"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "db_table attribute"
ms.assetid: ff9eb957-4e6d-4175-afcc-fd8ea916cec0
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# db_table
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

apre una tabella di OLE DB.  
  
## Sintassi  
  
```  
  
      [ db_table(   
   db_table,   
   name,   
   source_name,   
   hresult   
) ]  
```  
  
#### Parametri  
 *db\_table*  
 Una stringa che specifica il nome di una tabella di database \(ad esempio “products„\).  
  
 *nome* \(facoltativo\)  
 Il nome dell'handle utilizzati per lavorare con la tabella.  È necessario specificare questo parametro su se si desidera restituire più righe di risultati.  **db\_table** genera una variabile con specificato nome che può essere utilizzato per scorrere il rowset o query di esecuzione di azioni più.  
  
 *source\_name* \(facoltativo\)  
 `CSession` variabile o istanza di una classe che ha  `db_source` attributo applicato a sul quale il comando viene eseguito.  vedere [db\_source](../windows/db-source.md).  
  
 `hresult` \(facoltativo\)  
 identifica la variabile che riceverà `HRESULT` di questo comando di database.  Se la variabile non esiste, verrà automaticamente inserita dall'attributo.  
  
## Note  
 **db\_table** crea un oggetto  [CTable](../data/oledb/ctable-class.md) oggetto, utilizzato da un consumer OLE DB per aprire una tabella.  È possibile utilizzare questo attributo solo a livello di classe, non è possibile utilizzarla inline.  utilizzo **db\_column** per associare le colonne della tabella alle variabili, utilizzo  **db\_param** per delimitare \(impostato il tipo di parametro e così via\) dei parametri.  
  
 Quando il provider di tipo consumer di attributo applicato questo attributo a una classe, il compilatore la classe a \_*TheClassName*funzione di accesso, dove *TheClassName* è il nome assegnato alla classe e il compilatore inoltre creata una classe denominata *TheClassName,* quale deriva da \_*TheClassName*funzione di accesso.  In Visualizzazione classi, verranno visualizzate entrambe le classi.  
  
## Esempio  
 Nell'esempio seguente viene aperta la tabella Products da `CProducts`.  
  
```  
// db_table.cpp  
// compile with: /LD  
#include <atlbase.h>  
#include <atlplus.h>  
#include <atldbcli.h>  
  
[ db_table(L"dbo.Products") ]  
class CProducts {  
   [ db_column("1") ] LONG m_ProductID;  
};  
```  
  
 per un esempio di questo attributo utilizzato in un'applicazione, vedere gli esempi [AtlAgent](http://msdn.microsoft.com/it-it/52bef5da-c1a0-4223-b4e6-9e464b6db409) e  [MultiRead](http://msdn.microsoft.com/it-it/5a2a915a-77dc-492f-94b2-1b809995dd5e).  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**,  `struct`|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [OLE DB Consumer Attributes](../windows/ole-db-consumer-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)