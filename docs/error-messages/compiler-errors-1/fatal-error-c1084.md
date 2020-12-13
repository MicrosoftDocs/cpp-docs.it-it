---
description: 'Altre informazioni su: errore irreversibile C1084'
title: Errore irreversibile C1084
ms.date: 11/04/2016
f1_keywords:
- C1084
helpviewer_keywords:
- C1084
ms.assetid: b2f273ef-3a14-4d5f-8ce0-7a11a0388fe6
ms.openlocfilehash: 6a3221bb894c0b320642a923d9552a207a2ff9ed
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97145314"
---
# <a name="fatal-error-c1084"></a>Errore irreversibile C1084

Impossibile leggere il file tipofile: 'file': messaggio

In genere questo errore è causato da un chiamata API del sistema interno non riuscita effettuata dal compilatore. Il messaggio visualizzato quando viene rilevato questo errore viene spesso generato da [_wcserror_s](../../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md) o [FormatMessage](/windows/win32/api/winbase/nf-winbase-formatmessage).

Per tentare di risolvere l'errore C1084, eseguire i passaggi seguenti:

- Assicurarsi che il file specificato esista.

- Assicurarsi che siano impostate le autorizzazioni appropriate per accedere al file specificato.

- Verificare che la sintassi della riga di comando rispetti le regole descritte nella [sintassi del Command-Line del compilatore](../../build/reference/compiler-command-line-syntax.md).

- Verificare che le variabili di ambiente **tmp** e **Temp** siano impostate correttamente, nonché le autorizzazioni appropriate per accedere alle directory a cui fanno riferimento le variabili di ambiente. Assicurarsi inoltre che le unità a cui fanno riferimento le variabili di ambiente **tmp** e **Temp** contengano una quantità di spazio disponibile adeguata.

- Se viene visualizzato il messaggio "Numero di file non valido", è possibile che il file specificato sia stato chiuso in primo piano durante la compilazione in background.

Dopo aver eseguito le operazioni di diagnostica riportate sopra, eseguire una compilazione pulita.
