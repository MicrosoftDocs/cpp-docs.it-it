---
title: "CCommand::GetNextResult | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CCommand::GetNextResult"
  - "CCommand::GetNextResult"
  - "GetNextResult"
  - "CCommand.GetNextResult"
  - "ATL.CCommand.GetNextResult"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetNextResult (metodo)"
ms.assetid: 63df9b55-9490-45c4-934a-879c5c2725d8
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCommand::GetNextResult
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera il gruppo di risultati seguente si ne è disponibile.  
  
## Sintassi  
  
```  
  
      HRESULT GetNextResult(  
   DBROWCOUNT* pulRowsAffected,  
   bool bBind = true   
) throw( );  
```  
  
#### Parametri  
 *pulRowsAffected*  
 \[in\/out\] un puntatore alla memoria in cui il numero di righe interessate da un comando viene restituito.  
  
 `bBind`  
 \[in\] specifica se associare il comando automaticamente dopo l'esecuzione.  L'impostazione predefinita è **true**, che causa il comando essere associato automaticamente.  L'impostazione `bBind` a **false** impedisce l'associazione automatica di comando per associare a esso le manualmente. \(L'associazione manuale è di particolare interesse per gli utenti di OLAP.\)  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Se un gruppo di risultati in precedenza è stato recuperato, versioni di questa funzione il gruppo di risultati precedente e separa le colonne.  Se `bBind` è **true**, associare nuove colonne.  
  
 È consigliabile chiamare questa funzione solo se è stato specificato risultati più impostando il parametro di template `CCommand`*TMultiple*\=`CMultipleResults`.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CCommand](../../data/oledb/ccommand-class.md)