---
title: "CFieldExchange Class | Microsoft Docs"
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
  - "CFieldExchange"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFieldExchange class"
  - "tipi di dati [C++], personalizzati"
  - "enum FieldType"
  - "enum FieldType, CFieldExchange"
  - "FieldType enumeration"
  - "RFX (record field exchange) [C++]"
  - "RFX (record field exchange) [C++], classes for"
ms.assetid: 24c5c0b3-06a6-430e-9b6f-005a2c65e29f
caps.latest.revision: 24
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CFieldExchange Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Supporta trasferimento di campi di Record e le routine dell'rfx di massa\) utilizzate dalle classi di database.  
  
## Sintassi  
  
```  
  
class CFieldExchange  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFieldExchange::IsFieldType](../Topic/CFieldExchange::IsFieldType.md)|Restituisce diverso da zero se l'operazione corrente è adatta per il tipo di campo che viene aggiornato.|  
|[CFieldExchange::SetFieldType](../Topic/CFieldExchange::SetFieldType.md)|Specifica il tipo di membro dati del recordset — colonna o parametro — rappresentato da tutte le chiamate alle funzioni RFX fino alla chiamata successiva a `SetFieldType`.|  
  
## Note  
 `CFieldExchange` non dispone di una classe base.  
  
 Utilizzare questa classe se si scrive le routine di scambio di dati per i tipi di dati personalizzati o quando si distribuisce il recupero di massa di righe, in caso contrario, direttamente non sarà possibile utilizzare questa classe.  RFX e scambia dati RFX di massa tra i membri dati di campo dell'oggetto recordset e i corrispondenti campi del record corrente nell'origine dati.  
  
> [!NOTE]
>  Se si utilizzano gli oggetti di accesso ai dati che \(DAO\) classi anziché le classi ODBC \(open database connectivity\), la classe [CDaoFieldExchange](../../mfc/reference/cdaofieldexchange-class.md) di utilizzare.  Per ulteriori informazioni, vedere l'articolo [cenni preliminari: La programmazione di database](../../data/data-access-programming-mfc-atl.md).  
  
 Un oggetto `CFieldExchange` vengono fornite informazioni sul contesto necessarie affinché Record Field Exchange o il trasferimento di massa di campi di Record sia successiva.  Gli oggetti di`CFieldExchange` supportano una serie di operazioni, inclusi i parametri e i membri dati di campo obbligatori e flag impostazione dei vari i campi del record corrente.  RFX e le operazioni di RFX in cui vengono eseguiti i membri dati di recordset\- classe di tipi definiti da `enum`**FieldType** in `CFieldExchange`.  i valori possibili **FieldType** sono:  
  
-   **CFieldExchange::outputColumn** per i membri dati di campo.  
  
-   **CFieldExchange::inputParam** o **CFieldExchange::param** per i membri dati di parametro di input.  
  
-   **CFieldExchange::outputParam** per i membri dati di parametro di output.  
  
-   **CFieldExchange::inoutParam** per i membri dati di parametro di output.  
  
 La maggior parte delle funzioni membro e i membri dati della classe vengono svolti per la scrittura delle routine personalizzate RFX.  Si utilizzeranno frequentemente `SetFieldType`.  Per ulteriori informazioni, vedere gli articoli [Trasferimento di campi di Record](../../data/odbc/record-field-exchange-rfx.md) e [recordset \(ODBC\)](../../data/odbc/recordset-odbc.md).  Per informazioni sul recupero di massa di righe, vedere l'articolo [recordset: Recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  Per ulteriori informazioni su RFX e le funzioni globali RFX di massa, vedere [Funzioni di trasferimento di campi di Record](../../mfc/reference/record-field-exchange-functions.md) nella sezione Globals e di macro MFC del riferimento.  
  
## Gerarchia di ereditarietà  
 `CFieldExchange`  
  
## Requisiti  
 **Header:** afxdb.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CRecordset Class](../../mfc/reference/crecordset-class.md)