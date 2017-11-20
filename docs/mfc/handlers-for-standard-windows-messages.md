---
title: Gestori per messaggi Windows Standard | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: afx_msg
dev_langs: C++
helpviewer_keywords:
- Windows messages [MFC], handlers
- message handling [MFC], Windows message handlers
- handler functions, standard Windows messages
- functions [MFC], handler
- messages [MFC], Windows
ms.assetid: 19412a8b-2c38-4502-81da-13c823c7e36c
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 05545ee760092f8a8b3a243dc67acd212c1bb7cc
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="handlers-for-standard-windows-messages"></a>Gestori per messaggi Windows standard
I gestori predefiniti per i messaggi di Windows standard (**WM _**) sono già definiti nella classe `CWnd`. La libreria di classi basa i nomi per questi gestori sul nome del messaggio. Ad esempio, il gestore del messaggio `WM_PAINT` viene dichiarato in `CWnd` come:  
  
 `afx_msg void OnPaint();`  
  
 Il **afx_msg** (parola chiave) suggerisce l'effetto di C++ **virtuale** parola chiave distinguendo i gestori da altre `CWnd` funzioni membro. Notare, tuttavia, che queste funzioni non sono effettivamente virtuali; vengono invece implementate attraverso le mappe messaggi. Le mappe messaggi dipendono unicamente da macro standard del preprocessore, non dalle estensioni del linguaggio C++. Il **afx_msg** (parola chiave) risolve in uno spazio vuoto dopo la pre-elaborazione.  
  
 Per eseguire l'override di un gestore definito in una classe base, definire semplicemente una funzione con lo stesso prototipo nella classe derivata e creare una voce nella mappa messaggi per il gestore. Il gestore "esegue l'override" di qualsiasi gestore dello stesso nome in una qualsiasi delle classi base della classe.  
  
 In alcuni casi, il gestore deve chiamare il gestore sottoposto a override nella classe base in modo che la classe base e Windows possano agire sul messaggio. Il punto in cui chiamare il gestore della classe base nell'override dipende dalle circostanze. Talvolta è necessario chiamare il gestore della classe base all'inizio e altre volte alla fine. Talvolta è possibile chiamarlo in modo condizionale, se si sceglie di non gestire il messaggio personalmente. Talvolta è necessario chiamare il gestore della classe base, quindi in modo condizionale eseguire il proprio codice del gestore, a seconda del valore o dello stato restituito dal gestore della classe base.  
  
> [!CAUTION]
>  Non è sicuro modificare gli argomenti passati a un gestore se si intende passarli a un gestore di classe base. Si potrebbe ad esempio essere tentati di modificare l'argomento `nChar` del gestore `OnChar` (per effettuare la conversione in maiuscolo, ad esempio). Questo comportamento è molto chiaro, ma se è necessario ottenere questo risultato, usare il `CWnd` funzione membro **SendMessage** invece.  
  
 Come si determina il modo corretto per eseguire l'override di un determinato messaggio quando la finestra Proprietà scrive lo scheletro della funzione del gestore per un determinato messaggio, ovvero un `OnCreate` gestore per `WM_CREATE`, ad esempio, crea sotto forma di consigliata funzione membro viene sottoposto a override. L'esempio seguente consiglia che il gestore prima chiamare il gestore della classe di base e procedere solo a condizione che non viene restituito -1.  
  
 [!code-cpp[NVC_MFCMessageHandling#3](../mfc/codesnippet/cpp/handlers-for-standard-windows-messages_1.cpp)]  
  
 Per convenzione, i nomi di questi gestori iniziano con il prefisso "On". Alcuni di questi gestori non accettano argomenti, mentre altri ne accettano diversi. Alcuni dispongono inoltre di un tipo restituito diverso da `void`. I gestori predefiniti per tutti i **WM _** messaggi sono documentati nel *riferimenti alla libreria MFC* come funzioni membro di classe `CWnd` i cui nomi iniziano con "On". Le dichiarazioni di funzione membro in `CWnd` sono precedute dal prefisso **afx_msg**.  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni di funzioni gestore messaggi](../mfc/declaring-message-handler-functions.md)
