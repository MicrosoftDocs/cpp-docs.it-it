---
title: Gestori per messaggi Windows standard
ms.date: 11/04/2016
f1_keywords:
- afx_msg
helpviewer_keywords:
- Windows messages [MFC], handlers
- message handling [MFC], Windows message handlers
- handler functions, standard Windows messages
- functions [MFC], handler
- messages [MFC], Windows
ms.assetid: 19412a8b-2c38-4502-81da-13c823c7e36c
ms.openlocfilehash: 4f512c3b9a7fce5cddd582fa774742d2b1ac0967
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907434"
---
# <a name="handlers-for-standard-windows-messages"></a>Gestori per messaggi Windows standard

I gestori predefiniti per i messaggi Windows standard (**WM_** ) sono predefiniti nella classe `CWnd`. La libreria di classi basa i nomi per questi gestori sul nome del messaggio. Ad esempio, il gestore per il messaggio **WM_PAINT** viene dichiarato in `CWnd` come:

`afx_msg void OnPaint();`

La parola chiave **afx_msg** suggerisce l'effetto della C++ parola chiave **Virtual** distinguendo i gestori da altre `CWnd` funzioni membro. Notare, tuttavia, che queste funzioni non sono effettivamente virtuali; vengono invece implementate attraverso le mappe messaggi. Le mappe messaggi dipendono unicamente da macro standard del preprocessore, non dalle estensioni del linguaggio C++. La parola chiave **afx_msg** viene risolta in uno spazio vuoto dopo la pre-elaborazione.

Per eseguire l'override di un gestore definito in una classe base, definire semplicemente una funzione con lo stesso prototipo nella classe derivata e creare una voce nella mappa messaggi per il gestore. Il gestore "esegue l'override" di qualsiasi gestore dello stesso nome in una qualsiasi delle classi base della classe.

In alcuni casi, il gestore deve chiamare il gestore sottoposto a override nella classe base in modo che la classe base e Windows possano agire sul messaggio. Il punto in cui chiamare il gestore della classe base nell'override dipende dalle circostanze. Talvolta è necessario chiamare il gestore della classe base all'inizio e altre volte alla fine. Talvolta è possibile chiamarlo in modo condizionale, se si sceglie di non gestire il messaggio personalmente. Talvolta è necessario chiamare il gestore della classe base, quindi in modo condizionale eseguire il proprio codice del gestore, a seconda del valore o dello stato restituito dal gestore della classe base.

> [!CAUTION]
>  Non è sicuro modificare gli argomenti passati a un gestore se si intende passarli a un gestore di classe base. Ad esempio, si potrebbe essere tentati di modificare l'argomento *nchar* del `OnChar` gestore (per la conversione in maiuscolo, ad esempio). Questo comportamento è piuttosto oscuro, ma se è necessario eseguire questo effetto, usare invece la `CWnd` funzione `SendMessage` membro.

Come determinare la modalità appropriata per eseguire l'override di un determinato messaggio quando la [creazione guidata classe](reference/mfc-class-wizard.md) scrive la struttura della funzione del gestore per un determinato messaggio `OnCreate` , ad esempio un gestore per **WM_CREATE**, che disegna sotto forma di funzione membro sottoposta a override. Nell'esempio seguente viene consigliato che il gestore chiami prima il gestore della classe base e proceda solo sulla condizione che non restituisce-1.

[!code-cpp[NVC_MFCMessageHandling#3](../mfc/codesnippet/cpp/handlers-for-standard-windows-messages_1.cpp)]

Per convenzione, i nomi di questi gestori iniziano con il prefisso "On". Alcuni di questi gestori non accettano argomenti, mentre altri ne accettano diversi. Alcuni hanno anche un tipo restituito diverso da **void**. I gestori predefiniti per tutti i messaggi **WM_** sono documentati nel *riferimento MFC* come funzioni membro della classe `CWnd` i cui nomi iniziano con "on". Le dichiarazioni di funzione membro in `CWnd` sono precedute dal prefisso **afx_msg**.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di funzioni gestore messaggi](../mfc/declaring-message-handler-functions.md)
