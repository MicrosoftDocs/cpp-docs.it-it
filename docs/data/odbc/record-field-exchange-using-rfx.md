---
title: "Trasferimento di campi di record: utilizzo di RFX | Microsoft Docs"
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
  - "RFX (ODBC), implementazione"
ms.assetid: ada8f043-37e6-4d41-9db3-92c997a61957
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Trasferimento di campi di record: utilizzo di RFX
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato l'utilizzo di RFX in relazione alle operazioni del framework.  
  
> [!NOTE]
>  L'argomento è relativo alle classi derivate da [CRecordset](../../mfc/reference/crecordset-class.md) per cui il recupero di massa di righe non è ancora stato implementato.  Se si sta utilizzando il recupero di massa di righe, verrà implementato l'RFX di massa.  L'RFX di massa è simile all'RFX.  Per comprenderne le differenze, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Nei seguenti argomenti vengono fornite informazioni correlate:  
  
-   [Trasferimento di campi di record: utilizzo del codice della creazione guidata](../../data/odbc/record-field-exchange-working-with-the-wizard-code.md) introduce i componenti principali di RFX e illustra il codice scritto dalla Creazione guidata applicazioni MFC e dal comando **Aggiungi classe** \(come descritto in [Aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)\) per supportare RFX e la modalità di modifica consigliata del codice della procedura guidata.  
  
-   [Trasferimento di campi di record: utilizzo delle funzioni RFX](../../data/odbc/record-field-exchange-using-the-rfx-functions.md) descrive la scrittura delle chiamate alle funzioni RFX nell'override di `DoFieldExchange`.  
  
 Nella tabella riportata di seguito viene descritto il ruolo svolto dal programmatore in relazione alle operazioni eseguite dal framework.  
  
### Utilizzo di RFX: programmatore e framework  
  
|Programmatore|Framework|  
|-------------------|---------------|  
|Dichiara le classi recordset con una procedura guidata.  Specifica i nomi e i tipi di dati dei membri dati di campo.|La procedura guidata deriva una classe `CRecordset` e scrive un override di [DoFieldExchange](../Topic/CRecordset::DoFieldExchange.md), includendo la chiamata a una funzione RFX per ciascun membro dati di campo.|  
|\(Facoltativo\) Aggiunge manualmente alla classe gli eventuali membri dati di parametro necessari.   Aggiunge manualmente una chiamata della funzione RFX a `DoFieldExchange` per ciascun membro dati di parametro, aggiunge una chiamata a [CFieldExchange::SetFieldType](../Topic/CFieldExchange::SetFieldType.md) per il gruppo di parametri e specifica il numero totale di parametri in [m\_nParams](../Topic/CRecordset::m_nParams.md).  Vedere [Recordset: applicazione di parametri a un recordset \(ODBC\)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).||  
|\(Facoltativo\) Associa manualmente altre colonne ai membri dati di campo.  Incrementa manualmente [m\_nFields](../Topic/CRecordset::m_nFields.md).  Vedere [Recordset: associazione dinamica di colonne di dati \(ODBC\)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).||  
|Costruisce un oggetto della classe recordset.  Prima di utilizzare l'oggetto, imposta i valori dei relativi membri dati di parametro, se disponibili.|Per una maggiore efficacia, il framework preassocia i parametri mediante ODBC.  Una volta passati i valori dei parametri, il framework li passa all'origine dati.  Vengono inviati solo i valori dei parametri per ripetere la query, a meno che le stringhe di ordinamento e\/o dei filtri non abbiano subito modifiche.|  
|Apre un oggetto recordset mediante [CRecordset::Open](../Topic/CRecordset::Open.md).|Esegue la query del recordset, associa le colonne ai membri dati di campo del recordset e chiama `DoFieldExchange` per lo scambio di dati tra il primo record selezionato e i membri dati di campo del recordset.|  
|Scorre il recordset mediante [CRecordset::Move](../Topic/CRecordset::Move.md) o tramite un comando di menu o della barra degli strumenti.|Chiama `DoFieldExchange` per trasferire i dati dal nuovo record corrente ai membri dati di campo.|  
|Aggiunge, aggiorna ed elimina i record.|Chiama `DoFieldExchange` per trasferire i dati all'origine dati.|  
  
## Vedere anche  
 [Trasferimento di campi di record \(RFX\)](../../data/odbc/record-field-exchange-rfx.md)   
 [Trasferimento di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md)   
 [Recordset: recupero di somme e altri risultati aggregati \(ODBC\)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md)   
 [CRecordset Class](../../mfc/reference/crecordset-class.md)   
 [CFieldExchange Class](../../mfc/reference/cfieldexchange-class.md)   
 [Macro, funzioni globali e variabili globali](../Topic/Macros,%20Global%20Functions,%20and%20Global%20Variables.md)