---
title: 'Eccezioni: generazione di eccezioni da funzioni personalizzate'
ms.date: 11/04/2016
helpviewer_keywords:
- throwing exceptions [MFC], from functions
- functions [MFC], throwing exceptions
- exceptions [MFC], throwing
ms.assetid: 492976e8-8804-4234-8e8f-30dffd0501be
ms.openlocfilehash: cdcdd63e84d4b375c44c2b89bf2d4f3285b0323c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223187"
---
# <a name="exceptions-throwing-exceptions-from-your-own-functions"></a>Eccezioni: generazione di eccezioni da funzioni personalizzate

È possibile utilizzare il paradigma di gestione delle eccezioni MFC esclusivamente per intercettare le eccezioni generate dalle funzioni in MFC o in altre librerie. Oltre ad intercettare le eccezioni generate dal codice della libreria, è possibile generare eccezioni dal proprio codice se si scrivono funzioni che possono verificarsi condizioni eccezionali.

Quando viene generata un'eccezione, l'esecuzione della funzione corrente viene arrestata e passa direttamente al **`catch`** blocco del frame dell'eccezione più interna. Il meccanismo di eccezione ignora il percorso di uscita normale da una funzione. Pertanto, è necessario assicurarsi di eliminare i blocchi di memoria che verrebbero eliminati in una normale uscita.

#### <a name="to-throw-an-exception"></a>Per generare un'eccezione

1. Usare una delle funzioni helper MFC, ad esempio `AfxThrowMemoryException` . Queste funzioni generano un oggetto eccezione preallocato del tipo appropriato.

   Nell'esempio seguente una funzione tenta di allocare due blocchi di memoria e genera un'eccezione se l'allocazione ha esito negativo:

   [!code-cpp[NVC_MFCExceptions#17](codesnippet/cpp/exceptions-throwing-exceptions-from-your-own-functions_1.cpp)]

   Se la prima allocazione ha esito negativo, è possibile generare semplicemente l'eccezione di memoria. Se la prima allocazione ha esito positivo, ma la seconda ha esito negativo, è necessario liberare il primo blocco di allocazione prima di generare l'eccezione. Se entrambe le allocazioni hanno esito positivo, è possibile procedere normalmente e liberare i blocchi quando si esce dalla funzione.

     - - oppure -

1. Usare un'eccezione definita dall'utente per indicare una condizione di problema. Come eccezione, è possibile generare un elemento di qualsiasi tipo, anche di un'intera classe.

   Nell'esempio seguente viene effettuato un tentativo di riprodurre un suono tramite un dispositivo wave e viene generata un'eccezione se si verifica un errore.

   [!code-cpp[NVC_MFCExceptions#18](codesnippet/cpp/exceptions-throwing-exceptions-from-your-own-functions_2.cpp)]

> [!NOTE]
> La gestione predefinita delle eccezioni di MFC si applica solo ai puntatori agli `CException` oggetti e agli oggetti delle `CException` classi derivate da. Nell'esempio precedente viene ignorato il meccanismo di eccezione di MFC.

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](exception-handling-in-mfc.md)
