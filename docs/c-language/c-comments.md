---
title: "Commenti C | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "/* */ (delimitatori di commento)"
  - "commenti del codice, codice C"
  - "commenti"
  - "commenti, codice C"
  - "commenti, codice di documentazione"
ms.assetid: 0f5f2825-e673-49e7-8669-94e2f5294989
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Commenti C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un commento è una sequenza di caratteri che inizia con una combinazione asterisco\/barra \(**\/\***\) considerata come un singolo spazio vuoto dal compilatore e altrimenti ignorata.  Un commento può contenere qualsiasi combinazione di caratteri dal set di caratteri rappresentabili, inclusi i caratteri di nuova riga, con esclusione del delimitatore di fine commento \(**\*\/**\).  I commenti possono occupare più di una riga, ma non possono essere annidati.  
  
 I commenti possono trovarsi in qualsiasi punto in cui sia consentito uno spazio vuoto.  Poiché il compilatore considera un commento come un singolo spazio vuoto, non è possibile includere commenti nei token.  In tal caso, i caratteri del commento verrebbero ignorati.  
  
 Utilizzare i commenti per documentare il codice.  L'esempio seguente rappresenta un commento accettato dal compilatore:  
  
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
  
 L'errore si verifica perché il compilatore riconosce la prima combinazione `*/`, dopo le parole `Open file`, come fine del commento.  Il compilatore prova a elaborare il testo rimanente e genera un errore quando rileva la combinazione `*/` all'esterno di un commento.  
  
 Sebbene sia possibile utilizzare i commenti per eseguire il rendering di alcune righe di codice inattive a scopo di test, le direttive per il preprocessore `#if` e `#endif` e la compilazione condizionale rappresentano un'alternativa utile per questa attività.  Per ulteriori informazioni, vedere [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md) in *Riferimenti al preprocessore*.  
  
 **Sezione specifica Microsoft**  
  
 Il compilatore Microsoft supporta anche commenti a riga singola preceduti da due barre \(**\/\/**\).  Se si esegue la compilazione con l'opzione \/Za \(standard ANSI\), questi commenti generano errori.  Tali commenti non possono estendersi su una seconda riga.  
  
```  
// This is a valid comment  
```  
  
 Commenti che iniziano con due barre \(**\/\/**\) vengono terminati dal successivo carattere di nuova riga non preceduto da un carattere di escape.  Nell'esempio seguente il carattere di nuova riga è preceduto da una barra rovesciata \(**\\**\), creando in tal modo una sequenza di escape. Questa sequenza di escape indica al compilatore di considerare la riga successiva nella riga precedente. Per ulteriori informazioni, vedere [Sequenze di escape](../c-language/escape-sequences.md).  
  
```  
// my comment \  
    i++;   
```  
  
 Di conseguenza, l'istruzione `i++;` viene impostata come commento.  
  
 Per impostazione predefinita, in Microsoft C le estensioni Microsoft sono abilitate.  Utilizzare l'opzione \/Za per disabilitare tali estensioni.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Token C](../c-language/c-tokens.md)