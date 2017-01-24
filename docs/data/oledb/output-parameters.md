---
title: "Parametri di output | Microsoft Docs"
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
  - "OLE DB, stored procedure"
  - "chiamate a procedure"
  - "chiamate a procedure, stored procedure"
  - "stored procedure, chiamata"
  - "stored procedure, parametri"
ms.assetid: 4f7c2700-1c2d-42f3-8c9f-7e83962b2442
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Parametri di output
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La chiamata a una stored procedure è simile alla chiamata a un comando SQL.  La differenza principale sta nel fatto che le stored procedure utilizzano i parametri di output e i valori restituiti.  
  
 Nella stored procedure riportata di seguito, il primo '?' corrisponde al valore restituito \(numero telefonico\) e il secondo corrisponde al parametro di input \(nome\):  
  
```  
DEFINE_COMMAND(CMySProcAccessor, _T("{ ? = SELECT phone FROM shippers WHERE name = ? }")  
```  
  
 I parametri di input e di output vengono specificati nella mappa dei parametri:  
  
```  
BEGIN_PARAM_MAP(CMySProcAccessor)  
   SET_PARAM_TYPE(DBPARAMIO_OUTPUT)  
   COLUMN_ENTRY(1, m_Phone)   // Phone is the return value  
   SET_PARAM_TYPE(DBPARAMIO_INPUT)  
   COLUMN_ENTRY(2, m_Name)   // Name is the input parameter  
END_PARAM_MAP()  
```  
  
 L'applicazione deve gestire l'output restituito dalle stored procedure.  Provider OLE DB diversi restituiscono parametri di output e valori in momenti diversi durante l'elaborazione dei risultati.  Il provider Microsoft OLE DB per SQL Server \(SQLOLEDB\), ad esempio, non fornisce parametri di output e codice restituito fino a quando il consumer non ha recuperato o annullato i gruppi di risultati restituiti dalla stored procedure.  L'output viene restituito nell'ultimo pacchetto TDS proveniente dal server.  
  
## Conteggio righe  
 Se si utilizzano i modelli consumer OLE DB per eseguire una stored procedure con parametri di output, il conteggio delle righe non verrà impostato fino a quando non si chiude il rowset.  
  
 Si consideri ad esempio una stored procedure con un rowset e un parametro di output:  
  
```  
create procedure sp_test  
   @_rowcount integer output  
as  
   select top 50 * from test  
   @_rowcount = @@rowcount  
return 0  
```  
  
 Il parametro di output @\_rowcount indica il numero delle righe effettivamente restituite dalla tabella test.  Tuttavia, questa stored procedure limita il numero di righe a 50.  Ad esempio, se fossero presenti 100 righe nel test, il conteggio delle righe sarebbe 50 \(perché questo codice recupera solo le prime 50 righe\).  Se fossero presenti solo 30 righe nella tabella, il conteggio delle righe sarebbe 30.  È necessario chiamare **Close** o **CloseAll** per popolare il parametro out prima di recuperare il relativo valore.  
  
## Vedere anche  
 [Utilizzo delle stored procedure](../../data/oledb/using-stored-procedures.md)