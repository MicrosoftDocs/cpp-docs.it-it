---
title: "Definizione delle stored procedure | Microsoft Docs"
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
  - "OLE DB, stored procedure"
  - "stored procedure, definizione"
  - "stored procedure, OLE DB"
  - "stored procedure, sintassi"
ms.assetid: 54949b81-3275-4dd9-96e4-3eda1ed755f2
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Definizione delle stored procedure
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Prima di chiamare una stored procedure, è innanzi tutto necessario definirla tramite la macro [DEFINE\_COMMAND](../../data/oledb/define-command.md).  Quando si definisce il comando, contrassegnare i parametri utilizzando un punto interrogativo \(?\) come marcatore:  
  
```  
DEFINE_COMMAND(CMySProcAccessor, _T("{INSERT {name, phone} into shippers  (?,?)}")  
```  
  
 Si noti che la sintassi \(ad esempio, l'uso delle parentesi\) utilizzata negli esempi di codice riportati in questo argomento è specifica di SQL Server.  La sintassi utilizzata in una stored procedure può variare a seconda del provider in uso.  
  
 A questo punto, specificare nella mappa dei parametri quelli utilizzati nel comando, elencandoli nell'ordine in cui compaiono nel comando stesso:  
  
```  
BEGIN_PARAM_MAP(CMySProcAccessor)  
   SET_PARAM_TYPE(DBPARAMIO_INPUT)  
   COLUMN_ENTRY(1, m_Name)   // name corresponds to first '?' param  
   SET_PARAM_TYPE(DBPARAMIO_INPUT)  
   COLUMN_ENTRY(2, m_Phone)  // phone corresponds to second '?' param  
END_PARAM_MAP()  
```  
  
 Nell'esempio precedente viene definita una stored procedure.  In genere, per un efficiente riutilizzo del codice, un database dovrà contenere un insieme di stored procedure già definite con nomi quali "Sales by Year" o "dt\_adduserobject". Per visualizzare queste definizioni, utilizzare SQL Server Enterprise Manager.  Per chiamare le stored procedure, procedere come indicato di seguito. La collocazione dei parametri '?' dipende dall'interfaccia della stored procedure.  
  
```  
DEFINE_COMMAND(CMySProcAccessor, _T("{CALL \"Sales by Year\" (?,?) }")  
DEFINE_COMMAND(CMySProcAccessor, _T("{CALL dbo.dt_adduserobject (?,?) }")  
```  
  
 A questo punto, dichiarare la classe di comando:  
  
```  
class CMySProc : public CCommand<CAccessor<CMySProcAccessor> >  
```  
  
 Infine, chiamare la stored procedure in `OpenRowset` come indicato di seguito:  
  
```  
CSession m_session;  
HRESULT OpenRowset()  
{  
   return CCommand<CAccessor<CMySProcAccessor> >::Open(m_session);  
}  
```  
  
 Si noti inoltre che è possibile definire una stored procedure utilizzando l'attributo del database [db\_command](../../windows/db-command.md) in questo modo:  
  
```  
db_command("{ ? = CALL dbo.dt_adduserobject }")  
```  
  
## Vedere anche  
 [Utilizzo delle stored procedure](../../data/oledb/using-stored-procedures.md)