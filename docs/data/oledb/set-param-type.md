---
title: "SET_PARAM_TYPE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SET_PARAM_TYPE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SET_PARAM_TYPE (macro)"
ms.assetid: 85979070-2d55-4c67-94b1-9b9058babc59
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# SET_PARAM_TYPE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica le macro `COLUMN_ENTRY` che seguono la macro `SET_PARAM_TYPE` input, output o input\/output.  
  
## Sintassi  
  
```  
  
SET_PARAM_TYPE(  
type  
 )  
  
```  
  
#### Parametri  
 `type`  
 \[in\] Tipo da impostare per il parametro.  
  
## Note  
 I provider supportano solo i tipi di parametro input\/output supportati dall'origine dati sottostante. Il tipo è una combinazione di uno o più valori **DBPARAMIO**. Vedere [Strutture DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) in *OLE DB Programmer's Reference* \(Guida di riferimento per programmatori OLE DB\):  
  
-   **DBPARAMIO\_NOTPARAM** La funzione di accesso non dispone di parametri. In genere si imposta **eParamIO** su questo valore nelle funzioni di accesso alla riga, per ricordare all'utente che i parametri vengono ignorati.  
  
-   **DBPARAMIO\_INPUT** Parametro di input.  
  
-   **DBPARAMIO\_OUTPUT** Parametro di output.  
  
-   **DBPARAMIO\_INPUT &#124; DBPARAMIO\_OUTPUT** Parametro di input e di output.  
  
## Esempio  
 [!CODE [NVC_OLEDB_Consumer#18](../CodeSnippet/VS_Snippets_Cpp/NVC_OLEDB_Consumer#18)]  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)