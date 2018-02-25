---
title: Implementazione di un Consumer semplice | Documenti Microsoft
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
- clients, creating
- OLE DB consumers, implementing
ms.assetid: 13828167-23a4-4e94-8b6c-878262fda464
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 1ab109411117b99f816b094fca06ff08a4e7e3cb
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="implementing-a-simple-consumer"></a>Implementazione di un consumer semplice
Gli argomenti seguenti viene illustrato come modificare i file creati per la creazione guidata applicazione MFC e la creazione guidata Consumer OLE DB ATL per creare un consumer semplice. L'esempio include le parti seguenti:  
  
-   "Il recupero di dati con il Consumer" viene illustrato come implementare il codice del consumer che legge tutti i dati, riga per riga, da una tabella di database.  
  
-   "Aggiunta di supporto segnalibro al Consumer" viene illustrato come aggiungere supporto per segnalibro al consumer.  
  
-   "Aggiunta del supporto XML per il Consumer" viene illustrato come modificare il codice consumer per restituire i dati di set di righe recuperate come dati XML.  
  
> [!NOTE]
>  È possibile utilizzare l'applicazione consumer descritta in questa sezione per i provider di esempio MyProv e Provider di test.  
  
> [!NOTE]
>  Per compilare un'applicazione consumer per testare MyProv (lo stesso provider descritto in [miglioramento di un Provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md)), è necessario includere il supporto di segnalibro come descritto in "Aggiunta del supporto per segnalibro al Consumer".  
  
> [!NOTE]
>  Per compilare un'applicazione consumer per testare i Provider, omettere il supporto per segnalibro descritto in "Aggiunta del supporto per i segnalibro al Consumer" e passare a "Aggiunta del supporto XML per il Consumer".  
  
## <a name="retrieving-data-with-the-consumer"></a>Recupero dei dati con il Consumer  
  
#### <a name="to-modify-the-console-application-to-use-the-ole-db-consumer"></a>Per modificare l'applicazione console per utilizzare l'applicazione consumer OLE DB  
  
1.  In MyCons, modificare il codice principale inserendo il testo in grassetto, come indicato di seguito:  
  
    ```  
    // MyCons.cpp : Defines the entry point for the console application.  
    //  
    #include "stdafx.h"  
    #include "Products.h"  
    ...  
    int main(int argc, char* argv[])  
    {  
 HRESULT hr = CoInitialize(NULL);   // Instantiate rowset   CProducts rs;   hr = rs.OpenAll();   ATLASSERT(SUCCEEDED(hr ) );   hr = rs.MoveFirst();   // Iterate through the rowset   while(SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET )   {      // Print out the column information for each row      printf("Product ID: %d, Name: %s, Unit Price: %d, Quantity per Unit: %d, Units in Stock %d, Reorder Level %d\n",             rs.m_ProductID, rs.m_ProductName, rs.m_UnitPrice, rs.m_QuantityPerUnit, rs.m_UnitsInStock, rs.m_ReorderLevel );      hr = rs.MoveNext();   }   rs.Close();   rs.ReleaseCommand();   CoUninitialize();  
  
       return 0;  
    }  
    ```  
  
## <a name="adding-bookmark-support-to-the-consumer"></a>Aggiunta di supporto per segnalibro al Consumer  
 Un segnalibro è una colonna che identifica in modo univoco le righe della tabella. In genere è la colonna chiave, ma non sempre; è specifico del provider. In questa sezione viene illustrato come aggiungere supporto per segnalibro. A tale scopo, è necessario eseguire le operazioni seguenti nella classe di record utente:  
  
-   Creare un'istanza di segnalibri. Si tratta di oggetti di tipo [CBookmark](../../data/oledb/cbookmark-class.md).  
  
-   Richiedere una colonna del segnalibro dal provider impostando il **DBPROP_IRowsetLocate** proprietà.  
  
-   Aggiungere una voce di segnalibro alla mappa delle colonne usando la [BOOKMARK_ENTRY](../../data/oledb/bookmark-entry.md) (macro).  
  
 I passaggi precedenti offrono supporto per segnalibro e un oggetto bookmark. Questo esempio di codice viene illustrato un segnalibro come indicato di seguito:  
  
