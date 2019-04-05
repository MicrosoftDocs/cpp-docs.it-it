---
title: Implementazione di un consumer semplice
ms.date: 10/12/2018
helpviewer_keywords:
- clients, creating
- OLE DB consumers, implementing
ms.assetid: 13828167-23a4-4e94-8b6c-878262fda464
ms.openlocfilehash: 9067e8645fac9a06bd85ca5ef18fbaff45d16aae
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59033534"
---
# <a name="implementing-a-simple-consumer"></a>Implementazione di un consumer semplice

Gli argomenti seguenti illustrano come modificare i file creati per il **Creazione guidata applicazione MFC** e **Creazione guidata Consumer OLE DB ATL** per creare un consumer semplice. Questo esempio è costituito dalle parti seguenti:

- [Recupero dei dati con il Consumer](#retrieve) viene illustrato come implementare il codice del consumer che legge tutti i dati, riga per riga, da una tabella di database.

- [Aggiunta di supporto di segnalibro al Consumer](#bookmark) viene illustrato come aggiungere supporto per segnalibro al consumer.

> [!NOTE]
> È possibile usare l'applicazione consumer descritte in questa sezione per testare la `MyProv` e `Provider` i provider di esempio.

> [!NOTE]
> Per compilare un'applicazione consumer per testare `MyProv` (lo stesso provider descritto in [miglioramento di un Provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md)), è necessario includere il supporto di segnalibro come descritto in [aggiunta del supporto di segnalibro per il Consumer](#bookmark).

## <a name="retrieve" ></a> Recupero dei dati con il Consumer

### <a name="to-modify-the-console-application-to-use-the-ole-db-consumer"></a>Per modificare l'applicazione console per utilizzare l'applicazione consumer OLE DB

1. In `MyCons.cpp`, modificare il codice principale inserendo il testo in grassetto, come indicato di seguito:

    ```cpp
    // MyCons.cpp : Defines the entry point for the console application.
    //
    #include "stdafx.h"
    #include "Products.h"
    ...
    int main(int argc, char* argv[])
    {
       HRESULT hr = CoInitialize(NULL);   // Instantiate rowset
       CProducts rs;
       hr = rs.OpenAll();
       ATLASSERT(SUCCEEDED(hr ) );
       hr = rs.MoveFirst();   // Iterate through the rowset
       while(SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET )   {      // Print out the column information for each row
         printf("Product ID: %d, Name: %s, Unit Price: %d, Quantity per Unit: %d, Units in Stock %d, Reorder Level %d\n",
           rs.m_ProductID, rs.m_ProductName, rs.m_UnitPrice, rs.m_QuantityPerUnit, rs.m_UnitsInStock, rs.m_ReorderLevel );
         hr = rs.MoveNext();   }
       rs.Close();
       rs.ReleaseCommand();
       CoUninitialize();

       return 0;
    }
    ```

## <a name="bookmark" ></a> Aggiunta del supporto di segnalibro al Consumer

Un segnalibro è una colonna che identifica in modo univoco le righe della tabella. In genere si tratta della colonna chiave, ma non sempre; è specifico del provider. Questa sezione illustra come aggiungere il supporto di segnalibro. A tale scopo, è necessario eseguire i passaggi seguenti nella classe di record utente:

- Creare un'istanza di segnalibri. Si tratta di oggetti di tipo [CBookmark](../../data/oledb/cbookmark-class.md).

- Richiedere una colonna del segnalibro dal provider impostando il `DBPROP_IRowsetLocate` proprietà.

- Aggiungere una voce segnalibro alla mappa delle colonne utilizzando il [BOOKMARK_ENTRY](../../data/oledb/bookmark-entry.md) macro.

I passaggi precedenti offrono supporto per segnalibro e un oggetto segnalibro con cui operare. Questo esempio di codice viene illustrato un segnalibro come indicato di seguito:

- Aprire un file per la scrittura.

- Dati del set di righe di output per il file riga per riga.

- Sposta il cursore del set di righe al segnalibro chiamando [MoveToBookmark](../../data/oledb/crowset-movetobookmark.md).

- La riga con segnalibro, aggiungerlo alla fine del file di output.

> [!NOTE]
> Se si usa un'applicazione consumer per testare il `Provider` applicazione del provider di esempio, non inserire il supporto per segnalibro descritte in questa sezione.

### <a name="to-instantiate-the-bookmark"></a>Per creare un'istanza del segnalibro

1. La funzione di accesso deve contenere un oggetto di tipo [CBookmark](../../data/oledb/cbookmark-class.md). Il *nSize* parametro specifica la dimensione del buffer del segnalibro in byte, in genere 4 per piattaforme a 32 bit e 8 per le piattaforme a 64 bit. Per i membri dati delle colonne nella classe di record utente, aggiungere la dichiarazione seguente:

    ```cpp
    //////////////////////////////////////////////////////////////////////
    // Products.h
    class CProductsAccessor
    {
    public:
       CBookmark<4> m_bookmark;   // Add bookmark declaration
       LONG m_ProductID;
       ...
    ```

### <a name="to-request-a-bookmark-column-from-the-provider"></a>Per richiedere una colonna del segnalibro del provider

1. Aggiungere il codice seguente nel `GetRowsetProperties` metodo nella classe di record utente:

    ```cpp
    // Set the DBPROP_IRowsetLocate property.
    void GetRowsetProperties(CDBPropSet* pPropSet)
    {
       pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
       pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
       // Add DBPROP_IRowsetLocate property to support bookmarks   pPropSet->AddProperty(DBPROP_IRowsetLocate, true);
    }
    ```

### <a name="to-add-a-bookmark-entry-to-the-column-map"></a>Per aggiungere una voce segnalibro alla mappa delle colonne

1. Aggiungere la voce seguente alla mappa delle colonne nella classe di record utente:

    ```cpp
    // Set a bookmark entry in the column map.
    BEGIN_COLUMN_MAP(CProductsAccessor)
       BOOKMARK_ENTRY(m_bookmark)   // Add bookmark entry
       COLUMN_ENTRY_LENGTH_STATUS(1, m_ProductID, m_dwProductIDLength, m_dwProductIDStatus)
       COLUMN_ENTRY_LENGTH_STATUS(2, m_ProductName, m_dwProductNameLength, m_dwProductNameStatus)
    ...
    END_COLUMN_MAP()
    ```

### <a name="to-use-a-bookmark-in-your-main-code"></a>Per utilizzare un segnalibro nel codice principale

1. Nel `MyCons.cpp` file dell'applicazione console è precedentemente creato, modificare il codice principale come segue. Per usare i segnalibri, il codice principale deve creare un'istanza di un proprio oggetto segnalibro (`myBookmark`); si tratta di un segnalibro diverso da quello nella funzione di accesso (`m_bookmark`).

    ```cpp
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
             myBookmark = rs.m_bookmark;
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

Per altre informazioni sui segnalibri, vedere [mediante segnalibri](../../data/oledb/using-bookmarks.md). Sono inoltre riportati alcuni esempi di segnalibri nel [aggiornamento dei rowset](../../data/oledb/updating-rowsets.md).

## <a name="see-also"></a>Vedere anche

[Creazione di un consumer OLE DB mediante procedura guidata](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)
