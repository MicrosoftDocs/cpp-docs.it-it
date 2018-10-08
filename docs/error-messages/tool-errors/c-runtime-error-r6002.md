---
title: Errore di Runtime di C da R6002 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6002
dev_langs:
- C++
helpviewer_keywords:
- R6002
ms.assetid: 8fbbe65a-9c43-459e-8342-e1f6d1cef7d0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cde499e919a7b222a41229576ef3b2d37d55d648
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48860643"
---
# <a name="c-runtime-error-r6002"></a>Errore di Runtime di C da R6002

supporto a virgola mobile non caricato

La libreria necessaria a virgola mobile non è stata collegata.

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha un problema interno. Esistono diversi motivi possibili per questo errore, ma spesso è causato da un difetto del codice dell'app o dal tentativo di eseguire un'app che non è stata compilata per il processore del computer specifico.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Usare la **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Cercare una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questo errore può verificarsi nell'app quando la libreria a virgola mobile non è stata collegata. Cercare uno di questi elementi determina:

- Una stringa di formato per un `printf_s` o `scanf_s` funzione contiene una specifica di formato a virgola mobile e il programma non contiene i valori a virgola mobile o le variabili. Per risolvere questo problema, usare un argomento a virgola mobile in modo che corrispondano alla specifica di formato a virgola mobile, o eseguire un'assegnazione a virgola mobile in un punto del programma. In questo modo il supporto a virgola mobile da caricare.

- Il compilatore riduce al minimo le dimensioni di un programma mediante il caricamento di supporto a virgola mobile solo quando necessario. Il compilatore non può rilevare operazioni a virgola mobile o specifiche di formato a virgola mobile in stringhe di formato, in modo che non è possibile caricare le routine necessarie a virgola mobile. Per risolvere questo problema, utilizzare una specifica di formato a virgola mobile e fornire un argomento a virgola mobile oppure eseguire un'assegnazione a virgola mobile in un punto del programma. In questo modo il supporto a virgola mobile da caricare.

- In un programma più linguaggi, una libreria C è stata specificata prima di una libreria di FORTRAN quando il programma è stato collegato. Ricollegare e specificare la libreria C ultima.