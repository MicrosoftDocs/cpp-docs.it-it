---
title: Accesso ai dati XML | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- data access [C++], XML data
- XML [C++], accessing data
- CXMLAccessor class, retrieving XML data
- data [C++], XML data access
- rowsets [C++], retrieving XML data
- CStreamRowset class, retrieving XML data
ms.assetid: 6b693d55-a554-4846-8118-e8773b79b572
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: cfde3980e58ba86d6923eaac765332a23e40ad7e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46062501"
---
# <a name="accessing-xml-data"></a>Accesso ai dati XML

Esistono due metodi distinti per il recupero di dati XML da un'origine dati: uno viene utilizzato [CStreamRowset](../../data/oledb/cstreamrowset-class.md) mentre l'altra utilizza [CXMLAccessor](../../data/oledb/cxmlaccessor-class.md).  
  
|Funzionalità|CStreamRowset|CXMLAccessor|  
|-------------------|-------------------|------------------|  
|Quantità di dati trasferiti|Recupera i dati da tutte le colonne e righe in una sola volta.|Recupera i dati da tutte le colonne, ma solo una riga alla volta. È necessario passare le righe mediante i metodi, ad esempio `MoveNext`.|  
|Formattazione della stringa|SQL Server formatta la stringa XML e lo invia al consumer.|Recupera i dati di set di righe nel relativo formato nativo (richiede il provider di inviare i dati come stringhe Unicode) e quindi compila la stringa che contiene i dati in formato XML.|  
|Il controllo di formattazione|È necessario un certo livello di controllo sulla formattazione della stringa XML impostando alcune proprietà specifiche di SQL Server 2000.|Si ha alcun controllo sul formato della stringa XML generato.|  
  
Mentre `CStreamRowset` offre una più generale efficiente di recupero di dati in formato XML, è supportata solo da SQL Server 2000.  
  
## <a name="retrieving-xml-data-using-cstreamrowset"></a>Recupero di dati XML tramite CStreamRowset  

Si specifica [CStreamRowset](../../data/oledb/cstreamrowset-class.md) come tipo di set di righe nelle `CCommand` o `CTable` dichiarazione. È possibile usarla con la propria funzione di accesso o senza funzione di accesso, ad esempio:  
  
```cpp  
CCommand<CAccessor<CMyAccessor>, CStreamRowset> myCmd;  
```  
  
oppure  
  
```cpp  
CCommand<CNoAccessor, CStreamRowset> myCmd;  
```  
  
In genere quando si chiama `CCommand::Open` (specifica, ad esempio `CRowset` come la `TRowset` classe), ottiene un `IRowset` puntatore. `ICommand::Execute` Restituisce un `IRowset` puntatore che viene archiviato nel `m_spRowset` membro del `CRowset` oggetto. I metodi come `MoveFirst`, `MoveNext`, e `GetData` usare tale puntatore per il recupero dei dati.  
  
Al contrario, quando si chiama `CCommand::Open` (ma specificano `CStreamRowset` come la `TRowset` classe), `ICommand::Execute` restituisce un `ISequentialStream` puntatore che viene archiviato nel `m_spStream` membro dati di [CStreamRowset](../../data/oledb/cstreamrowset-class.md). È quindi possibile usare il `Read` metodo per recuperare i dati (stringa Unicode) in formato XML. Ad esempio:  
  
```cpp  
myCmd.m_spStream->Read()  
```  
  
SQL Server 2000 esegue la formattazione XML e restituisce tutte le colonne e tutte le righe del set di righe in un'unica stringa XML.  
  
Per indicazioni su come usare il `Read` metodo, vedere "Aggiunta del supporto XML al Consumer" nella [implementazione di un Consumer semplice](../../data/oledb/implementing-a-simple-consumer.md).  
  
> [!NOTE]
>  Il supporto XML mediante `CStreamRowset` funziona solo con SQL Server 2000 ed è necessario disporre del Provider OLE DB per SQL Server 2000 (installato con MDAC).  
  
## <a name="retrieving-xml-data-using-cxmlaccessor"></a>Recupero di dati XML tramite CXMLAccessor  

[CXMLAccessor](../../data/oledb/cxmlaccessor-class.md) consente di accedere ai dati da un'origine dati come dati stringa quando non si dispone di alcuna conoscenza dello schema dell'archivio dati. `CXMLAccessor` funziona come `CDynamicStringAccessorW` ad eccezione del fatto che il primo converte tutti i dati dall'archivio dati come dati in formato XML (tag). I nomi di tag XML corrispondano quanto più possibile i nomi delle colonne dell'archivio dati.  
  
Uso `CXMLAccessor` come si farebbe con qualsiasi altra classe di funzione di accesso, passarlo come parametro di modello per `CCommand` o `CTable`:  
  
```cpp  
CTable<CXMLAccessor, CRowset> rs;  
```  
  
Uso [GetXMLRowData](../../data/oledb/cxmlaccessor-getxmlrowdata.md) per recuperare i dati dalla riga di una tabella alla volta ed esplorare le righe mediante i metodi, ad esempio `MoveNext`, ad esempio:  
  
```cpp  
// Open data source, session, and rowset  
hr = rs.MoveFirst();  

while(SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET )  
{  
    CStringW strRowData;  
    myCmd.GetXMLRowData(strRowData);  
  
    printf_s( "%S\n", strRowData );  
  
    hr = rs.MoveNext();  
}  
```  
  
È possibile usare [GetXMLColumnData](../../data/oledb/cxmlaccessor-getxmlcolumndata.md) per recuperare le informazioni di colonna (tipo di dati) come dati stringa in formato XML.  
  
## <a name="see-also"></a>Vedere anche  

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)