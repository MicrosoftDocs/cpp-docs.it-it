---
title: Caratteri Wide | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- wide characters
ms.assetid: 165c4a12-8ab9-45fb-9964-c55e9956194c
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: 81a5b6476c21ae725e89ecf81f1e05949d3a0107
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="wide-characters"></a>Caratteri Wide
**ANSI 3.1.3.4** Valore di una costante carattere Integer contenente più caratteri o costanti caratteri wide che contengono più caratteri multibyte  
  
 La costante carattere normale 'ab' ha l'Integer (int)0x6162. Quando sono presenti più byte, i byte letti in precedenza vengono spostati del valore di **CHAR_BIT** e il byte successivo viene confrontato tramite l'operatore OR bit per bit con i bit **CHAR_BIT** meno significativi. Il numero di byte nella costante carattere multibyte non può superare sizeof(int), ovvero 4 per il codice di destinazione a 32 bit.  
  
 La costante carattere multibyte viene letta come descritto in precedenza e viene convertita in una costante carattere "wide" mediante la funzione di runtime `mbtowc`. Se il risultato non è una costante carattere "wide" valida, viene generato un errore. In ogni caso, il numero di byte esaminato dalla funzione `mbtowc` è limitato al valore di `MB_CUR_MAX`.  
  
## <a name="see-also"></a>Vedere anche  
 [Caratteri](../c-language/characters.md)
