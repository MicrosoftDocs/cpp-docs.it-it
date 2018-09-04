---
title: Testo e stringhe in Visual C++ | Microsoft Docs
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 16411db184b568051484554548cdfcc6119002f1
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43688076"
---
# <a name="text-and-strings-in-visual-c"></a>Testo e stringhe in Visual C++
Un aspetto importante dello sviluppo di applicazioni per mercati internazionali è la rappresentazione adeguata di set di caratteri locali. Il set di caratteri ASCII definisce i caratteri nell'intervallo da 0x00 a 0x7F. Sono presenti altri set di caratteri, principalmente europei, che definiscono i caratteri all'interno dell'intervallo da 0x00 a 0x7F in modo identico al set di caratteri ASCII e anche definire un carattere esteso impostato da 0x80 a 0xFF. Di conseguenza, un set di 8 bit, i caratteri a byte singolo (SBCS) è sufficiente per rappresentare il set di caratteri ASCII, nonché i set di caratteri di molte lingue europee. Tuttavia, alcuni set di caratteri non europei, come il Kanji giapponese, includono molti più caratteri rispetto a un schema di codifica a byte singolo possa rappresentare e pertanto richiedono set di caratteri multibyte (MBCS), la codifica.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Unicode e MBCS](../text/unicode-and-mbcs.md)  
 Viene descritto il supporto di Visual C++ per la programmazione MBCS e Unicode.  
  
 [Supporto per Unicode](../text/support-for-unicode.md)  
 Il formato Unicode è una specifica per il supporto di tutti i set di caratteri, inclusi set di caratteri che non può essere rappresentato in un singolo byte.  
  
 [Supporto per set di caratteri Multibyte (MBCS)](../text/support-for-multibyte-character-sets-mbcss.md)  
 Caratteri MBCS, un'alternativa a Unicode per il supporto di set di caratteri, come quello giapponese o cinese, che non possono essere rappresentato in un singolo byte.  
  
 [Mappature di testo generico in Tchar.h](../text/generic-text-mappings-in-tchar-h.md)  
 Fornisce i mapping testo generico specifiche di Microsoft per molti tipi di dati, routine e altri oggetti.  
  
 [Procedura: Convertire vari tipi di stringhe](../text/how-to-convert-between-various-string-types.md)  
 Viene illustrato come convertire diversi tipi di stringhe Visual C++ in altre stringhe.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [Internazionalizzazione](../c-runtime-library/internationalization.md)  
 Viene descritto il supporto internazionale della libreria di runtime C.  
  
 [Esempi internazionali](https://github.com/Microsoft/VCSamples)  
 Vengono forniti collegamenti a esempi di internazionalizzazione di Visual C++.  
  
 [Stringhe relative a lingue e paesi](../c-runtime-library/locale-names-languages-and-country-region-strings.md)  
 Fornisce le stringhe lingua e paese/area geografica della libreria di runtime C.