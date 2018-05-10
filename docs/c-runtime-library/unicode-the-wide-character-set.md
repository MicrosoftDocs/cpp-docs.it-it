---
title: 'Unicode: set di caratteri wide | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- c.international
dev_langs:
- C++
helpviewer_keywords:
- Unicode [C++], wide character set
- wide characters [C++], Unicode
ms.assetid: b6a05a21-59a5-4d30-8c85-2dbe185f7a74
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 60fd19a46cff5607a768309585ab876f4a894db6
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="unicode-the-wide-character-set"></a>Unicode: set di caratteri wide

Un carattere di tipo "wide" è un codice carattere multilingue da due byte. Qualsiasi carattere utilizzato nei sistemi informatici moderni di tutto il mondo, compresi i simboli tecnici e caratteri di grafica speciali, può essere rappresentato in base alla specifica Unicode come carattere wide. Sviluppato e gestito da un grande consorzio che include Microsoft, lo standard Unicode ora è comunemente accettato.

Un carattere wide è di tipo **wchar_t**. Una stringa di caratteri wide è rappresentata come una matrice **wchar_t[]** ed è puntata da un puntatore `wchar_t*`. È possibile rappresentare qualsiasi carattere ASCII come carattere wide, facendolo precedere dalla lettera **L**. L'\0', ad esempio, è il carattere wide di terminazione **NULL** (a 16 bit). In modo analogo, qualsiasi valore letterale stringa ASCII può essere rappresentato come un valore letterale stringa di caratteri wide anteponendovi la lettera "L" (L"Hello").

In genere, i caratteri wide occupano una maggiore quantità di memoria rispetto ai caratteri multibyte, ma consentono un'elaborazione più veloce. Inoltre, non è possibile rappresentare con la codifica multibyte più di un'impostazione locale per volta, mentre Unicode consente di rappresentare simultaneamente tutti i set di caratteri esistenti.

## <a name="see-also"></a>Vedere anche

[Internazionalizzazione](../c-runtime-library/internationalization.md)<br/>
[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
