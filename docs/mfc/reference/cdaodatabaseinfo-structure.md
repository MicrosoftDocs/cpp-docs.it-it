---
title: "Struttura CDaoDatabaseInfo | Microsoft Docs"
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
  - "CDaoDatabaseInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoDatabaseInfo (struttura)"
  - "DAO (Data Access Objects), Database (raccolta)"
ms.assetid: 68e9e0da-8382-4fc6-8115-1b1519392ddb
caps.latest.revision: 14
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura CDaoDatabaseInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `CDaoDatabaseInfo` contiene informazioni su un oggetto di database definito per gli oggetti di accesso ai dati \(DAO\).  
  
## Sintassi  
  
```  
  
      struct CDaoDatabaseInfo  
{  
   CString m_strName;       // Primary  
   BOOL m_bUpdatable;       // Primary  
   BOOL m_bTransactions;    // Primary  
   CString m_strVersion;    // Secondary  
   long m_lCollatingOrder;  // Secondary  
   short m_nQueryTimeout;   // Secondary  
   CString m_strConnect;    // All  
};  
```  
  
#### Parametri  
 `m_strName`  
 In modo univoco assegnare all'oggetto di database.  Per recuperare direttamente questa proprietà, chiamare [CDaoDatabase::GetName](../Topic/CDaoDatabase::GetName.md).  Per informazioni dettagliate, vedere l'argomento "proprietà name" nella Guida di DAO.  
  
 `m_bUpdatable`  
 Indica se le modifiche possono essere apportate al database.  Per recuperare direttamente questa proprietà, chiamare [CDaoDatabase::CanUpdate](../Topic/CDaoDatabase::CanUpdate.md).  Per informazioni dettagliate, vedere l'argomento "proprietà" aggiornabile nella Guida di DAO.  
  
 *m\_bTransactions*  
 Indica se l'origine dati supporta le transazioni \- la registrazione di una serie di modifiche che possono essere successivamente ripristinato lo stato \(annullato\) o essere eseguito il commit \(salvato\).  Se un database si basa sul modulo di gestione di database Microsoft Jet, la proprietà di transazioni è diversa da zero e le transazioni.  Altri moduli di database non possono supportare le transazioni.  Per recuperare direttamente questa proprietà, chiamare [CDaoDatabase::CanTransact](../Topic/CDaoDatabase::CanTransact.md).  Per informazioni dettagliate, vedere l'argomento "proprietà di transazioni" nella Guida di DAO.  
  
 *m\_strVersion*  
 Indica la versione del modulo di gestione di database Microsoft Jet.  Per recuperare direttamente il valore di questa proprietà, chiamare la funzione membro di [GetVersion](../Topic/CDaoDatabase::GetVersion.md) di oggetti di database.  Per informazioni dettagliate, vedere l'argomento "proprietà version" nella Guida di DAO.  
  
 `m_lCollatingOrder`  
 Specifica la sequenza delle operazioni di ordinamento in testo per il confronto di stringhe o l'ordinamento.  I valori possibili includono:  
  
-   utilizzo di**dbSortGeneral**Spagnolo \(inglese, francese, tedesco, italiano, portoghese e moderno\) l'ordinamento generale.  
  
-   utilizzo di**dbSortArabic**l'ordinamento arabo.  
  
-   utilizzo di**dbSortCyrillic**l'ordinamento russo.  
  
-   utilizzo di**dbSortCzech**l'ordinamento lingua.  
  
-   utilizzo di**dbSortDutch** l'ordinamento olandese.  
  
-   utilizzo di**dbSortGreek**l'ordinamento greco.  
  
-   utilizzo di**dbSortHebrew**l'ordinamento ebraico.  
  
-   utilizzo di**dbSortHungarian**l'ordinamento ungherese.  
  
-   utilizzo di**dbSortIcelandic**l'ordinamento islandese.  
  
-   utilizzo di**dbSortNorwdan**l'ordinamento norvegese o danese.  
  
-   utilizzo di**dbSortPDXIntl**l'ordinamento internazionali di Paradox.  
  
-   utilizzo di**dbSortPDXNor** ordinamento norvegese o danese di Paradox.  
  
-   utilizzo di**dbSortPDXSwe** ordinamento svedese o finlandese di Paradox.  
  
-   utilizzo di**dbSortPolish**l'ordinamento polacco.  
  
-   utilizzo di**dbSortSpanish**l'ordinamento spagnolo.  
  
-   utilizzo di**dbSortSwedFin**l'ordinamento svedese o finlandese.  
  
-   utilizzo di**dbSortTurkish**l'ordinamento turco.  
  
-   **dbSortUndefined** l'ordinamento è definito o sconosciuto.  
  
 Per ulteriori informazioni, vedere l'argomento "personalizzare le impostazioni del Registro di sistema di Windows per l'accesso ai dati" nella Guida di DAO.  
  
 *m\_nQueryTimeout*  
 Il numero di secondi che il modulo di gestione di database Microsoft Jet attesa prima che un errore di timeout si verifica quando una query viene eseguito in un database ODBC.  Il valore di timeout predefinito è 60 secondi.  Quando QueryTimeout è impostato su 0, il timeout non si verifica; è possibile che il programma a blocchi.  Per recuperare direttamente il valore di questa proprietà, chiamare la funzione membro di [GetQueryTimeout](../Topic/CDaoDatabase::GetQueryTimeout.md) di oggetti di database.  Per informazioni dettagliate, vedere l'argomento "proprietà di QueryTimeout" nella Guida di DAO.  
  
 `m_strConnect`  
 Vengono fornite informazioni sull'origine di un database aperto.  Per informazioni sulla connessione stringhe e per informazioni sul recupero del valore di questa proprietà direttamente, vedere la funzione membro di [CDaoDatabase::GetConnect](../Topic/CDaoDatabase::GetConnect.md).  Per ulteriori informazioni, vedere l'argomento "connettere la proprietà" nella Guida di DAO.  
  
## Note  
 Il database è un oggetto di DAO sottostante a un oggetto MFC di classe [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md).  I riferimenti a principale, secondario e a tutti su indicano quali le informazioni restituite dalla funzione membro di [CDaoWorkspace::GetDatabaseInfo](../Topic/CDaoWorkspace::GetDatabaseInfo.md).  
  
 Le informazioni recuperate dalla funzione membro di [CDaoWorkspace::GetDatabaseInfo](../Topic/CDaoWorkspace::GetDatabaseInfo.md) vengono archiviate in una struttura di `CDaoDatabaseInfo`.  Chiamata `GetDatabaseInfo` per l'oggetto di cui `CDaoWorkspace` nella raccolta dei database l'oggetto di database verrà archiviato.  `CDaoDatabaseInfo` definisce anche una funzione membro di `Dump` nelle build di debug.  È possibile utilizzare `Dump` per eseguire il dump del contenuto di un oggetto di `CDaoDatabaseInfo`.  
  
## Requisiti  
 **Intestazione:** afxdao.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoWorkspace Class](../../mfc/reference/cdaoworkspace-class.md)   
 [CDaoDatabase Class](../../mfc/reference/cdaodatabase-class.md)   
 [CDaoWorkspace::GetDatabaseCount](../Topic/CDaoWorkspace::GetDatabaseCount.md)