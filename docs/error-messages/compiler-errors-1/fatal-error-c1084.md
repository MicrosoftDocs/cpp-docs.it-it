---
title: Errore irreversibile C1084 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1084
dev_langs:
- C++
helpviewer_keywords:
- C1084
ms.assetid: b2f273ef-3a14-4d5f-8ce0-7a11a0388fe6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 47d56641209ea1fe192bf0c32ace7701a1e579dc
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46054532"
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