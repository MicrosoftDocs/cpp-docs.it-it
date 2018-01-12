---
title: "Utilizzo di più funzioni di accesso per un Rowset | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- BEGIN_ACCESSOR macro
- BEGIN_ACCESSOR macro, multiple accessors
- rowsets [C++], multiple accessors
- accessors [C++], rowsets
ms.assetid: 80d4dc5d-4940-4a28-a4ee-d8602f71d2a6
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: eda994a3b1312c4721a185c3f4a39938df1272a4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-multiple-accessors-on-a-rowset"></a>Utilizzo di più funzioni di accesso per un rowset
Esistono tre scenari di base in cui è necessario utilizzare più funzioni di accesso:  
  
-   **Più set di righe di lettura/scrittura.** In questo scenario, si dispone di una tabella con una chiave primaria. Si desidera essere in grado di leggere tutte le colonne nella riga, inclusa la chiave primaria. È in grado di scrivere dati in tutte le colonne ad eccezione della chiave primaria (perché è possibile scrivere la colonna chiave primaria). In questo caso, configurare due funzioni di accesso:  
  
    -   Funzione di accesso 0 contiene tutte le colonne.  
  
    -   Funzione di accesso 1 contiene tutte le colonne ad eccezione della chiave primaria.  
  
-   **Prestazioni.** In questo scenario, una o più colonne contengono una grande quantità di dati, ad esempio, immagini, audio o video file. Ogni volta che si sposta in una riga, probabile che non si desidera recuperare la colonna con il file di dati di grandi dimensioni, poiché in tal modo rallentare le prestazioni dell'applicazione.  
  
     È possibile configurare le funzioni di accesso separati in cui la prima delle quali contiene tutte le colonne ad eccezione di quello con grandi quantità di dati e recupera dati da queste colonne automaticamente. Questa è la funzione di accesso automatico. La seconda funzione di accesso recupera solo la colonna contenente i dati di grandi dimensioni, ma non è recuperare dati da questa colonna automaticamente. Aggiornare o recuperare i dati di grandi dimensioni su richiesta, è possibile avere altri metodi.  
  
    -   Funzione di accesso 0 è automatica; Recupera tutte le colonne ad eccezione di quello con dati di grandi dimensioni.  
  
    -   Funzione di accesso 1 non è una funzione di accesso automatico. Recupera la colonna con dati di grandi dimensioni.  
  
     Utilizzare l'argomento auto per specificare se la funzione di accesso è una funzione di accesso automatico.  
  
-   **Più colonne ISequentialStream.** In questo scenario, si dispone di più di una colonna contenente `ISequentialStream` dati. Tuttavia, ogni funzione di accesso è limitato a una `ISequentialStream` flusso di dati. Per risolvere questo problema, impostare diverse funzioni di accesso, ognuna delle quali contiene uno `ISequentialStream` puntatore.  
  
 In genere creare funzioni di accesso usando il [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) e [END_ACCESSOR](../../data/oledb/end-accessor.md) macro. È inoltre possibile utilizzare il [db_accessor](../../windows/db-accessor.md) attributo. (Le funzioni di accesso sono descritte dettagliatamente in [record utente](../../data/oledb/user-records.md).) Le macro o l'attributo specificare se una funzione di accesso è una funzione di accesso non automatica o automatica:  
  
-   In una funzione di accesso automatico, spostare i metodi, ad esempio **MoveFirst**, `MoveLast`, `MoveNext`, e `MovePrev` recuperare dati per automaticamente tutte le colonne specificate. Funzione di accesso 0 deve essere una funzione di accesso automatico.  
  
-   In una funzione di accesso non automatico, il recupero non si verifica fino a quando non si chiama in modo esplicito un metodo, ad esempio **aggiornamento**, **inserire**, **recuperare**, o **eliminare**. Negli scenari descritti sopra, è possibile evitare di recuperare tutte le colonne per ogni spostamento. È possibile inserire una o più colonne in una funzione di accesso separato e assicurarsi che una funzione di accesso non automatiche, come illustrato di seguito.  
  
 L'esempio seguente usa più funzioni di accesso in lettura e scrittura alla tabella del database pubs SQL Server utilizzando le funzioni di accesso più processi. Questo è l'utilizzo più comune di più funzioni di accesso; vedere lo scenario "set di righe più di lettura/scrittura" sopra.  
  
 Classe di record utente è come indicato di seguito. Imposta due funzioni di accesso: funzione di accesso 0 contiene solo la colonna chiave primaria (ID) e funzione di accesso 1 contiene altre colonne.  
  
```  
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
  
 Il codice principale è il seguente. La chiamata `MoveNext` recupera automaticamente i dati dall'ID della colonna chiave primaria utilizzando funzioni di accesso 0. Si noti come **inserire** metodo nella funzione di accesso di fine utilizza 1 per evitare di scrivere nella colonna chiave primaria.  
  
```  
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
            CTable<CAccessor<CJobs> > jobs;  
  
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
 [Utilizzando funzioni di accesso](../../data/oledb/using-accessors.md)   
 [Record utente](../../data/oledb/user-records.md)