---
title: "Implementazione di un consumer semplice | Microsoft Docs"
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
  - "client, creazione"
  - "OLE DB (consumer), implementazione"
ms.assetid: 13828167-23a4-4e94-8b6c-878262fda464
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Implementazione di un consumer semplice
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nei seguenti argomenti viene illustrato come modificare i file generati dalla Creazione guidata applicazione MFC e dalla Creazione guidata consumer OLE DB ATL per creare un consumer semplice.  L'esempio è costituito dalle seguenti parti:  
  
-   Nella sezione "Recupero di dati con il consumer" viene illustrato come implementare codice del consumer che legge tutti i dati, riga per riga, da una tabella di database.  
  
-   Nella sezione "Aggiunta del supporto per i bookmark al consumer" viene illustrato come aggiungere al consumer il supporto per i bookmark.  
  
-   Nella sezione "Aggiunta del supporto XML al consumer" viene illustrato come modificare il codice del consumer affinché consenta l'invio dei dati recuperati dal rowset in forma di dati XML.  
  
> [!NOTE]
>  È possibile utilizzare l'applicazione consumer descritta in questa sezione per verificare i provider di esempio MyProv e Provider.  
  
> [!NOTE]
>  Per compilare un'applicazione consumer che verifichi il provider MyProv, descritto anche in [Miglioramento di un provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md), è necessario includere il supporto per i bookmark come descritto in "Aggiunta del supporto per i bookmark al consumer".  
  
> [!NOTE]
>  Per compilare un'applicazione consumer che verifichi il provider, omettere il supporto per i bookmark descritto in "Aggiunta del supporto per i bookmark al consumer" e passare ad "Aggiunta del supporto XML al consumer".  
  
## Recupero di dati con il consumer  
  
#### Per modificare l'applicazione console al fine di utilizzare il consumer OLE DB  
  
1.  In MyCons.cpp modificare il codice principale inserendo il testo in grassetto indicato di seguito:  
  
    ```  
    // MyCons.cpp : Defines the entry point for the console application.  
    //  
    #include "stdafx.h"  
    #include "Products.h"  
    ...  
    int main(int argc, char* argv[])  
    {  
       HRESULT hr = CoInitialize(NULL);        // Instantiate rowset    CProducts rs;        hr = rs.OpenAll();    ATLASSERT( SUCCEEDED( hr ) );    hr = rs.MoveFirst();        // Iterate through the rowset    while( SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET )    {       // Print out the column information for each row       printf("Product ID: %d, Name: %s, Unit Price: %d, Quantity per Unit: %d, Units in Stock %d, Reorder Level %d\n",              rs.m_ProductID, rs.m_ProductName, rs.m_UnitPrice, rs.m_QuantityPerUnit, rs.m_UnitsInStock, rs.m_ReorderLevel );       hr = rs.MoveNext();    }        rs.Close();    rs.ReleaseCommand();        CoUninitialize();  
  
       return 0;  
    }  
    ```  
  
## Aggiunta del supporto per i bookmark al consumer  
 Un bookmark è una colonna che identifica in modo univoco righe di una tabella.  In genere è la colonna chiave, ma non sempre, dal momento che varia a seconda del provider.  In questa sezione viene indicato come aggiungere il supporto per i bookmark.  A questo scopo, eseguire le seguenti operazioni nella classe di record utente:  
  
-   Creare un istanza dei bookmark.  Questi sono oggetti del tipo [CBookmark](../../data/oledb/cbookmark-class.md).  
  
-   Richiedere una colonna bookmark al provider impostando la proprietà **DBPROP\_IRowsetLocate**.  
  
-   Aggiungere una voce di bookmark alla mappa delle colonne utilizzando la macro [BOOKMARK\_ENTRY](../../data/oledb/bookmark-entry.md).  
  
 Seguendo la procedura di esempio sopra riportata si otterrà il supporto per i bookmark e un oggetto bookmark.  Nell'esempio di codice viene illustrato l'utilizzo di un bookmark per le seguenti attività:  
  
-   Apertura di un file per la scrittura.  
  
-   Invio dei dati del rowset riga per riga al file.  
  
