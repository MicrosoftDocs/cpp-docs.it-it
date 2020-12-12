---
description: 'Altre informazioni su: uso di più funzioni di accesso su un set di righe'
title: Utilizzo di più funzioni di accesso per un rowset
ms.date: 10/24/2018
helpviewer_keywords:
- BEGIN_ACCESSOR macro
- BEGIN_ACCESSOR macro, multiple accessors
- rowsets [C++], multiple accessors
- accessors [C++], rowsets
ms.assetid: 80d4dc5d-4940-4a28-a4ee-d8602f71d2a6
ms.openlocfilehash: 2fa8ca7737872b16abb5bfdf6a7ef6b8a38c5f85
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319131"
---
# <a name="using-multiple-accessors-on-a-rowset"></a>Utilizzo di più funzioni di accesso per un rowset

Esistono tre scenari di base in cui è necessario usare più funzioni di accesso:

- **Più set di righe di lettura/scrittura.** In questo scenario è presente una tabella con una chiave primaria. Si desidera essere in grado di leggere tutte le colonne della riga, inclusa la chiave primaria. Si desidera inoltre essere in grado di scrivere i dati in tutte le colonne ad eccezione della chiave primaria, perché non è possibile scrivere nella colonna chiave primaria. In questo caso, si configurano due funzioni di accesso:

  - La funzione di accesso 0 contiene tutte le colonne.

  - La funzione di accesso 1 contiene tutte le colonne ad eccezione della chiave primaria.

- **Prestazioni.** In questo scenario, una o più colonne hanno una grande quantità di dati, ad esempio file grafici, audio o video. Ogni volta che si passa a una riga, è probabile che non si desideri recuperare la colonna con il file di dati di grandi dimensioni, perché questa operazione potrebbe rallentare le prestazioni dell'applicazione.

  È possibile configurare funzioni di accesso separate in cui la prima funzione di accesso contiene tutte le colonne ad eccezione di quella con dati di grandi dimensioni e recupera automaticamente i dati da queste colonne; la prima funzione di accesso è la funzione di accesso auto. La seconda funzione di accesso recupera solo la colonna contenente dati di grandi dimensioni, ma non recupera automaticamente i dati da questa colonna. È possibile che altri metodi aggiornino o recuperino i dati di grandi dimensioni su richiesta.

  - La funzione di accesso 0 è una funzione di accesso automatica; Recupera tutte le colonne ad eccezione di quella con dati di grandi dimensioni.

  - La funzione di accesso 1 non è una funzione di accesso automatica Recupera la colonna con dati di grandi dimensioni.

  Usare l'argomento auto per specificare se la funzione di accesso è una funzione di accesso automatica.

- **Più colonne ISequentialStream.** In questo scenario è presente più di una colonna contenente `ISequentialStream` dati. Tuttavia, ogni funzione di accesso è limitata a un `ISequentialStream` flusso di dati. Per risolvere questo problema, configurare diverse funzioni di accesso, ognuna con un `ISequentialStream` puntatore.

