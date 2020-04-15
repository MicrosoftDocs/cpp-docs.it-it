---
title: 'TN070: nomi delle classi di finestre MFC'
ms.date: 11/04/2016
helpviewer_keywords:
- window class names [MFC]
- TN070 [MFC]
ms.assetid: 90617912-dd58-4a7c-9082-ced71736d7cd
ms.openlocfilehash: ad43f5af5d2e90cb5fc2bc90f0909c2b495b4a4c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373493"
---
# <a name="tn070-mfc-window-class-names"></a>TN070: nomi delle classi di finestre MFC

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Le finestre MFC utilizzano un nome di classe creato dinamicamente che riflette le funzionalità della finestra. MFC genera nomi di classe in modo dinamico per le finestre cornice, visualizzazioni e finestre popup prodotte dall'applicazione. Le finestre di dialogo e i controlli prodotti da un'applicazione MFC hanno il nome fornito da Windows per la classe di window in questione.

È possibile sostituire il nome della classe fornito in modo dinamico registrando la propria classe finestra e utilizzandolo in un override di [PreCreateWindow](../mfc/reference/cwnd-class.md#precreatewindow). I nomi delle classi forniti da MFC rientrano in uno dei due formati seguenti:

```
Afx:%x:%x
Afx:%x:%x:%x:%x:%x
```

Le cifre esadecimali `%x` che sostituiscono i caratteri vengono compilate dai dati della struttura [WNDCLASS.](/windows/win32/api/winuser/ns-winuser-wndclassw) MFC utilizza questa tecnica in modo che più classi c'è che richiedono strutture **WNDCLASS** identiche possono condividere la stessa classe finestra registrata. A differenza della maggior parte delle applicazioni Win32 semplici, le applicazioni MFC dispongono di un solo **WNDPROC**, pertanto è possibile condividere facilmente strutture **WNDCLASS** per risparmiare tempo e memoria. I valori sostituibili per i `%x` caratteri mostrati sopra sono i seguenti:

- **WNDCLASS.hIstanza**

- **WNDCLASS.style**

- **WNDCLASS.hCursor (cursore)**

- **WNDCLASS.hbrBackground**

- **WNDCLASS.hIcon**

Il primo`Afx:%x:%x`form ( ) viene utilizzato quando **hCursor**, **hbrBackground**e **hIcon** sono tutti **NULL**.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)<br/>
[TN020: convenzioni di numerazione e denominazione ID](../mfc/tn020-id-naming-and-numbering-conventions.md)
