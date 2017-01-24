---
title: "Utilizzo di pi&#249; funzioni di accesso per un rowset | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni di accesso [C++], rowset"
  - "BEGIN_ACCESSOR (macro)"
  - "BEGIN_ACCESSOR (macro), funzioni di accesso multiple"
  - "rowset [C++], funzioni di accesso multiple"
ms.assetid: 80d4dc5d-4940-4a28-a4ee-d8602f71d2a6
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di pi&#249; funzioni di accesso per un rowset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'utilizzo di più funzioni di accesso è necessario in tre scenari fondamentali.  
  
-   **Più rowset di lettura\/scrittura.** In questo scenario è presente una tabella con una chiave primaria.  Di questa si vorrà essere in grado di leggere tutte le colonne di una riga, compresa la colonna di chiave primaria,  e di scrivere dati in tutte le colonne tranne in quella di chiave primaria, per la quale non è consentita la scrittura.  In questo caso, è necessario impostare due funzioni di accesso:  
  
    -   La funzione di accesso 0, contenente tutte le colonne.  
  
    -   La funzione di accesso 1, contenente tutte le colonne eccetto la colonna di chiave primaria.  
  
-   **Prestazioni.** In questo scenario, una o più colonne contengono una grande quantità di dati, ad esempio grafica, suoni o file video.  Con molta probabilità, si vorrà evitare di recuperare le colonne contenenti le maggiori quantità di dati ogni volta che ci si sposta su una riga, per non rallentare le prestazioni dell'applicazione.  
  
     È possibile impostare due funzioni di accesso distinte, la prima delle quali contiene tutte le colonne, tranne quelle in cui sono presenti grandi quantitativi di dati, e ne recupera automaticamente i dati. Essa è denominata funzione di accesso automatica.  La seconda funzione di accesso recupera solo le colonne che contengono grandi quantitativi di dati, ma non in modo automatico.  È possibile aggiornare o recuperare le grandi quantità di dati mediante altri metodi e su richiesta.  
  
    -   La funzione di accesso 0 è una funzione di accesso automatica e recupera tutte le colonne tranne quelle contenenti grandi quantitativi di dati.  
  
    -   La funzione di accesso 1 non è automatica e recupera le colonne contenenti grandi quantitativi di dati.  
  
     Utilizzare l'argomento auto per specificare se la funzione di accesso è automatica.  
  
-   **Più colonne contenenti ISequentialStream.** In questo scenario sono presenti più colonne contenenti dati `ISequentialStream`.  Tuttavia, ogni funzione di accesso è limitata a un solo flusso di dati `ISequentialStream`.  Per risolvere questo problema, impostare più funzioni di accesso, ognuna contenente un puntatore a `ISequentialStream`.  
  
 In genere, per creare le funzioni di accesso si utilizzano le macro [BEGIN\_ACCESSOR](../../data/oledb/begin-accessor.md) e [END\_ACCESSOR](../../data/oledb/end-accessor.md).  È anche possibile utilizzare l'attributo [db\_accessor](../../windows/db-accessor.md). Per ulteriori informazioni sulle funzioni di accesso, vedere [Record utente](../../data/oledb/user-records.md). Le macro o l'attributo specificano se la funzione di accesso è o meno una funzione di accesso automatica.  
  
-   In una funzione di accesso automatica i metodi di spostamento quali **MoveFirst**, `MoveLast`, `MoveNext` e `MovePrev` recuperano automaticamente i dati da tutte le colonne specificate.  La funzione di accesso 0 deve essere la funzione di accesso automatica.  
  
-   In una funzione di accesso non automatica, perché sia effettuato il recupero è necessario chiamare in modo esplicito metodi quali **Update**, **Insert**, **Fetch** o **Delete**.  Negli scenari sopra illustrati non è consigliabile recuperare tutte le colonne per ogni spostamento.  È invece possibile posizionare una o più colonne in una funzione di accesso distinta e impostare questa come funzione di accesso non automatica, come indicato più avanti.  
  
 Nell'esempio che segue vengono utilizzate più funzioni di accesso per leggere e scrivere nella tabella dei processi del database SQL Server denominato pubs.  Si tratta della modalità di utilizzo di più funzioni di accesso più comune, descritta precedentemente nello scenario relativo a più rowset di lettura\/scrittura.  
  
 La classe di record utente  imposta due funzioni di accesso: la funzione di accesso 0 contenente solo la colonna di chiave primaria, ID, e la funzione di accesso 1 contenente le altre colonne.  
  
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
  
 Il codice principale  La chiamata a `MoveNext` consente di recuperare automaticamente i dati dall'ID della colonna di chiave primaria tramite la funzione di accesso 0.  Si noti il modo in cui, verso la fine, il metodo **Insert** utilizza la funzione di accesso 1 per evitare di scrivere nella colonna di chiave primaria.  
  
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
  
## Vedere anche  
 [Utilizzo delle funzioni di accesso](../../data/oledb/using-accessors.md)   
 [Record utente](../../data/oledb/user-records.md)