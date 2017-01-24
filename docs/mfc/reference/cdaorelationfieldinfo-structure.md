---
title: "Struttura CDaoRelationFieldInfo | Microsoft Docs"
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
  - "CDaoRelationFieldInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoRelationFieldInfo (struttura)"
  - "DAO (Data Access Objects), raccolta Relations"
ms.assetid: 47cb89ca-dc80-47ce-96fd-cc4b88512558
caps.latest.revision: 13
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura CDaoRelationFieldInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `CDaoRelationFieldInfo` contiene informazioni su un campo in una relazione definita per gli oggetti di accesso ai dati \(DAO\).  
  
## Sintassi  
  
```  
  
      struct CDaoRelationFieldInfo  
{  
   CString m_strName;           // Primary  
   CString m_strForeignName;    // Primary  
};  
```  
  
#### Parametri  
 `m_strName`  
 Il nome del campo nella tabella primaria di una relazione.  
  
 `m_strForeignName`  
 Il nome del campo nella tabella esterna della relazione.  
  
## Note  
 Un oggetto relation di DAO specifica i campi di una tabella primaria e i campi di una tabella esterna che definisce la relazione.  I riferimenti a primario nella definizione della struttura sopra indicano quali le informazioni restituite in membro di `m_pFieldInfos` di un oggetto di [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) ottenuto chiamando la funzione membro di [GetRelationInfo](../Topic/CDaoDatabase::GetRelationInfo.md) di classe `CDaoDatabase`.  
  
 Gli oggetti di relazione e gli oggetti campo di relazione non sono rappresentati da una classe MFC.  Viceversa, gli oggetti di DAO che sono alla base degli oggetti MFC di classe [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) contengono una raccolta di oggetti relazione, chiamare la raccolta di relazioni.  Ogni oggetto relazione, a sua volta, contiene una raccolta di oggetti campo di una relazione.  Ogni oggetto di campo relazione con un campo della tabella primaria a un campo nella tabella esterna.  Insieme, gli oggetti campo di relazione definiscono un gruppo di campi per ogni tabella, che definiscono l'interattività la relazione.  `CDaoDatabase` consente di accedere agli oggetti di relazione con `CDaoRelationInfo` di input chiamando la funzione membro di `GetRelationInfo`.  L'oggetto di `CDaoRelationInfo`, quindi, ha un membro dati, `m_pFieldInfos`, che indica una matrice di oggetti di `CDaoRelationFieldInfo`.  
  
 Chiamare la funzione membro di [GetRelationInfo](../Topic/CDaoDatabase::GetRelationInfo.md) dell'oggetto contenitore di `CDaoDatabase` cui le relazioni la raccolta viene memorizzata l'oggetto di relazione che si è interessati.  Quindi accedere al membro di `m_pFieldInfos` dell'oggetto di [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md).  `CDaoRelationFieldInfo` definisce anche una funzione membro di `Dump` nelle build di debug.  È possibile utilizzare `Dump` per eseguire il dump del contenuto di un oggetto di `CDaoRelationFieldInfo`.  
  
## Requisiti  
 **Intestazione:** afxdao.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Struttura CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md)