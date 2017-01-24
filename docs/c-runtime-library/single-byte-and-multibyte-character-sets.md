---
title: "Set di caratteri a byte singolo e multibyte | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.character.multibyte"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "set di caratteri [C++], multibyte"
  - "set di caratteri [C++], a un byte"
  - "MBCS [C++], informazioni su MBCS"
  - "SBCS (set di caratteri a un byte)"
ms.assetid: 2cbc78ea-33c0-4cfb-b0df-7ce2458431ce
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Set di caratteri a byte singolo e multibyte
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il set di caratteri ASCII definisce i caratteri compresi nell'intervallo tra 0x00 – 0x7F.  Esistono alcuni altri set di caratteri, principalmente europei, che, allo stesso modo del set di caratteri ASCII, definiscono i caratteri nell'intervallo compreso tra 0x00 – 0x7F e un set di caratteri esteso tra 0x80 – 0xFF.  Pertanto, un set di caratteri a 8 bit a byte singolo \(`SBCS`\) è sufficiente per rappresentare sia il set di caratteri ASCII che i set di caratteri di molte lingue europee.  Tuttavia, alcuni set di caratteri non europei, come il Kanji giapponese, includono molti più caratteri di quelli che possono essere rappresentati in uno schema di codifica a byte singolo e pertanto richiedono una codifica con set di caratteri multibyte \(`MBCS`\).  
  
> [!NOTE]
>  Molte routine `SBCS` nella libreria di runtime di Microsoft gestiscono i byte, caratteri e stringhe multibyte in modo appropriato.  Molti set di caratteri multibyte definiscono il set di caratteri ASCII come un sottoinsieme.  In molti set di caratteri multibyte ciascun carattere compreso nell'intervallo tra 0x00 e 0x7F è identico al carattere con lo stesso valore nel set di caratteri ASCII.  Ad esempio sia nella stringa di caratteri `ASCII` che in quella `MBCS`, il carattere `NULL` \('\\0'\) a un byte ha il valore 0x00 e indica il carattere di terminazione null.  
  
 Un set di caratteri multibyte può essere costituito sia di caratteri a un byte che a due byte.  Pertanto una stringa di caratteri multibyte può contenere una combinazione di caratteri a byte singolo e a byte doppio.  Un carattere multibyte a due byte ha un byte iniziale e un byte finale.  In un determinato set di caratteri multibyte, sia i byte iniziali che i byte finali sono compresi in intervalli specifici.  Quando questi intervalli si sovrappongono, può essere necessario valutare nel particolare contesto se un determinato byte funga da byte iniziale o finale.  
  
## Vedere anche  
 [Internazionalizzazione](../c-runtime-library/internationalization.md)   
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)