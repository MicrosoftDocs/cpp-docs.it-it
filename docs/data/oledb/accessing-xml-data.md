---
title: "Accesso ai dati XML | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CStreamRowset (classe), recupero di dati XML"
  - "CXMLAccessor (classe), recupero di dati XML"
  - "dati [C++], accesso ai dati XML"
  - "accesso ai dati [C++], XML (dati)"
  - "rowset [C++], recupero di dati XML"
  - "XML [C++], accesso ai dati"
ms.assetid: 6b693d55-a554-4846-8118-e8773b79b572
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Accesso ai dati XML
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esistono due metodi distinti per recuperare dati XML da un'origine dati: il primo utilizza [CStreamRowset](../../data/oledb/cstreamrowset-class.md), mentre l'altro utilizza [CXMLAccessor](../../data/oledb/cxmlaccessor-class.md).  
  
|Funzionalità|CStreamRowset|CXMLAccessor|  
|------------------|-------------------|------------------|  
|Quantità di dati trasferiti|Recupera i dati di tutte le righe e di tutte le colonne in un'unica operazione.|Recupera i dati di tutte le colonne, ma solo una riga alla volta.  È necessario spostarsi da una riga all'altra tramite i metodi, ad esempio con `MoveNext`.|  
|Formattazione della stringa|SQL Server formatta la stringa XML e la invia al consumer.|Recupera di dati del rowset nel formato nativo, ovvero richiede al provider di inviare i dati come stringhe Unicode, e quindi compila la stringa contenente i dati in formato XML.|  
|Controllo sulla formattazione|Il programmatore dispone di un certo livello di controllo sul modo in cui la stringa XML viene formattata tramite l'impostazione di alcune proprietà specifiche di SQL Server 2000.|Il programmatore dispone del controllo sul formato della stringa XML generata.|  
  
 `CStreamRowset` offre una soluzione più efficiente in termini generali di recupero dei dati in formato XML, ma è supportato solo da SQL Server 2000.  
  
## Recupero di dati XML tramite CStreamRowset  
 [CStreamRowset](../../data/oledb/cstreamrowset-class.md) viene specificato come tipo di rowset nella dichiarazione di `CCommand` o di `CTable`.  È possibile utilizzare questo metodo con una funzione di accesso personalizzata o senza alcuna funzione di accesso, ad esempio:  
  
```  
CCommand<CAccessor<CMyAccessor>, CStreamRowset> myCmd;  
```  
  
 \- oppure \-  
  
```  
CCommand<CNoAccessor, CStreamRowset> myCmd;  
```  
  
 Normalmente quando si chiama `CCommand::Open` \(specificando, ad esempio, `CRowset` come classe `TRowset`\), si ottiene un puntatore `IRowset`.  `ICommand::Execute` restituisce un puntatore `IRowset`, archiviato nel membro `m_spRowset` dell'oggetto `CRowset`.  I metodi come `MoveFirst`, `MoveNext` e `GetData` utilizzano tale puntatore per recuperare i dati.  
  
 D'altra parte, quando si chiama `CCommand::Open` ma si specifica `CStreamRowset` come classe di `TRowset`, `ICommand::Execute` restituisce un puntatore `ISequentialStream`, memorizzato nel membro dati `m_spStream` di [CStreamRowset](../../data/oledb/cstreamrowset-class.md).  A questo punto, si utilizza il metodo `Read` per recuperare i dati della stringa Unicode in formato XML.  Di seguito è riportato un esempio.  
  
```  
myCmd.m_spStream->Read()  
```  
  
 In SQL Server 2000 viene eseguita la formattazione in XML e tutte le colonne e le righe del rowset vengono restituite in un'unica stringa XML.  
  
 Per un esempio di utilizzo del metodo `Read`, vedere "Aggiunta del supporto XML al consumer" in [Implementazione di un consumer semplice](../../data/oledb/implementing-a-simple-consumer.md).  
  
> [!NOTE]
>  Il supporto XML per l'utilizzo con `CStreamRowset` funziona solo in SQL Server 2000 e richiede la presenza del provider Microsoft OLE DB per SQL Server 2000 con Microsoft Data Access Components \(MDAC\) installato.  
  
## Recupero di dati XML tramite CXMLAccessor  
 [CXMLAccessor](../../data/oledb/cxmlaccessor-class.md) consente l'accesso ai dati da un'origine dati come dati di tipo stringa quando non si ha alcuna conoscenza dello schema dell'archivio dati.  `CXMLAccessor` funziona in modo analogo a `CDynamicStringAccessorW` tranne per il fatto che converte tutti i dati a cui si accede nell'archivio dati in formato XML con tag.  I nomi dei tag XML corrisponderanno il più possibile ai nomi di colonna dell'archivio dati.  
  
 Utilizzare `CXMLAccessor` come qualsiasi altra classe di funzione di accesso, passandola come parametro di modello a `CCommand` o a `CTable`:  
  
```  
CTable<CXMLAccessor, CRowset> rs;  
```  
  
 Utilizzare [GetXMLRowData](../../data/oledb/cxmlaccessor-getxmlrowdata.md) per recuperare i dati dalla tabella una riga alla volta e per passare da una riga all'altra tramite metodi quali `MoveNext`, ad esempio:  
  
```  
// Open data source, session, and rowset  
hr = rs.MoveFirst();  
while( SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET )  
{  
    CStringW strRowData;  
    myCmd.GetXMLRowData(strRowData);  
  
    printf_s( "%S\n", strRowData );  
  
    hr = rs.MoveNext();  
}  
```  
  
 È possibile utilizzare [GetXMLColumnData](../../data/oledb/cxmlaccessor-getxmlcolumndata.md) per recuperare le informazioni di colonna \(tipo di dati\) in formato stringa XML.  
  
## Vedere anche  
 [Utilizzo delle funzioni di accesso](../../data/oledb/using-accessors.md)