---
title: 'Unicode: set di caratteri wide'
description: Introduzione al set di caratteri wide Unicode nel runtime di Microsoft C.
ms.topic: conceptual
ms.date: 11/04/2016
helpviewer_keywords:
- Unicode [C++], wide character set
- wide characters [C++], Unicode
ms.assetid: b6a05a21-59a5-4d30-8c85-2dbe185f7a74
ms.openlocfilehash: 7cd170ae43223f1e8e61d9fc576e49baa2164b23
ms.sourcegitcommit: 30792632548d1c71894f9fecbe2f554294b86020
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/06/2020
ms.locfileid: "91765334"
---
# <a name="unicode-the-wide-character-set"></a>Unicode: set di caratteri wide

Un carattere di tipo "wide" è un codice carattere multilingue da due byte. Qualsiasi carattere utilizzato nei sistemi informatici moderni di tutto il mondo, compresi i simboli tecnici e caratteri di grafica speciali, può essere rappresentato in base alla specifica Unicode come carattere wide. Sviluppato e gestito da un grande consorzio che include Microsoft, lo standard Unicode ora è comunemente accettato.

Un carattere wide è di tipo **`wchar_t`** . Una stringa di caratteri wide è rappresentata come **`wchar_t[]`** matrice. Puntare alla matrice con un `wchar_t*` puntatore.

È possibile rappresentare qualsiasi carattere ASCII come carattere wide anteponendo la lettera `L` . Ad esempio, `L'\0'` è il carattere wide di terminazione (a 16 bit) null.

È possibile rappresentare qualsiasi valore letterale stringa ASCII come valore letterale stringa di caratteri wide anteponendo la lettera `L` . Ad esempio: `L"Hello"`.

In genere, i caratteri wide utilizzano più spazio in memoria rispetto ai caratteri multibyte. Ma i caratteri wide sono più veloci da elaborare. Una sola impostazione locale può essere rappresentata alla volta nella codifica multibyte. Tutti i set di caratteri del mondo sono rappresentati contemporaneamente dalla rappresentazione Unicode.

## <a name="see-also"></a>Vedere anche

[Internazionalizzazione](../c-runtime-library/internationalization.md)\
[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
