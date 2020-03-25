---
title: Errore irreversibile C1084
ms.date: 11/04/2016
f1_keywords:
- C1084
helpviewer_keywords:
- C1084
ms.assetid: b2f273ef-3a14-4d5f-8ce0-7a11a0388fe6
ms.openlocfilehash: 649686857000b2bee469f0e3ec551d49717c1d7b
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80204074"
---
# <a name="fatal-error-c1084"></a>Errore irreversibile C1084

Impossibile leggere il file tipofile: 'file': messaggio

In genere questo errore è causato da un chiamata API del sistema interno non riuscita effettuata dal compilatore. Il messaggio visualizzato quando viene rilevato questo errore viene spesso generato da [_wcserror_s](../../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md) o [FormatMessage](/windows/win32/api/winbase/nf-winbase-formatmessage).

Per tentare di risolvere l'errore C1084, eseguire i passaggi seguenti:

- Assicurarsi che il file specificato esista.

- Assicurarsi che siano impostate le autorizzazioni appropriate per accedere al file specificato.

- Verificare che la sintassi della riga di comando rispetti le regole descritte nella sintassi della [riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md).

- Verificare che le variabili di ambiente **tmp** e **Temp** siano impostate correttamente, nonché le autorizzazioni appropriate per accedere alle directory a cui fanno riferimento le variabili di ambiente. Assicurarsi inoltre che le unità a cui fanno riferimento le variabili di ambiente **tmp** e **Temp** contengano una quantità di spazio disponibile adeguata.

- Se viene visualizzato il messaggio "Numero di file non valido", è possibile che il file specificato sia stato chiuso in primo piano durante la compilazione in background.

Dopo aver eseguito le operazioni di diagnostica riportate sopra, eseguire una compilazione pulita.
