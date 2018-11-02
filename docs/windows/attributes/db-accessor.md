---
title: db_accessor (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.db_accessor
helpviewer_keywords:
- db_accessor attribute
ms.assetid: ec407a9f-24d7-4822-96d4-7cc6a0301815
ms.openlocfilehash: 3ab2e720e5bab834f76b755336b9ad9170d086b4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50495258"
---
# <a name="dbaccessor"></a>db_accessor

I gruppi `db_column` gli attributi che fanno parte di `IAccessor`-associazione basata su.

## <a name="syntax"></a>Sintassi

```cpp
[ db_accessor(num, auto) ]
```

#### <a name="parameters"></a>Parametri

*num*<br/>
Specifica il numero di funzioni di accesso (un indice integer in base zero). È necessario specificare numeri di funzione di accesso in ordine crescente d'ordine, usando interi o valori definiti.

*auto*<br/>
Valore booleano che specifica se la funzione di accesso viene recuperata automaticamente (TRUE) o non recuperato (FALSE).

## <a name="remarks"></a>Note

**db_accessor** definisce la funzione di accesso OLE DB sottostante per successive `db_column` e `db_param` attributi all'interno della stessa classe o funzione. **db_accessor** è possibile utilizzare a livello di membro e viene usato al gruppo `db_column` attributi che fanno parte di OLE DB `IAccessor`-associazione basata su. Viene usato in combinazione con il `db_table` o `db_command` attributi. La chiamata a questo attributo è simile alla chiamata di [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) e [END_ACCESSOR](../../data/oledb/end-accessor.md) macro.

**db_accessor** genera un set di righe e lo associa ai mapping di funzione di accesso corrispondente. Se non si chiama **db_accessor**, verrà generato automaticamente 0 della funzione di accesso e tutte le associazioni di colonna verranno mappate a questo blocco della funzione di accesso.

**db_accessor** i gruppi di associazioni di colonna all'interno di uno o più funzioni di accesso del database. Per una descrizione degli scenari in cui è necessario utilizzare più funzioni di accesso, vedere [uso di più funzioni di accesso su un set di righe](../../data/oledb/using-multiple-accessors-on-a-rowset.md). Vedere anche "Utente Record supporto per più funzioni di accesso" nella [record utente](../../data/oledb/user-records.md).

Quando il provider di attributi del consumer applica questo attributo a una classe, il compilatore rinomina la classe in \_*NomeClasse*Accessor, dove *NomeClasse* è il nome assegnato alla classe. Il compilatore crea anche una classe denominata *NomeClasse*, che deriva da \_*NomeClasse*Accessor.  In Visualizzazione classi verranno visualizzate entrambe le classi.

## <a name="example"></a>Esempio

L'esempio seguente usa **db_accessor** per raggruppare le colonne nella tabella Orders del database Northwind in due funzioni di accesso. Funzione di accesso 0 è automatica, e non funzione di accesso 1.

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

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Blocchi di attributi|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del consumer OLE DB](ole-db-consumer-attributes.md)