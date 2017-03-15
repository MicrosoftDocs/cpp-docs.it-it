---
title: "Gestori per messaggi Windows standard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "afx_msg"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni [C++], gestore"
  - "funzioni di gestione, messaggi Windows standard"
  - "gestione dei messaggi [C++], gestori dei messaggi Windows"
  - "messaggi [C++], Windows"
  - "messaggi Windows [C++], gestori"
ms.assetid: 19412a8b-2c38-4502-81da-13c823c7e36c
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Gestori per messaggi Windows standard
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I gestori predefiniti per i messaggi standard di Windows \(**WM\_**\) sono già definiti nella classe `CWnd`.  La libreria di classi basa i nomi per questi gestori sul nome del messaggio.  Ad esempio, il gestore del messaggio `WM_PAINT` viene dichiarato in `CWnd` come:  
  
 `afx_msg void OnPaint();`  
  
 La parola chiave **afx\_msg** suggerisce l'effetto della parola chiave C\+\+ **virtual** distinguendo i gestori da altre funzioni membro `CWnd`.  Notare, tuttavia, che queste funzioni non sono effettivamente virtuali; vengono invece implementate dalle mappe messaggi.  Le mappe messaggi dipendono unicamente da macro standard del preprocessore, non dalle estensioni del linguaggio C\+\+.  La parola chiave **afx\_msg** risolve in spazio vuoto dopo la pre\-elaborazione.  
  
 Per eseguire l'override di un gestore definito in una classe base, definire semplicemente una funzione con lo stesso prototipo nella classe derivata e fare una voce della mappa messaggi per il gestore.  Il gestore "esegue l'override" di qualsiasi gestore dello stesso nome in una qualsiasi delle classi base della classe.  
  
 In alcuni casi, il gestore deve chiamare il gestore sottoposto a override nella classe base in modo che la classe base e Windows possano operare nel messaggio.  Quando si chiama il gestore della classe base nell'override dipende da condizioni.  Talvolta è necessario chiamare il gestore della classe base all'inizio e altre volte alla fine.  Talvolta è possibile chiamare in modo condizionale il gestore della classe base, se si sceglie di non gestire il messaggio.  Talvolta è necessario chiamare un gestore di classi base, quindi in modo condizionale eseguire il codice del gestore, a seconda del valore o dello stato restituito dal gestore della classe base.  
  
> [!CAUTION]
>  Non è sicuro modificare gli argomenti passati ad un gestore se si intende passarli a un gestore di classi base.  Ad esempio, si potrebbe essere tentati di modificare l'argomento `nChar` del gestore `OnChar` \(per convertire in maiuscolo, ad esempio\).  Questo comportamento è abbastanza presente, ma se è necessario ottenere questo risultato, utilizzare la funzione membro **SendMessage** di `CWnd` invece.  
  
 Come si determina la modalità appropriata per eseguire l'override di un messaggio specificato?  Quando la finestra Proprietà scrive lo scheletro della funzione di gestione per un messaggio specificato \- un gestore `OnCreate` per `WM_CREATE`, ad esempio \- schizza sotto forma di funzione membro consigliata su cui è stato eseguito l'override.  L'esempio seguente consiglia che il gestore chiami prima il gestore della classe base e continui solo a condizione che non restituisca \-1.  
  
 [!code-cpp[NVC_MFCMessageHandling#3](../mfc/codesnippet/CPP/handlers-for-standard-windows-messages_1.cpp)]  
  
 Per convenzione, i nomi di questi gestori iniziano con il prefisso "On". Alcuni di questi gestori non accettano argomenti, mentre altri ne accettano diversi.  Alcuni dispongono inoltre di un tipo restituito diverso da `void`.  I gestori predefiniti per tutti i messaggi **WM\_** sono documentati nei *Riferimenti alla libreria MFC* come funzioni membro di classe `CWnd` dei cui nomi iniziano con "On". Le dichiarazioni di funzione membro in `CWnd` sono caratterizzate da **afx\_msg**.  
  
## Vedere anche  
 [Dichiarazioni di funzioni gestore messaggi](../mfc/declaring-message-handler-functions.md)