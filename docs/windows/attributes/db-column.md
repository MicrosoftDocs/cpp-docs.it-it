---
title: db_column (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.db_column
helpviewer_keywords:
- db_column attribute
ms.assetid: 58da4afc-f69c-4ae6-af9a-3f9515f56081
ms.openlocfilehash: 4ce57443480e35e7a4c7b9e872e41777662ddc20
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80167290"
---
# <a name="db_column"></a>db_column

Associa una colonna specificata a una variabile nel set di righe.

## <a name="syntax"></a>Sintassi

```cpp
[ db_column(ordinal, dbtype, precision, scale, status, length) ]
```

### <a name="parameters"></a>Parametri

*Ordinale*<br/>
Il numero di colonna ordinale (`DBCOLUMNINFO` ordinale) o il nome della colonna (stringa ANSI o Unicode) corrispondente a un campo nel set di righe a cui associare i dati. Se si utilizzano i numeri, è possibile ignorare gli ordinali consecutivi (ad esempio: 1, 2, 3, 5). Il nome può contenere spazi se il provider di OLE DB usato lo supporta. È ad esempio possibile utilizzare uno dei formati seguenti:

```cpp
[db_column("2")] TCHAR szCity[30];
[db_column(L"city_name")] TCHAR szCity[30];
```

*DbType*<br/>
Opzionale Indicatore di [tipo](/previous-versions/windows/desktop/ms711251(v=vs.85)) OLE DB per la voce della colonna.

*precisione*<br/>
Opzionale Precisione da utilizzare per la voce della colonna. Per informazioni dettagliate, vedere la descrizione dell'elemento `bPrecision` della [struttura DBBINDING](/previous-versions/windows/desktop/ms716845(v=vs.85))

*scale*<br/>
Opzionale Scala da utilizzare per la voce della colonna. Per informazioni dettagliate, vedere la descrizione dell'elemento `bScale` della [struttura DBBINDING](/previous-versions/windows/desktop/ms716845(v=vs.85))

*Stato*<br/>
Opzionale Variabile membro utilizzata per mantenere lo stato della colonna. Lo stato indica se il valore della colonna è un valore di dati o un altro valore, ad esempio NULL. Per i valori possibili, vedere [lo stato](/previous-versions/windows/desktop/ms722617(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

*length*<br/>
Opzionale Variabile membro utilizzata per conservare la dimensione della colonna in byte.

## <a name="remarks"></a>Osservazioni

**db_column** associa la colonna della tabella specificata a una variabile nel set di righe. Delimita i dati dei membri che possono partecipare a OLE DB associazione basata su `IAccessor`. Questo attributo imposta la mappa delle colonne normalmente definita usando le macro di consumer OLE DB [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md), [END_COLUMN_MAP](../../data/oledb/end-column-map.md)e [COLUMN_ENTRY](../../data/oledb/column-entry.md). Questi consentono di modificare la [struttura OLE DB DBBINDING](/previous-versions/windows/desktop/ms716845(v=vs.85)) per associare la colonna specificata. Ogni membro contrassegnato con l'attributo **db_column** occuperà una voce nella mappa delle colonne sotto forma di voce di colonna. Questo attributo viene pertanto chiamato in cui inserire la mappa delle colonne, ovvero nel comando o nella classe della tabella.

Utilizzare **db_column** insieme agli attributi [db_table](db-table.md) o [db_command](db-command.md) .

Quando il provider di attributi del consumer applica questo attributo a una classe, il compilatore rinomina la classe in \_*NomeClasse*Accessor, dove *NomeClasse* è il nome assegnato alla classe. Il compilatore crea anche una classe denominata *NomeClasse*, che deriva da \_*NomeClasse*Accessor.  In Visualizzazione classi verranno visualizzate entrambe le classi.

Per un esempio di questo attributo usato in un'applicazione, vedere [MultiRead](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Consumer).

## <a name="example"></a>Esempio

Questo esempio associa una colonna di una tabella a un membro dati **Long** e specifica i campi di stato e lunghezza.

```cpp
// db_column_1.cpp
// compile with: /LD
#include <atlbase.h>
#include <atlplus.h>
#include <atldbcli.h>

[ db_command(L"Select * from Products") ]
class CProducts {
   DBSTATUS m_dwProductIDStatus;
   DBLENGTH m_dwProductIDLength;

   [ db_column("1", status="m_dwProductIDStatus", length="m_dwProductIDLength") ] LONG m_ProductID;
};
```

## <a name="example"></a>Esempio

Questo esempio associa quattro colonne a **Long**, una stringa di caratteri, un timestamp e un `DB_NUMERIC` Integer, in questo ordine.

```cpp
// db_column_2.cpp
// compile with: /LD
#include <atlbase.h>
#include <atlplus.h>
#include <atldbcli.h>

[ db_command(L"Select * from Products") ]
class CProducts {
   [db_column("1")] LONG m_OrderID;
   [db_column("2")] TCHAR m_CustomerID[6];
   [db_column("4")] DB_NUMERIC m_OrderDate;
   [db_column("7", dbtype="DBTYPE_NUMERIC")] DB_NUMERIC m_ShipVia;
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**, membro, metodo|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del consumer OLE DB](ole-db-consumer-attributes.md)<br/>
[Attributi di classe](class-attributes.md)
