---
title: Registrazione di classi di finestra | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: WndProc
dev_langs: C++
helpviewer_keywords:
- window classes [MFC], registering
- registry [MFC], registering classes
- AfxRegisterWndClass method [MFC]
- MFC, windows
- WinMain method [MFC], and registering window classes
- WndProc method [MFC]
- classes [MFC], registering window classes
- WinMain method [MFC]
- registering window classes [MFC]
ms.assetid: 30994bc4-a362-43da-bcc5-1bf67a3fc929
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 92f5673aac014abdd4fd19425d9ae849f64284ea
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="registering-window-classes"></a>Registrazione di classi di finestre
Le classi di finestra nella programmazione tradizionale per Windows definiscono le caratteristiche di una "classe" (non una classe C++) da cui è possibile creare un numero indeterminato di finestre. Questo tipo di classe è un template o un modello per la creazione di finestre.  
  
## <a name="window-class-registration-in-traditional-programs-for-windows"></a>Registrazione delle classi di finestra nei programmi tradizionali per Windows  
 In un programma tradizionale per Windows, senza MFC, elaborare tutti i messaggi a una finestra nella routine della finestra"" o "**WndProc**." Oggetto **WndProc** è associata a una finestra mediante un processo di "registrazione della classe di finestra". La finestra principale è registrata nella funzione `WinMain`, ma altre classi di finestre possono essere registrate in qualsiasi punto dell'applicazione. La registrazione dipende da una struttura che contiene un puntatore al **WndProc** funziona insieme alle specifiche per il pennello di sfondo, cursore e così via. La struttura viene passata come parametro, insieme al nome di stringa della classe, in una chiamata precedente al **RegisterClass** (funzione). Pertanto, una classe di registrazione può essere condivisa da più finestre.  
  
## <a name="window-class-registration-in-mfc-programs"></a>Registrazione della classe della finestra nei programmi MFC  
 In un programma con framework MFC, la maggior parte delle operazioni di registrazione della classe di finestra viene eseguita automaticamente. Se si utilizza MFC, solitamente la classe di finestra C++ viene derivata da una classe di libreria esistente utilizzando la normale sintassi di C++ per l'ereditarietà di classe. Nel framework sono utilizzate ancora le tradizionali "classi di registrazione" e sono fornite diverse classi standard che vengono registrate automaticamente all'occorrenza. È possibile registrare le classi di registrazione aggiuntive chiamando la [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass) funzione globale e quindi passando la classe registrata per il **crea** funzione membro di `CWnd`. Come descritto in questo argomento, la tradizionale "classe di registrazione" di Windows non deve essere confusa con una classe C++.  
  
 Per ulteriori informazioni, vedere [Nota tecnica 1](../mfc/tn001-window-class-registration.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di finestre](../mfc/creating-windows.md)

