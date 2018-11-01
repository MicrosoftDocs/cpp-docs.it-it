---
title: Membri dati di stato dei campi in funzioni di accesso generate dalla creazione guidata
ms.date: 10/24/2018
helpviewer_keywords:
- OLE DB consumer templates, field status
- field status in OLE DB templates
ms.assetid: 66e4e223-c60c-471e-860d-d23abcdfe371
ms.openlocfilehash: 25bb370c0714bfef97bc6659deae2fbd21aed23f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50664568"
---
# <a name="field-status-data-members-in-wizard-generated-accessors"></a>Membri dati di stato dei campi in funzioni di accesso generate dalla creazione guidata

Quando si usa la **Creazione guidata Consumer OLE DB ATL** per creare un utente, la procedura guidata genera un membro dati della classe di record utente per ogni campo che specifica nella mappa delle colonne. Ogni membro dati è di tipo `DWORD` e contiene un valore di stato corrispondente al campo corrispondente.

Ad esempio, per un membro dati *m_OwnerID*, la procedura guidata genera un membro dati aggiuntivi per lo stato del campo (*dwOwnerIDStatus*) e un altro per la lunghezza del campo (*dwOwnerIDLength*). Viene inoltre generata una mappa delle colonne con voci COLUMN_ENTRY_LENGTH_STATUS.

Questa operazione è illustrata nel codice seguente:

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

È possibile usare i valori di stato per scopi di debug. Se il codice generato per il **Creazione guidata Consumer OLE DB ATL** genera errori di compilazione, ad esempio DB_S_ERRORSOCCURRED o DB_E_ERRORSOCCURRED, è necessario innanzitutto controllare i valori correnti dei membri di dati dello stato del campo. Quelli che hanno valori diversi da zero corrispondono alle colonne che causa l'errore.

È anche possibile usare i valori di stato per impostare un valore NULL per un determinato campo. In questo modo risulta utile nei casi in cui si vuole distinguere un valore del campo come valore NULL anziché zero. È responsabilità dell'utente a decidere se NULL è un valore valido o un valore speciale e decidere come l'applicazione deve gestire. OLE DB definisce DBSTATUS_S_ISNULL come il termine corretto si intende specificare un valore NULL generico. Se il consumer legge i dati e il valore è null, il campo stato è impostato su DBSTATUS_S_ISNULL. Se l'utente desidera impostare un valore NULL, il consumer imposta il valore di stato su DBSTATUS_S_ISNULL prima di chiamare il provider.

Aprire quindi cercare DBSTATUSENUM e OleDb. È quindi possibile confrontare il valore numerico dello stato con i valori di enumerazione DBSTATUSENUM diverso da zero. Se il nome dell'enumerazione non è sufficiente indicare qual è il problema, vedere la **lo stato** argomento nella **valori di Data Binding** sezione del [Guida per programmatori OLE DB](/previous-versions/windows/desktop/ms713643). In questo argomento contiene le tabelle di valori di stati utilizzati per ottenere o impostare i dati. Per informazioni sui valori di lunghezza, vedere la **lunghezza** argomento nella stessa sezione.

## <a name="retrieving-the-length-or-status-of-a-column"></a>Recupero della lunghezza o lo stato di una colonna

È possibile recuperare la lunghezza di una colonna a lunghezza variabile o lo stato di una colonna (da cercare DBSTATUS_S_ISNULL, ad esempio):

- Per ottenere la lunghezza, usare il COLUMN_ENTRY_LENGTH (macro).

- Per ottenere lo stato, usare il COLUMN_ENTRY_STATUS (macro).

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

- Accedere quindi, la lunghezza e/o lo stato come illustrato:

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

Quando si usa `CDynamicAccessor`, la lunghezza e stato vengono associati automaticamente. Per recuperare i valori di lunghezza e stato, usare il `GetLength` e `GetStatus` funzioni membro.

## <a name="see-also"></a>Vedere anche

[Uso dei modelli consumer OLE DB](../../data/oledb/working-with-ole-db-consumer-templates.md)