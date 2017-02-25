---
title: "Funzione di callback per CDC::SetAbortProc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "Callback Function for CDC::SetAbortProc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni callback, per CDC::SetAbortProc"
ms.assetid: daa36d5d-15de-40fc-8d37-a865d06c4710
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Funzione di callback per CDC::SetAbortProc
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il nome *AbortFunc* è un segnaposto per il nome della funzione applicazione fornito.  
  
## Sintassi  
  
```  
  
      BOOL CALLBACK EXPORT AbortFunc(   
   HDC hPr,   
   int code    
);  
```  
  
#### Parametri  
 *hPr*  
 Identifica il contesto di dispositivo.  
  
 `code`  
 Specifica se si è verificato un errore.  È 0 se si è verificato alcun errore.  È **SP\_OUTOFDISK** se il Print Manager è attualmente da spazio su disco e più spazio su disco disponibile se diventerà resta in attesa dell'applicazione.  Se `code` è **SP\_OUTOFDISK**, l'applicazione non deve interrompere il processo di stampa.  In caso contrario, deve impostare il Print Manager chiamando la funzione Windows di **GetMessage** o di **PeekMessage**.  
  
## Valore restituito  
 Il valore restituito della funzione di relative gestore è diverso da zero se il processo di stampa è di continuare e 0 se viene annullata.  
  
## Note  
 Il nome effettivo devono essere esportati come descritto nella sezione relativa alle osservazioni di [CDC::SetAbortProc](../Topic/CDC::SetAbortProc.md).  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC::SetAbortProc](../Topic/CDC::SetAbortProc.md)