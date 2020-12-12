---
description: 'Altre informazioni su: errore di runtime di C R6019'
title: Errore di runtime di C R6019
ms.date: 11/04/2016
f1_keywords:
- R6019
helpviewer_keywords:
- R6019
ms.assetid: 8129923e-7db2-40ee-9602-def9365f8d28
ms.openlocfilehash: 190b836d5c0823b3644e4ff49812b5de05f421e8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97237634"
---
# <a name="c-runtime-error-r6019"></a>Errore di runtime di C R6019

non è possibile aprire il dispositivo console

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha tentato di accedere alla console, ma non dispone di autorizzazioni sufficienti. Questo errore può essere dovuto a diversi motivi, ma in genere è dovuto al fatto che il programma deve essere eseguito come amministratore oppure è presente un bug nel programma.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Eseguire il programma come amministratore.
> - Utilizzare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Verificare la presenza di una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questo errore si verifica perché l'app ha chiamato una funzione console, ma il sistema operativo non ha concesso l'accesso alla console. Ad eccezione della modalità di debug, le funzioni console in genere non sono consentite nelle app Microsoft Store. Se l'app richiede privilegi di amministratore per l'esecuzione, assicurarsi che sia installato per l'esecuzione come amministratore per impostazione predefinita.
