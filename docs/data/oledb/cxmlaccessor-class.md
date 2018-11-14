---
title: Classe CXMLAccessor
ms.date: 11/04/2016
f1_keywords:
- ATL::CXMLAccessor
- CXMLAccessor
- ATL.CXMLAccessor
- ATL.CXMLAccessor.GetXMLColumnData
- CXMLAccessor::GetXMLColumnData
- CXMLAccessor.GetXMLColumnData
- ATL::CXMLAccessor::GetXMLColumnData
- GetXMLColumnData
- ATL::CXMLAccessor::GetXMLRowData
- ATL.CXMLAccessor.GetXMLRowData
- CXMLAccessor::GetXMLRowData
- CXMLAccessor.GetXMLRowData
- GetXMLRowData
helpviewer_keywords:
- CXMLAccessor class
- GetXMLColumnData method
- GetXMLRowData method
ms.assetid: c88c082c-ec2f-4351-8947-a330b15e448a
ms.openlocfilehash: 1d57251e48f2496b07a4eb4f94976c7a44b165f9
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51328513"
---
# <a name="cxmlaccessor-class"></a>Classe CXMLAccessor

Consente di accedere alle origini dati come dati stringa quando non si dispone di alcuna conoscenza dello schema dell'archivio dati (struttura sottostante).

## <a name="syntax"></a>Sintassi

```cpp
class CXMLAccessor : public CDynamicStringAccessorW
```

## <a name="requirements"></a>Requisiti

**Intestazione**: atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[GetXMLColumnData](#getxmlcolumndata)|Recupera le informazioni di colonna.|
|[GetXMLRowData](#getxmlrowdata)|Recupera l'intero contenuto di una tabella da righe.|

## <a name="remarks"></a>Note

Tuttavia `CXMLAccessor` differisce da `CDynamicStringAccessorW` in quanto la funzione converte tutti i dati dall'archivio dati come dati in formato XML (tag). Ciò è particolarmente utile per l'output a pagine Web che supportano XML. I nomi di tag XML corrisponderà quanto più possibile i nomi delle colonne dell'archivio dati.

Usare `CDynamicAccessor` metodi per ottenere informazioni. Utilizzare queste informazioni di colonna per creare una funzione di accesso in modo dinamico in fase di esecuzione.

Le informazioni di colonna vengono archiviate in un buffer creato e gestito da questa classe. Ottenere le informazioni di colonna usando [GetXMLColumnData](#getxmlcolumndata) oppure ottenere i dati della colonna per le righe mediante [GetXMLRowData](#getxmlrowdata).

## <a name="example"></a>Esempio

[!code-cpp[NVC_OLEDB_Consumer#14](../../data/oledb/codesnippet/cpp/cxmlaccessor-class_1.cpp)]

## <a name="getxmlcolumndata"></a> CXMLAccessor:: GetXMLColumnData

Recupera le informazioni sul tipo di colonna di una tabella come dati stringa in formato XML, dalla colonna.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetXMLColumnData(CSimpleStringW& strOutput) throw();
```

#### <a name="parameters"></a>Parametri

*strOutput*<br/>
[out] Un riferimento a un buffer di stringa che contiene le informazioni sul tipo di colonna da recuperare. La stringa viene formattata con i nomi di tag XML che corrispondono ai nomi di colonna dell'archivio dati.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

### <a name="remarks"></a>Note

Di seguito viene illustrato come le informazioni sul tipo di colonna è formattati in XML. `type` Specifica il tipo di dati della colonna. Si noti che i tipi di dati sono basati sui tipi di dati OLE DB, non quelle del database a cui si accede.

`<columninfo>`

`<column type = I2/> ColumnName`

`</columninfo>`

## <a name="getxmlrowdata"></a> CXMLAccessor:: GetXMLRowData

Recupera l'intero contenuto di una tabella come dati stringa in formato XML, dalla riga.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetXMLRowData(CSimpleStringW& strOutput,
   bool bAppend = false) throw();
```

#### <a name="parameters"></a>Parametri

*strOutput*<br/>
[out] Un riferimento a un buffer contenente i dati della tabella da recuperare. I dati vengono formattati come dati stringa con i nomi di tag XML che corrispondono ai nomi di colonna dell'archivio dati.

*bAppend*<br/>
[in] Valore booleano che specifica se accodare una stringa alla fine i dati di output.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

### <a name="remarks"></a>Note

Di seguito viene illustrato come i dati di riga vengono formattati in XML. `DATA` di seguito rappresenta i dati della riga. Usare i metodi per passare alla riga desiderata di spostamento.

`<row>`

`<column name>DATA</column name>`

`</row>`

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classe CAccessor](../../data/oledb/caccessor-class.md)<br/>
[Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)<br/>
[Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)<br/>
[Classe CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)<br/>
[Classe CDynamicStringAccessorA](../../data/oledb/cdynamicstringaccessora-class.md)<br/>
[Classe CDynamicStringAccessorW](../../data/oledb/cdynamicstringaccessorw-class.md)<br/>
[Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)