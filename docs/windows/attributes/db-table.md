---
description: 'Altre informazioni su: db_table'
title: db_table (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.db_table
helpviewer_keywords:
- db_table attribute
ms.assetid: ff9eb957-4e6d-4175-afcc-fd8ea916cec0
ms.openlocfilehash: 3d871961a8ded6070127e5e562615018a4320162
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333045"
---
# <a name="db_table"></a>db_table

Apre una tabella OLE DB.

## <a name="syntax"></a>Sintassi

```cpp
[ db_table(db_table, name, source_name, hresult) ]
```

### <a name="parameters"></a>Parametri

*db_table*<br/>
Stringa che specifica il nome di una tabella di database, ad esempio "Products".

*nome*<br/>
Opzionale Nome dell'handle usato per lavorare con la tabella. È necessario specificare questo parametro se si desidera restituire più di una riga di risultati. **db_table** genera una variabile con il *nome* specificato che può essere utilizzata per attraversare il set di righe o per eseguire più query di azione.

*source_name*<br/>
(Facoltativo) La variabile `CSession` o l'istanza di una classe a cui è applicato l'attributo `db_source` con cui viene eseguito il comando. Vedere [db_source](db-source.md).

*HRESULT*<br/>
(Facoltativo) Identifica la variabile che riceverà l'HRESULT di questo comando di database. Se la variabile non esiste, verrà automaticamente inserita dall'attributo.

## <a name="remarks"></a>Commenti

**db_table** crea un oggetto [CTable](../../data/oledb/ctable-class.md) , che viene usato da un consumer OLE DB per aprire una tabella. È possibile usare questo attributo solo a livello di classe; non è possibile utilizzarlo inline. Utilizzare `db_column` per associare le colonne della tabella alle variabili; utilizzare `db_param` per delimitare (impostare il tipo di parametro e così via) dei parametri.

Quando il provider di attributi del consumer applica questo attributo a una classe, il compilatore rinomina la classe in \_*NomeClasse* Accessor, dove *NomeClasse* è il nome assegnato alla classe. Il compilatore crea anche una classe denominata *NomeClasse*, che deriva da \_*NomeClasse* Accessor.  In Visualizzazione classi verranno visualizzate entrambe le classi.

## <a name="example"></a>Esempio

Nell'esempio seguente viene aperta la tabella Products per l'utilizzo da parte di `CProducts` .

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

Per un esempio di questo attributo usato in un'applicazione, vedere [MultiRead](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Consumer).

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**`class`**, **`struct`**|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi del consumer OLE DB](ole-db-consumer-attributes.md)
