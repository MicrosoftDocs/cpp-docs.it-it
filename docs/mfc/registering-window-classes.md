---
description: 'Altre informazioni su: registrazione delle classi di finestra'
title: Registrazione di classi di finestre
ms.date: 11/04/2016
f1_keywords:
- WndProc
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
ms.openlocfilehash: e31f83b691ad12d845afca6a3a5f18d9ba64b0e6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97218192"
---
# <a name="registering-window-classes"></a>Registrazione di classi di finestre

Le classi di finestra nella programmazione tradizionale per Windows definiscono le caratteristiche di una "classe" (non una classe C++) da cui è possibile creare un numero indeterminato di finestre. Questo tipo di classe è un template o un modello per la creazione di finestre.

## <a name="window-class-registration-in-traditional-programs-for-windows"></a>Registrazione delle classi di finestra nei programmi tradizionali per Windows

In un programma tradizionale per Windows, senza MFC, si elaborano tutti i messaggi in una finestra nella relativa procedura "finestra" o " `WndProc` ." Un oggetto `WndProc` è associato a una finestra mediante un processo di "registrazione della classe di finestra". La finestra principale è registrata nella funzione `WinMain`, ma altre classi di finestre possono essere registrate in qualsiasi punto dell'applicazione. La registrazione dipende da una struttura che contiene un puntatore alla `WndProc` funzione insieme alle specifiche per il cursore, il pennello di sfondo e così via. La struttura viene passata come parametro, insieme al nome di stringa della classe, in una chiamata precedente alla `RegisterClass` funzione. Pertanto, una classe di registrazione può essere condivisa da più finestre.

## <a name="window-class-registration-in-mfc-programs"></a>Registrazione della classe della finestra nei programmi MFC

In un programma con framework MFC, la maggior parte delle operazioni di registrazione della classe di finestra viene eseguita automaticamente. Se si utilizza MFC, solitamente la classe di finestra C++ viene derivata da una classe di libreria esistente utilizzando la normale sintassi di C++ per l'ereditarietà di classe. Nel framework sono utilizzate ancora le tradizionali "classi di registrazione" e sono fornite diverse classi standard che vengono registrate automaticamente all'occorrenza. È possibile registrare altre classi di registrazione chiamando la funzione globale [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass) e passando la classe registrata alla `Create` funzione membro di `CWnd` . Come descritto in questo argomento, la tradizionale "classe di registrazione" di Windows non deve essere confusa con una classe C++.

Per ulteriori informazioni, vedere la [Nota tecnica 1](../mfc/tn001-window-class-registration.md).

## <a name="see-also"></a>Vedi anche

[Creazione di finestre](../mfc/creating-windows.md)
