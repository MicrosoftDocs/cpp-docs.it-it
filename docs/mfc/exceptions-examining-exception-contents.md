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
ms.openlocfilehash: 7500db2a29f9d4ccef37b9265f5f2968c2d07993
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87217948"
---
# <a name="exceptions-examining-exception-contents"></a>Eccezioni: esame del contenuto delle eccezioni

Sebbene **`catch`** l'argomento di un blocco possa essere di quasi tutti i tipi di dati, le funzioni MFC generano eccezioni di tipi derivati dalla classe `CException` . Per intercettare un'eccezione generata da una funzione MFC, viene scritto un **`catch`** blocco il cui argomento è un puntatore a un `CException` oggetto (o un oggetto derivato da `CException` , ad esempio `CMemoryException` ). A seconda del tipo esatto dell'eccezione, è possibile esaminare i membri dati dell'oggetto eccezione per raccogliere informazioni sulla determinata ragione dell'eccezione.

Ad esempio, il `CFileException` tipo ha il `m_cause` membro dati, che contiene un tipo enumerato che specifica la ragione dell'eccezione del file. Alcuni esempi dei valori restituiti possibili sono `CFileException::fileNotFound` e `CFileException::readOnly` .

Nell'esempio seguente viene illustrato come esaminare il contenuto di un oggetto `CFileException` . Altri tipi di eccezioni possono essere esaminati in modo analogo.

[!code-cpp[NVC_MFCExceptions#13](codesnippet/cpp/exceptions-examining-exception-contents_1.cpp)]

Per ulteriori informazioni, vedere [Exceptions: Freeing Objects in Exceptions](exceptions-freeing-objects-in-exceptions.md) and [Exceptions: catching and Deleting Exceptions](exceptions-catching-and-deleting-exceptions.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](exception-handling-in-mfc.md)
