---
title: 'Eccezioni: Generazione di eccezioni da funzioni personalizzate | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- throwing exceptions [MFC], from functions
- functions [MFC], throwing exceptions
- exceptions [MFC], throwing
ms.assetid: 492976e8-8804-4234-8e8f-30dffd0501be
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a6ef86f54442031b4383e6a0b8cc6f57e4e53d58
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46418424"
---
# <a name="exceptions-throwing-exceptions-from-your-own-functions"></a>Eccezioni: generazione di eccezioni da funzioni personalizzate

È possibile usare il paradigma di gestione delle eccezioni MFC esclusivamente per rilevare le eccezioni generate dalle funzioni MFC o altre librerie. Oltre a intercettare le eccezioni generate dal codice della libreria, è possibile generare eccezioni dal codice se si siano scrivendo funzioni che possono verificarsi condizioni eccezionali.

Quando viene generata un'eccezione, l'esecuzione della funzione corrente viene arrestata e passa direttamente al **catch** blocco della cornice di eccezione più interna. Il meccanismo delle eccezioni consente di ignorare il percorso di chiusura normale da una funzione. Pertanto, è necessario assicurarsi di eliminare i blocchi di memoria che verranno eliminati in una chiusura normale.

#### <a name="to-throw-an-exception"></a>Per generare un'eccezione

1. Usare una delle funzioni di supporto MFC, ad esempio `AfxThrowMemoryException`. Queste funzioni generano un oggetto eccezione preallocate del tipo appropriato.

     Nell'esempio seguente, una funzione tenta di allocare due blocchi di memoria e genera un'eccezione se l'allocazione ha esito negativo:

     [!code-cpp[NVC_MFCExceptions#17](../mfc/codesnippet/cpp/exceptions-throwing-exceptions-from-your-own-functions_1.cpp)]

     Se la prima allocazione ha esito negativo, è possibile semplicemente generare l'eccezione di memoria. Se la prima allocazione ha esito positivo ma il secondo non riesce, è necessario liberare il primo blocco di allocazione prima che venga generata l'eccezione. Se entrambe le allocazioni abbia esito positivo, è possibile procedere normalmente e liberare i blocchi quando si esce dalla funzione.

     - oppure -

1. Usare un'eccezione definita dall'utente per indicare una condizione di problema. È possibile generare un elemento di qualsiasi tipo, anche un'intera classe, come l'eccezione.

     Nell'esempio seguente tenta di riprodurre un suono tramite una periferica e genera un'eccezione se si verifica un errore.

     [!code-cpp[NVC_MFCExceptions#18](../mfc/codesnippet/cpp/exceptions-throwing-exceptions-from-your-own-functions_2.cpp)]

> [!NOTE]
>  MFC la gestione predefinita delle eccezioni si applica solo ai puntatori a `CException` oggetti (e gli oggetti di `CException`-le classi derivate). Nell'esempio precedente consente di ignorare il meccanismo di eccezioni MFC.

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)

