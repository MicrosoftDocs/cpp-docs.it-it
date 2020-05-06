---
title: Caratteri Wide
ms.date: 11/04/2016
helpviewer_keywords:
- wide characters
ms.assetid: 165c4a12-8ab9-45fb-9964-c55e9956194c
ms.openlocfilehash: 868acf0abd26a1f4b5533bb997fb9ea09a27954b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62291002"
---
# <a name="wide-characters"></a>Caratteri Wide

**ANSI 3.1.3.4** Valore di una costante carattere Integer contenente più caratteri o costanti caratteri wide che contengono più caratteri multibyte

La costante carattere normale 'ab' ha l'Integer (int)0x6162. Quando sono presenti più byte, i byte letti in precedenza vengono spostati del valore di **CHAR_BIT** e il byte successivo viene confrontato tramite l'operatore OR bit per bit con i bit **CHAR_BIT** meno significativi. Il numero di byte nella costante carattere multibyte non può superare sizeof(int), ovvero 4 per il codice di destinazione a 32 bit.

La costante carattere multibyte viene letta come descritto in precedenza e viene convertita in una costante carattere "wide" mediante la funzione di runtime `mbtowc`. Se il risultato non è una costante carattere "wide" valida, viene generato un errore. In ogni caso, il numero di byte esaminato dalla funzione `mbtowc` è limitato al valore di `MB_CUR_MAX`.

## <a name="see-also"></a>Vedere anche

[Caratteri](../c-language/characters.md)
