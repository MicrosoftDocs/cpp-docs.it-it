---
title: Errore irreversibile C1352
ms.date: 11/04/2016
f1_keywords:
- C1352
helpviewer_keywords:
- C1352
ms.assetid: d044e8b0-b6ef-4d57-8eb5-6254071be707
ms.openlocfilehash: fbba87cea05d666d6dc3a385ca1fe52e143fdb5a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50648682"
---
# <a name="fatal-error-c1352"></a>Errore irreversibile C1352

Istruzione MSIL non valida o danneggiata nella funzione 'function' del modulo 'file'

È stato rilevato che il file netmodule passato al compilatore è danneggiato.  Chiedere allo sviluppatore che ha creato il file netmodule di indagare.

Il compilatore non controlla tutti i tipi di danneggiamento nei file netmodule,  ma verifica che tutti i percorsi di controllo di una funzione contengano un'istruzione return.

Per altre informazioni, vedere [File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md).