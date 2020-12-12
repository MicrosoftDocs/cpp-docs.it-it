---
description: 'Ulteriori informazioni su: suggerimenti generali sulla programmazione MBCS'
title: Suggerimenti generali sulla programmazione MBCS
ms.date: 11/04/2016
helpviewer_keywords:
- MBCS [C++], dialog box fonts
- MS Shell Dlg
- MBCS [C++], programming
- dialog boxes [C++], fonts
ms.assetid: 7b541235-f3e5-4af0-b2c2-a0112cd5fbfb
ms.openlocfilehash: 9ed4fcd4909b643e2c233482a420e82d01125efa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97187533"
---
# <a name="general-mbcs-programming-advice"></a>Suggerimenti generali sulla programmazione MBCS

Usare i suggerimenti seguenti:

- Per flessibilità, utilizzare macro di run-time quali `_tcschr` e, `_tcscpy` quando possibile. Per ulteriori informazioni, vedere [mapping di testo generico in TCHAR. h](../text/generic-text-mappings-in-tchar-h.md).

- Usare la funzione di runtime del linguaggio C `_getmbcp` per ottenere informazioni sulla tabella codici corrente.

- Non riutilizzare le risorse di stringa. A seconda della lingua di destinazione, una determinata stringa può avere un significato diverso quando viene tradotta. Ad esempio, "file" nel menu principale dell'applicazione potrebbe tradursi in modo diverso dalla stringa "file" in una finestra di dialogo. Se è necessario usare più di una stringa con lo stesso nome, usare ID di stringa diversi per ognuno di essi.

- Potrebbe essere necessario verificare se l'applicazione è in esecuzione in un sistema operativo abilitato per MBCS. A tale scopo, impostare un flag all'avvio del programma; non fare affidamento sulle chiamate API.

- Durante la progettazione di finestre di dialogo, consentire circa il 30% di spazio aggiuntivo alla fine dei controlli di testo statici per la conversione MBCS.

- Prestare attenzione quando si selezionano i tipi di carattere per l'applicazione, perché alcuni tipi di carattere non sono disponibili in tutti i sistemi.

- Quando si seleziona il tipo di carattere per le finestre di dialogo, utilizzare [MS Shell Dlg](/windows/win32/Intl/using-ms-shell-dlg-and-ms-shell-dlg-2) anziché MS Sans Serif o Helvetica. Prima di creare la finestra di dialogo, MS Shell Dlg viene sostituito con il tipo di carattere corretto dal sistema. L'utilizzo di MS Shell Dlg garantisce che tutte le modifiche apportate al sistema operativo per gestire questo tipo di carattere saranno disponibili automaticamente. MFC sostituisce MS Shell Dlg con il DEFAULT_GUI_FONT o il tipo di carattere del sistema in Windows 95, Windows 98 e Windows NT 4, perché tali sistemi non gestiscono correttamente MS Shell Dlg.

- Quando si progetta l'applicazione, decidere quali stringhe possono essere localizzate. In caso di dubbi, si supponga che qualsiasi stringa specificata venga localizzata. Di conseguenza, non combinare stringhe che possono essere localizzate con quelle che non possono.

## <a name="see-also"></a>Vedi anche

[Suggerimenti per la programmazione MBCS](../text/mbcs-programming-tips.md)<br/>
[Incremento e decremento di puntatori](../text/incrementing-and-decrementing-pointers.md)
