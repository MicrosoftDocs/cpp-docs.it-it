---
title: 'TN070: Nomi delle classi di finestre MFC'
ms.date: 11/04/2016
helpviewer_keywords:
- window class names [MFC]
- TN070 [MFC]
ms.assetid: 90617912-dd58-4a7c-9082-ced71736d7cd
ms.openlocfilehash: 1d9b5de07bcc2545df6294557d1ac9f9d29e856c
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69513351"
---
# <a name="tn070-mfc-window-class-names"></a>TN070: Nomi delle classi di finestre MFC

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Windows MFC utilizza un nome di classe creato dinamicamente che riflette le funzionalità della finestra. MFC genera in modo dinamico i nomi delle classi per le finestre cornice, le visualizzazioni e le finestre popup prodotte dall'applicazione. Le finestre di dialogo e i controlli prodotti da un'applicazione MFC hanno il nome fornito da Windows per la classe della finestra in questione.

È possibile sostituire il nome di classe fornito dinamicamente registrando la classe della finestra e usandola in un override di [PreCreateWindow](../mfc/reference/cwnd-class.md#precreatewindow). I nomi delle classi fornite da MFC si adattano a uno dei due formati seguenti:

```
Afx:%x:%x
Afx:%x:%x:%x:%x:%x
```

Le cifre esadecimali che sostituiscono i `%x` caratteri vengono compilate dai dati della struttura [WNDCLASS](/windows/win32/api/winuser/ns-winuser-wndclassw) . MFC utilizza questa tecnica in modo che C++ più classi che richiedono strutture **WNDCLASS** identiche possano condividere la stessa classe di finestre registrate. A differenza della maggior parte delle applicazioni Win32 semplici, le applicazioni MFC hanno solo un **WndProc**, quindi è possibile condividere facilmente le strutture **WNDCLASS** per risparmiare tempo e memoria. I valori sostituibili per i `%x` caratteri indicati sopra sono i seguenti:

- **WNDCLASS. hInstance**

- **WNDCLASS. Style**

- **WNDCLASS. hCursor**

- **WNDCLASS. hbrBackground**

- **WNDCLASS. hIcon**

Il primo form (`Afx:%x:%x`) viene usato quando **hCursor**, **hbrBackground**e **HICON** sono tutti **null**.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)<br/>
[TN020: convenzioni di numerazione e denominazione ID](../mfc/tn020-id-naming-and-numbering-conventions.md)
