---
title: Sviluppo di una funzione Helper | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- helper functions
ms.assetid: a845429d-68b1-4e14-aa88-f3f5343bd490
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d95434c51bdfca07e48714c8c1e13bcdb64dc02f
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45716001"
---
# <a name="developing-your-own-helper-function"></a>Sviluppo di una funzione di supporto personalizzata

È possibile fornire la propria versione della routine per eseguire elaborazioni specifiche in base ai nomi delle DLL o importazioni. Esistono due metodi di questa operazione: scrittura di codice personalizzata, eventualmente in base il codice fornito, oppure l'associazione della versione fornita con gli hook di notifica dettagliati in precedenza.

## <a name="code-your-own"></a>Codice personalizzati

Ciò è abbastanza semplice, poiché è possibile utilizzare il codice fornito essenzialmente come linea guida per quella nuova. Naturalmente, è necessario rispettare le convenzioni di chiamata e se viene restituito per il thunk generato dal linker, deve restituire un puntatore a funzione appropriata. Una volta nel codice, è possibile eseguire praticamente valore desiderato per soddisfare la chiamata o l'uscita da essa.

## <a name="use-the-start-processing-notification-hook"></a>Usare l'inizio l'elaborazione di Hook di notifica

Probabilmente sarà più semplice limitarsi a fornire un nuovo puntatore a una funzione di hook di notifica fornito dall'utente che riceve gli stessi valori di supporto predefinito su dliStartProcessing la notifica. A questo punto, la funzione hook essenzialmente può diventare la nuova funzione di supporto, come un caso di esito positivo al supporto predefinito possono ignorare ulteriori attività di elaborazione nell'helper predefinite.

## <a name="see-also"></a>Vedere anche

[Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)