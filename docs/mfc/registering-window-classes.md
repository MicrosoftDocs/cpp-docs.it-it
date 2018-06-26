---
title: Registrazione di classi di finestra | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- WndProc
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2b2589db4d316d8421b0792e4a152e7fa390725f
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36927906"
---
# <a name="registering-window-classes"></a>Registrazione di classi di finestre
Le classi di finestra nella programmazione tradizionale per Windows definiscono le caratteristiche di una "classe" (non una classe C++) da cui è possibile creare un numero indeterminato di finestre. Questo tipo di classe è un template o un modello per la creazione di finestre.  
  
## <a name="window-class-registration-in-traditional-programs-for-windows"></a>Registrazione delle classi di finestra nei programmi tradizionali per Windows  
 In un programma tradizionale per Windows, senza MFC, elaborare tutti i messaggi a una finestra nella routine della finestra"" o "`WndProc`." Oggetto `WndProc` è associato a una finestra mediante un processo di "registrazione della classe di finestra". La finestra principale è registrata nella funzione `WinMain`, ma altre classi di finestre possono essere registrate in qualsiasi punto dell'applicazione. La registrazione si basa su una struttura che contiene un puntatore al `WndProc` funziona insieme alle specifiche del cursore, il pennello di sfondo e così via. La struttura viene passata come parametro, insieme al nome di stringa della classe, in una chiamata precedente al `RegisterClass` (funzione). Pertanto, una classe di registrazione può essere condivisa da più finestre.  
  
## <a name="window-class-registration-in-mfc-programs"></a>Registrazione della classe della finestra nei programmi MFC  
 In un programma con framework MFC, la maggior parte delle operazioni di registrazione della classe di finestra viene eseguita automaticamente. Se si utilizza MFC, solitamente la classe di finestra C++ viene derivata da una classe di libreria esistente utilizzando la normale sintassi di C++ per l'ereditarietà di classe. Nel framework sono utilizzate ancora le tradizionali "classi di registrazione" e sono fornite diverse classi standard che vengono registrate automaticamente all'occorrenza. È possibile registrare classi di registrazione aggiuntive chiamando il [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass) funzione globale e quindi passando la classe registrata per il `Create` funzione membro di `CWnd`. Come descritto in questo argomento, la tradizionale "classe di registrazione" di Windows non deve essere confusa con una classe C++.  
  
 Per altre informazioni, vedere [Nota tecnica 1](../mfc/tn001-window-class-registration.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di finestre](../mfc/creating-windows.md)

