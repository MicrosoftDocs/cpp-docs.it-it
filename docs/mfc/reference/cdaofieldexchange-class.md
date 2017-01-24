---
title: "CDaoFieldExchange Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDaoFieldExchange"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoFieldExchange class"
  - "DAO (Data Access Objects), record field exchange (DFX)"
  - "DFX (trasferimento di campi di record DAO)"
  - "DFX (trasferimento di campi di record DAO), DAO Record Field Exchange"
  - "exchanging data between databases and recordsets"
  - "field exchange"
  - "field exchange, record for DAO classes"
  - "RFX (Trasferimento di campi di record)"
  - "RFX (Trasferimento di campi di record), DAO classes"
ms.assetid: 350a663e-92ff-44ab-ad53-d94efa2e5823
caps.latest.revision: 23
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDaoFieldExchange Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Supporta le routine di trasferimento di campi di record DAO \(DFX\) utilizzate dalle classi di database DAO.  
  
## Sintassi  
  
```  
class CDaoFieldExchange  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoFieldExchange::IsValidOperation](../Topic/CDaoFieldExchange::IsValidOperation.md)|Restituisce diverso da zero se l'operazione corrente è adatta per il tipo di campo che viene aggiornato.|  
|[CDaoFieldExchange::SetFieldType](../Topic/CDaoFieldExchange::SetFieldType.md)|Specifica il tipo di membro dati del recordset — colonna o parametro — rappresentato da tutte le chiamate successive a DFX viene eseguito fino alla chiamata successiva a `SetFieldType`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoFieldExchange::m\_nOperation](../Topic/CDaoFieldExchange::m_nOperation.md)|L'operazione di DFX eseguita dalla chiamata corrente alla funzione membro `DoFieldExchange` del recordset.|  
|[CDaoFieldExchange::m\_prs](../Topic/CDaoFieldExchange::m_prs.md)|Un puntatore al recordset sulle operazioni di DFX vengono realizzande.|  
  
## Note  
 `CDaoFieldExchange` non dispone di una classe base.  
  
 Utilizzare questa classe se si scrive le routine di scambio di dati per i tipi di dati personalizzati, in caso contrario, direttamente non sarà possibile utilizzare questa classe.  Scambia dati di DFX tra i membri dati di campo dell'oggetto [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) e i corrispondenti campi del record corrente nell'origine dati.  Anche DFX gestisce lo scambio in entrambe le direzioni, dall'origine dati e nell'origine dati.  Vedere [nota tecnica 53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md) per informazioni sulle routine personalizzate di scrittura DFX.  
  
> [!NOTE]
>  Le classi di database DAO sono differenziate dalle classi di database MFC basate su ODBC.  Tutti i nomi delle classi di database DAO dispongono del prefisso "di CDao".  È ancora possibile accedere alle origini dati ODBC con le classi DAO.  Le classi MFC basate su DAO risulta in genere più in grado delle classi MFC basate su ODBC.  Le classi basate su DAO possono accedere ai dati, ad esempio tramite driver ODBC, tramite proprio motore di database.  Supportano le operazioni di Data Definition Language \(DDL\), ad esempio aggiunta di tabelle tramite le classi anziché dover chiamare DAO manualmente.  
  
> [!NOTE]
>  Il trasferimento di campi di record DAO \(DFX\) è molto simile a trasferimento di campi di Record nelle classi di database basate su ODBC MFC \(`CDatabase`, `CRecordset`\).  Se si comprendono RFX, risulterà DFX di facile utilizzo.  
  
 Un oggetto `CDaoFieldExchange` vengono fornite informazioni sul contesto necessarie per il trasferimento di campi di record DAO sia successiva.  Gli oggetti di`CDaoFieldExchange` supportano una serie di operazioni, inclusi i parametri e i membri dati di campo obbligatori e flag impostazione dei vari i campi del record corrente.  Le operazioni di DFX vengono eseguite sui membri dati di recordset\- classe di tipi definiti da `enum`**FieldType** in `CDaoFieldExchange`.  i valori possibili **FieldType** sono:  
  
-   **CDaoFieldExchange::outputColumn** per i membri dati di campo.  
  
-   **CDaoFieldExchange::param** per i membri dati di parametro.  
  
 La funzione membro [IsValidOperation](../Topic/CDaoFieldExchange::IsValidOperation.md) è fornita per la scrittura delle routine personalizzate DFX.  Si utilizzeranno frequentemente [SetFieldType](../Topic/CDaoFieldExchange::SetFieldType.md) nelle funzioni [CDaoRecordset::DoFieldExchange](../Topic/CDaoRecordset::DoFieldExchange.md).  Per informazioni dettagliate sulle funzioni globali di DFX, vedere [Funzioni di trasferimento di campi di Record](../../mfc/reference/record-field-exchange-functions.md).  Per informazioni sulle routine personalizzate di scrittura DFX per i tipi di dati personalizzati, vedere [nota tecnica 53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md).  
  
## Gerarchia di ereditarietà  
 `CDaoFieldExchange`  
  
## Requisiti  
 **Header:** afxdao.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDaoRecordset Class](../../mfc/reference/cdaorecordset-class.md)