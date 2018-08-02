---
title: Limitazioni ai gestori di terminazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- termination handlers [C++], limitations
- restrictions, termination handlers
- try-catch keyword [C++], termination handlers
ms.assetid: 8b1cb481-303f-4e79-b409-57a002a9fa9e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3ae16363956afc7cca853307ef2888846a02864d
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39461770"
---
# <a name="restrictions-on-termination-handlers"></a>Limitazioni ai gestori di terminazione
Non è possibile usare una **goto** istruzione di passare in un **try** blocco di istruzioni o un **finally** blocco di istruzioni. È tuttavia necessario inserire il blocco di istruzioni attraverso il normale flusso di controllo. (È possibile, tuttavia, passare direttamente su un **try** blocco di istruzioni.) Inoltre, è possibile annidare un gestore di eccezioni o un gestore di terminazione all'interno di un **finally** blocco.  
  
 Inoltre, alcuni tipi di codice consentiti in un gestore di terminazione producono risultati inaffidabili, pertanto è necessario utilizzarli con cautela. Uno è un **goto** istruzione che esegue il salto una **finally** blocco di istruzioni. Se il blocco viene eseguito come parte della terminazione normale, non si verifica nulla di anomalo. Tuttavia, se il sistema sta eseguendo la rimozione dello stack, tale rimozione viene arrestata e la funzione corrente acquisisce il controllo come se non si fosse verificata alcuna terminazione anomala.  
  
 Oggetto **restituire** istruzione all'interno di un **finally** blocco di istruzioni presenta all'incirca la stessa situazione. Il controllo torna al chiamante della funzione contenente il gestore di terminazione. Nel caso in cui il sistema stesse eseguendo la rimozione dello stack, tale processo viene interrotto e il programma procede come se non fosse stata generata alcuna eccezione.  
  
## <a name="see-also"></a>Vedere anche  
 [Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)   
 [Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)