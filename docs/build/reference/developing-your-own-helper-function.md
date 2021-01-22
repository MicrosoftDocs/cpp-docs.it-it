---
description: Altre informazioni sullo sviluppo di una funzione di supporto per il caricamento ritardato
title: Sviluppare una funzione di supporto per il caricamento ritardato
ms.date: 01/19/2021
helpviewer_keywords:
- helper functions
ms.openlocfilehash: 2845a426023ed8b5e2bcfb0056c9be6b829dd23a
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98667429"
---
# <a name="develop-your-own-delay-load-helper-function"></a>Sviluppare una funzione di supporto per il caricamento ritardato

Potrebbe essere necessario fornire una versione personalizzata della routine di supporto per il caricamento ritardato. Nella propria routine è possibile eseguire operazioni di elaborazione specifiche in base ai nomi della DLL o alle importazioni. Esistono due modi per inserire il proprio codice: scrivere il codice della funzione di supporto, possibilmente in base al codice fornito. In alternativa, associare l'helper fornito per chiamare una funzione personalizzata usando gli [hook di notifica](notification-hooks.md).

## <a name="code-your-own-helper"></a>Codificare il proprio Helper

La creazione di una routine di supporto è semplice. È possibile usare il codice esistente come guida per la nuova funzione. La funzione deve usare le stesse convenzioni di chiamata dell'helper esistente. E, se viene restituito ai thunk generati dal linker, deve restituire un puntatore a funzione appropriato. Una volta creato il codice, è possibile soddisfare la chiamata o uscire dalla chiamata, tuttavia si desidera.

## <a name="use-the-start-processing-notification-hook"></a>Usare l'hook di notifica avvia elaborazione

È probabilmente più semplice fornire un nuovo puntatore a una funzione hook di notifica fornita dall'utente che accetta gli stessi valori dell'helper predefinito per la `dliStartProcessing` notifica. A questo punto, la funzione hook può diventare essenzialmente la nuova funzione helper, perché un ritorno all'helper predefinito ignora tutte le altre elaborazioni nell'helper predefinito.

## <a name="see-also"></a>Vedi anche

[Supporto per le DLL a caricamento ritardato nel linker](linker-support-for-delay-loaded-dlls.md)
