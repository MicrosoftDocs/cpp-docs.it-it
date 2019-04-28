---
title: Errore di runtime di C R6019
ms.date: 11/04/2016
f1_keywords:
- R6019
helpviewer_keywords:
- R6019
ms.assetid: 8129923e-7db2-40ee-9602-def9365f8d28
ms.openlocfilehash: 93d340b2a12a00420a9003429251387b2f04ad37
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62214102"
---
# <a name="c-runtime-error-r6019"></a>Errore di runtime di C R6019

Impossibile aprire il dispositivo console

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha provato a accedere alla console, ma non dispone di autorizzazioni sufficienti. Esistono diversi motivi possibili per questo errore, ma è in genere perché il programma deve essere eseguito come amministratore oppure è presente un bug nel programma.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Eseguire il programma come amministratore.
> - Usare la **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Cercare una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questo errore si verifica perché l'app chiamata una funzione di console, ma il sistema operativo non ha concesso l'accesso alla console. Eccetto in modalità di debug, le funzioni di console a livello generale non sono consentite nelle app di Microsoft Store. Se l'app richiede privilegi di amministratore per l'esecuzione, assicurarsi che sia installato per impostazione predefinita per l'esecuzione come amministratore.