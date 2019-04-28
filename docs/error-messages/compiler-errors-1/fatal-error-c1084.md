---
title: Errore irreversibile C1084
ms.date: 11/04/2016
f1_keywords:
- C1084
helpviewer_keywords:
- C1084
ms.assetid: b2f273ef-3a14-4d5f-8ce0-7a11a0388fe6
ms.openlocfilehash: 8c90616165a7b47d4251ace998fd49c613f244b5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62208815"
---
# <a name="fatal-error-c1084"></a>Errore irreversibile C1084

Impossibile leggere il file tipofile: 'file': messaggio

In genere questo errore è causato da un chiamata API del sistema interno non riuscita effettuata dal compilatore. Il messaggio visualizzato quando si verifica questo errore viene generato spesso in uno dei modi [wcserror_s](../../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md) oppure [FormatMessage](/windows/desktop/api/winbase/nf-winbase-formatmessage).

Per tentare di risolvere l'errore C1084, eseguire i passaggi seguenti:

- Assicurarsi che il file specificato esista.

- Assicurarsi che siano impostate le autorizzazioni appropriate per accedere al file specificato.

- Assicurarsi che la sintassi della riga di comando sia conforme alle regole riportate sotto [sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md).

- Assicurarsi che le variabili di ambiente **TMP** e **TEMP** siano correttamente set, nonché le autorizzazioni appropriate per accedere a queste variabili di ambiente fanno riferimento a directory. Assicurarsi inoltre che le unità a cui fanno riferimento le **TMP** e **TEMP** le variabili di ambiente contengono una quantità di spazio libero adeguata.

- Se viene visualizzato il messaggio "Numero di file non valido", è possibile che il file specificato sia stato chiuso in primo piano durante la compilazione in background.

Dopo aver eseguito le operazioni di diagnostica riportate sopra, eseguire una compilazione pulita.