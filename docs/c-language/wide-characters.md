---
title: Caratteri Wide | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- wide characters
ms.assetid: 165c4a12-8ab9-45fb-9964-c55e9956194c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3cf748aac5bc05dcc5bbb05b75ae34563398cad2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46087500"
---
# <a name="wide-characters"></a>Caratteri Wide

**ANSI 3.1.3.4** Valore di una costante carattere Integer contenente più caratteri o costanti caratteri wide che contengono più caratteri multibyte

La costante carattere normale 'ab' ha l'Integer (int)0x6162. Quando sono presenti più byte, i byte letti in precedenza vengono spostati del valore di **CHAR_BIT** e il byte successivo viene confrontato tramite l'operatore OR bit per bit con i bit **CHAR_BIT** meno significativi. Il numero di byte nella costante carattere multibyte non può superare sizeof(int), ovvero 4 per il codice di destinazione a 32 bit.

La costante carattere multibyte viene letta come descritto in precedenza e viene convertita in una costante carattere "wide" mediante la funzione di runtime `mbtowc`. Se il risultato non è una costante carattere "wide" valida, viene generato un errore. In ogni caso, il numero di byte esaminato dalla funzione `mbtowc` è limitato al valore di `MB_CUR_MAX`.

## <a name="see-also"></a>Vedere anche

[Caratteri](../c-language/characters.md)