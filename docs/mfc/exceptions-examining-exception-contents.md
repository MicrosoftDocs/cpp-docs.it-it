---
title: "Eccezioni: esame del contenuto delle eccezioni | Microsoft Docs"
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
  - "blocchi catch, eccezioni di funzioni MFC"
  - "CException (classe), eccezioni di classe"
  - "gestione eccezioni, MFC"
  - "generazione di eccezioni, contenuto delle eccezioni"
  - "gestione eccezioni try-catch, contenuto delle eccezioni"
  - "gestione eccezioni try-catch, eccezioni di funzioni MFC"
ms.assetid: dfda4782-b969-4f60-b867-cc204ea7f33a
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Eccezioni: esame del contenuto delle eccezioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sebbene argomento di un blocco di **Catch** possa essere di qualsiasi tipo di dati, le funzioni MFC generano eccezioni dei tipi derivati dalla classe `CException`.  Per intercettare un'eccezione generata da una funzione MFC, quindi, scrivere un blocco di **Catch** di cui l'argomento è un puntatore a un oggetto di `CException` \(o a un oggetto derivato da `CException`, come `CMemoryException`\).  A seconda del tipo esatto di eccezione, è possibile esaminare i membri dati dell'oggetto eccezione per raccogliere informazioni sulla causa specifica dell'eccezione.  
  
 Ad esempio, il tipo di `CFileException` ha il membro dati di `m_cause`, che contiene un tipo enumerato che specifica la causa dell'eccezione di file.  Alcuni esempi di restituire valori possibili sono **CFileException::fileNotFound** e **CFileException::readOnly**.  
  
 Nell'esempio seguente viene illustrato come esaminare il contenuto di `CFileException`.  Altri tipi di eccezione possono essere esaminati nello stesso modo.  
  
 [!code-cpp[NVC_MFCExceptions#13](../mfc/codesnippet/CPP/exceptions-examining-exception-contents_1.cpp)]  
  
 Per ulteriori informazioni, vedere [Eccezioni: Versione degli oggetti delle eccezioni](../mfc/exceptions-freeing-objects-in-exceptions.md) e [Eccezioni: Rilevazione e l'eliminazione delle eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md).  
  
## Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)