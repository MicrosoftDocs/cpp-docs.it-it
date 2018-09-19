---
title: Errore irreversibile C1352 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1352
dev_langs:
- C++
helpviewer_keywords:
- C1352
ms.assetid: d044e8b0-b6ef-4d57-8eb5-6254071be707
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f4f1f062e11651e4d851231e16569412f95b90d4
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46042936"
---
# <a name="fatal-error-c1352"></a>Errore irreversibile C1352

Istruzione MSIL non valida o danneggiata nella funzione 'function' del modulo 'file'

È stato rilevato che il file netmodule passato al compilatore è danneggiato.  Chiedere allo sviluppatore che ha creato il file netmodule di indagare.

Il compilatore non controlla tutti i tipi di danneggiamento nei file netmodule,  ma verifica che tutti i percorsi di controllo di una funzione contengano un'istruzione return.

Per altre informazioni, vedere [File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md).