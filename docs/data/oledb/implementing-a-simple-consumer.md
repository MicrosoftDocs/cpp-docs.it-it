---
title: Implementazione di un consumer semplice
ms.date: 08/19/2019
helpviewer_keywords:
- OLE DB consumers, implementing
ms.assetid: 13828167-23a4-4e94-8b6c-878262fda464
ms.openlocfilehash: 2d59989f8afd180b39153eed1ad0a20435aad9d4
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92923903"
---
# <a name="implementing-a-simple-consumer"></a>Implementazione di un consumer semplice

::: moniker range="msvc-160"

La Creazione guidata consumer OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive. È comunque possibile aggiungere la funzionalità manualmente. Per altre informazioni, vedere [Creazione di un consumer senza utilizzare una procedura guidata](creating-a-consumer-without-using-a-wizard.md).

::: moniker-end

::: moniker range="<=msvc-150"

Gli argomenti seguenti illustrano come modificare i file creati dalla **Creazione guidata applicazione MFC** e dalla **Creazione guidata consumer OLE DB ATL** per creare un consumer semplice. L'esempio è composto dalle parti seguenti:

- [Recupero dei dati con il consumer](#retrieve): illustra come implementare codice nel consumer che legge tutti i dati, riga per riga, da una tabella di database.

- [Aggiunta del supporto di segnalibri al consumer](#bookmark): illustra come aggiungere il supporto dei segnalibri al consumer.

> [!NOTE]
> È possibile usare l'applicazione consumer descritta in questa sezione per testare i provider di esempio `MyProv` e `Provider`.

> [!NOTE]
> Per creare un'applicazione consumer per testare `MyProv`, ovvero lo stesso provider descritto in [Miglioramento di un provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md), è necessario includere il supporto dei segnalibri come descritto in [Aggiunta del supporto di segnalibri al consumer](#bookmark).

## <a name="retrieving-data-with-the-consumer"></a><a name="retrieve" ></a> Recupero dei dati con il consumer

### <a name="to-modify-the-console-application-to-use-the-ole-db-consumer"></a>Per modificare l'applicazione console per usare il consumer OLE DB

1. In `MyCons.cpp` modificare il codice principale inserendo il testo in grassetto, come indicato di seguito:

    ```cpp
    // MyCons.cpp : Defines the entry point for the console application.
    //
    #include "pch.h" // "stdafx.h" in Visual Studio 2017 and earlier
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

## <a name="adding-bookmark-support-to-the-consumer"></a><a name="bookmark" ></a> Aggiunta del supporto di segnalibri al consumer

Un segnalibro è una colonna che identifica in modo univoco le righe della tabella. In genere si tratta della colonna chiave, ma non è sempre così. La colonna è specifica del provider. Questa sezione illustra come aggiungere il supporto dei segnalibri. A tale scopo, è necessario eseguire la procedura seguente nella classe di record utente:

- Creare un'istanza dei segnalibri. Si tratta di oggetti di tipo [CBookmark](../../data/oledb/cbookmark-class.md).

- Richiedere una colonna segnalibro al provider impostando la proprietà `DBPROP_IRowsetLocate`.

- Aggiungere una voce segnalibro al mapping delle colonne usando la macro [BOOKMARK_ENTRY](./macros-and-global-functions-for-ole-db-consumer-templates.md#bookmark_entry).

La procedura precedente fornisce il supporto dei segnalibri e un oggetto segnalibro con cui lavorare. L'esempio di codice seguente illustra un segnalibro con i passaggi seguenti:

- Aprire un file per la scrittura.

- Restituire come output nel file i dati del set di righe, riga per riga.

- Spostare il cursore del set di righe al segnalibro chiamando [MoveToBookmark](./crowset-class.md#movetobookmark).

- Restituire come output la riga con il segnalibro, aggiungendola alla fine del file.

> [!NOTE]
> Se si usa questa applicazione consumer per testare l'applicazione del provider di esempio `Provider`, omettere il supporto dei segnalibri descritto in questa sezione.

### <a name="to-instantiate-the-bookmark"></a>Per creare un'istanza del segnalibro

1. La funzione di accesso deve contenere un oggetto di tipo [CBookmark](../../data/oledb/cbookmark-class.md). Il parametro *nSize* specifica la dimensione del buffer dei segnalibri in byte, in genere 4 per le piattaforme a 32 bit e 8 per le piattaforme a 64 bit. Aggiungere la dichiarazione seguente ai membri dati delle colonne nella classe di record utente:

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

### <a name="to-request-a-bookmark-column-from-the-provider"></a>Per richiedere una colonna segnalibro al provider

1. Aggiungere il codice seguente nel metodo `GetRowsetProperties` nella classe di record utente:

    ```cpp
    // Set the DBPROP_IRowsetLocate property.
    void GetRowsetProperties(CDBPropSet* pPropSet)
    {
       pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
       pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
       // Add DBPROP_IRowsetLocate property to support bookmarks   pPropSet->AddProperty(DBPROP_IRowsetLocate, true);
    }
    ```

### <a name="to-add-a-bookmark-entry-to-the-column-map"></a>Per aggiungere una voce segnalibro al mapping delle colonne

1. Aggiungere la voce seguente al mapping delle colonne nella classe di record utente:

    ```cpp
    // Set a bookmark entry in the column map.
    BEGIN_COLUMN_MAP(CProductsAccessor)
       BOOKMARK_ENTRY(m_bookmark)   // Add bookmark entry
       COLUMN_ENTRY_LENGTH_STATUS(1, m_ProductID, m_dwProductIDLength, m_dwProductIDStatus)
       COLUMN_ENTRY_LENGTH_STATUS(2, m_ProductName, m_dwProductNameLength, m_dwProductNameStatus)
    ...
    END_COLUMN_MAP()
    ```

### <a name="to-use-a-bookmark-in-your-main-code"></a>Per usare un segnalibro nel codice principale

1. Nel file `MyCons.cpp` dell'applicazione console creata in precedenza modificare il codice principale come indicato di seguito. Per usare i segnalibri, il codice principale deve creare un'istanza di un proprio oggetto segnalibro (`myBookmark`). Si tratta di un segnalibro diverso da quello nella funzione di accesso (`m_bookmark`).

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

Per altre informazioni sui segnalibri, vedere [Using Bookmarks](../../data/oledb/using-bookmarks.md) (Uso dei segnalibri). Esempi di segnalibri sono anche disponibili in [Aggiornamento dei set di righe](../../data/oledb/updating-rowsets.md).

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Creazione di un consumer di OLE DB tramite una procedura guidata](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)
