---
title: "Recordset: architettura (ODBC) | Microsoft Docs"
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
  - "membri dati di campi"
  - "membri dati di campi, architettura recordset"
  - "m_nFields (membro dati)"
  - "m_nFields (membro dati), recordset"
  - "m_nParams (membro dati)"
  - "m_nParams (membro dati), recordset"
  - "recordset ODBC, architettura"
  - "membri dati di parametro in recordset"
  - "recordset, architettura"
  - "recordset, membri dati"
ms.assetid: 47555ddb-11be-4b9e-9b9a-f2931764d298
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Recordset: architettura (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 In questo argomento vengono descritti i membri dati che costituiscono l'architettura di un oggetto recordset:  
  
-   [Membri dati di campo](#_core_field_data_members)  
  
-   [Membri dati di parametro](#_core_parameter_data_members)  
  
-   [Utilizzo di m\_nFields e m\_nParams](#_core_using_m_nfields_and_m_nparams)  
  
> [!NOTE]
>  L'argomento è relativo agli oggetti derivati da `CRecordset` per cui il recupero di massa di righe non è ancora stato implementato.  Qualora venga implementato il recupero di massa di righe, l'architettura sarà comunque simile.  Per comprenderne le differenze, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
##  <a name="_core_a_sample_class"></a> Esempio di classe  
 Quando si utilizza la [Creazione guidata consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) dall'Aggiunta guidata classe per dichiarare una classe di recordset derivata da `CRecordset`, la classe risultante ha la struttura generica illustrata nella seguente classe semplice:  
  
```  
class CCourse : public CRecordset  
{  
public:  
   CCourse(CDatabase* pDatabase = NULL);  
   ...  
   CString m_strCourseID;  
   CString m_strCourseTitle;  
   CString m_strIDParam;  
};  
```  
  
 All'inizio della classe, la procedura guidata scrive un insieme di [membri dati di campo](#_core_field_data_members).  Quando si crea la classe, è necessario specificare uno o più membri dati di campo.  Se alla classe vengono assegnati parametri, come nel caso della classe di esempio \(con il membro dati `m_strIDParam`\), è necessario aggiungere manualmente i [membri dati di parametro](#_core_parameter_data_members).  La procedura guidata non supporta l'aggiunta di parametri a una classe.  
  
##  <a name="_core_field_data_members"></a> Membri dati di campo  
 I membri dati di campo rappresentano gli elementi più importanti della classe recordset.  Per ogni colonna selezionata dall'origine dati, la classe contiene un membro dati con il tipo di dati appropriato per la colonna specifica.  La [classe di esempio](#_core_a_sample_class) riportata all'inizio di questo argomento contiene due membri dati di campo, entrambi di tipo `CString`, denominati `m_strCourseID` e `m_strCourseTitle`.  
  
 Quando il recordset seleziona un insieme di record, il framework associa automaticamente ai membri dati di campo dell'oggetto le colonne del record corrente \(dopo la chiamata a **Open**, il primo record è il record corrente\).  Il framework utilizza pertanto il membro dati di campo appropriato come buffer in cui memorizzare il contenuto di una colonna di record.  
  
 Quando si passa a un nuovo record, il framework utilizza i membri dati di campo per rappresentare il record corrente  e li aggiorna sostituendo i valori del record precedente.  I membri dati di campo vengono inoltre utilizzati per l'aggiornamento del record corrente e per l'aggiunta di nuovi record.  Durante il processo di aggiornamento di un record è possibile specificare i valori di aggiornamento assegnando tali valori direttamente al membro o ai membri dati di campo appropriati.  
  
##  <a name="_core_parameter_data_members"></a> Membri dati di parametro  
 Se alla classe vengono applicati dei parametri, in essa verranno inclusi uno o più membri dati di parametro.  Una classe con parametri consente di basare una query del recordset su informazioni ottenute o calcolate in fase di esecuzione.  
  
 In genere, il parametro consente di limitare la selezione, come illustrato nell'esempio riportato di seguito.  Sulla base della [classe di esempio](#_core_a_sample_class), riportata all'inizio di questo argomento, l'oggetto Recordset potrebbe eseguire l'istruzione SQL seguente:  
  
```  
SELECT CourseID, CourseTitle FROM Course WHERE CourseID = ?  
```  
  
 "?" è un segnaposto per un valore di parametro specificato in fase di esecuzione.  Quando si crea il recordset e si imposta il relativo membro dati `m_strIDParam` su MATH101, l'istruzione SQL effettiva per il recordset diventa:  
  
```  
SELECT CourseID, CourseTitle FROM Course WHERE CourseID = MATH101  
```  
  
 Quando si definiscono i membri dati di parametro, vengono fornite al framework informazioni sui parametri nella stringa SQL.  Il framework associa il parametro che indica a ODBC la posizione in cui recuperare i valori da sostituire al segnaposto.  Nell'esempio il recordset risultante contiene solo il record della tabella Course con la colonna CourseID il cui valore è MATH101.  Tutte le colonne di questo record sono selezionate.  È possibile specificare un numero illimitato di parametri e segnaposti.  
  
> [!NOTE]
>  MFC non esegue alcuna operazione con i parametri, in particolare non effettua alcuna operazione di sostituzione di testo,  bensì indica a ODBC la posizione in cui recuperare il parametro. ODBC recupera i dati ed effettua l'operazione di applicazione di parametri richiesta.  
  
> [!NOTE]
>  L'ordine dei parametri è importante.  Per ulteriori informazioni sui parametri, vedere [Recordset: applicazione di parametri a un recordset \(ODBC\)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).  
  
##  <a name="_core_using_m_nfields_and_m_nparams"></a> Utilizzo di m\_nFields e m\_nParams  
 Quando si crea un costruttore per la classe tramite una procedura guidata, viene inizializzato anche il membro dati [m\_nFields](../Topic/CRecordset::m_nFields.md), che specifica il numero di [membri dati di campo](#_core_field_data_members) inclusi nella classe.  Se si aggiungono [parametri](#_core_parameter_data_members) alla classe, sarà necessario aggiungere anche un'inizializzazione per il membro dati [m\_nParams](../Topic/CRecordset::m_nParams.md), che specifica il numero dei membri dati di parametro.  Per utilizzare i membri dati, il framework richiede questi valori.  
  
 Per ulteriori informazioni ed esempi, vedere [Trasferimento di campi di record: utilizzo di RFX](../../data/odbc/record-field-exchange-using-rfx.md).  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Recordset: dichiarazione di una classe per una tabella \(ODBC\)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md)   
 [Trasferimento di campi di record \(RFX\)](../../data/odbc/record-field-exchange-rfx.md)