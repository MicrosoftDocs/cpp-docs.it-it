---
title: Errore di runtime di C R6002
ms.date: 11/04/2016
f1_keywords:
- R6002
helpviewer_keywords:
- R6002
ms.assetid: 8fbbe65a-9c43-459e-8342-e1f6d1cef7d0
ms.openlocfilehash: b2e617b6f7841f1aa7e6fd2f6962c0e117fab6c8
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80197418"
---
# <a name="c-runtime-error-r6002"></a>Errore di runtime di C R6002

supporto a virgola mobile non caricato

La libreria a virgola mobile necessaria non è collegata.

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché presenta un problema interno. Questo errore può essere dovuto a diversi motivi, ma spesso è causato da un difetto nel codice dell'app o dal tentativo di eseguire un'app non compilata per un processore di computer specifico.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Utilizzare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Verificare la presenza di una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questo errore può verificarsi nell'app quando la libreria a virgola mobile non è collegata. Verificare la presenza di una delle seguenti cause:

- Una stringa di formato per una funzione `printf_s` o `scanf_s` contiene una specifica di formato a virgola mobile e il programma non contiene valori a virgola mobile o variabili. Per risolvere questo problema, usare un argomento a virgola mobile per corrispondere alla specifica di formato a virgola mobile o eseguire un'assegnazione a virgola mobile in un altro punto del programma. Questo comporta il caricamento del supporto a virgola mobile.

- Il compilatore riduce al minimo le dimensioni di un programma caricando il supporto a virgola mobile solo quando necessario. Il compilatore non è in grado di rilevare le operazioni a virgola mobile o le specifiche di formato a virgola mobile nelle stringhe di formato, quindi non carica le routine a virgola mobile necessarie. Per risolvere questo problema, usare una specifica di formato a virgola mobile e fornire un argomento a virgola mobile oppure eseguire un'assegnazione a virgola mobile in un'altra posizione nel programma. Questo comporta il caricamento del supporto a virgola mobile.

- In un programma in linguaggio misto è stata specificata una libreria C prima di una libreria FORTRAN quando il programma è stato collegato. Ricollegare e specificare l'ultima libreria C.
