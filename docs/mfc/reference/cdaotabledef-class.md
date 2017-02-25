---
title: "CDaoTableDef Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDaoTableDef"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoTableDef class"
  - "classi di database [C++], DAO"
  - "database tables [C++], attached table definition"
  - "database tables [C++], base table definition"
  - "tabledefs [C++]"
ms.assetid: 7c5d2254-8475-43c4-8a6c-2d32ead194c9
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CDaoTableDef Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta la definizione archiviata di una tabella di base o di una tabella collegata.  
  
## Sintassi  
  
```  
class CDaoTableDef : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoTableDef::CDaoTableDef](../Topic/CDaoTableDef::CDaoTableDef.md)|Costruisce un oggetto **CDaoTableDef** .|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoTableDef::Append](../Topic/CDaoTableDef::Append.md)|Aggiunge una nuova tabella nel database.|  
|[CDaoTableDef::CanUpdate](../Topic/CDaoTableDef::CanUpdate.md)|Restituisce diverso da zero se la tabella può essere aggiornata \(possibile modificare la definizione di campi o proprietà tabella\).|  
|[CDaoTableDef::Close](../Topic/CDaoTableDef::Close.md)|Chiude un TableDef aperto.|  
|[CDaoTableDef::Create](../Topic/CDaoTableDef::Create.md)|Crea una tabella che può essere aggiunto al database utilizzando [Aggiungere](../Topic/CDaoTableDef::Append.md).|  
|[CDaoTableDef::CreateField](../Topic/CDaoTableDef::CreateField.md)|Chiamato per creare un campo di una tabella.|  
|[CDaoTableDef::CreateIndex](../Topic/CDaoTableDef::CreateIndex.md)|Chiamato per creare un indice per una tabella.|  
|[CDaoTableDef::DeleteField](../Topic/CDaoTableDef::DeleteField.md)|Chiamato per eliminare un campo di una tabella.|  
|[CDaoTableDef::DeleteIndex](../Topic/CDaoTableDef::DeleteIndex.md)|Chiamato per eliminare un indice da una tabella.|  
|[CDaoTableDef::GetAttributes](../Topic/CDaoTableDef::GetAttributes.md)|Restituisce un valore che indica una o più funzionalità di un oggetto `CDaoTableDef`.|  
|[CDaoTableDef::GetConnect](../Topic/CDaoTableDef::GetConnect.md)|Restituisce un valore che fornisce informazioni sull'origine di una tabella.|  
|[CDaoTableDef::GetDateCreated](../Topic/CDaoTableDef::GetDateCreated.md)|Restituisce la data e l'ora nella tabella di base sottostante a un oggetto `CDaoTableDef` è stata creata.|  
|[CDaoTableDef::GetDateLastUpdated](../Topic/CDaoTableDef::GetDateLastUpdated.md)|Restituisce la data e ora di modifica più recente effettuata alla progettazione della tabella di base.|  
|[CDaoTableDef::GetFieldCount](../Topic/CDaoTableDef::GetFieldCount.md)|Restituisce un valore che rappresenta il numero di campi nella tabella.|  
|[CDaoTableDef::GetFieldInfo](../Topic/CDaoTableDef::GetFieldInfo.md)|Restituisce tipi specifici di informazioni sui campi nella tabella.|  
|[CDaoTableDef::GetIndexCount](../Topic/CDaoTableDef::GetIndexCount.md)|Restituisce il numero di indici per la tabella.|  
|[CDaoTableDef::GetIndexInfo](../Topic/CDaoTableDef::GetIndexInfo.md)|Restituisce tipi specifici di informazioni sugli indici per la tabella.|  
|[CDaoTableDef::GetName](../Topic/CDaoTableDef::GetName.md)|Restituisce il nome definito dalla tabella.|  
|[CDaoTableDef::GetRecordCount](../Topic/CDaoTableDef::GetRecordCount.md)|Restituisce il numero di record nella tabella.|  
|[CDaoTableDef::GetSourceTableName](../Topic/CDaoTableDef::GetSourceTableName.md)|Restituisce un valore che specifica il nome della tabella collegata nel database di origine.|  
|[CDaoTableDef::GetValidationRule](../Topic/CDaoTableDef::GetValidationRule.md)|Restituisce un valore per la convalida dei dati in un campo quando viene modificato o aggiunto a una tabella.|  
|[CDaoTableDef::GetValidationText](../Topic/CDaoTableDef::GetValidationText.md)|Restituisce un valore che specifica il testo del messaggio che l'applicazione viene visualizzato se il valore di un oggetto di campo non soddisfa la regola di convalida specificata.|  
|[CDaoTableDef::IsOpen](../Topic/CDaoTableDef::IsOpen.md)|Restituisce diverso da zero se la tabella viene aperta.|  
|[CDaoTableDef::Open](../Topic/CDaoTableDef::Open.md)|Apre un TableDef esistente archiviato nella libreria di TableDef del database.|  
|[CDaoTableDef::RefreshLink](../Topic/CDaoTableDef::RefreshLink.md)|Aggiorna le informazioni di connessione per una tabella collegata.|  
|[CDaoTableDef::SetAttributes](../Topic/CDaoTableDef::SetAttributes.md)|Imposta un valore che indica una o più funzionalità di un oggetto `CDaoTableDef`.|  
|[CDaoTableDef::SetConnect](../Topic/CDaoTableDef::SetConnect.md)|Imposta un valore che fornisce informazioni sull'origine di una tabella.|  
|[CDaoTableDef::SetName](../Topic/CDaoTableDef::SetName.md)|Imposta il nome della tabella.|  
|[CDaoTableDef::SetSourceTableName](../Topic/CDaoTableDef::SetSourceTableName.md)|Imposta un valore che specifica il nome di una tabella collegata nel database di origine.|  
|[CDaoTableDef::SetValidationRule](../Topic/CDaoTableDef::SetValidationRule.md)|Imposta un valore che convalida i dati in un campo quando viene modificato o aggiunto a una tabella.|  
|[CDaoTableDef::SetValidationText](../Topic/CDaoTableDef::SetValidationText.md)|Imposta un valore che specifica il testo del messaggio che l'applicazione viene visualizzato se il valore di un oggetto di campo non soddisfa la regola di convalida specificata.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoTableDef::m\_pDAOTableDef](../Topic/CDaoTableDef::m_pDAOTableDef.md)|Un puntatore a un'interfaccia di DAO sottostante all'oggetto di TableDef.|  
|[CDaoTableDef::m\_pDatabase](../Topic/CDaoTableDef::m_pDatabase.md)|Origine di questa tabella.|  
  
## Note  
 Ogni oggetto di database DAO gestisce una raccolta, chiamata TableDefs, che contiene tutti gli oggetti salvati di TableDef di DAO.  
  
 Modificare una definizione di tabella mediante un oggetto `CDaoTableDef`.  Ad esempio, è possibile:  
  
-   Esaminare la struttura di indice e del campo di una tabella locale, collegata, o esterna in un database.  
  
-   Chiamare le funzioni membro `SetSourceTableName` e `SetConnect` per le tabelle collegate e utilizzare la funzione membro `RefreshLink` per aggiornare le connessioni alle tabelle collegate.  
  
-   Chiamare la funzione membro `CanUpdate` per determinare se è possibile modificare le definizioni di campo della tabella.  
  
-   Ottenere o impostare gli stati di convalida utilizzando `GetValidationRule` e `SetValidationRule`le funzioni membro e `SetValidationText` e `GetValidationText`.  
  
-   Utilizzare la funzione membro **Apri** per creare una tabella, un dynaset, o un oggetto di tipo snapshot `CDaoRecordset`.  
  
    > [!NOTE]
    >  Le classi di database DAO sono differenziate dalle classi di database MFC basate su ODBC.  Tutti i nomi delle classi di database DAO dispongono del prefisso "di CDao".  È ancora possibile accedere alle origini dati ODBC con le classi DAO, le classi DAO presentano in genere le funzionalità principali perché sono specifiche del modulo di gestione di database Microsoft Jet.  
  
### Per utilizzare gli oggetti di TableDef con una tabella esistente o creare una nuova tabella  
  
1.  In tutti i casi, è necessario costruire un oggetto `CDaoTableDef`, fornendo un puntatore a un oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) a cui appartiene la tabella.  
  
2.  Fare quanto segue, in cui si desidera:  
  
    -   Per utilizzare un oggetto esistente ha salvato la tabella, chiama la funzione membro [Apri](../Topic/CDaoTableDef::Open.md) dell'oggetto di TableDef, specificando il nome della tabella salvata.  
  
    -   Per creare una nuova tabella, chiamare la funzione membro [Crea](../Topic/CDaoTableDef::Create.md) dell'oggetto di TableDef, specificando il nome della tabella.  Chiamare [CreateField](../Topic/CDaoTableDef::CreateField.md) e [CreateIndex](../Topic/CDaoTableDef::CreateIndex.md) per aggiungere campi e indici alla tabella.  
  
    -   Chiamare [Aggiungere](../Topic/CDaoTableDef::Append.md) per salvare la tabella accodandola a TableDef della raccolta.  **Crea** inserisce il TableDef in stato aperto, pertanto dopo viene **Crea** che non si chiama **Apri**.  
  
        > [!TIP]
        >  Il modo più semplice per creare tabelle salvate è di crearli e archiviarle nel database utilizzando Microsoft Access.  È quindi possibile aprirli e utilizzare nel codice MFC.  
  
 Per utilizzare l'oggetto di TableDef è aperto o creato, che creare e aprire un oggetto `CDaoRecordset`, specificando il nome del TableDef con un valore **dbOpenTable** nel parametro `nOpenType`.  
  
 Per utilizzare un oggetto di TableDef per creare un oggetto `CDaoRecordset`, in genere si crea o si apre un TableDef come descritto in precedenza, quindi si costruisce un oggetto recordset, passando un puntatore a un oggetto di TableDef quando si chiama [CDaoRecordset::Open](../Topic/CDaoRecordset::Open.md).  Il TableDef passato sia in uno stato aperto.  Per ulteriori informazioni, vedere la classe [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).  
  
 Dopo avere utilizzato un oggetto di TableDef, chiamare la funzione membro [Chiudi](../Topic/CDaoRecordset::Close.md) ; quindi eliminare l'oggetto di TableDef.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDaoTableDef`  
  
## Requisiti  
 **Header:** afxdao.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDaoDatabase Class](../../mfc/reference/cdaodatabase-class.md)   
 [CDaoRecordset Class](../../mfc/reference/cdaorecordset-class.md)