-   Spostamento del cursore del rowset al bookmark mediante chiamata alla funzione [MoveToBookmark](../../data/oledb/crowset-movetobookmark.md).  
  
-   Invio della riga con il bookmark mediante l'aggiunta di essa alla fine del file.  
  
> [!NOTE]
>  Se si utilizza un'applicazione consumer per verificare il provider di esempio Provider, omettere il supporto per i bookmark descritto in questa sezione.  
  
#### Per creare un'istanza del bookmark  
  
1.  La funzione di accesso deve contenere un oggetto di tipo [CBookmark](../../data/oledb/cbookmark-class.md).  Il parametro `nSize` specifica la dimensione del buffer dei bookmark espressa in byte, in genere 4 per le piattaforme a 32 bit e 8 per le piattaforme a 64 bit.  Aggiungere la seguente dichiarazione ai membri dati della colonna nella classe di record utente:  
  
    ```  
    //////////////////////////////////////////////////////////////////////  
    // Products.h  
    class CProductsAccessor  
    {  
    public:  
       CBookmark<4> m_bookmark;   // Add bookmark declaration  
       LONG m_ProductID;  
       ...  
    ```  
  
#### Per richiedere una colonna bookmark al provider  
  
1.  Aggiungere il seguente codice nel metodo `GetRowsetProperties` della classe di record utente:  
  
    ```  
    // Set the DBPROP_IRowsetLocate property.  
    void GetRowsetProperties(CDBPropSet* pPropSet)  
    {  
       pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);  
       pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);  
       // Add DBPROP_IRowsetLocate property to support bookmarks    pPropSet->AddProperty(DBPROP_IRowsetLocate, true);  
    }  
    ```  
  
#### Per aggiungere una voce di bookmark alla mappa delle colonne  
  
1.  Aggiungere la seguente voce alla mappa delle colonne nella classe di record utente:  
  
    ```  
    // Set a bookmark entry in the column map.  
    BEGIN_COLUMN_MAP(CProductsAccessor)  
       BOOKMARK_ENTRY(m_bookmark)   // Add bookmark entry  
       COLUMN_ENTRY_LENGTH_STATUS(1, m_ProductID, m_dwProductIDLength, m_dwProductIDStatus)  
       COLUMN_ENTRY_LENGTH_STATUS(2, m_ProductName, m_dwProductNameLength, m_dwProductNameStatus)  
    ...  
    END_COLUMN_MAP()  
    ```  
  
#### Per utilizzare un bookmark nel codice principale  
  
1.  Dall'applicazione console precedentemente creata modificare il codice principale del file MyCons.cpp nel modo descritto di seguito.  Perché possano essere utilizzati i bookmark, è necessario che venga creata un'istanza dell'oggetto bookmark \(`myBookmark`\) del codice principale. Tale bookmark non è quello contenuto nella funzione di accesso \(`m_bookmark`\).  
  
    ```  
    ///////////////////////////////////////////////////////////////////////  
    // MyCons.cpp : Defines the entry point for the console application.  
    //  
  
    #include "stdafx.h"  
    #include "Products.h"   
    #include <iostream>  
    #include <fstream>  
    using namespace std;  
  
    int _tmain(int argc, _TCHAR* argv[])  
    {  
       HRESULT hr = CoInitialize(NULL);  
  
       // Instantiate rowset  
       CProducts rs;  
  
       hr = rs.OpenAll();  
       hr = rs.MoveFirst();  
  
       // Cast CURRENCY m_UnitPrice to a long value  
       LONGLONG lPrice = rs.m_UnitPrice.int64;  
  
       // Open file output.txt for writing in overwrite mode  
       ofstream outfile( "C:\\output.txt", ios::out );  
  
       if (!outfile)      // Test for invalid file  
          return -1;  
  
       // Instantiate a bookmark object myBookmark for the main code  
       CBookmark<4> myBookmark;  
       int nCounter = 0;  
  
       // Iterate through the rowset and output column data to output.txt row by row  
       // In the file, mark the beginning of this set of data:  
       outfile << "initial row dump" << endl;  
       while( SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET )  
       {  
          nCounter++;  
          if( nCounter == 5 )  
             myBookmark = rs.bookmark;  
          // Output the column information for each row:  
          outfile << rs.m_ProductID << rs.m_ProductName << lPrice << rs.m_QuantityPerUnit << rs.m_UnitsInStock << rs.m_ReorderLevel << endl;  
          hr = rs.MoveNext();  
       }  
  
       // Move cursor to bookmark  
       hr = rs.MoveToBookmark(myBookmark);  
  
       // Iterate through the rowset and output column data to output.txt row by row  
       // In the file, mark the beginning of this set of data:  
       outfile << "row dump starting from bookmarked row" << endl;  
       while( SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET )  
       {  
          // Output the column information for each row  
          outfile << rs.m_ProductID << rs.m_ProductName << lPrice << rs.m_QuantityPerUnit << rs.m_UnitsInStock << rs.m_ReorderLevel << endl;  
          hr = rs.MoveNext();  
       }  
  
       rs.CloseAll();  
       CoUninitialize();  
  
       return 0;  
    }  
    ```  
  
 Per ulteriori informazioni sui bookmark, vedere [Utilizzo dei bookmark](../../data/oledb/using-bookmarks.md).  Esempi di bookmark sono inoltre riportati nell'argomento [Aggiornamento dei rowset](../../data/oledb/updating-rowsets.md).  
  
