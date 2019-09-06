---
title: Creazione di un consumer senza utilizzare una procedura guidata
ms.date: 05/09/2019
helpviewer_keywords:
- OLE DB consumers, creating
ms.assetid: e8241cfe-5faf-48f8-9de3-241203de020b
ms.openlocfilehash: 85e95afa92c8a968865d9a3031e1a309e68ae7d3
ms.sourcegitcommit: 9d4ffb8e6e0d70520a1e1a77805785878d445b8a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/20/2019
ms.locfileid: "70311947"
---
# <a name="creating-a-consumer-without-using-a-wizard"></a>Creazione di un consumer senza utilizzare una procedura guidata

L'esempio seguente presuppone che si stia aggiungendo il supporto per consumer OLE DB a un progetto ATL esistente. Se si vuole aggiungere il supporto per consumer OLE DB a un'applicazione MFC, è consigliabile eseguire la **Creazione guidata applicazione MFC**, che crea tutto il supporto richiesto e richiama le routine MFC necessarie per eseguire l'applicazione.

Per aggiungere il supporto per consumer OLE DB senza usare la **Creazione guidata consumer OLE DB ATL**:

- Nel file *PCH. h* aggiungere le istruzioni seguenti `#include` :

    ```cpp
    #include <atlbase.h>
    #include <atldbcli.h>
    #include <atldbsch.h> // if you are using schema templates
    ```

A livello di codice un consumer esegue in genere la sequenza di operazioni seguente:

1. Creare una classe di record utente che associa colonne a variabili locali. In questo esempio `CMyTableNameAccessor` è la classe di record utente (vedere [Record utente](../../data/oledb/user-records.md)). Questa classe contiene la mappa delle colonne e la mappa dei parametri. Dichiarare un membro dati nella classe di record utente per ogni campo specificato nella mappa delle colonne. Per ognuno di questi membri dati, è necessario dichiarare anche un membro dati di stato e un membro dati di lunghezza. Per altre informazioni, vedere [Membri dati di stato dei campi in funzioni di accesso generate dalla creazione guidata](../../data/oledb/field-status-data-members-in-wizard-generated-accessors.md).

    > [!NOTE]
    > Se si scrive un consumer personalizzato, le variabili dei dati devono essere specificate prima delle variabili di stato e di lunghezza.

- Creare un'istanza di un'origine dati e di una sessione. Stabilire quale tipo di funzione di accesso e set di righe usare e quindi creare un'istanza di un set di righe tramite [CCommand](../../data/oledb/ccommand-class.md) o [CTable](../../data/oledb/ctable-class.md):

    ```cpp
    CDataSource ds;
    CSession ss;
    class CMyTableName : public CCommand<CAccessor<CMyTableNameAccessor>>
    ```

- Chiamare `CoInitialize` per inizializzare COM. Questo viene chiamato nel codice principale. Ad esempio:

    ```cpp
    HRESULT hr = CoInitialize(NULL);
    ```

- Chiamare [CDataSource::Open](../../data/oledb/cdatasource-open.md) o una delle sue varianti.

- Aprire una connessione all'origine dati, aprire la sessione e aprire e inizializzare il set di righe (e se è un comando, eseguirlo):

    ```cpp
    hr = ds.Open();
    hr = ss.Open(ds);
    hr = rs.Open();            // (Open also executes the command)
    ```

- Facoltativamente, impostare le proprietà del set di righe usando `CDBPropSet::AddProperty` e passarle come parametro a `rs.Open`. Per un esempio di questa procedura, vedere `GetRowsetProperties` in [Metodi generati mediante la Creazione guidata consumer](../../data/oledb/consumer-wizard-generated-methods.md).

- È ora possibile usare il set di righe per recuperare o modificare i dati.

- Al termine della creazione dell'applicazione, chiudere la connessione, la sessione e il set di righe:

    ```cpp
    rs.Close();
    ss.Close();
    ds.Close();
    ```

   Se si usa un comando, può essere necessario chiamare `ReleaseCommand` dopo `Close`. L'esempio di codice in [CCommand::Close](../../data/oledb/ccommand-close.md) mostra come chiamare `Close` e `ReleaseCommand`.

- Chiamare `CoUnInitialize` per annullare l'inizializzazione di COM. Questo viene chiamato nel codice principale.

    ```cpp
    CoUninitialize();
    ```

## <a name="see-also"></a>Vedere anche

[Creazione di un consumer OLE DB](../../data/oledb/creating-an-ole-db-consumer.md)