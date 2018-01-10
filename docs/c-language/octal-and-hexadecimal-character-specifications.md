---
title: Specifiche dei caratteri ottali ed esadecimali | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- octal characters
- hexadecimal characters
ms.assetid: 9264f3ec-46b8-41a5-b21a-8f7ed0a11871
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cf3a27dc61543482d1d6484d0edd4b5e1bb04373
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="octal-and-hexadecimal-character-specifications"></a>Specifiche dei caratteri ottali ed esadecimali
La sequenza **\\***ooo* significa che è possibile specificare qualsiasi carattere presente nel set di caratteri ASCII come codice carattere ottale a tre cifre. Il valore numerico dell'intero ottale specifica il valore del carattere o del carattere "wide" desiderato.  
  
 Analogamente, la sequenza **\x***hhh* consente di specificare qualsiasi carattere ASCII come codice carattere esadecimale. Ad esempio, è possibile immettere il carattere ASCII backspace come sequenza di escape C normale (**\b**) oppure codificarlo come **\010** (ottale) o **\x008** (esadecimale).  
  
 In una sequenza di escape ottale, è possibile utilizzare solo le cifre da 0 a 7. Le sequenze di escape ottali non possono mai essere più estese di tre cifre e vengono terminate dal primo carattere che non è una cifra ottale. Sebbene non sia necessario utilizzare tutte e tre le cifre, è necessario utilizzarne almeno una. Ad esempio, la rappresentazione ottale del carattere ASCII backspace è **\10**, mentre per la lettera A è **\101**, come riportato nella tabella dei codici ASCII.  
  
 Analogamente, è necessario utilizzare almeno una cifra per le sequenze di escape esadecimali, ma è possibile omettere la seconda e la terza cifra. È quindi possibile specificare la sequenza di escape esadecimale per il carattere backspace in uno dei seguenti modi: **\x8**, **\x08** o **\x008**.  
  
 Il valore della sequenza di escape ottale o esadecimale deve essere compreso tra i valori rappresentabili per il tipo **unsigned char**, per una costante carattere, e per il tipo `wchar_t`, per una costante carattere wide. Per informazioni sulle costanti carattere wide, vedere [Caratteri multibyte e wide](../c-language/multibyte-and-wide-characters.md).  
  
 A differenza delle costanti di escape ottali, il numero di cifre esadecimali in una sequenza di escape è illimitato. Le sequenze di escape esadecimali terminano al primo carattere che non è una cifra esadecimale. Poiché le cifre esadecimali includono le lettere da **a** a **f**, è necessario verificare attentamente che la sequenza di escape termini in corrispondenza della cifra voluta. Per evitare confusione, è possibile inserire le definizioni dei caratteri esadecimali o ottali in una definizione macro:  
  
```  
#define Bell '\x07'  
```  
  
 Per i valori esadecimali, è possibile interrompere la stringa per illustrare dettagliatamente il valore corretto:  
  
```  
"\xabc"    /* one character  */  
"\xab" "c" /* two characters */  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Costanti carattere C](../c-language/c-character-constants.md)