Le funzioni di accesso vengono in genere create usando le macro [BEGIN_ACCESSOR](./macros-and-global-functions-for-ole-db-consumer-templates.md#begin_accessor) e [END_ACCESSOR](./macros-and-global-functions-for-ole-db-consumer-templates.md#end_accessor) . È anche possibile usare l'attributo [db_accessor](../../windows/attributes/db-accessor.md) . (Le funzioni di accesso sono descritte ulteriormente nei [record utente](../../data/oledb/user-records.md)). Le macro o l'attributo specificano se una funzione di accesso è una funzione di accesso automatica o non automatica:

- In una funzione di accesso automatica, spostare i metodi come `MoveFirst` ,, `MoveLast` `MoveNext` e `MovePrev` recuperare automaticamente i dati per tutte le colonne specificate. La funzione di accesso 0 deve essere la funzione di accesso automatica.

- In una funzione di accesso non automatica, il recupero non viene eseguito fino a quando non si chiama in modo esplicito un metodo come `Update` ,, `Insert` `Fetch` o `Delete` . Negli scenari descritti in precedenza, è possibile che non si desideri recuperare tutte le colonne in ogni spostamento. È possibile inserire una o più colonne in una funzione di accesso separata e fare in modo che una funzione di accesso non automatica, come illustrato di seguito.

Nell'esempio seguente vengono utilizzate più funzioni di accesso per leggere e scrivere nella tabella jobs del database di SQL Server pubs utilizzando più funzioni di accesso. Questo esempio è l'uso più comune di più funzioni di accesso; vedere lo scenario "più set di righe di lettura/scrittura" sopra.

La classe di record utente è la seguente. Configura due funzioni di accesso: la funzione di accesso 0 contiene solo la colonna chiave primaria (ID) e la funzione di accesso 1 contiene altre colonne.

```cpp
class CJobs
{
public:
    enum {
        sizeOfDescription = 51
    };

    short nID;
    char szDescription[ sizeOfDescription ];
    short nMinLvl;
    short nMaxLvl;

    DWORD dwID;
    DWORD dwDescription;
    DWORD dwMinLvl;
    DWORD dwMaxLvl;

BEGIN_ACCESSOR_MAP(CJobs, 2)
    // Accessor 0 is the automatic accessor
    BEGIN_ACCESSOR(0, true)
        COLUMN_ENTRY_STATUS(1, nID, dwID)
    END_ACCESSOR()
    // Accessor 1 is the non-automatic accessor
    BEGIN_ACCESSOR(1, true)
        COLUMN_ENTRY_STATUS(2, szDescription, dwDescription)
        COLUMN_ENTRY_STATUS(3, nMinLvl, dwMinLvl)
        COLUMN_ENTRY_STATUS(4, nMaxLvl, dwMaxLvl)
    END_ACCESSOR()
END_ACCESSOR_MAP()
};
```

Il codice principale è il seguente. `MoveNext`La chiamata di recupera automaticamente i dati dall'ID della colonna chiave primaria utilizzando la funzione di accesso 0. Si noti come il `Insert` Metodo vicino alla fine utilizza la funzione di accesso 1 per evitare la scrittura nella colonna chiave primaria.

```cpp
int main(int argc, char* argv[])
{
    // Initialize COM
    ::CoInitialize(NULL);

    // Create instances of the data source and session
    CDataSource source;
    CSession session;
    HRESULT hr = S_OK;

    // Set initialization properties
    CDBPropSet dbinit(DBPROPSET_DBINIT);
    dbinit.AddProperty(DBPROP_AUTH_USERID, OLESTR("my_user_id"));
    dbinit.AddProperty(DBPROP_INIT_CATALOG, OLESTR("pubs"));
    dbinit.AddProperty(DBPROP_INIT_DATASOURCE, OLESTR("(local)"));

    hr = source.Open("SQLOLEDB.1", &dbinit);
    if (hr == S_OK)
    {
        hr = session.Open(source);
        if (hr == S_OK)
        {
            // Ready to fetch/access data
            CTable<CAccessor<CJobs>> jobs;

            // Set properties for making the rowset a read/write cursor
            CDBPropSet dbRowset(DBPROPSET_ROWSET);
            dbRowset.AddProperty(DBPROP_CANFETCHBACKWARDS, true);
            dbRowset.AddProperty(DBPROP_CANSCROLLBACKWARDS, true);
            dbRowset.AddProperty(DBPROP_IRowsetChange, true);
            dbRowset.AddProperty(DBPROP_UPDATABILITY,
                DBPROPVAL_UP_INSERT | DBPROPVAL_UP_CHANGE |
                DBPROPVAL_UP_DELETE);

            hr = jobs.Open(session, "jobs", &dbRowset);
            if (hr == S_OK)
            {
                // Calling MoveNext automatically retrieves ID
                // (using accessor 0)
                while(jobs.MoveNext() == S_OK)
                   printf_s("Description = %s\n", jobs.szDescription);

                hr = jobs.MoveFirst();
                if (hr == S_OK)
                {
                    jobs.nID = 25;
                    strcpy_s(&jobs.szDescription[0],
                             jobs.sizeOfDescription,
                             "Developer");
                    jobs.nMinLvl = 10;
                    jobs.nMaxLvl = 20;

                    jobs.dwDescription = DBSTATUS_S_OK;
                    jobs.dwID = DBSTATUS_S_OK;
                    jobs.dwMaxLvl = DBSTATUS_S_OK;
                    jobs.dwMinLvl = DBSTATUS_S_OK;

                    // Insert method uses accessor 1
                    // (to avoid writing to the primary key column)
                    hr = jobs.Insert(1);
                }
                jobs.Close();
            }
            session.Close();
        }
        source.Close();
    }

    // Uninitialize COM
    ::CoUninitialize();
    return 0;
}
```

## <a name="see-also"></a>Vedi anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)<br/>
[Record utente](../../data/oledb/user-records.md)
