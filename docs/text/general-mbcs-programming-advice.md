---
title: Suggerimenti generali sulla programmazione MBCS
ms.date: 11/04/2016
f1_keywords:
- _mbcs
helpviewer_keywords:
- MBCS [C++], dialog box fonts
- MS Shell Dlg
- MBCS [C++], programming
- dialog boxes [C++], fonts
ms.assetid: 7b541235-f3e5-4af0-b2c2-a0112cd5fbfb
ms.openlocfilehash: 800e94bfb8a52b806ad45368499f126fbf163389
ms.sourcegitcommit: ff3cbe4235b6c316edcc7677f79f70c3e784ad76
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/19/2018
ms.locfileid: "53626695"
---
# <a name="general-mbcs-programming-advice"></a>Suggerimenti generali sulla programmazione MBCS

Usare i suggerimenti seguenti:

- Per maggiore flessibilità, utilizzare le macro in fase di esecuzione, ad esempio `_tcschr` e `_tcscpy` quando possibile. Per altre informazioni, vedere [mapping testo generico in Tchar. h](../text/generic-text-mappings-in-tchar-h.md).

- Utilizza run-time di C `_getmbcp` funzione per ottenere informazioni su tabella codici corrente.

- Non riutilizzare le risorse stringa. A seconda del linguaggio di destinazione, una determinata stringa potrebbe avere un significato diverso quando convertito. Ad esempio, dal menu principale di "File" dell'applicazione può convertire in modo diverso rispetto alla stringa "File" in una finestra di dialogo. Se è necessario usare più di una stringa con lo stesso nome, usare ID di stringa diverso per ognuno.

- Si potrebbe voler scoprire se l'applicazione è in esecuzione in un sistema operativo basate su MBCS. A tale scopo, impostare un flag all'avvio del programma; non fare affidamento su chiamate API.

- Quando si progettano le finestre di dialogo, lasciare circa il 30% spazio vuoto alla fine dei controlli di testo statico per la conversione MBCS.

- Prestare attenzione quando si seleziona tipi di carattere per l'applicazione, perché alcuni tipi di carattere non sono disponibili in tutti i sistemi.

- Quando si seleziona il tipo di carattere per le finestre di dialogo, utilizzare [MS Shell Dlg](/windows/desktop/Intl/using-ms-shell-dlg-and-ms-shell-dlg-2) anziché Helvetica o MS Sans Serif. MS Shell Dlg viene sostituito con il tipo di carattere dal sistema prima di creare la finestra di dialogo. L'utilizzo di MS Shell Dlg assicura che tutte le modifiche nel sistema operativo per affrontare questo tipo di carattere saranno automaticamente disponibili. (MFC sostituito MS Shell Dlg DEFAULT_GUI_FONT o il carattere di sistema in Windows 95, Windows 98 e Windows NT 4 poiché tali sistemi non gestiscono correttamente MS Shell Dlg.)

- Quando si progetta l'applicazione, decidere quali stringhe possono essere localizzati. In caso di dubbio, si presuppone che qualsiasi stringa specificata verrà localizzato. Di conseguenza, non combinare le stringhe che possono essere localizzate con quelli che non è possibile.

## <a name="see-also"></a>Vedere anche

[Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)<br/>
[Incremento e decremento dei puntatori](../text/incrementing-and-decrementing-pointers.md)
