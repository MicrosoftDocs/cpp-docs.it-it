---
title: 'Unicode: set di caratteri wide'
description: Introduzione al set di caratteri wide Unicode nel runtime di Microsoft C.
ms.topic: conceptual
ms.date: 11/04/2016
helpviewer_keywords:
- Unicode [C++], wide character set
- wide characters [C++], Unicode
ms.assetid: b6a05a21-59a5-4d30-8c85-2dbe185f7a74
ms.openlocfilehash: 751017a62a960eaf2afa2354a43a13971b89252a
ms.sourcegitcommit: 9451db8480992017c46f9d2df23fb17b503bbe74
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2020
ms.locfileid: "91590160"
---
# <a name="unicode-the-wide-character-set"></a>Unicode: set di caratteri wide

Un carattere di tipo "wide" è un codice carattere multilingue da due byte. Qualsiasi carattere utilizzato nei sistemi informatici moderni di tutto il mondo, compresi i simboli tecnici e caratteri di grafica speciali, può essere rappresentato in base alla specifica Unicode come carattere wide. Sviluppato e gestito da un grande consorzio che include Microsoft, lo standard Unicode ora è comunemente accettato.

Un carattere wide è di tipo **`wchar_t`** . Una stringa di caratteri wide è rappresentata come **`wchar_t[]`** matrice. Puntare alla matrice con un `wchar_t*` puntatore. 

È possibile rappresentare qualsiasi carattere ASCII come carattere wide anteponendo la lettera `L` . Ad esempio, `L'\0'` è il carattere wide di terminazione (a 16 bit) null.

È possibile rappresentare qualsiasi valore letterale stringa ASCII come valore letterale stringa di caratteri wide anteponendo la lettera `L` . Ad esempio: `L"Hello"`.

In genere, i caratteri wide utilizzano più spazio in memoria rispetto ai caratteri multibyte. Ma i caratteri wide sono più veloci da elaborare. Una sola impostazione locale può essere rappresentata alla volta nella codifica multibyte. Tutti i set di caratteri del mondo sono rappresentati contemporaneamente dalla rappresentazione Unicode.

## <a name="see-also"></a>Vedi anche

[Internazionalizzazione](../c-runtime-library/internationalization.md)\
[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
