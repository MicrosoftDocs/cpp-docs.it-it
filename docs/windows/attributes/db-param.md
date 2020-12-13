---
description: 'Altre informazioni su: db_param'
title: db_param (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.db_param
helpviewer_keywords:
- db_param attribute
ms.assetid: a28315f5-4722-459e-92ef-32e83c0b205a
ms.openlocfilehash: 27666b4cdf027e24b54326a3acc5fe701b9f6f44
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333104"
---
# <a name="db_param"></a>db_param

Associa la variabile membro specificata a un parametro di input o output e delimita la variabile.

## <a name="syntax"></a>Sintassi

```cpp
[ db_param(ordinal, paramtype="DBPARAMIO_INPUT", dbtype, precision, scale, status, length) ]
```

### <a name="parameters"></a>Parametri

*ordinale*<br/>
Numero di colonna (ordinale DBCOLUMNINFO) corrispondente a un campo nel set di righe a cui associare i dati.

*ParamType*<br/>
Opzionale Tipo da impostare per il parametro. I provider supportano solo i tipi di I/O di parametro supportati dall'origine dati sottostante. Il tipo è una combinazione di uno o più valori DBPARAMIOENUM:

- DBPARAMIO_INPUT Parametro di input.

- DBPARAMIO_OUTPUT Parametro di output.

- DBPARAMIO_NOTPARAM La funzione di accesso non dispone di parametri. `eParamIO`L'impostazione di questo valore nelle funzioni di accesso alla riga ricorda all'utente che i parametri vengono ignorati.

*DbType*<br/>
Opzionale Indicatore di [tipo](/previous-versions/windows/desktop/ms711251(v=vs.85)) OLE DB per la voce della colonna.

*precisione*<br/>
Opzionale Precisione da utilizzare per la voce della colonna. Per informazioni dettagliate, vedere la descrizione dell' `bPrecision` elemento della [struttura DBBINDING](/previous-versions/windows/desktop/ms716845(v=vs.85))

*scale*<br/>
Opzionale Scala da utilizzare per la voce della colonna. Per informazioni dettagliate, vedere la descrizione dell' `bScale` elemento della [struttura DBBINDING](/previous-versions/windows/desktop/ms716845(v=vs.85))

*Stato*<br/>
Opzionale Variabile membro utilizzata per mantenere lo stato della colonna. Lo stato indica se il valore della colonna è un valore di dati o un altro valore, ad esempio NULL. Per i valori possibili, vedere [lo stato](/previous-versions/windows/desktop/ms722617(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

*length*<br/>
Opzionale Variabile membro utilizzata per conservare la dimensione della colonna in byte.

## <a name="remarks"></a>Commenti

**db_param** definisce i parametri utilizzati nei comandi. quindi, viene usato con `db_command` . Ad esempio, è possibile utilizzare **db_param** per associare parametri in query SQL o stored procedure. I parametri in una stored procedure sono indicati da punti interrogativi (?) ed è necessario associare i membri dati nell'ordine in cui vengono visualizzati i parametri.

**db_param** delimita i dati dei membri che possono partecipare all' `ICommandWithParameters` associazione basata su OLE DB. Imposta il tipo di parametro (input o output), il tipo OLE DB, la precisione, la scala, lo stato e la lunghezza per il parametro specificato. Questo attributo inserisce le macro del consumer OLE DB BEGIN_PARAM_MAP... END_PARAM_MAP. Ogni membro contrassegnato con l'attributo **db_param** occuperà una voce nella mappa sotto forma di COLUMN_ENTRY.

**db_param** viene utilizzato in combinazione con gli attributi [db_table](db-table.md) o [db_command](db-command.md) .

Quando il provider di attributi del consumer applica questo attributo a una classe, il compilatore rinomina la classe in \_*NomeClasse* Accessor, dove *NomeClasse* è il nome assegnato alla classe. Il compilatore crea anche una classe denominata *NomeClasse*, che deriva da \_*NomeClasse* Accessor.  In Visualizzazione classi verranno visualizzate entrambe le classi.

## <a name="example"></a>Esempio

Nell'esempio seguente viene creata una classe Command basata sul stored procedure SalesbyYear nel database Northwind. Associa il primo parametro del stored procedure alla `m_RETURN_VALUE` variabile e lo definisce come parametro di output. Associa gli ultimi due parametri (input) con `m_Beginning_Date` e `m_Ending_Date` .

Nell'esempio seguente la variabile viene associata `nOutput` a un parametro di output.

```cpp
// db_param.cpp
// compile with: /LD
#include <atlbase.h>
#include <atlplus.h>
#include <atldbcli.h>

[ db_source(L"my_connection_string"),
  db_command(L"{ ? = CALL dbo.\"Sales by Year\"(?,?) }")
]
struct CSalesbyYear {
   DBSTATUS m_dwShippedDateStatus;
   DBSTATUS m_dwOrderIDStatus;
   DBSTATUS m_dwSubtotalStatus;
   DBSTATUS m_dwYearStatus;

   DBLENGTH m_dwShippedDateLength;
   DBLENGTH m_dwOrderIDLength;
   DBLENGTH m_dwSubtotalLength;
   DBLENGTH m_dwYearLength;

   // Bind columns
   [ db_column("1", status="m_dwShippedDateStatus", length="m_dwShippedDateLength") ] DBTIMESTAMP m_ShippedDate;
   [ db_column("2", status="m_dwOrderIDStatus", length="m_dwOrderIDLength") ] LONG m_OrderID;
   [ db_column("3", status="m_dwSubtotalStatus", length="m_dwSubtotalLength") ] CURRENCY m_Subtotal;
   [ db_column("4", status="m_dwYearStatus", length="m_dwYearLength") ] TCHAR m_Year[31];

   // Bind parameters
   [ db_param("1", paramtype="DBPARAMIO_OUTPUT") ] LONG m_RETURN_VALUE;
   [ db_param("2", paramtype="DBPARAMIO_INPUT") ] DBTIMESTAMP m_Beginning_Date;
   [ db_param("3", paramtype="DBPARAMIO_INPUT") ] DBTIMESTAMP m_Ending_Date;
};
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**`class`**, **`struct`** , membro, metodo, locale|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi del consumer OLE DB](ole-db-consumer-attributes.md)
