---
title: 'Eccezioni: Esame del contenuto delle eccezioni | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- exception handling [MFC], MFC
- try-catch exception handling [MFC], MFC function exceptions
- catch blocks, MFC function exceptions
- CException class [MFC], class exceptions
- try-catch exception handling [MFC], exception contents
- throwing exceptions [MFC], exception contents
ms.assetid: dfda4782-b969-4f60-b867-cc204ea7f33a
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 953dd61247f7d14ad04d5d5f85529c89f3aaad9d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="exceptions-examining-exception-contents"></a>Eccezioni: esame del contenuto delle eccezioni
Sebbene un **catch** argomento del blocco può essere di qualsiasi tipo di dati, le funzioni MFC non generano eccezioni di tipi derivati dalla classe `CException`. Per rilevare un'eccezione generata da una funzione MFC, è possibile scrivere un **catch** blocco il cui argomento è un puntatore a un `CException` oggetto (o un oggetto derivato da `CException`, ad esempio `CMemoryException`). A seconda del tipo esatto dell'eccezione, è possibile esaminare i membri di dati dell'oggetto eccezione per raccogliere le informazioni sulla causa specifica dell'eccezione.  
  
 Ad esempio, il `CFileException` tipo ha il `m_cause` membro dati, che contiene un tipo enumerato che specifica la causa dell'eccezione di file. Alcuni esempi dei possibili valori restituiscono sono **CFileException** e **CFileException:: readonly**.  
  
 Nell'esempio seguente viene illustrato come esaminare il contenuto di un `CFileException`. Altri tipi di eccezione possono essere esaminati in modo analogo.  
  
 [!code-cpp[NVC_MFCExceptions#13](../mfc/codesnippet/cpp/exceptions-examining-exception-contents_1.cpp)]  
  
 Per ulteriori informazioni, vedere [eccezioni: rilascio di oggetti nelle eccezioni](../mfc/exceptions-freeing-objects-in-exceptions.md) e [eccezioni: eccezioni di intercettazione ed eliminazione](../mfc/exceptions-catching-and-deleting-exceptions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)

