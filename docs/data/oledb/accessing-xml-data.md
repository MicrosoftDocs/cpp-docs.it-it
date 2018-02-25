---
title: Accesso ai dati XML | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: c25e5019ebe930cec1dc5cf7c547e9bc03a3ffa8
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="accessing-xml-data"></a>Accesso ai dati XML
Esistono due metodi distinti per il recupero di dati XML da un'origine dati: uno Usa [CStreamRowset](../../data/oledb/cstreamrowset-class.md) e l'altra utilizza [CXMLAccessor](../../data/oledb/cxmlaccessor-class.md).  
  
|Funzionalità|CStreamRowset|CXMLAccessor|  
|-------------------|-------------------|------------------|  
|Quantità di dati trasferiti|Recupera dati da tutte le colonne e righe in una sola volta.|Recupera i dati di tutte le colonne, ma solo una riga alla volta. È necessario passare le righe mediante i metodi, ad esempio `MoveNext`.|  
|Formattazione della stringa|SQL Server formatta la stringa XML e lo invia al consumer.|Recupera i dati di set di righe in formato nativo (richiede il provider di inviare i dati come stringhe Unicode) e quindi compila la stringa che contiene i dati in formato XML.|  
|Controllo sulla formattazione|È necessario un livello di controllo sulla modalità di formattazione della stringa XML impostando alcune proprietà specifiche di SQL Server 2000.|Si ha alcun controllo sul formato della stringa XML generato.|  
  
 Mentre `CStreamRowset` offre una più generale efficiente di recupero dei dati in formato XML, è supportato solo da SQL Server 2000.  
  
## <a name="retrieving-xml-data-using-cstreamrowset"></a>Recupero di dati XML utilizzando CStreamRowset  
 Specificare [CStreamRowset](../../data/oledb/cstreamrowset-class.md) come tipo di set di righe nel `CCommand` o `CTable` dichiarazione. È possibile utilizzarlo con la propria funzione di accesso o alcuna funzione di accesso, ad esempio:  
  
```  
CCommand<CAccessor<CMyAccessor>, CStreamRowset> myCmd;  
```  
  
 oppure  
  
```  
CCommand<CNoAccessor, CStreamRowset> myCmd;  
```  
  
 In genere quando si chiama `CCommand::Open` (specificando, ad esempio, `CRowset` come il `TRowset` classe), viene ottenuto un `IRowset` puntatore. `ICommand::Execute` Restituisce un `IRowset` puntatore, che viene archiviato nel `m_spRowset` appartenente il `CRowset` oggetto. I metodi come `MoveFirst`, `MoveNext`, e `GetData` utilizzano tale puntatore per recuperare i dati.  
  
 Al contrario, quando si chiama `CCommand::Open` (ma specificare `CStreamRowset` come il `TRowset` classe), `ICommand::Execute` restituisce un `ISequentialStream` puntatore, che viene archiviato nel `m_spStream` membro dati di [CStreamRowset](../../data/oledb/cstreamrowset-class.md). Utilizzare quindi la `Read` metodo per recuperare i dati (stringa Unicode) in formato XML. Ad esempio:  
  
```  
myCmd.m_spStream->Read()  
```  
  
 SQL Server 2000 esegue la formattazione XML e restituisce tutte le colonne e tutte le righe del set di righe in un'unica stringa XML.  
  
 Per un esempio di utilizzo di `Read` metodo, vedere la sezione "Aggiunta del supporto XML al Consumer" in [implementazione di un Consumer semplice](../../data/oledb/implementing-a-simple-consumer.md).  
  
> [!NOTE]
>  Il supporto XML mediante `CStreamRowset` funziona solo con SQL Server 2000 ed è necessario disporre del Provider OLE DB per SQL Server 2000 (installato con MDAC).  
  
## <a name="retrieving-xml-data-using-cxmlaccessor"></a>Recupero di dati XML tramite CXMLAccessor  
 [CXMLAccessor](../../data/oledb/cxmlaccessor-class.md) consente di accedere ai dati da un'origine dati come dati stringa quando non si dispone di alcuna conoscenza dello schema dell'archivio dati. `CXMLAccessor` funziona come `CDynamicStringAccessorW` ad eccezione del fatto che il primo converte tutti i dati dall'archivio dati in formato XML (tag). I nomi di tag XML corrispondano quanto più accuratamente possibile i nomi delle colonne dell'archivio dati.  
  
 Utilizzare `CXMLAccessor` come si farebbe con qualsiasi altra classe di funzione di accesso, passarlo come parametro di modello per `CCommand` o `CTable`:  
  
```  
CTable<CXMLAccessor, CRowset> rs;  
```  
  
 Utilizzare [GetXMLRowData](../../data/oledb/cxmlaccessor-getxmlrowdata.md) per recuperare i dati della riga di una tabella alla volta e passare le righe mediante i metodi, ad esempio `MoveNext`, ad esempio:  
  
```  
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
  
 È possibile utilizzare [GetXMLColumnData](../../data/oledb/cxmlaccessor-getxmlcolumndata.md) per recuperare le informazioni di colonna (tipo di dati) come dati stringa in formato XML.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)