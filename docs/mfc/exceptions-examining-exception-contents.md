---
title: 'Eccezioni: esame del contenuto delle eccezioni'
ms.date: 11/04/2016
helpviewer_keywords:
- exception handling [MFC], MFC
- try-catch exception handling [MFC], MFC function exceptions
- catch blocks, MFC function exceptions
- CException class [MFC], class exceptions
- try-catch exception handling [MFC], exception contents
- throwing exceptions [MFC], exception contents
ms.assetid: dfda4782-b969-4f60-b867-cc204ea7f33a
ms.openlocfilehash: 4355a575f29741d0c7b9f1e12e40ca9d977219b8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50630069"
---
# <a name="exceptions-examining-exception-contents"></a>Eccezioni: esame del contenuto delle eccezioni

Anche se un **intercettare** argomento del blocco può essere di qualsiasi tipo di dati, le funzioni MFC generano le eccezioni di tipi derivati dalla classe `CException`. Per intercettare un'eccezione generata da una funzione di MFC, quindi, si scrive un **intercettare** blocchi il cui argomento è un puntatore a un `CException` oggetto (o un oggetto derivato da `CException`, come `CMemoryException`). A seconda del tipo esatto dell'eccezione, è possibile esaminare i membri dati dell'oggetto eccezione per raccogliere informazioni sulla causa specifica dell'eccezione.

Ad esempio, il `CFileException` è di tipo i `m_cause` membro dei dati, che contiene un tipo enumerato che specifica la causa dell'eccezione di file. Alcuni esempi di possibili valori restituiscono sono `CFileException::fileNotFound` e `CFileException::readOnly`.

Nell'esempio seguente viene illustrato come esaminare il contenuto di un `CFileException`. Altri tipi di eccezione possono essere esaminati in modo analogo.

[!code-cpp[NVC_MFCExceptions#13](../mfc/codesnippet/cpp/exceptions-examining-exception-contents_1.cpp)]

Per altre informazioni, vedere [eccezioni: rilascio di oggetti nelle eccezioni](../mfc/exceptions-freeing-objects-in-exceptions.md) e [alle eccezioni: eccezioni di intercettazione ed eliminazione](../mfc/exceptions-catching-and-deleting-exceptions.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)