-   Aprire un file per la scrittura.  
  
-   Set di righe dati per il file di output, una riga.  
  
-   Sposta il cursore del set di righe al segnalibro chiamando [MoveToBookmark](../../data/oledb/crowset-movetobookmark.md).  
  
-   La riga con segnalibro, aggiungerlo alla fine del file di output.  
  
> [!NOTE]
>  Se si utilizza un'applicazione consumer per testare l'applicazione di provider di esempio di Provider, omettere il supporto per segnalibro descritti in questa sezione.  
  
#### <a name="to-instantiate-the-bookmark"></a>Per creare un'istanza del segnalibro  
  
1.  La funzione di accesso deve contenere un oggetto di tipo [CBookmark](../../data/oledb/cbookmark-class.md). Il `nSize` parametro specifica la dimensione del buffer del segnalibro in byte, in genere 4 per piattaforme a 32 bit e 8 per le piattaforme a 64 bit. Per i membri dati della colonna nella classe di record utente, aggiungere la seguente dichiarazione:  
  
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
  
#### <a name="to-request-a-bookmark-column-from-the-provider"></a>Per richiedere una colonna del segnalibro del provider  
  
1.  Aggiungere il codice seguente nel `GetRowsetProperties` metodo nella classe di record utente:  
  
    ```  
    // Set the DBPROP_IRowsetLocate property.  
    void GetRowsetProperties(CDBPropSet* pPropSet)  
    {  
       pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);  
       pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);  
       // Add DBPROP_IRowsetLocate property to support bookmarks   pPropSet->AddProperty(DBPROP_IRowsetLocate, true);  
    }  
    ```  
  
#### <a name="to-add-a-bookmark-entry-to-the-column-map"></a>Per aggiungere una voce di segnalibro alla mappa delle colonne  
  
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
  
#### <a name="to-use-a-bookmark-in-your-main-code"></a>Per utilizzare un segnalibro nel codice principale  
  
1.  File MyCons. cpp dall'applicazione console creato in precedenza, modificare il codice principale come segue. Per utilizzare i segnalibri, il codice principale deve creare un'istanza di oggetto bookmark (`myBookmark`); si tratta di un segnalibro diverso da quello nella funzione di accesso (`m_bookmark`).  
  
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
       while(SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET )  
       {  
          nCounter++;  
          if(nCounter == 5 )  
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
       while(SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET )  
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
  
 Per ulteriori informazioni sui segnalibri, vedere [mediante segnalibri](../../data/oledb/using-bookmarks.md). Vengono anche illustrati esempi di segnalibri [aggiornamento dei rowset](../../data/oledb/updating-rowsets.md).  
  
## <a name="adding-xml-support-to-the-consumer"></a>Aggiunta del supporto XML al Consumer  
 Come descritto in [accesso ai dati XML](../../data/oledb/accessing-xml-data.md), esistono due modi per recuperare i dati XML da un'origine dati: utilizzando [CStreamRowset](../../data/oledb/cstreamrowset-class.md) o tramite [CXMLAccessor](../../data/oledb/cxmlaccessor-class.md). Questo esempio viene utilizzato `CStreamRowset`, che è più efficiente, ma è necessario disporre di SQL Server 2000 in esecuzione nel computer in cui si esegue questa applicazione di esempio.  
  
#### <a name="to-modify-the-command-class-to-inherit-from-cstreamrowset"></a>Per modificare la classe di comando da cui ereditare CStreamRowset  
  
1.  Nell'applicazione consumer creato in precedenza, modificare il `CCommand` dichiarazione per specificare `CStreamRowset` come classe di rowset come indicato di seguito:  
  
    ```  
    class CProducts : public CCommand<CAccessor<CProductsAccessor>, CStreamRowset >  
    ```  
  
#### <a name="to-modify-the-main-code-to-retrieve-and-output-the-xml-data"></a>Per modificare il codice per recuperare e i dati XML di output principale  
  
1.  File MyCons. cpp dall'applicazione console creato in precedenza, modificare il codice principale come segue:  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un consumer OLE DB tramite la procedura guidata](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)