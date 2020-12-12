---
description: 'Altre informazioni su: sviluppo della funzione di supporto'
title: Sviluppo di una funzione di supporto personalizzata
ms.date: 11/04/2016
helpviewer_keywords:
- helper functions
ms.assetid: a845429d-68b1-4e14-aa88-f3f5343bd490
ms.openlocfilehash: da536d13da9a596c5667c3fa84311b73e66d71ac
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97201456"
---
# <a name="developing-your-own-helper-function"></a>Sviluppo di una funzione di supporto personalizzata

Potrebbe essere necessario fornire la propria versione della routine per eseguire un'elaborazione specifica in base ai nomi della DLL o alle importazioni. Questa operazione può essere eseguita in due modi: codificare i propri, possibilmente in base al codice fornito, o semplicemente associare la versione fornita usando gli hook di notifica descritti in precedenza.

## <a name="code-your-own"></a>Codice personalizzato

Si tratta di un'operazione piuttosto semplice, in quanto è possibile utilizzare il codice fornito come linee guida per la nuova. Naturalmente, deve rispettare le convenzioni di chiamata e se restituisce ai thunk generati dal linker, deve restituire un puntatore a funzione appropriato. Una volta nel codice, è possibile eseguire tutte le operazioni desiderate per soddisfare la chiamata o uscire dalla chiamata.

## <a name="use-the-start-processing-notification-hook"></a>Usare l'hook di notifica avvia elaborazione

Probabilmente sarà più semplice fornire semplicemente un nuovo puntatore a una funzione hook di notifica fornita dall'utente che riceve gli stessi valori dell'helper predefinito nella notifica dliStartProcessing. A questo punto, la funzione hook può diventare essenzialmente la nuova funzione di supporto, perché un ritorno all'helper predefinito ignorerà tutte le altre elaborazioni nell'helper predefinito.

## <a name="see-also"></a>Vedi anche

[Supporto del linker per le DLL di Delay-Loaded](linker-support-for-delay-loaded-dlls.md)
