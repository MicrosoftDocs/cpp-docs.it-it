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
ms.openlocfilehash: 9a136caf3a1d22151cb9cfd48e1cd3f999ab51ec
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370494"
---
# <a name="handlers-for-standard-windows-messages"></a>Gestori per messaggi Windows standard

I gestori predefiniti per**WM_** i messaggi standard `CWnd`di Windows ( WM_ ) sono predefiniti nella classe . La libreria di classi basa i nomi per questi gestori sul nome del messaggio. Ad esempio, il gestore per `CWnd` il messaggio WM_PAINT viene dichiarato come:For example, the handler for the **message** message is declared in as:

`afx_msg void OnPaint();`

La **afx_msg** parola chiave suggerisce l'effetto della parola chiave `CWnd` **virtuale** di C, distinguendo i gestori dalle altre funzioni membro. Notare, tuttavia, che queste funzioni non sono effettivamente virtuali; vengono invece implementate attraverso le mappe messaggi. Le mappe messaggi dipendono unicamente da macro standard del preprocessore, non dalle estensioni del linguaggio C++. La parola chiave **afx_msg** viene risolta in spazi vuoti dopo la pre-elaborazione.

Per eseguire l'override di un gestore definito in una classe base, definire semplicemente una funzione con lo stesso prototipo nella classe derivata e creare una voce nella mappa messaggi per il gestore. Il gestore "esegue l'override" di qualsiasi gestore dello stesso nome in una qualsiasi delle classi base della classe.

In alcuni casi, il gestore deve chiamare il gestore sottoposto a override nella classe base in modo che la classe base e Windows possano agire sul messaggio. Il punto in cui chiamare il gestore della classe base nell'override dipende dalle circostanze. Talvolta è necessario chiamare il gestore della classe base all'inizio e altre volte alla fine. Talvolta è possibile chiamarlo in modo condizionale, se si sceglie di non gestire il messaggio personalmente. Talvolta è necessario chiamare il gestore della classe base, quindi in modo condizionale eseguire il proprio codice del gestore, a seconda del valore o dello stato restituito dal gestore della classe base.

> [!CAUTION]
> Non è sicuro modificare gli argomenti passati a un gestore se si intende passarli a un gestore di classe base. Ad esempio, si potrebbe essere tentati di `OnChar` modificare il *nChar* argomento del gestore (per convertire in maiuscolo, ad esempio). Questo comportamento è piuttosto oscuro, ma se è necessario `CWnd` ottenere `SendMessage` questo effetto, utilizzare invece la funzione membro.

Come determinare il modo corretto per eseguire l'override di un determinato messaggio Quando la `OnCreate` Creazione guidata [classe](reference/mfc-class-wizard.md) scrive lo scheletro della funzione del gestore per un determinato messaggio, ovvero un gestore per **WM_CREATE,** ad esempio, viene disegnato sotto forma di funzione membro sottoposta a override consigliata. Nell'esempio seguente è consigliabile che il gestore chiami prima il gestore della classe base e proceda solo a condizione che non restituisca -1.

[!code-cpp[NVC_MFCMessageHandling#3](../mfc/codesnippet/cpp/handlers-for-standard-windows-messages_1.cpp)]

Per convenzione, i nomi di questi gestori iniziano con il prefisso "On". Alcuni di questi gestori non accettano argomenti, mentre altri ne accettano diversi. Alcuni hanno anche un tipo restituito diverso da **void**. I gestori predefiniti per tutti i messaggi **WM_** sono documentati nel *riferimento MFC* come funzioni membro della classe `CWnd` i cui nomi iniziano con "On". Le dichiarazioni di `CWnd` funzioni membro in sono precedute da **afx_msg**.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di funzioni gestore messaggi](../mfc/declaring-message-handler-functions.md)
