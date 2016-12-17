---
title: "Struttura CDaoIndexFieldInfo | Microsoft Docs"
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
  - "CDaoIndexFieldInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoIndexFieldInfo (struttura)"
  - "DAO (Data Access Objects), raccolta campi indice"
ms.assetid: 097ee8a6-83b1-4db7-8f05-d62a2deefe19
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura CDaoIndexFieldInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura `CDaoIndexFieldInfo` contiene informazioni su un oggetto campo indice definito per gli oggetti di accesso ai dati \(DAO\).  
  
## Sintassi  
  
```  
  
      struct CDaoIndexFieldInfo  
{  
   CString m_strName;          // Primary  
   BOOL m_bDescending;         // Primary  
};  
```  
  
#### Parametri  
 `m_strName`  
 Nominare in modo univoco gli oggetto campo indice.  Per informazioni dettagliate, vedere l'argomento "Proprietà Nome" nella Guida DAO.  
  
 *m\_bDescending*  
 Indica l'ordinamento indice definito dall'oggetto indice.  **TRUE** se l'ordine è discendente.  
  
## Note  
 Un oggetto indice può avere una serie di campi, per indicare su quali campi un tabledef \(o un recordset basato su una tabella\) è indicizzato.  I riferimenti ai primari sopra indicano quali informazioni sono restituite nel membro `m_pFieldInfos` di un oggetto [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) ottenuto chiamando la funzione membro `GetIndexInfo` di classe [CDaoTableDef](../Topic/CDaoTableDef::GetIndexInfo.md) o [CDaoRecordset](../Topic/CDaoRecordset::GetIndexInfo.md).  
  
 Gli oggetti indice e gli oggetti campo indice non sono rappresentati da una classe MFC.  Viceversa, gli oggetti DAO che sono alla base degli oggetti MFC di classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) contengono una raccolta di oggetti indice, chiamata raccolta indici.  Ogni oggetto indice, a sua volta, contiene una raccolta di oggetti campo.  Queste classi forniscono le funzioni membro per accedere ai singoli elementi di informazioni sull'indice, oppure è possibile accedervi contemporaneamente con un oggetto `CDaoIndexInfo` chiamando la funzione membro `GetIndexInfo` dell'oggetto contenitore.  L'oggetto `CDaoIndexInfo`, quindi, ha un membro dati, `m_pFieldInfos`, che punta ad un array di oggetti `CDaoIndexFieldInfo`.  
  
 Chiamare la funzione membro `GetIndexInfo` dell'oggetto tabledef o recordset contenente la raccolta indici in cui è memorizzato l'oggetto indice interessato.  Quindi accedere al membro `m_pFieldInfos` dell'oggetto [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md).  Lunghezza dell'array `m_pFieldInfos` è archiviata in `m_nFields`.  `CDaoIndexFieldInfo` definisce anche una funzione membro `Dump` nelle compilazioni di debug.  Si può utilizzare `Dump` per eseguire il dump del contenuto di un oggetto `CDaoIndexFieldInfo`.  
  
## Requisiti  
 **Intestazione:** afxdao.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoTableDef::GetIndexInfo](../Topic/CDaoTableDef::GetIndexInfo.md)   
 [CDaoRecordset::GetIndexInfo](../Topic/CDaoRecordset::GetIndexInfo.md)