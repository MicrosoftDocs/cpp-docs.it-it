---
title: 'Eccezioni: generazione di eccezioni da funzioni personalizzate'
ms.date: 11/04/2016
helpviewer_keywords:
- throwing exceptions [MFC], from functions
- functions [MFC], throwing exceptions
- exceptions [MFC], throwing
ms.assetid: 492976e8-8804-4234-8e8f-30dffd0501be
ms.openlocfilehash: 6484594df7636fd52ac46ab1cc212c8e2ec0278e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81359281"
---
# <a name="exceptions-throwing-exceptions-from-your-own-functions"></a>Eccezioni: generazione di eccezioni da funzioni personalizzate

È possibile utilizzare il paradigma di gestione delle eccezioni MFC esclusivamente per intercettare le eccezioni generate dalle funzioni in MFC o altre librerie. Oltre a intercettare le eccezioni generate dal codice della libreria, è possibile generare eccezioni dal proprio codice se si scrivono funzioni che possono verificarsi condizioni eccezionali.

Quando viene generata un'eccezione, l'esecuzione della funzione corrente viene interrotta e passa direttamente al blocco **catch** del frame di eccezione più interno. Il meccanismo di eccezione ignora il percorso di uscita normale da una funzione. Pertanto, è necessario assicurarsi di eliminare i blocchi di memoria che verrebbero eliminati in un'uscita normale.

#### <a name="to-throw-an-exception"></a>Per generare un'eccezioneTo throw an exception

1. Utilizzare una delle funzioni di `AfxThrowMemoryException`supporto MFC, ad esempio . Queste funzioni generano un oggetto eccezione preallocato del tipo appropriato.

   Nell'esempio seguente, una funzione tenta di allocare due blocchi di memoria e genera un'eccezione se una delle allocazioni ha esito negativo:In the following example, a function tries to allocate two memory blocks and throws an exception if either allocation fails:

   [!code-cpp[NVC_MFCExceptions#17](../mfc/codesnippet/cpp/exceptions-throwing-exceptions-from-your-own-functions_1.cpp)]

   Se la prima allocazione ha esito negativo, è possibile semplicemente generare l'eccezione di memoria. Se la prima allocazione ha esito positivo ma la seconda ha esito negativo, è necessario liberare il primo blocco di allocazione prima di generare l'eccezione. Se entrambe le allocazioni hanno esito positivo, è possibile procedere normalmente e liberare i blocchi all'uscita dalla funzione.

     - - oppure -

1. Utilizzare un'eccezione definita dall'utente per indicare una condizione di problema. È possibile generare un elemento di qualsiasi tipo, anche un'intera classe, come eccezione.

   L'esempio seguente tenta di riprodurre un suono tramite un dispositivo onda e genera un'eccezione in caso di errore.

   [!code-cpp[NVC_MFCExceptions#18](../mfc/codesnippet/cpp/exceptions-throwing-exceptions-from-your-own-functions_2.cpp)]

> [!NOTE]
> La gestione predefinita delle eccezioni di MFC `CException` si applica `CException`solo ai puntatori agli oggetti (e agli oggetti delle classi derivate). Nell'esempio precedente viene ignorato il meccanismo di eccezione di MFC.

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)
