---
title: "Record utente | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "COLUMN_ENTRY_MAP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni di accesso [C++], rowset"
  - "funzioni di accesso [C++], statiche"
  - "BEGIN_ACCESSOR (macro), esempio"
  - "BEGIN_ACCESSOR_MAP (macro)"
  - "CAccessor (classe), esempio"
  - "COLUMN_ENTRY (macro)"
  - "COLUMN_ENTRY_MAP (macro)"
  - "OLE DB (modelli consumer), record utente"
  - "rowset [C++], funzioni di accesso"
  - "record utente, OLE DB (modelli consumer)"
ms.assetid: 2de9e5eb-53ce-42b1-80fa-57d46600a80c
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Record utente
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per utilizzare una funzione di accesso statica, ovvero una funzione di accesso derivata da **CAccessor**, il consumer deve includere un record utente.  Il record utente è una classe C\+\+ che contiene dati per gestire l'input o l'output.  La Creazione guidata consumer OLE DB ATL genera un record utente per il consumer.  È possibile aggiungere metodi al record utente per ottenere funzionalità facoltative, ad esempio la gestione dei comandi.  
  
 Nel codice che segue viene mostrato un esempio di record che gestisce un comando.  Nel record utente, `BEGIN_COLUMN_MAP` rappresenta un rowset di dati passato al consumer da un provider.  `BEGIN_PARAM_MAP` rappresenta un set di parametri dei comandi.  In questo esempio viene utilizzata una classe [CCommand](../../data/oledb/ccommand-class.md) per gestire i parametri di comando.  I membri dati nelle voci della mappa rappresentano gli offset in un blocco di memoria contiguo per ogni istanza della classe.  Le macro `COLUMN_ENTRY` corrispondono alle macro `PROVIDER_COLUMN_ENTRY` del lato provider.  
  
 Per ulteriori informazioni sulle macro **COLUMN\_MAP** e **PARAM\_MAP**, vedere [Macro per i modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md).  
  
```  
class CArtists  
{  
public:  
// Data Elements  
   CHAR m_szFirstName[20];  
   CHAR m_szLastName[30];  
   short m_nAge;  
  
// Column binding map  
BEGIN_COLUMN_MAP(CArtists)  
   COLUMN_ENTRY(1, m_szFirstName)  
   COLUMN_ENTRY(2, m_szLastName)  
   COLUMN_ENTRY(3, m_nAge)  
END_COLUMN_MAP()  
  
// Parameter binding map  
BEGIN_PARAM_MAP(CArtists)  
   COLUMN_ENTRY(1, m_nAge)  
END_PARAM_MAP()  
};  
```  
  
## Record utente generati mediante procedura guidata  
 Se si decide di generare un consumer mediante la Creazione guidata consumer OLE DB ATL, si può scegliere di utilizzare i modelli OLE DB oppure gli attributi OLE DB.  Il codice generato per ciascuno dei casi sarà differente.  Per ulteriori informazioni su tale codice, vedere [Classi generate mediante la Creazione guidata consumer](../../data/oledb/consumer-wizard-generated-classes.md).  
  
## Supporto dei record utente per più funzioni di accesso  
 Per una discussione dettagliata sugli scenari in cui è necessario utilizzare più funzioni di accesso, vedere [Utilizzo di più funzioni di accesso per un rowset](../../data/oledb/using-multiple-accessors-on-a-rowset.md).  
  
 Nell'esempio riportato di seguito viene illustrata la modifica del record utente necessaria per supportare più funzioni di accesso per il rowset.  Anziché `BEGIN_COLUMN_MAP` e `END_COLUMN_MAP`, vengono utilizzate [BEGIN\_ACCESSOR\_MAP](../../data/oledb/begin-accessor-map.md) e [BEGIN\_ACCESSOR](../../data/oledb/begin-accessor.md) per ogni funzione di accesso.  La macro `BEGIN_ACCESSOR` specifica il numero della funzione di accesso \(offset rispetto a zero\) e se la funzione di accesso sia automatica o meno.  Le funzioni di accesso automatiche chiamano `GetData` per recuperare i dati automaticamente con una chiamata a [MoveNext](../../data/oledb/crowset-movenext.md).  Le funzioni di accesso non automatiche richiedono invece il recupero esplicito dei dati.  Si consiglia di utilizzare una funzione di accesso non automatica se si effettua l'associazione a un campo dati di grandi dimensioni, ad esempio un'immagine bitmap, che è preferibile non recuperare per ogni record.  
  
```  
class CMultiArtists  
{  
public:  
// Data Elements  
   CHAR m_szFirstName[20];  
   CHAR m_szLastName[30];  
   short m_nAge;  
  
// Column binding map  
BEGIN_ACCESSOR_MAP(CMultiArtists, 2)  
   BEGIN_ACCESSOR(0, true)    // true specifies an auto accessor  
    COLUMN_ENTRY(1, m_szFirstName)  
    COLUMN_ENTRY(2, m_szLastName)  
   END_ACCESSOR()  
   BEGIN_ACCESSOR(1, false)   // false specifies a manual accessor  
    COLUMN_ENTRY(3, m_nAge)  
   END_ACCESSOR()  
END_ACCESSOR_MAP()  
};  
```  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)