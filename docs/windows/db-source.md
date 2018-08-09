---
title: db_source | Microsoft Docs
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
ms.openlocfilehash: 7d15c4cd43dd74b6c699027be9841f5f4a610518
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39646111"
---
# <a name="dbsource"></a>db_source
Crea una connessione a un'origine dati.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[ db_source(   
   db_source,   
   name,   
   hresult   
) ]  
```  
  
### <a name="parameters"></a>Parametri  
 *db_source*  
 La stringa di connessione utilizzata per la connessione all'origine dati. Per il formato della stringa di connessione, vedere [stringhe di connessione e i collegamenti dati](https://msdn.microsoft.com/library/ms718376.aspx) il SDK in Microsoft Data Access Components (MDAC).  
  
 *name* (facoltativo)  
 Quando si usa **db_source** in una classe *nome* è un'istanza di un oggetto origine dati che contiene la **db_source** attributo applicato (vedere l'esempio 1). Quando si usa **db_source** inline in un'implementazione di metodo *nome* è una variabile (locale al metodo) che può essere utilizzata per accedere ai dati di origine (vedere l'esempio 2). È passare questo *name* per il *source_name* parametro di `db_command` per associare l'origine dati a un comando.  
  
 *HRESULT* (facoltativo)  
 Identifica la variabile che riceverà il valore HRESULT di questo comando di database. Se la variabile non esiste, verrà automaticamente inserita dall'attributo.  
  
## <a name="remarks"></a>Note  
 **db_source** crea un' [CDataSource](../data/oledb/cdatasource-class.md) e un [CSession](../data/oledb/csession-class.md) oggetto, che insieme rappresentano una connessione con un'origine dati di OLE DB consumer.  
  
 Quando si usa **db_source** in una classe, il `CSession` oggetto diventa un membro della classe.  
  
 Quando si usa **db_source** in un metodo, verrà eseguito il codice inserito nell'ambito del metodo e il `CSession` oggetto viene creato come una variabile locale.  
  
 **db_source** aggiunge proprietà origine dati a una classe o all'interno di un metodo. Viene usato in combinazione con `db_command` (che accetta il *db_source* *name* parametro come relativo *source_name* parametro).  
  
 Quando il provider di attributi del consumer applica questo attributo a una classe, il compilatore Rinomina la classe \_ *NomeClasse*della funzione di accesso, dove *NomeClasse* è il nome è stato assegnato il classe e il compilatore creerà inoltre una classe denominata *NomeClasse*, che deriva da \_ *NomeClasse*della funzione di accesso.  In Visualizzazione classi verranno visualizzate entrambe le classi.  
  
 Per un esempio di questo attributo usato in un'applicazione, vedere gli esempi [AtlAgent](http://msdn.microsoft.com/52bef5da-c1a0-4223-b4e6-9e464b6db409) e [MultiRead](http://msdn.microsoft.com/5a2a915a-77dc-492f-94b2-1b809995dd5e).  
  
## <a name="example"></a>Esempio  
 Questo esempio viene chiamato **db_source** in una classe per creare una connessione all'origine dati `ds` utilizzando il database Northwind. `ds` è un handle per l'origine dati, che può essere utilizzato internamente nel `CMyCommand` classe.  
  
```cpp  
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
|**Si applica a**|**classe**, **struct**, membro, metodo, locale|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del consumer OLE DB](../windows/ole-db-consumer-attributes.md)   