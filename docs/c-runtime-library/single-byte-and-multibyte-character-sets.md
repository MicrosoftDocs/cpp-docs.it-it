---
title: Set di caratteri a un byte e multibyte | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- c.character.multibyte
dev_langs:
- C++
helpviewer_keywords:
- SBCS (single byte character set)
- MBCS [C++], about MBCS
- character sets [C++], multibyte
- character sets [C++], single byte
ms.assetid: 2cbc78ea-33c0-4cfb-b0df-7ce2458431ce
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: c7d9a62c2b6dc69f9fcd86c8f498e42ce31cae84
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="single-byte-and-multibyte-character-sets"></a>Set di caratteri a byte singolo e multibyte
Il set di caratteri ASCII definisce i caratteri inclusi nell'intervallo da 0x00 a 0x7F. Sono disponibili altri set di caratteri, principalmente europei, che definiscono i caratteri inclusi nell'intervallo da 0x00 a 0x7F come il set di caratteri ASCII, e che includono anche un set di caratteri estesi inclusi nell'intervallo da 0x80 a 0xFF. Pertanto, un set di caratteri a 8 bit o a byte singolo (`SBCS`) è sufficiente per rappresentare sia il set di caratteri ASCII che i set di caratteri di molte lingue europee. Tuttavia, alcuni set di caratteri non europei, come il Kanji giapponese, includono molti più caratteri di quelli che possono essere rappresentati in uno schema di codifica a byte singolo e pertanto richiedono una codifica con set di caratteri multibyte (`MBCS`).  
  
> [!NOTE]
>  Molte routine `SBCS` nella libreria di runtime Microsoft gestiscono byte, caratteri e stringhe multibyte in modo appropriato. Molti set di caratteri multibyte definiscono il set di caratteri ASCII come subset. In molti set di caratteri multibyte, ogni carattere incluso nell'intervallo da 0x00 a 0x7F è identico al carattere che ha lo stesso valore nel set di caratteri ASCII. Ad esempio, sia nella stringa di caratteri `ASCII` che `MBCS`, il carattere `NULL` ('\0') a un byte ha il valore 0x00 e indica il carattere con terminazione null.  
  
 Un set di caratteri multibyte può essere costituito sia da caratteri a un byte che a due byte. Pertanto una stringa di caratteri multibyte può contenere una combinazione di caratteri a byte singolo e a byte doppio. Un carattere multibyte a due byte ha un byte iniziale e un byte finale. In un determinato set di caratteri multibyte, i byte di apertura e di chiusura sono inclusi in un intervallo specifico. Quando questi intervalli si sovrappongono, può essere necessario valutare nel particolare contesto se un determinato byte funga da byte iniziale o finale.  
  
## <a name="see-also"></a>Vedere anche  
 [Internazionalizzazione](../c-runtime-library/internationalization.md)   
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
