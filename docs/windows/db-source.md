---
title: db_source | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.db_source
dev_langs:
- C++
helpviewer_keywords:
- db_source attribute
ms.assetid: 0ec8bbf7-ade2-4899-bf4c-8608b92779bc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b826e5d630b52062892001c26efda01b5c7293f4
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33873719"
---
# <a name="dbsource"></a>db_source
Crea una connessione a un'origine dati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ db_source(   
   db_source,   
   name,   
   hresult   
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 *db_source*  
 Stringa di connessione utilizzata per la connessione all'origine dati. Per il formato della stringa di connessione, vedere [stringhe di connessione e di collegamenti dati](https://msdn.microsoft.com/en-us/library/ms718376.aspx) il SDK in Microsoft Data Access Components (MDAC).  
  
 *name* (facoltativo)  
 Quando si utilizza `db_source` su una classe, *nome* è un'istanza di un oggetto origine dati che dispone di `db_source` attributo applicato (vedere l'esempio 1). Quando si utilizza `db_source` inline in un'implementazione di metodo, *nome* è una variabile (locale al metodo) che può essere utilizzata per accedere ai dati di origine (vedere l'esempio 2). Passa il *nome* per il `source_name` parametro di **db_command** per associare l'origine dati con un comando.  
  
 `hresult` (facoltativo)  
 Identifica la variabile che riceverà il `HRESULT` di questo comando di database. Se la variabile non esiste, verrà automaticamente inserita dall'attributo.  
  
## <a name="remarks"></a>Note  
 `db_source` Crea un [CDataSource](../data/oledb/cdatasource-class.md) e una [CSession](../data/oledb/csession-class.md) oggetto, che insieme rappresentano una connessione con un'origine dati di consumer OLE DB.  
  
 Quando si utilizza `db_source` su una classe, il `CSession` oggetto diventa un membro della classe.  
  
 Quando si utilizza `db_source` in un metodo, verrà eseguito il codice inserito nell'ambito del metodo e `CSession` come variabile locale viene creato l'oggetto.  
  
 `db_source` Aggiunge le proprietà di origine dati a una classe o all'interno di un metodo. Viene utilizzato in combinazione con **db_command** (che accetta il `db_source` *nome* parametro come relativo `source_name` parametro).  
  
 Quando il provider di attributi del consumer si applica questo attributo a una classe, il compilatore Rinomina la classe per \_ *NomeClasse*funzione di accesso, in cui *NomeClasse* è il nome assegnato il classe e il compilatore creerà inoltre una classe denominata *NomeClasse*, che deriva da \_ *NomeClasse*della funzione di accesso.  In Visualizzazione classi verranno visualizzate entrambe le classi.  
  
 Per un esempio di questo attributo in un'applicazione, vedere gli esempi [AtlAgent](http://msdn.microsoft.com/en-us/52bef5da-c1a0-4223-b4e6-9e464b6db409) e [MultiRead](http://msdn.microsoft.com/en-us/5a2a915a-77dc-492f-94b2-1b809995dd5e).  
  
## <a name="example"></a>Esempio  
 In questo esempio chiama `db_source` in una classe per creare una connessione all'origine dati `ds` utilizzando il database Northwind. `ds` è un handle per l'origine dati, che può essere usato internamente per il `CMyCommand` classe.  
  
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
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**, `struct`, membro, metodo, locale|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del consumer OLE DB](../windows/ole-db-consumer-attributes.md)   
