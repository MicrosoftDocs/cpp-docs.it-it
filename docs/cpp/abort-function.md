---
title: Funzione abort
ms.date: 12/01/2017
helpviewer_keywords:
- abort function
ms.assetid: 3352bcc4-1a8a-4e1f-8dcc-fe30f6b50f2d
ms.openlocfilehash: 7c87cb4fe7349a0d623c765c20e7e213a8454571
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50451233"
---
# <a name="abort-function"></a>Funzione abort

Il **abort** funzione, dichiarata anche nel file di inclusione standard \<STDLIB. h >, termina un programma C++. La differenza tra `exit` e **abort** è che `exit` consentirà l'elaborazione di terminazione di runtime di C++ per l'implementazione (oggetto globale distruttori verranno chiamati), mentre **abort** Termina il programma immediatamente. Per altre informazioni, vedere [abort](../c-runtime-library/reference/abort.md) nel *Run-Time Library Reference*.

## <a name="see-also"></a>Vedere anche

[Chiusura del programma](../cpp/program-termination.md)