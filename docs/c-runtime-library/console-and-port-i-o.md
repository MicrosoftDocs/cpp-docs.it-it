---
title: I/O console e porta | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- c.io
dev_langs:
- C++
helpviewer_keywords:
- routines, console and port I/O
- routines
- ports, I/O routines
- I/O [CRT], console
- I/O [CRT], port
- I/O routines, console and port I/O
ms.assetid: 0eee1c92-9b3d-41e0-a43a-257e546eeec8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7e4d46582266234b4208a768fc7b2045af824349
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32391418"
---
# <a name="console-and-port-io"></a>I/O console e porta

Queste routine eseguono la lettura e la scrittura sulla console o sulla porta specificata. Le routine di I/O della console non sono compatibili con le routine di I/O di flusso o le routine I/O di basso livello della libreria. Prima dell'esecuzione dell'I/O non è necessario aprire la console o la porta, pertanto questa categoria non include routine di apertura o chiusura. Nei sistemi operativi Windows l'output di queste funzioni è sempre indirizzato alla console e non può essere reindirizzato.

## <a name="console-and-port-io-routines"></a>Routine di I/O console e porta

|Routine|Usa|
|-------------|---------|
|[_cgets, _cgetws](../c-runtime-library/cgets-cgetws.md), [_cgets_s, _cgetws_s](../c-runtime-library/reference/cgets-s-cgetws-s.md)|Leggere una stringa dalla console|
|[_cprintf, _cwprintf](../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md), [_cprintf_s, _cprintf_s_l, _cwprintf_s, _cwprintf_s_l](../c-runtime-library/reference/cprintf-s-cprintf-s-l-cwprintf-s-cwprintf-s-l.md)|Scrivere dati formattati nella console|
|[_cputs](../c-runtime-library/reference/cputs-cputws.md)|Scrivere una stringa nella console|
|[_cscanf, _cwscanf](../c-runtime-library/reference/cscanf-cscanf-l-cwscanf-cwscanf-l.md), [_cscanf_s, _cscanf_s_l, _cwscanf_s, _cwscanf_s_l](../c-runtime-library/reference/cscanf-s-cscanf-s-l-cwscanf-s-cwscanf-s-l.md)|Leggere dati formattati dalla console|
|[_getch, _getwch](../c-runtime-library/reference/getch-getwch.md)|Leggere un carattere dalla console|
|[_getche, _getwche](../c-runtime-library/reference/getch-getwch.md)|Leggere un carattere dalla console e ripeterlo|
|[_inp](../c-runtime-library/inp-inpw-inpd.md)|Leggere un byte dalla porta di I/O specificata|
|[_inpd](../c-runtime-library/inp-inpw-inpd.md)|Leggere una parola doppia dalla porta I/O specificata|
|[_inpw](../c-runtime-library/inp-inpw-inpd.md)|Leggere una parola a 2 byte dalla porta I/O specificata|
|[_kbhit](../c-runtime-library/reference/kbhit.md)|Verificare una pressione di tasto alla console, usarla prima di provare la lettura dalla console|
|[_outp](../c-runtime-library/outp-outpw-outpd.md)|Scrivere un byte nella porta di I/O specificata|
|[_outpd](../c-runtime-library/outp-outpw-outpd.md)|Scrivere una parola doppia nella porta di I/O specificata|
|[_outpw](../c-runtime-library/outp-outpw-outpd.md)|Scrivere una parola nella porta di I/O specificata|
|[_putch, _putwch](../c-runtime-library/reference/putch-putwch.md)|Scrivere un carattere nella console|
|[_ungetch, _ungetwch](../c-runtime-library/reference/ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md)|Annullare l'ottenimento dell'ultimo carattere letto dalla console, convertendolo nel successivo carattere letto|

## <a name="see-also"></a>Vedere anche

[Input e output](../c-runtime-library/input-and-output.md)<br/>
 [Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>