## Aggiunta del supporto XML al consumer  
 Come illustrato in [Accesso ai dati XML](../../data/oledb/accessing-xml-data.md), è possibile recuperare dati XML da un'origine dati in due modi: utilizzando [CStreamRowset](../../data/oledb/cstreamrowset-class.md) oppure [CXMLAccessor](../../data/oledb/cxmlaccessor-class.md).  In questo esempio viene utilizzato il più efficiente metodo `CStreamRowset`, per il quale è tuttavia necessario che sul computer in cui si esegue l'applicazione di esempio sia in esecuzione SQL Server 2000.  
  
#### Per modificare la classe di comando affinché erediti da CStreamRowset  
  
1.  Nell'applicazione consumer precedentemente creata modificare la dichiarazione di `CCommand` per specificare `CStreamRowset` come classe di rowset nel modo seguente:  
  
    ```  
    class CProducts : public CCommand<CAccessor<CProductsAccessor>, CStreamRowset >  
    ```  
  
#### Per modificare il codice principale affinché consenta il recupero e l'invio di dati XML  
  
1.  Dall'applicazione console precedentemente creata modificare il codice principale del file MyCons.cpp nel modo seguente:  
  
    ```  
    ///////////////////////////////////////////////////////////////////////  
    // MyCons.cpp : Defines the entry point for the console application.  
    //  
  
    #include "stdafx.h"  
    #include "Products.h"   
    #include <iostream>  
    #include <fstream>  
    using namespace std;  
  
    int _tmain(int argc, _TCHAR* argv[])  
    {  
       HRESULT hr = CoInitialize(NULL);  
  
       // Instantiate rowset  
       CProducts rs;  
  
       // Add variable declarations for the Read method to handle sequential stream data  
       CHAR buffer[1001];  // Pointer to buffer into which data stream is read  
       ULONG cbRead;       // Actual number of bytes read from the data stream  
  
       hr = rs.OpenAll();  
  
       // Open file output.txt for writing in overwrite mode  
       ofstream outfile( "C:\\output.txt", ios::out );  
  
       if (!outfile)      // Test for invalid file  
          return -1;  
  
       // The following loop reads 1000 bytes of the data stream at a time   
       // until it reaches the end of the data stream  
       for (;;)  
       {  
          // Read sequential stream data into buffer  
          HRESULT hr = rs.m_spStream->Read(buffer, 1000, &cbRead);  
          if (FAILED (hr))  
             break;  
          // Output buffer to file  
          buffer[cbRead] = 0;  
          outfile << buffer;  
          // Test for end of data stream  
          if (cbRead < 1000)  
             break;  
       }  
  
       rs.CloseAll();  
       CoUninitialize();  
  
       return 0;  
    }  
    ```  
  
## Vedere anche  
 [Creazione di un consumer OLE DB mediante procedura guidata](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)