---
title: db_table (C++ attributo COM)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.db_table
helpviewer_keywords:
- db_table attribute
ms.assetid: ff9eb957-4e6d-4175-afcc-fd8ea916cec0
ms.openlocfilehash: 3ab548261d6ebcb9d3d7f7e352c8afe3b33db06f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62148120"
---
# <a name="dbtable"></a>db_table

Apre una tabella di OLE DB.

## <a name="syntax"></a>Sintassi

```cpp
[ db_table(db_table, name, source_name, hresult) ]
```

#### <a name="parameters"></a>Parametri

*db_table*<br/>
Stringa che specifica il nome di una tabella di database (ad esempio, "prodotti").

*name*<br/>
(Facoltativo) Il nome dell'handle usato con la tabella. È necessario specificare questo parametro se si desidera restituire più righe di risultati. **db_table** genera una variabile con il parametro specificato *nome* che può essere utilizzato per attraversare il set di righe o eseguire più query.

*source_name*<br/>
(Facoltativo) La variabile `CSession` o l'istanza di una classe a cui è applicato l'attributo `db_source` con cui viene eseguito il comando. Vedere [db_source](db-source.md).

*hresult*<br/>
(Facoltativo) Identifica la variabile che riceverà l'HRESULT di questo comando di database. Se la variabile non esiste, verrà automaticamente inserita dall'attributo.

## <a name="remarks"></a>Note

**db_table** crea un' [CTable](../../data/oledb/ctable-class.md) oggetto, che viene usato da un consumer OLE DB per aprire una tabella. È possibile usare questo attributo solo a livello di classe; è possibile usarlo inline. Usare `db_column` per associare le colonne della tabella alle variabili; usare `db_param` per delimitare (impostare il tipo di parametro e pertanto su) di parametri.

Quando il provider di attributi del consumer applica questo attributo a una classe, il compilatore rinomina la classe in \_*NomeClasse*Accessor, dove *NomeClasse* è il nome assegnato alla classe. Il compilatore crea anche una classe denominata *NomeClasse*, che deriva da \_*NomeClasse*Accessor.  In Visualizzazione classi verranno visualizzate entrambe le classi.

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

Per un esempio di questo attributo usato in un'applicazione, vedere gli esempi [AtlAgent](https://github.com/Microsoft/VCSamples) e [MultiRead](https://github.com/Microsoft/VCSamples).

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del consumer OLE DB](ole-db-consumer-attributes.md)
