---
title: Commenti C | Microsoft Docs
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
- code comments, C code
- comments, documenting code
- comments, C code
- /* */ comment delimiters
- comments
ms.assetid: 0f5f2825-e673-49e7-8669-94e2f5294989
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
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
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: f8281cce930a9f1b98536b65762bf8b940b0d973
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="c-comments"></a>Commenti C
Un commento è una sequenza di caratteri che inizia con una combinazione barra/asterisco (<b>/\*</b>) considerata come un singolo spazio vuoto dal compilatore e altrimenti ignorata. Un commento può contenere qualsiasi combinazione di caratteri del set di caratteri rappresentabili, inclusi i caratteri di nuova riga, fatta eccezione per il delimitatore di fine commento (<b>\*/</b>). I commenti possono occupare più di una riga, ma non possono essere annidati.  
  
 I commenti possono trovarsi in qualsiasi punto in cui sia consentito uno spazio vuoto. Poiché il compilatore considera un commento come un singolo spazio vuoto, non è possibile includere commenti nei token. In tal caso, i caratteri del commento verrebbero ignorati.  
  
 Utilizzare i commenti per documentare il codice. L'esempio seguente rappresenta un commento accettato dal compilatore:  
  
```  
/* Comments can contain keywords such as  
   for and while without generating errors. */  
```  
  
 I commenti possono essere presenti sulla stessa riga come un'istruzione di codice:  
  
```  
printf( "Hello\n" );  /* Comments can go here */  
```  
  
 È possibile anteporre alle funzioni o ai moduli di programma un blocco di commenti descrittivi:  
  
```  
/* MATHERR.C illustrates writing an error routine   
 * for math functions.   
 */   
```  
  
 Poiché i commenti non possono essere annidati, l'esempio seguente genera un errore:  
  
```  
/* Comment out this routine for testing   
  
   /* Open file */  
    fh = _open( "myfile.c", _O_RDONLY );  
    .  
    .  
    .  
 */  
```  
  
 L'errore si verifica perché il compilatore riconosce la prima combinazione `*/`, dopo le parole `Open file`, come fine del commento. Il compilatore prova a elaborare il testo rimanente e genera un errore quando rileva la combinazione `*/` all'esterno di un commento.  
  
 Sebbene sia possibile utilizzare i commenti per eseguire il rendering di alcune righe di codice inattive a scopo di test, le direttive per il preprocessore `#if` e `#endif` e la compilazione condizionale rappresentano un'alternativa utile per questa attività. Per altre informazioni, vedere [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md) in *Preprocessor Reference* (Riferimenti al preprocessore).  
  
 **Sezione specifica Microsoft**  
  
 Il compilatore Microsoft supporta anche commenti a riga singola preceduti da due barre (**//**). Se si esegue la compilazione con l'opzione /Za (standard ANSI), questi commenti generano errori. Tali commenti non possono estendersi su una seconda riga.  
  
```  
// This is a valid comment  
```  
  
 I commenti che iniziano con due barre (**//**) vengono terminati dal successivo carattere di nuova riga non preceduto da un carattere di escape. Nell'esempio seguente il carattere di nuova riga è preceduto da una barra rovesciata (**\\**), creando in tal modo una sequenza di escape. Questa sequenza di escape indica al compilatore di considerare la riga successiva nella riga precedente. Per altre informazioni, vedere [Sequenze di escape](../c-language/escape-sequences.md).  
  
```  
// my comment \  
    i++;   
```  
  
 Di conseguenza, l'istruzione `i++;` viene impostata come commento.  
  
 Per impostazione predefinita, in Microsoft C le estensioni Microsoft sono abilitate. Utilizzare l'opzione /Za per disabilitare tali estensioni.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Token C](../c-language/c-tokens.md)

