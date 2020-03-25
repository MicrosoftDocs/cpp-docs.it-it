---
title: Accesso ai dati XML
ms.date: 10/18/2018
helpviewer_keywords:
- data access [C++], XML data
- XML [C++], accessing data
- CXMLAccessor class, retrieving XML data
- data [C++], XML data access
- rowsets [C++], retrieving XML data
- CStreamRowset class, retrieving XML data
ms.assetid: 6b693d55-a554-4846-8118-e8773b79b572
ms.openlocfilehash: be4225003211449a98d3fbe5fd686b9b8058a651
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212277"
---
# <a name="accessing-xml-data"></a>Accesso ai dati XML

Esistono due metodi distinti per recuperare i dati XML da un'origine dati: uno usa [CStreamRowset](../../data/oledb/cstreamrowset-class.md) e l'altro usa [CXMLAccessor](../../data/oledb/cxmlaccessor-class.md).

|Funzionalità|CStreamRowset|CXMLAccessor|
|-------------------|-------------------|------------------|
|Quantità di dati trasferiti|Recupera i dati da tutte le colonne e le righe in una sola volta.|Recupera i dati da tutte le colonne, ma solo una riga alla volta. È necessario spostarsi tra le righe usando metodi come `MoveNext`.|
|Formattazione della stringa|SQL Server formatta la stringa XML e la invia al consumer.|Recupera i dati del set di righe nel formato nativo (richiede che il provider lo invii come stringhe Unicode) e quindi compila la stringa che contiene i dati in formato XML.|
|Controllo della formattazione|Si ha un certo livello di controllo sulla modalità di formattazione della stringa XML impostando alcune proprietà specifiche di SQL Server 2000.|Non è possibile controllare il formato della stringa XML generata.|

Sebbene `CStreamRowset` fornisca un modo più efficiente per il recupero dei dati in formato XML, è supportato solo da SQL Server 2000.

## <a name="retrieving-xml-data-using-cstreamrowset"></a>Recupero di dati XML tramite CStreamRowset

È possibile specificare [CStreamRowset](../../data/oledb/cstreamrowset-class.md) come tipo di set di righe nella dichiarazione `CCommand` o `CTable`. È possibile usarlo con una funzione di accesso personalizzata o senza funzione di accesso, ad esempio:

```cpp
CCommand<CAccessor<CMyAccessor>, CStreamRowset> myCmd;
```

-oppure-

```cpp
CCommand<CNoAccessor, CStreamRowset> myCmd;
```

In genere, quando si chiama `CCommand::Open` (specificando, ad esempio, `CRowset` come classe `TRowset`), viene ottenuto un puntatore `IRowset`. `ICommand::Execute` restituisce un puntatore `IRowset`, archiviato nel membro `m_spRowset` dell'oggetto `CRowset`. Metodi come `MoveFirst`, `MoveNext`e `GetData` usano tale puntatore per recuperare i dati.

Al contrario, quando si chiama `CCommand::Open` (ma si specifica `CStreamRowset` come classe `TRowset`), `ICommand::Execute` restituisce un puntatore `ISequentialStream`, che viene archiviato nel membro dati `m_spStream` di [CStreamRowset](../../data/oledb/cstreamrowset-class.md). Si usa quindi il metodo `Read` per recuperare i dati (stringa Unicode) in formato XML. Ad esempio:

```cpp
myCmd.m_spStream->Read()
```

SQL Server 2000 esegue la formattazione XML e restituisce tutte le colonne e tutte le righe del set di righe come una stringa XML.

Per un esempio di utilizzo del metodo `Read`, vedere **aggiunta del supporto XML al consumer** nell' [implementazione di un consumer semplice](../../data/oledb/implementing-a-simple-consumer.md).

> [!NOTE]
> Il supporto XML con `CStreamRowset` funziona solo con SQL Server 2000 e richiede che il provider di OLE DB per SQL Server 2000 (installato con MDAC).

## <a name="retrieving-xml-data-using-cxmlaccessor"></a>Recupero di dati XML tramite CXMLAccessor

[CXMLAccessor](../../data/oledb/cxmlaccessor-class.md) consente di accedere ai dati da un'origine dati come dati di stringa quando non si conosce lo schema dell'archivio dati. `CXMLAccessor` funziona come `CDynamicStringAccessorW` ad eccezione del fatto che il primo converte tutti i dati a cui si accede dall'archivio dati come dati in formato XML (con tag). I nomi di tag XML corrispondono al più vicino possibile ai nomi delle colonne dell'archivio dati.

Usare `CXMLAccessor` come qualsiasi altra classe della funzione di accesso, passandola come parametro di modello per `CCommand` o `CTable`:

```cpp
CTable<CXMLAccessor, CRowset> rs;
```

Usare [GetXMLRowData](../../data/oledb/cxmlaccessor-getxmlrowdata.md) per recuperare i dati dalla tabella una riga alla volta e spostarsi tra le righe usando metodi come `MoveNext`, ad esempio:

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

È possibile utilizzare [GetXMLColumnData](../../data/oledb/cxmlaccessor-getxmlcolumndata.md) per recuperare le informazioni sulla colonna (tipo di dati) come dati di stringa in formato XML.

## <a name="see-also"></a>Vedere anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)
