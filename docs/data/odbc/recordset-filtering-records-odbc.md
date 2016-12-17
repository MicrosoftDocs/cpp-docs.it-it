---
title: "Recordset: applicazione di filtri ai record (ODBC) | Microsoft Docs"
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
  - "dati [MFC], applicazione di filtri"
  - "applicazione di filtri ai recordset"
  - "filtri [C++], recordset (oggetto)"
  - "ODBC (recordset) [C++], applicazione di filtri ai record"
  - "recordset [C++], applicazione di filtri"
ms.assetid: 5c075f37-c837-464d-90c1-d028a9d1c175
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Recordset: applicazione di filtri ai record (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 In questo argomento viene illustrata l'applicazione di filtri in un recordset per selezionare solo un sottoinsieme specifico dei record disponibili.  È ad esempio possibile selezionare solo le sezioni delle classi per un determinato corso, ad esempio MATH101.  Il filtro è una condizione di ricerca definita dal contenuto di una clausola SQL **WHERE**.  Quando il framework la aggiunge all'istruzione SQL del recordset, la clausola **WHERE** impone dei vincoli alla selezione.  
  
 È necessario specificare il filtro di un oggetto recordset dopo la creazione dell'oggetto, ma prima di chiamare la relativa funzione membro **Open** oppure prima di chiamare la funzione membro **Requery** per un oggetto recordset esistente la cui funzione membro **Open** sia stata chiamata in precedenza.  
  
#### Per specificare un filtro per un oggetto recordset  
  
1.  Creare un nuovo oggetto recordset o preparare una chiamata a **Requery** per un oggetto esistente.  
  
2.  Impostare il valore del membro dati [m\_strFilter](../Topic/CRecordset::m_strFilter.md) dell'oggetto.  
  
     Il filtro è una stringa con terminatore null che include il contenuto della clausola SQL **WHERE** ma non la parola chiave **WHERE**.  Ad esempio, utilizzare:  
  
    ```  
    m_pSet->m_strFilter = "CourseID = 'MATH101'";  
    ```  
  
     not  
  
    ```  
    m_pSet->m_strFilter = "WHERE CourseID = 'MATH101'";  
    ```  
  
    > [!NOTE]
    >  La stringa letterale MATH101 sopra riportata è racchiusa tra virgolette singole.  Nella specifica SQL di ODBC le virgolette singole indicano una stringa letterale di caratteri.  Per informazioni sulle virgolette richieste per il DBMS in questa situazione, consultare la documentazione relativa al driver ODBC.  Questa sintassi è illustrata in modo più dettagliato alla fine dell'argomento.  
  
3.  Impostare le altre opzioni desiderate, ad esempio il criterio di ordinamento, la modalità di blocco o i parametri.  L'impostazione di un parametro è particolarmente utile.  Per informazioni sull'applicazione di parametri al filtro, vedere [Recordset: applicazione di parametri a un recordset \(ODBC\)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).  
  
4.  Chiamare **Open** per il nuovo oggetto o **Requery** per un oggetto aperto in precedenza.  
  
> [!TIP]
>  L'utilizzo di parametri nel filtro rappresenta probabilmente il metodo più efficace per il recupero dei record.  
  
> [!TIP]
>  I filtri per recordset risultano utili per eseguire [join](../../data/odbc/recordset-performing-a-join-odbc.md) di tabelle e per l'utilizzo di [parametri](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) basati sulle informazioni ottenute o calcolate in fase di esecuzione.  
  
 Il recordset seleziona solo i record che soddisfano la condizione di ricerca specificata.  Per specificare, ad esempio, il filtro per il corso sopra menzionato, supponendo che una variabile `strCourseID` sia impostata su MATH101, procedere come descritto di seguito:  
  
```  
// Using the recordset pointed to by m_pSet  
  
// Set the filter  
m_pSet->m_strFilter = "CourseID = " + strCourseID;   
  
// Run the query with the filter in place  
if ( m_pSet->Open( CRecordset::snapshot, NULL, CRecordset::readOnly ) )  
  
// Use the recordset  
```  
  
 Il recordset contiene i record di tutte le sezioni delle classi per MATH101.  
  
 Tenere presente che la modalità di impostazione della stringa del filtro tramite la variabile stringa riportata nell'esempio precedente  è quella utilizzata più comunemente.  Tuttavia, si supponga di voler specificare il valore letterale 100 per l'ID del corso.  Nel codice seguente viene illustrato come impostare correttamente la stringa di filtro con un valore letterale:  
  
```  
m_strFilter = "StudentID = '100'";   // correct  
```  
  
 Si noti l'utilizzo delle virgolette singole. L'impostazione diretta della stringa del filtro **non** deve essere:  
  
```  
m_strFilter = "StudentID = 100";   // incorrect for some drivers  
```  
  
 Le virgolette sopra riportate sono conformi alla specifica ODBC. È tuttavia possibile che alcuni DBMS richiedano l'utilizzo di virgolette differenti.  Per ulteriori informazioni, vedere [SQL: personalizzazione dell'istruzione SQL del recordset \(ODBC\)](../../data/odbc/sql-customizing-your-recordset’s-sql-statement-odbc.md).  
  
> [!NOTE]
>  Se si sceglie di eseguire l'override della stringa SQL predefinita del recordset passando una stringa SQL personalizzata a **Open**, non impostare alcun filtro nel caso in cui la stringa personalizzata contenga una clausola **WHERE**.  Per ulteriori informazioni sull'esecuzione dell'override della stringa SQL predefinita, vedere [SQL: personalizzazione dell'istruzione SQL del recordset \(ODBC\)](../../data/odbc/sql-customizing-your-recordset’s-sql-statement-odbc.md).  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Recordset: ordinamento dei record \(ODBC\)](../../data/odbc/recordset-sorting-records-odbc.md)   
 [Recordset: selezione dei record \(ODBC\)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)   
 [Recordset: aggiornamento dei record \(ODBC\)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md)   
 [Recordset: blocco dei record \(ODBC\)](../../data/odbc/recordset-locking-records-odbc.md)