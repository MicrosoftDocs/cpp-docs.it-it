---
title: 'Eccezioni: Generazione di eccezioni da funzioni personalizzate | Documenti Microsoft'
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
ms.openlocfilehash: dae6f2c0d1cab021cc91854a34f10423a1122dec
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="exceptions-throwing-exceptions-from-your-own-functions"></a>Eccezioni: generazione di eccezioni da funzioni personalizzate
È possibile utilizzare il paradigma comune della gestione delle eccezioni MFC unicamente per intercettare le eccezioni generate dalle funzioni MFC o in altre librerie. Oltre a intercettare le eccezioni generate dal codice di libreria, è possibile generare eccezioni dal proprio codice per la scrittura di funzioni che possono verificarsi condizioni eccezionali.  
  
 Quando viene generata un'eccezione, l'esecuzione della funzione corrente viene arrestata e passa direttamente il **catch** blocco della cornice di eccezione più interna. Il meccanismo delle eccezioni consente di ignorare il percorso di chiusura normale da una funzione. Pertanto, è necessario assicurarsi di eliminare i blocchi di memoria che verranno eliminati in una chiusura normale.  
  
#### <a name="to-throw-an-exception"></a>Per generare un'eccezione  
  
1.  Utilizzare una delle funzioni di supporto MFC, ad esempio `AfxThrowMemoryException`. Queste funzioni generano un oggetto eccezione preallocato del tipo appropriato.  
  
     Nell'esempio seguente, una funzione tenta di allocare due blocchi di memoria e genera un'eccezione se l'allocazione ha esito negativo:  
  
     [!code-cpp[NVC_MFCExceptions#17](../mfc/codesnippet/cpp/exceptions-throwing-exceptions-from-your-own-functions_1.cpp)]  
  
     Se la prima allocazione non riesce, è possibile semplicemente generare l'eccezione di memoria. Se la prima allocazione ha esito positivo ma non il secondo, è necessario liberare il primo blocco di allocazione prima che venga generata l'eccezione. Se entrambe le allocazioni esito negativo, è possibile continuare normalmente e liberare i blocchi quando si esce dalla funzione.  
  
     - oppure -  
  
2.  Utilizzare un'eccezione definita dall'utente per indicare una condizione del problema. È possibile generare un elemento di qualsiasi tipo, anche un'intera classe, come l'eccezione.  
  
     Nell'esempio seguente tenta di riprodurre un suono attraverso un dispositivo wave e genera un'eccezione se si è verificato un errore.  
  
     [!code-cpp[NVC_MFCExceptions#18](../mfc/codesnippet/cpp/exceptions-throwing-exceptions-from-your-own-functions_2.cpp)]  
  
> [!NOTE]
>  MFC gestione predefinita di eccezioni si applica solo ai puntatori a `CException` oggetti (e gli oggetti di `CException`-classi derivate). L'esempio precedente consente di ignorare il meccanismo di eccezioni MFC.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)

