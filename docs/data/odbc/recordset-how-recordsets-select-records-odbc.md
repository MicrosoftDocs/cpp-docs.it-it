---
title: 'Recordset: Selezione dei record (ODBC) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- recordsets, selecting records
- record selection, ODBC recordsets
- SQL statements, recordset
- records, selecting
- recordsets, constructing SQL statements
- ODBC recordsets, selecting records
ms.assetid: 343a6a91-aa4c-4ef7-b21f-2f2bfd0d3787
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a9ff2f1e9946eb32356eb09fa2ee216aa636a351
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33093230"
---
# <a name="recordset-how-recordsets-select-records-odbc"></a>Recordset: selezione dei record (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 Questo argomento viene illustrato:  
  
-   [Il ruolo e le opzioni disponibili nella selezione di record](#_core_your_options_in_selecting_records).  
  
-   [Modo in cui un'istruzione SQL in recordset](#_core_how_a_recordset_constructs_its_sql_statement).  
  
-   [Operazioni eseguibili per personalizzare la selezione](#_core_customizing_the_selection).  
  
 Recordset selezionare i record da un'origine dati tramite un driver ODBC per l'invio di istruzioni SQL per il driver. SQL inviata dipende dalla modalità di progettazione e aprire la classe del recordset.  
  
##  <a name="_core_your_options_in_selecting_records"></a> Opzioni di selezione di record  
 La tabella seguente illustra le opzioni di selezione di record.  
  
### <a name="how-and-when-you-can-affect-a-recordset"></a>Come e quando è possibile modificare un Recordset  
  
|Quando si|È possibile|  
|--------------|-------------|  
|Dichiarare la classe recordset con il **Aggiungi classe** guidata|Specificare la tabella da selezionare.<br /><br /> Specificare le colonne da includere.<br /><br /> Vedere [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md).|  
|Completare l'implementazione della classe recordset|Eseguire l'override di funzioni membro, ad esempio `OnSetOptions` (avanzate) per impostare le opzioni specifiche dell'applicazione o modificare le impostazioni predefinite. Specificare i membri dati di parametro se si desidera un recordset con parametri.|  
|Crea un oggetto recordset (prima di chiamare **aprire**)|Specificare una condizione di ricerca (eventualmente composta) per l'utilizzo in un **dove** clausola che filtra i record. Vedere [Recordset: applicazione di filtri di record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md).<br /><br /> Specificare un criterio di ordinamento per l'utilizzo in un **ORDER BY** clausola che ordina i record. Vedere [Recordset: ordinamento dei record (ODBC)](../../data/odbc/recordset-sorting-records-odbc.md).<br /><br /> Specificare i valori dei parametri per i parametri che aggiunti alla classe. Vedere [Recordset: applicazione di parametri a un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).|  

| Eseguire la query del recordset chiamando **aprire**| Specificare una stringa SQL personalizzata per sostituire la stringa SQL predefinito impostata dalla procedura guidata. Vedere [CRecordset:: Open](../../mfc/reference/crecordset-class.md#open) nel *riferimenti alla libreria di classe* e [SQL: personalizzazione istruzione SQL del Recordset (ODBC)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md). |  

| Chiamare **Requery** per rieseguire una query nel recordset con i valori più recenti dell'origine dati | Specificare i nuovi parametri, il filtro o ordinamento. Vedere [Recordset: ripetizione di query in un Recordset (ODBC)](../../data/odbc/recordset-requerying-a-recordset-odbc.md). |  
  
##  <a name="_core_how_a_recordset_constructs_its_sql_statement"></a> Come in un recordset istruzione SQL  
 Quando si chiama un oggetto recordset [aprire](../../mfc/reference/crecordset-class.md#open) funzione membro, **aprire** costruisce un'istruzione SQL utilizzando alcuni o tutti i componenti seguenti:  
  
-   Il **lpszSQL** parametro passato a **aprire**. In caso contrario **NULL**, questo parametro specifica una stringa SQL personalizzata o una parte di uno. Il framework analizza la stringa. Se la stringa è un database SQL **selezionare** o un'istruzione ODBC **CHIAMARE** istruzione, il framework utilizza la stringa come istruzione SQL del recordset. Se la stringa non inizia con "SELECT" o "{CALL", il framework utilizza gli elementi forniti per la creazione di un database SQL **FROM** clausola.  
  
-   La stringa restituita da [GetDefaultSQL](../../mfc/reference/crecordset-class.md#getdefaultsql). Per impostazione predefinita, questo è il nome della tabella specificata per il recordset nella procedura guidata, ma è possibile modificare la funzione restituisce. Il framework chiama `GetDefaultSQL` , ovvero se la stringa non inizia con "SELECT" o "{CALL", si presuppone che un nome di tabella, che viene utilizzato per costruire una stringa SQL.  
  

-   Membri dati di campo del recordset, che devono essere associate a colonne specifiche della tabella. Il framework associa le colonne di record per gli indirizzi di questi membri, vengono utilizzate come buffer. Il framework determina la correlazione dei membri dati di campo per le colonne della tabella di [RFX](../../data/odbc/record-field-exchange-using-rfx.md) o delle chiamate di funzione RFX di massa del recordset [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) o [DoBulkFieldExchange ](../../mfc/reference/crecordset-class.md#dofieldexchange) funzione membro.  
  
-   Il [filtro](../../data/odbc/recordset-filtering-records-odbc.md) per il recordset, se presente, contenuta nel [m_strFilter](../../mfc/reference/crecordset-class.md#m_strfilter) (membro dati). Il framework utilizza questa stringa per creare un database SQL **dove** clausola.  
  
-   Il [ordinamento](../../data/odbc/recordset-sorting-records-odbc.md) ordine per il recordset, se disponibile, contenuto nel [m_strSort](../../mfc/reference/crecordset-class.md#m_strsort) (membro dati). Il framework utilizza questa stringa per creare un database SQL **ORDER BY** clausola.  

  
    > [!TIP]
    >  Per utilizzare l'istruzione SQL **GROUP BY** clausola (ed eventualmente il **HAVING** clausola), aggiungere le clausole alla fine della stringa del filtro.  
  
-   I valori di qualsiasi [membri dati di parametro](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) specificato per la classe. Impostare i valori dei parametri prima di chiamare **aprire** o **Requery**. Il framework associa i valori dei parametri "?" segnaposto nella stringa SQL. In fase di compilazione, specificare la stringa con segnaposto. In fase di esecuzione, il framework inserisce i dettagli in base ai valori di parametro che viene passato.  
  
 **Aprire** costruisce un database SQL **selezionare** istruzione con questi elementi. Vedere [personalizzazione della selezione](#_core_customizing_the_selection) per informazioni dettagliate sull'utilizzo di ingredienti del framework.  
  
 Al termine della creazione dell'istruzione, **aprire** invia l'istruzione SQL per la gestione Driver ODBC (e la libreria di cursori ODBC, se è in memoria), che invia al driver ODBC per DBMS specifici. Il driver comunica con il sistema DBMS per eseguire la selezione dell'origine dati e recupera il primo record. Il framework carica il record nei membri di dati di campo del recordset.  
  
 È possibile utilizzare una combinazione di queste tecniche per aprire [tabelle](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md) e per creare una query basata su un [join](../../data/odbc/recordset-performing-a-join-odbc.md) di più tabelle. Con un'ulteriore personalizzazione, è possibile chiamare [query predefinite](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md) (stored procedure), selezionare colonne non è note in fase di progettazione della tabella e [associare](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md) per i campi del recordset o si può eseguire la maggior parte delle altre attività di accesso ai dati. Attività che non è possibile eseguire per la personalizzazione dei recordset possono comunque essere completate da [chiamata di funzioni API ODBC](../../data/odbc/odbc-calling-odbc-api-functions-directly.md) o direttamente l'esecuzione di istruzioni SQL con [CDatabase:: ExecuteSQL](../../mfc/reference/cdatabase-class.md#executesql).  
  
##  <a name="_core_customizing_the_selection"></a> Personalizzazione della selezione  
 Oltre a fornire un filtro, un ordinamento o parametri, è possibile intraprendere le azioni seguenti per personalizzare la selezione del recordset:  
  
-   Passare una stringa SQL personalizzata in **lpszSQL** quando si chiama [aprire](../../mfc/reference/crecordset-class.md#open) per il recordset. Qualsiasi elemento passato **lpsqSQL** ha la precedenza su cosa il [GetDefaultSQL](../../mfc/reference/crecordset-class.md#getdefaultsql) funzione membro restituisce.  
  
     Per ulteriori informazioni, vedere [SQL: del Recordset SQL istruzione (ODBC personalizzazione)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md), che descrive i tipi di istruzioni SQL (o le parti di istruzioni), è possibile passare a **aprire** e operazioni il framework con loro.  
  
    > [!NOTE]
    >  Se la stringa personalizzata passata non inizia con "SELECT" o "{CALL", in MFC si presuppone che contenga un nome di tabella. Questo vale anche per il punto elenco puntato.  
  
-   Modificare la stringa che la procedura guidata scrive del recordset `GetDefaultSQL` funzione membro. Modificare il codice per modificare il risultato della funzione. Per impostazione predefinita, la procedura guidata scrive un `GetDefaultSQL` funzione che restituisce un singolo nome di tabella.  
  
     È possibile avere `GetDefaultSQL` restituisca uno qualsiasi degli elementi che è possibile passare il **lpszSQL** parametro **aprire**. Se non si passa una stringa SQL personalizzata in **lpszSQL**, il framework utilizza la stringa che `GetDefaultSQL` restituisce. Come minimo, `GetDefaultSQL` deve restituire un singolo nome di tabella. È tuttavia possibile impostare restituiscono più nomi di tabella, una procedura completa di **selezionare** istruzione, un database ODBC **CHIAMARE** istruzione e così via. Per un elenco di elementi è possibile passare a **lpszSQL** : o `GetDefaultSQL` restituire, vedere [SQL: del Recordset SQL istruzione (ODBC personalizzazione)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).  
  
     Se si esegue un join di due o più tabelle, riscrivere `GetDefaultSQL` per personalizzare l'elenco di tabella utilizzato nella SQL **FROM** clausola. Per ulteriori informazioni, vedere [Recordset: esecuzione di un Join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md).  
  

-   Associare manualmente i membri di dati di campi aggiuntivi, ad esempio in base alle informazioni sullo schema dell'origine dati in fase di esecuzione. Aggiungere i membri di dati campo per la classe recordset, [RFX](../../data/odbc/record-field-exchange-using-rfx.md) o RFX di massa chiama per permetterne il [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) o [DoBulkFieldExchange](../../mfc/reference/crecordset-class.md#dobulkfieldexchange) funzione membro, e inizializzazioni dei membri dati nel costruttore della classe. Per ulteriori informazioni, vedere [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).  
  
-   Eseguire l'override di funzioni membro oggetto recordset, ad esempio `OnSetOptions`, per impostare le opzioni specifiche dell'applicazione o eseguire l'override delle impostazioni predefinite.  
  
 Se si desidera basare il recordset in un'istruzione SQL complessa, è necessario utilizzare una combinazione di queste tecniche di personalizzazione. Ad esempio, ad esempio si desidera utilizzare le clausole SQL e parole chiave non supportate direttamente dal recordset o si siano unendo in join più tabelle.  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: Aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md)   
 [Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)   
 [SQL](../../data/odbc/sql.md)   
 [Recordset: blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)