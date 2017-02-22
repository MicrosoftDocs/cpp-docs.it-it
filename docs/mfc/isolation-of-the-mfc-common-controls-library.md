---
title: "Isolamento della libreria di controlli comuni MFC | Microsoft Docs"
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
  - "MFC, libreria Controlli comuni"
ms.assetid: 7471e6f0-49b0-47f7-86e7-8d6bc3541694
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Isolamento della libreria di controlli comuni MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La libreria dei controlli comuni ora è isolata all'interno di MFC, consentendo così ai moduli diversi \(come DLL utente\) utilizzare le diverse versioni della libreria dei controlli comuni specifica la versione nei manifesti.  
  
 Un'applicazione MFC \(o codice utente chiamato da MFC\) effettua chiamate alle API di libreria di controlli comuni con le funzioni wrapper denominate `Afx`*FunctionName*, dove *FunctionName* è il nome dell'API controlli comuni.  Tali funzioni wrapper sono definite in afxcomctl32.h e in afxcomctl32.inl.  
  
 È possibile utilizzare macro di [AFX\_COMCTL32\_IF\_EXISTS2](../Topic/AFX_COMCTL32_IF_EXISTS2.md) e di [AFX\_COMCTL32\_IF\_EXISTS](../Topic/AFX_COMCTL32_IF_EXISTS.md) \(definite in afxcomctl32.h\) per determinare se la libreria controlli comuni implementa un determinato API anziché chiamare [GetProcAddress](../build/getprocaddress.md).  
  
 Tecnicamente, apportare le chiamate alle API tramite una classe wrapper, `CComCtlWrapper` della libreria dei controlli comuni \(definito da afxcomctl32.h\).  `CComCtlWrapper` è anche responsabile del caricamento e lo scaricamento di comctl32.dll.  Lo stato del modulo MFC contiene un puntatore a un'istanza di `CComCtlWrapper`.  È possibile accedere alla classe wrapper utilizzando la macro di `afxComCtlWrapper`.  
  
 Si noti che i controlli comuni chiamata API direttamente \(non utilizzare le funzioni wrapper MFC\) da un'applicazione MFC o da una DLL dell'utente verranno eseguite nella maggior parte dei casi, poiché l'applicazione MFC o la DLL utente è associata alla libreria dei controlli comuni ha richiesto nel manifesto\).  Tuttavia, il codice MFC stessa deve utilizzare i wrapper, poiché il codice MFC può essere chiamato da DLL dell'utente con versioni diverse della libreria controlli comuni.