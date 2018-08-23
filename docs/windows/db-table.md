---
title: db_table | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.db_table
dev_langs:
- C++
helpviewer_keywords:
- db_table attribute
ms.assetid: ff9eb957-4e6d-4175-afcc-fd8ea916cec0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 07c126e2cc6efe0193f6cfd55b84d8dfa7021ffc
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42605619"
---
# <a name="dbtable"></a>db_table

Apre una tabella di OLE DB.

## <a name="syntax"></a>Sintassi

```cpp
[ db_table(
   db_table,
   name,
   source_name,
   hresult
) ]
```

#### <a name="parameters"></a>Parametri

*db_table*  
Stringa che specifica il nome di una tabella di database (ad esempio, "prodotti").

*name* (facoltativo)  
Il nome dell'handle usato con la tabella. È necessario specificare questo parametro se si desidera restituire più righe di risultati. **db_table** genera una variabile con il parametro specificato *nome* che può essere utilizzato per attraversare il set di righe o eseguire più query.

*source_name* (facoltativo)  
La variabile `CSession` o l'istanza di una classe a cui è applicato l'attributo `db_source` con cui viene eseguito il comando. Vedere [db_source](../windows/db-source.md).

*HRESULT* (facoltativo)  
Identifica la variabile che riceverà il valore HRESULT di questo comando di database. Se la variabile non esiste, verrà automaticamente inserita dall'attributo.

## <a name="remarks"></a>Note

**db_table** crea un' [CTable](../data/oledb/ctable-class.md) oggetto, che viene usato da un consumer OLE DB per aprire una tabella. È possibile usare questo attributo solo a livello di classe; è possibile usarlo inline. Usare `db_column` per associare le colonne della tabella alle variabili; usare `db_param` per delimitare (impostare il tipo di parametro e pertanto su) di parametri.

Quando il provider di attributi del consumer applica questo attributo a una classe, il compilatore Rinomina la classe \_ *NomeClasse*della funzione di accesso, dove *NomeClasse* è il nome è stato assegnato il classe e il compilatore creerà inoltre una classe denominata *NomeClasse*, che deriva da \_ *NomeClasse*della funzione di accesso.  In Visualizzazione classi verranno visualizzate entrambe le classi.

## <a name="example"></a>Esempio

Nell'esempio seguente consente di aprire la tabella di prodotti per l'uso da `CProducts`.

```cpp
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

Per un esempio di questo attributo usato in un'applicazione, vedere gli esempi [AtlAgent](http://msdn.microsoft.com/52bef5da-c1a0-4223-b4e6-9e464b6db409) e [MultiRead](http://msdn.microsoft.com/5a2a915a-77dc-492f-94b2-1b809995dd5e).

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi del consumer OLE DB](../windows/ole-db-consumer-attributes.md)  
