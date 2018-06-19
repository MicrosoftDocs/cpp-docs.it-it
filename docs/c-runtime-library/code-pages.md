---
title: Tabelle codici | Microsoft Docs
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
- character sets [C++], code pages
- ANSI [C++], code pages
- system-default code page
- multibyte code pages [C++]
- localization [C++], code pages
- code pages [C++], types of
- locale code pages [C++]
ms.assetid: 4a26fc42-185a-4add-98bf-a7b314ae6186
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 203467eea055927ac7eb8d5ccf8a90242c62d33a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32388617"
---
# <a name="code-pages"></a>Tabelle codici

Una *tabella codici* è un set di caratteri che può includere numeri, segni di punteggiatura e altri glifi. Lingue e impostazioni locali diverse possono utilizzare tabelle codici differenti. La tabella codici ANSI 1252, ad esempio, viene utilizzata per l'inglese e per la maggior parte delle lingue europee; mentre la tabella codici OEM 932 viene utilizzata per il Kanji giapponese.

 Una tabella codici può essere rappresentata in una tabella come mapping dei caratteri in valori a byte singolo o multibyte. Molte tabelle codici condividono il set di caratteri ASCII per i caratteri nell'intervallo compreso tra 0x00 e 0x7F.

 La libreria di runtime Microsoft utilizza i seguenti tipi di tabelle codici:

- Tabella codici ANSI predefinita del sistema. Per impostazione predefinita, all'avvio il sistema runtime imposta automaticamente la tabella codici multibyte alla tabella codici ANSI predefinita del sistema, ottenuta dal sistema operativo. La chiamata:

    ```C
    setlocale ( LC_ALL, "" );
    ```

     imposta inoltre le impostazioni locali alla tabella codici ANSI predefinita del sistema.

- Tabella codici delle impostazioni locali. Il comportamento di una serie di routine di runtime dipende dall'impostazione locale corrente, inclusa la tabella codici delle impostazioni locali. Per altre informazioni, vedere [Routine dipendenti dalle impostazioni locali](../c-runtime-library/locale.md). Per impostazione predefinita, tutte le routine dipendenti dalle impostazioni locali della libreria di runtime Microsoft utilizzano la tabella codici che corrisponde alle impostazioni locali "C". Durante il runtime è possibile modificare o eseguire una query nella tabella codici delle impostazioni locali in uso con una chiamata a [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md).

- Tabella codici multibyte. Il comportamento della maggior parte delle routine di caratteri multibyte nella libreria di runtime dipende dall'impostazione della tabella codici multibyte corrente. Per impostazione predefinita, queste routine utilizzano la tabella codici ANSI predefinita del sistema. Durante il runtime è possibile eseguire una query e modificare la tabella codici multibyte rispettivamente con [_getmbcp](../c-runtime-library/reference/getmbcp.md) e [_setmbcp](../c-runtime-library/reference/setmbcp.md).

- Le impostazioni locali "C" sono definite da ANSI per corrispondere alle impostazioni locali in cui i programmi C sono stati eseguiti in precedenza. La tabella codici delle impostazioni locali "C" (tabella codici "C") corrisponde al set di caratteri ASCII. Ad esempio, nelle impostazioni locali "C", **islower** restituisce true solo per i valori 0x61 - 0x7A. In altre impostazioni locali, **islower** può restituire true per questi nonché per altri valori definiti da tali impostazioni locali.

## <a name="see-also"></a>Vedere anche

[Internazionalizzazione](../c-runtime-library/internationalization.md)<br/>
 [Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>