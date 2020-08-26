---
title: db_accessor (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.db_accessor
helpviewer_keywords:
- db_accessor attribute
ms.assetid: ec407a9f-24d7-4822-96d4-7cc6a0301815
ms.openlocfilehash: 559838201e3d1c425b6b1bf7f3650d9635c44c97
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88833140"
---
# <a name="db_accessor"></a>db_accessor

Raggruppa `db_column` gli attributi che fanno parte dell' `IAccessor` associazione basata su.

## <a name="syntax"></a>Sintassi

```cpp
[ db_accessor(num, auto) ]
```

#### <a name="parameters"></a>Parametri

*num*<br/>
Specifica il numero di funzione di accesso (indice Integer in base zero). È necessario specificare i numeri delle funzioni di accesso in ordine crescente, usando numeri interi o valori definiti.

*Automatico*<br/>
Valore booleano che specifica se la funzione di accesso viene recuperata automaticamente (TRUE) o non recuperata (FALSE).

## <a name="remarks"></a>Osservazioni

**db_accessor** definisce la funzione di accesso OLE DB sottostante `db_column` per `db_param` gli attributi e successivi all'interno della stessa classe o funzione. **db_accessor** è utilizzabile a livello di membro e viene utilizzato per raggruppare `db_column` gli attributi che fanno parte dell' `IAccessor` associazione basata su OLE DB. Viene usato in combinazione con gli `db_table` `db_command` attributi o. La chiamata di questo attributo è simile alla chiamata di [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) e [END_ACCESSOR](../../data/oledb/end-accessor.md) macro.

**db_accessor** genera un set di righe e lo associa alle mappe della funzione di accesso corrispondenti. Se non si chiama **db_accessor**, la funzione di accesso 0 verrà generata automaticamente e verrà eseguito il mapping di tutte le associazioni di colonna a questo blocco della funzione di accesso.

**db_accessor** raggruppa le associazioni delle colonne del database in una o più funzioni di accesso. Per informazioni sugli scenari in cui è necessario usare più funzioni di accesso, vedere uso di [più funzioni di accesso su un set di righe](../../data/oledb/using-multiple-accessors-on-a-rowset.md). Vedere anche "supporto dei record utente per più funzioni di accesso" nei [record utente](../../data/oledb/user-records.md).

Quando il provider di attributi del consumer applica questo attributo a una classe, il compilatore rinomina la classe in \_*NomeClasse*Accessor, dove *NomeClasse* è il nome assegnato alla classe. Il compilatore crea anche una classe denominata *NomeClasse*, che deriva da \_*NomeClasse*Accessor.  In Visualizzazione classi verranno visualizzate entrambe le classi.

## <a name="example"></a>Esempio

Nell'esempio seguente viene utilizzato **db_accessor** per raggruppare le colonne della tabella Orders del database Northwind in due funzioni di accesso. La funzione di accesso 0 è una funzione di accesso automatica e la funzione di accesso 1 non lo è.

```cpp
// cpp_attr_ref_db_accessor.cpp
// compile with: /LD /link /OPT:NOREF
#define _ATL_ATTRIBUTES
#include <atlbase.h>
#include <atldbcli.h>

[ db_command(L"SELECT LastName, FirstName FROM Orders") ]
class CEmployees {
public:
   [ db_accessor(0, TRUE) ];
   [ db_column("1") ] LONG m_OrderID;
   [ db_column("2") ] TCHAR m_CustomerID[6];
   [ db_column("4") ] DBTIMESTAMP m_OrderDate;

   [ db_accessor(1, FALSE) ];
   [ db_column("8") ] CURRENCY m_Freight;
};
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Blocchi di attributi|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del consumer OLE DB](ole-db-consumer-attributes.md)
