---
title: "Recordset: recupero di somme e altri risultati aggregati (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "recordset ODBC, recupero di valori aggregati SQL"
  - "recordset, recupero di valori aggregati SQL"
  - "recupero di valori aggregati SQL da recordset"
  - "valori aggregati SQL"
  - "valori aggregati SQL, recupero da recordset"
  - "progetti SQL Server, recupero di valori aggregati da recordset"
  - "SQL, recupero di valori aggregati da recordset"
ms.assetid: 94500662-22a4-443e-82d7-acbe6eca447b
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Recordset: recupero di somme e altri risultati aggregati (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 In questo argomento viene illustrato il recupero dei risultati aggregati mediante le parole chiave [SQL](../../data/odbc/sql.md) indicate di seguito.  
  
-   **SUM** Calcola il totale dei valori all'interno di una colonna con un tipo di dati numerico.  
  
-   **MIN** Estrae il valore più piccolo all'interno di una colonna con un tipo di dati numerico.  
  
-   **MAX** Estrae il valore più grande all'interno di una colonna con un tipo di dati numerico.  
  
-   **AVG** Calcola la media di tutti i valori all'interno di una colonna con un tipo di dati numerico.  
  
-   **COUNT** Calcola il numero di record all'interno di una colonna con qualsiasi tipo di dati.  
  
 Utilizzare queste funzioni SQL per recuperare informazioni statistiche sui record di un'origine dati senza estrarre i record dall'origine dati.  Il recordset creato è composto, in genere, da un singolo record contenente un valore, se tutte le colonne sono aggregazioni. Nel caso in cui si utilizzi una clausola **GROUP BY**, potrebbero essere presenti più record. Questo valore rappresenta il risultato del calcolo o dell'estrazione effettuata dalla funzione SQL.  
  
> [!TIP]
>  Se si desidera aggiungere una clausola SQL **GROUP BY** ed eventualmente una clausola **HAVING** all'istruzione SQL, aggiungerla alla fine di **m\_strFilter**.  Di seguito è riportato un esempio.  
  
```  
m_strFilter = "sales > 10 GROUP BY SALESPERSON_ID";  
```  
  
 Per limitare il numero di record utilizzati per il recupero di risultati aggregati, filtrare e ordinare le colonne.  
  
> [!CAUTION]
>  Alcuni operatori di aggregazione restituiscono un tipo di dati diverso da quello delle colonne su cui si sta eseguendo l'aggregazione.  
  
-   **SUM** e **AVG** possono restituire il tipo di dati successivo superiore. Ad esempio, se si esegue una chiamata con `int`, viene restituito un valore **LONG** o **double**.  
  
-   **COUNT** in genere restituisce un valore **LONG** indipendentemente dal tipo di colonna di destinazione.  
  
-   **MAX** e **MIN** restituiscono lo stesso tipo di dati delle colonne calcolate.  
  
     Ad esempio, la procedura guidata **Aggiungi classe** crea `long` `m_lSales` in modo che possa contenere una colonna Sales. Se si desidera includere il risultato aggregato, è tuttavia necessario sostituirlo con il membro dati `double m_dblSumSales`.  Vedere l'esempio che segue.  
  
#### Per recuperare un risultato aggregato per un recordset  
  
1.  Creare un recordset come descritto in [Aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) contenente le colonne da cui si desidera ottenere risultati aggregati.  
  
2.  Modificare la funzione [DoFieldExchange](../Topic/CRecordset::DoFieldExchange.md) del recordset.  Sostituire la stringa che rappresenta il nome della colonna, ovvero il secondo argomento delle chiamate alle funzioni [RFX](../../data/odbc/record-field-exchange-using-rfx.md), con una stringa che rappresenta la funzione di aggregazione della colonna.  Ad esempio, sostituire:  
  
    ```  
    RFX_Long(pFX, "Sales", m_lSales);  
    ```  
  
     con:  
  
    ```  
    RFX_Double(pFX, "Sum(Sales)", m_dblSumSales)  
    ```  
  
3.  Apertura del recordset.  Il risultato dell'operazione di aggregazione si troverà in `m_dblSumSales`.  
  
> [!NOTE]
>  La procedura guidata assegna i nomi dei membri dati senza i prefissi della notazione ungherese.  La procedura guidata crea ad esempio `m_Sales` per una colonna Sales anziché il nome `m_lSales` utilizzato nel codice sopra riportato.  
  
 Se si utilizza una classe [CRecordView](../../mfc/reference/crecordview-class.md) per la visualizzazione dei dati, sarà necessario modificare la chiamata alla funzione DDX per visualizzare il valore del nuovo membro dati. In tal caso, modificare  
  
```  
DDX_FieldText(pDX, IDC_SUMSALES, m_pSet->m_lSales, m_pSet);  
```  
  
 To:  
  
```  
DDX_FieldText(pDX, IDC_SUMSALES, m_pSet->m_dblSumSales, m_pSet);  
```  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Recordset: selezione dei record \(ODBC\)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)