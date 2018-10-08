---
title: Uso di più funzioni di accesso in un set di righe | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- BEGIN_ACCESSOR macro
- BEGIN_ACCESSOR macro, multiple accessors
- rowsets [C++], multiple accessors
- accessors [C++], rowsets
ms.assetid: 80d4dc5d-4940-4a28-a4ee-d8602f71d2a6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 3ab75c1a8b0c6addf41366c63f14305b68ce5bc5
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48860693"
---
# <a name="using-multiple-accessors-on-a-rowset"></a>Utilizzo di più funzioni di accesso per un rowset

Esistono tre scenari di base in cui è necessario utilizzare più funzioni di accesso:

- **Più set di righe di lettura/scrittura.** In questo scenario, si dispone di una tabella con una chiave primaria. Si desidera essere in grado di leggere tutte le colonne nella riga, inclusa la chiave primaria. Si vuole anche essere in grado di scrivere dati in tutte le colonne ad eccezione della chiave primaria (perché non è possibile scrivere per la colonna chiave primaria). In questo caso, configurare due funzioni di accesso:

   - Funzione di accesso 0 contiene tutte le colonne.

   - Funzione di accesso 1 contiene tutte le colonne ad eccezione della chiave primaria.

- **Prestazioni.** In questo scenario, uno o più colonne contengono una grande quantità di dati, ad esempio, grafica, file audio o video. Ogni volta che si sposta in una riga, probabilmente non desiderate recuperare la colonna con il file di dati di grandi dimensioni, in quanto tale operazione così potrebbe rallentare le prestazioni dell'applicazione.

   È possibile configurare le funzioni di accesso separati in cui la prima funzione di accesso contiene tutte le colonne ad eccezione di quello con grandi quantità di dati e recupera i dati da queste colonne automaticamente. Questa è la funzione di accesso automatico. La seconda funzione di accesso recupera solo la colonna che contiene dati di grandi dimensioni, ma non recuperano dati da questa colonna automaticamente. È possibile avere altri metodi di recupero di dati di grandi dimensioni su richiesta o aggiornare.

   - Funzione di accesso 0 è automatica; Recupera tutte le colonne ad eccezione di quello con dati di grandi dimensioni.

   - Funzione di accesso 1 non è una funzione di accesso automatico; Recupera la colonna con dati di grandi dimensioni.

   Usare l'argomento automatica per specificare se la funzione di accesso è una funzione di accesso automatico.

- **Più colonne di ISequentialStream.** In questo scenario, è necessario più di una colonna contenente `ISequentialStream` dei dati. Tuttavia, ogni funzione di accesso è limitato a una `ISequentialStream` flusso di dati. Per risolvere questo problema, configurare le funzioni di accesso diversi, ognuno dei quali contiene uno `ISequentialStream` puntatore.

In genere creano funzioni di accesso usando il [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) e [END_ACCESSOR](../../data/oledb/end-accessor.md) macro. È anche possibile usare la [db_accessor](../../windows/db-accessor.md) attributo. (Le funzioni di accesso sono descritte dettagliatamente nella [record utente](../../data/oledb/user-records.md).) Le macro o l'attributo specifica se una funzione di accesso è una funzione di accesso non automatico o automatica:

- In una funzione di accesso automatico, spostare i metodi, ad esempio `MoveFirst`, `MoveLast`, `MoveNext`, e `MovePrev` recuperare dati per automaticamente tutte le colonne specificate. Funzione di accesso 0 deve essere la funzione di accesso automatico.

- In una funzione di accesso non automatico fino a quando non si chiama in modo esplicito un metodo, ad esempio il recupero non viene effettuata `Update`, `Insert`, `Fetch`, o `Delete`. Negli scenari descritti in precedenza, è possibile evitare di recuperare tutte le colonne in ogni potenziale spostamento. È possibile inserire una o più colonne in una funzione di accesso separato e assicurarsi che una funzione di accesso non automatico, come illustrato di seguito.

L'esempio seguente usa più funzioni di accesso per leggere e scrivere nella tabella dei processi del database pubs SQL Server usando più funzioni di accesso. Questo è l'uso più comune di più funzioni di accesso; vedere lo scenario di "set di righe più di lettura/scrittura" precedente.

La classe di record utente è come indicato di seguito. Imposta due funzioni di accesso: funzione di accesso 0 contiene solo la colonna chiave primaria (ID) e funzione di accesso 1 contiene altre colonne.

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

Il codice principale è come indicato di seguito. La chiamata a `MoveNext` recupera automaticamente i dati dall'ID della colonna chiave primaria utilizzando funzioni di accesso 0. Si noti come il `Insert` metodo accanto alla funzione di accesso di end Usa 1 per evitare la scrittura la colonna chiave primaria.

```cpp
int main(int argc, char* argv[])
{
    // Initalize COM
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

## <a name="see-also"></a>Vedere anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)<br/>
[Record utente](../../data/oledb/user-records.md)
