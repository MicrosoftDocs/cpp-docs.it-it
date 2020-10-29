---
title: Membri dati di stato dei campi in funzioni di accesso generate dalla creazione guidata
ms.date: 05/09/2019
helpviewer_keywords:
- OLE DB consumer templates, field status
- field status in OLE DB templates
ms.assetid: 66e4e223-c60c-471e-860d-d23abcdfe371
ms.openlocfilehash: 476c91f55071f6d1c7f243257273a32798813cae
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92924637"
---
# <a name="field-status-data-members-in-wizard-generated-accessors"></a>Membri dati di stato dei campi in funzioni di accesso generate dalla creazione guidata

::: moniker range="msvc-160"

La Creazione guidata consumer OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive. È comunque possibile aggiungere la funzionalità manualmente. Per altre informazioni, vedere [Creazione di un consumer senza utilizzare una procedura guidata](creating-a-consumer-without-using-a-wizard.md).

::: moniker-end

::: moniker range="<=msvc-150"

Quando si usa la **Creazione guidata consumer OLE DB ATL** per creare un consumer, la procedura guidata genera un membro dati della classe di record utente per ogni campo specificato nel mapping delle colonne. Ogni membro dati è di tipo `DWORD` e contiene un valore di stato corrispondente al relativo campo.

Per un membro dati *m_OwnerID* , ad esempio, la procedura guidata genera un membro dati aggiuntivo per lo stato del campo ( *dwOwnerIDStatus* ) e un altro per la lunghezza del campo ( *dwOwnerIDLength* ). Viene inoltre generato un mapping delle colonne con voci COLUMN_ENTRY_LENGTH_STATUS.

Questo comportamento è illustrato nel codice seguente:

```cpp
class CAuthorsAccessor
{
public:
   LONG m_AuID;
   TCHAR m_Author[53];
   LONG m_YearBorn;

   DBSTATUS m_dwAuIDStatus;
   DBSTATUS m_dwAuthorStatus;
   DBSTATUS m_dwYearBornStatus;

   DBLENGTH m_dwAuIDLength;
   DBLENGTH m_dwAuthorLength;
   DBLENGTH m_dwYearBornLength;

   DEFINE_COMMAND_EX(CAuthorsAccessor, L" \
   SELECT \
      AuID, \
      Author, \
      YearBorn \
      FROM dbo.Authors")

   BEGIN_COLUMN_MAP(CAuthorsAccessor)
      COLUMN_ENTRY_LENGTH_STATUS(1, m_AuID, dwAuIDLength, dwAuIDStatus)
      COLUMN_ENTRY_LENGTH_STATUS(2, m_Author, dwAuthorLength, dwAuthorStatus)
      COLUMN_ENTRY_LENGTH_STATUS(3, m_YearBorn, dwYearBornLength, dwYearBornStatus)
   END_COLUMN_MAP()
...
```

> [!NOTE]
> Se si modifica la classe di record utente o si crea un consumer personalizzato, le variabili dei dati devono essere specificate prima delle variabili di stato e di lunghezza.

È possibile usare i valori di stato per scopi di debug. Se il codice generato per dalla **Creazione guidata consumer OLE DB ATL** genera errori di compilazione, ad esempio DB_S_ERRORSOCCURRED o DB_E_ERRORSOCCURRED, è necessario prima di tutto controllare i valori correnti dei membri dati dello stato del campo. Gli elementi che hanno valori diversi da zero corrispondono alle colonne che hanno causato l'errore.

È anche possibile usare i valori di stato per impostare un valore NULL per un determinato campo. Ciò è utile nei casi in cui si vuole distinguere un valore di campo come valore NULL invece di zero. È compito dell'utente decidere se NULL è un valore valido o un valore speciale e stabilire come deve essere gestito dall'applicazione. OLE DB definisce DBSTATUS_S_ISNULL come il modo corretto per specificare un valore NULL generico. Se il consumer legge i dati e il valore è Null, il campo di stato è impostato su DBSTATUS_S_ISNULL. Se il consumer vuole impostare un valore NULL, deve impostare il valore di stato su DBSTATUS_S_ISNULL prima di chiamare il provider.

Aprire quindi OleDb.h e cercare DBSTATUSENUM. È quindi possibile confrontare il valore numerico dello stato diverso da zero con i valori dell'enumerazione DBSTATUSENUM. Se il nome dell'enumerazione non è sufficiente per capire qual è il problema, vedere l'argomento **Stato** nella sezione **Associazione dei valori di dati** della [Guida per programmatori OLE DB](/sql/connect/oledb/ole-db/oledb-driver-for-sql-server-programming). Questo argomento contiene tabelle di valori di stato usati per ottenere o impostare i dati. Per informazioni sui valori di lunghezza, vedere l'argomento **Lunghezza** nella stessa sezione.

## <a name="retrieving-the-length-or-status-of-a-column"></a>Recupero della lunghezza o dello stato di una colonna

È possibile recuperare la lunghezza di una colonna a lunghezza variabile o lo stato di una colonna (per controllare, ad esempio, la presenza di DBSTATUS_S_ISNULL):

- Per ottenere la lunghezza, usare la macro COLUMN_ENTRY_LENGTH.

- Per ottenere lo stato, usare la macro COLUMN_ENTRY_STATUS.

- Per ottenere entrambi, usare COLUMN_ENTRY_LENGTH_STATUS, come illustrato:

    ```cpp
    class CProducts
    {
    public:
       char      szName[40];
       long      nNameLength;
       DBSTATUS   nNameStatus;

    BEGIN_COLUMN_MAP(CProducts)
    // Bind the column to CProducts.m_ProductName.
    // nOrdinal is zero-based, so the column number of m_ProductName is 1.
       COLUMN_ENTRY_LENGTH_STATUS(1, szName, nNameLength, nNameStatus)
    END_COLUMN_MAP()
    };
    ```

- Accedere quindi alla lunghezza e/o allo stato come illustrato:

    ```cpp
    CTable<CAccessor<CProducts >> product;
    CSession session;

    product.Open(session, "Product");

    while (product.MoveNext() == S_OK)
    {
       // Check the product name isn't NULL before tracing it
       if (product.nNameStatus == DBSTATUS_S_OK)
          ATLTRACE("%s is %d characters\n", product.szName, product.nNameLength);
    }
    ```

Quando si usa `CDynamicAccessor`, la lunghezza e lo stato vengono associati automaticamente. Per recuperare i valori di lunghezza e stato, usare le funzioni membro `GetLength` e `GetStatus`.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Uso dei modelli consumer OLE DB](../../data/oledb/working-with-ole-db-consumer-templates.md)
