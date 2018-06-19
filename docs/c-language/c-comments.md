---
title: Commenti C | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- code comments, C code
- comments, documenting code
- comments, C code
- /* */ comment delimiters
- comments
ms.assetid: 0f5f2825-e673-49e7-8669-94e2f5294989
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f3a6c2d32596aa8205d02ee5cddb28b5ba3c8166
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32384346"
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
