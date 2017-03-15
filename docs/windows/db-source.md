---
title: "db_source | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.db_source"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "db_source attribute"
ms.assetid: 0ec8bbf7-ade2-4899-bf4c-8608b92779bc
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# db_source
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea una connessione a un'origine dati.  
  
## Sintassi  
  
```  
  
      [ db_source(   
   db_source,   
   name,   
   hresult   
) ]  
```  
  
#### Parametri  
 *db\_source*  
 La stringa di connessione utilizzata per connettere l'origine dati.  Per il formato della stringa di connessione, vedere [Stringhe di connessione e collegamenti ai dati](https://msdn.microsoft.com/en-us/library/ms718376.aspx) in Microsoft Data Access Components \(MDAC\) SDK.  
  
 *nome* \(facoltativo\)  
 Quando si utilizzano `db_source` in una classe, nome è un'istanza di un oggetto origine dati che ha  `db_source` attributo applicato a \(vedere l'esempio 1\).  Quando si utilizzano `db_source` inline in un'implementazione di metodo, nome è una variabile locale \(il metodo\) che può essere utilizzata per accedere all'origine dati \(vedere l'esempio 2\).  Passare questo nome in `source_name` parametro di  **db\_command** per associare l'origine dati a un comando.  
  
 `hresult` \(facoltativo\)  
 identifica la variabile che riceverà `HRESULT` di questo comando di database.  Se la variabile non esiste, verrà automaticamente inserita dall'attributo.  
  
## Note  
 `db_source` crea un oggetto  [CDataSource](../data/oledb/cdatasource-class.md) e  [CSession](../data/oledb/csession-class.md) oggetto, che rappresentano insieme una connessione a un'origine dati consumer OLE DB.  
  
 Quando si utilizzano `db_source` in una classe,  `CSession` l'oggetto diventa un membro della classe.  
  
 Quando si utilizzano `db_source` in un metodo, il codice inserito verrà eseguito entro l'ambito dei metodi e  `CSession` l'oggetto viene creato come variabile locale.  
  
 `db_source` aggiunge le proprietà dell'origine dati a una classe o all'interno di un metodo.  Viene utilizzata insieme con **db\_command** \(che accetta  `db_source` nome parametro come proprio  `source_name` parametro\).  
  
 Quando il provider di tipo consumer di attributo applicato questo attributo a una classe, il compilatore la classe a \_*TheClassName*funzione di accesso, dove *TheClassName* è il nome assegnato alla classe e il compilatore inoltre creata una classe denominata *TheClassName,* quale deriva da \_*TheClassName*funzione di accesso.  In Visualizzazione classi, verranno visualizzate entrambe le classi.  
  
 per un esempio di questo attributo utilizzato in un'applicazione, vedere gli esempi [AtlAgent](http://msdn.microsoft.com/it-it/52bef5da-c1a0-4223-b4e6-9e464b6db409) e  [MultiRead](http://msdn.microsoft.com/it-it/5a2a915a-77dc-492f-94b2-1b809995dd5e).  
  
## Esempio  
 Questo esempio viene chiamata `db_source` in una classe per creare una connessione a un'origine dati  `ds` utilizzo del database Northwind.  `ds` un handle per l'origine dati, che può essere utilizzata internamente a  `CMyCommand` classe.  
  
```  
// db_source_1.cpp  
// compile with: /LD  
#include <atlbase.h>  
#include <atlplus.h>  
#include <atldbcli.h>  
  
[  
  db_source(L"my_connection_string", name="ds"),  
  db_command(L"select * from Products")  
]  
class CMyCommand {};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**,  `struct`, membro, metodo, locale|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [OLE DB Consumer Attributes](../windows/ole-db-consumer-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)