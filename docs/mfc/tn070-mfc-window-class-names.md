---
title: 'TN070: Nomi delle classi di finestra MFC | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.mfc.classes
dev_langs:
- C++
helpviewer_keywords:
- window class names [MFC]
- TN070 [MFC]
ms.assetid: 90617912-dd58-4a7c-9082-ced71736d7cd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c66c434503bbd2c6d7ee1b0557fa73d843e0caaa
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="tn070-mfc-window-class-names"></a>TN070: nomi delle classi di finestre MFC
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Windows MFC utilizzare un nome di classe creata dinamicamente che riflette le funzionalità della finestra. MFC genera i nomi delle classi in modo dinamico per le finestre cornice, visualizzazioni e finestre popup generate dall'applicazione. Finestre di dialogo e controlli prodotti da un'applicazione MFC hanno il nome fornito a Windows per la classe della finestra in questione.  
  
 È possibile sostituire il nome di classe specificato in modo dinamico la propria classe di finestra di registrazione e l'uso in un override di [PreCreateWindow](../mfc/reference/cwnd-class.md#precreatewindow). I nomi di classe specificato MFC soddisfare uno dei due formati seguenti:  
  
```  
Afx:%x:%x  
Afx:%x:%x:%x:%x:%x  
```  
  
 Le cifre esadecimali che sostituiscono il `%x` caratteri vengono compilati dai dati di [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576) struttura. MFC utilizza questa tecnica, in modo che più classi C++ che richiedono identici **WNDCLASS** strutture possono condividere la stessa classe finestra registrati. A differenza di molte applicazioni Win32 semplice, le applicazioni MFC è presente un solo **WNDPROC**, pertanto è possibile condividere facilmente **WNDCLASS** strutture per risparmiare tempo e memoria. I valori sostituibili per il `%x` caratteri illustrati in precedenza sono i seguenti:  
  
- **WNDCLASS.hInstance**  
  
- **WNDCLASS.style**  
  
- **WNDCLASS.hCursor**  
  
- **WNDCLASS.hbrBackground**  
  
- **WNDCLASS.hIcon**  
  
 Il primo form (`Afx:%x:%x`) viene utilizzato quando **hCursor**, **hbrBackground**, e **icona** sono tutti **NULL**.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)   
 [TN020: convenzioni di numerazione e denominazione ID](../mfc/tn020-id-naming-and-numbering-conventions.md)

