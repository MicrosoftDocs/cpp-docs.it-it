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
ms.openlocfilehash: 36419e85554982d1c3784d0d73663b48cc820b6d
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88845627"
---
# <a name="cxmlaccessor-class"></a>Classe CXMLAccessor

Consente di accedere alle origini dati come dati stringa quando non si conosce lo schema dell'archivio dati (struttura sottostante).

## <a name="syntax"></a>Sintassi

```cpp
class CXMLAccessor : public CDynamicStringAccessorW
```

## <a name="requirements"></a>Requisiti

**Intestazione**: atldbcli. h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Descrizione |
|-|-|
|[GetXMLColumnData](#getxmlcolumndata)|Recupera le informazioni sulla colonna.|
|[GetXMLRowData](#getxmlrowdata)|Recupera l'intero contenuto di una tabella in base alle righe.|

## <a name="remarks"></a>Osservazioni

Tuttavia, `CXMLAccessor` differisce da perché `CDynamicStringAccessorW` converte tutti i dati a cui si accede dall'archivio dati come dati in formato XML (con tag). Questa operazione è particolarmente utile per l'output in pagine Web compatibili con XML. I nomi di tag XML corrispondono al più possibile i nomi di colonna dell'archivio dati.

Usare i `CDynamicAccessor` metodi per ottenere informazioni sulle colonne. Queste informazioni sulla colonna vengono usate per creare una funzione di accesso dinamicamente in fase di esecuzione.

Le informazioni sulla colonna vengono archiviate in un buffer creato e gestito da questa classe. Ottenere informazioni sulle colonne utilizzando [GetXMLColumnData](#getxmlcolumndata) o ottenere dati di colonna in base alle righe utilizzando [GetXMLRowData](#getxmlrowdata).

## <a name="example"></a>Esempio

[!code-cpp[NVC_OLEDB_Consumer#14](../../data/oledb/codesnippet/cpp/cxmlaccessor-class_1.cpp)]

## <a name="cxmlaccessorgetxmlcolumndata"></a><a name="getxmlcolumndata"></a> CXMLAccessor:: GetXMLColumnData

Recupera le informazioni sul tipo di colonna di una tabella come dati di stringa in formato XML, per colonna.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetXMLColumnData(CSimpleStringW& strOutput) throw();
```

#### <a name="parameters"></a>Parametri

*strOutput*<br/>
out Riferimento a un buffer di stringa contenente le informazioni sul tipo di colonna da recuperare. La stringa è formattata con i nomi di tag XML che corrispondono ai nomi di colonna dell'archivio dati.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Di seguito viene illustrato come formattare le informazioni sul tipo di colonna in XML. `type` Specifica il tipo di dati della colonna. Si noti che i tipi di dati sono basati su OLE DB tipi di dati, non su quelli del database a cui si accede.

`<columninfo>`

`<column type = I2/> ColumnName`

`</columninfo>`

## <a name="cxmlaccessorgetxmlrowdata"></a><a name="getxmlrowdata"></a> CXMLAccessor:: GetXMLRowData

Recupera l'intero contenuto di una tabella come dati di stringa in formato XML, per riga.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetXMLRowData(CSimpleStringW& strOutput,
   bool bAppend = false) throw();
```

#### <a name="parameters"></a>Parametri

*strOutput*<br/>
out Riferimento a un buffer contenente i dati della tabella da recuperare. I dati vengono formattati come dati di stringa con nomi di tag XML che corrispondono ai nomi di colonna dell'archivio dati.

*bAppend*<br/>
in Valore booleano che specifica se accodare una stringa alla fine dei dati di output.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Di seguito viene illustrato il formato dei dati delle righe in XML. `DATA` di seguito sono rappresentati i dati della riga. Usare i metodi Move per passare alla riga desiderata.

`<row>`

`<column name>DATA</column name>`

`</row>`

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classe CAccessor](../../data/oledb/caccessor-class.md)<br/>
[Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)<br/>
[Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)<br/>
[Classe CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)<br/>
[Classe CDynamicStringAccessorA](../../data/oledb/cdynamicstringaccessora-class.md)<br/>
[Classe CDynamicStringAccessorW](../../data/oledb/cdynamicstringaccessorw-class.md)<br/>
[Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)
