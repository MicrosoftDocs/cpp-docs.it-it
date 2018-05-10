---
title: Testo e stringhe in Visual C++ | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- globalization [C++], character sets
- programming [C++], international
- multiple language support [C++]
- Unicode [C++]
- international applications [C++], about international applications
- portability [C++]
- translation [C++], character sets
- non-European characters [C++]
- character sets [C++]
- globalization [C++]
- Japanese characters [C++]
- Kanji character support [C++]
- local character sets [C++]
- ASCII characters [C++]
- character sets [C++], about character sets
- localization [C++], character sets
- translating code [C++]
- localization [C++]
- character sets [C++], non-European
- portability [C++], character sets
- MBCS [C++], international programming
ms.assetid: a1bb27ac-abe5-4c6b-867d-f761d4b93205
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e16c44993f3cd9598bc42f9151264e09ac3b7a53
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="text-and-strings-in-visual-c"></a>Testo e stringhe in Visual C++
Un aspetto importante dello sviluppo di applicazioni per i mercati internazionali è la rappresentazione appropriata di set di caratteri locale. Il set di caratteri ASCII definisce i caratteri nell'intervallo da 0x00 e 0x7F. Sono presenti altri set di caratteri, principalmente europei, che definiscono i caratteri all'interno dell'intervallo da 0x00 e 0x7F in modo identico al set di caratteri ASCII e definire un carattere esteso impostare tra 0x80 e 0xFF. Pertanto, un set di 8 bit, i caratteri a byte singolo (SBCS) è sufficiente per rappresentare il set di caratteri ASCII, nonché i set di caratteri di molte lingue europee. Tuttavia, alcuni set di caratteri non europei, come il Kanji giapponese, includono molti più caratteri rispetto a uno schema di codifica a byte singolo può rappresentare e pertanto richiedono caratteri multibyte (MBCS) codifica del set.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Unicode e MBCS](../text/unicode-and-mbcs.md)  
 Viene descritto il supporto di Visual C++ per la programmazione Unicode e MBCS.  
  
 [Supporto per Unicode](../text/support-for-unicode.md)  
 Il formato Unicode è una specifica per il supporto di tutti i set di caratteri, inclusi i set di caratteri che non possono essere rappresentati in un singolo byte.  
  
 [Supporto per set di caratteri Multibyte (MBCS)](../text/support-for-multibyte-character-sets-mbcss.md)  
 MBCS rappresentano un'alternativa a Unicode per il supporto di set di caratteri, come quello giapponese o cinese, che non può essere rappresentato in un singolo byte.  
  
 [Mappature di testo generico in Tchar.h](../text/generic-text-mappings-in-tchar-h.md)  
 Fornisce mapping testo generico specifiche di Microsoft per molti tipi di dati, routine e altri oggetti.  
  
 [Procedura: Convertire vari tipi di stringhe](../text/how-to-convert-between-various-string-types.md)  
 Viene illustrato come convertire vari tipi di stringa di Visual C++ in altre stringhe.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [Internazionalizzazione](../c-runtime-library/internationalization.md)  
 Viene descritto il supporto internazionale nella libreria di runtime C.  
  
 [Esempi internazionali](http://msdn.microsoft.com/en-us/aa8d390c-cf4c-4dd8-9dea-74d81f93f2f8)  
 Vengono forniti collegamenti a esempi di internazionalizzazione in Visual C++.  
  
 [Stringhe relative a lingue e paesi](../c-runtime-library/locale-names-languages-and-country-region-strings.md)  
 Fornisce le stringhe lingua e paese/area geografica della libreria di runtime C.