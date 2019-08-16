---
title: Errore irreversibile C1084
ms.date: 11/04/2016
f1_keywords:
- C1084
helpviewer_keywords:
- C1084
ms.assetid: b2f273ef-3a14-4d5f-8ce0-7a11a0388fe6
ms.openlocfilehash: b0c8e6a8f8321dccdfd7cee128a4cf06cebda991
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69501125"
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