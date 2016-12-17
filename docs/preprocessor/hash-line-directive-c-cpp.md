---
title: "Direttiva #line (C/C++) | Microsoft Docs"
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
  - "#line"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "#line (direttiva)"
  - "line (direttiva) (#line)"
  - "preprocessore, direttive"
ms.assetid: 585c1dc4-5184-4f01-98f4-80c1909744d7
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Direttiva #line (C/C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La direttiva `#line` indica al preprocessore di modificare il numero di riga memorizzato internamente e il nome del file per un determinato numero di riga e nome del file.  
  
## Sintassi  
  
```  
  
#line   
digit-sequence ["filename"]  
```  
  
## Note  
 Il compilatore utilizza il numero di riga e il nome del file che è opzionale per fare riferimento agli errori rilevati durante la compilazione.  Il numero di riga in genere si riferisce alla linea di input corrente e il nome del file fa riferimento al file di input corrente.  Il numero di riga viene incrementato dopo l'elaborazione di ogni linea.  
  
 Il valore *digit\-sequence* può essere una qualsiasi costante Integer.  La sostituzione della Macro può essere eseguita sui token di pre\-elaborazione, ma il risultato deve valutare la sintassi corretta.  Il *Nome del file* può essere una qualsiasi combinazione di caratteri e deve essere racchiuso tra doppie virgolette \(**" "**\).  Se il *Nome del file* viene omesso, il nome del file precedente rimane invariato.  
  
 È possibile modificare il numero della riga di codice e il nome del file sorgente scrivendo una direttiva `#line`.  Il traduttore utilizza il numero di riga e il nome del file per determinare i valori delle macro predefinite **\_\_FILE\_\_** e **\_\_LINE\_\_**.  È possibile utilizzare queste macro per inserire messaggi di errore auto\-descrittivi nel testo del programma.  Per ulteriori informazioni su queste macro predefinite, vedere [Macro predefinite](../preprocessor/predefined-macros.md).  
  
 La macro **\_\_FILE\_\_** genera una stringa il cui contenuto è il nome del file, circondata tra doppie virgolette \(**" "**\).  
  
 Se si modifica il numero di riga e il nome del file, il compilatore ignora i valori precedenti e continua l'elaborazione con i nuovi valori.  La direttiva `#line` è in genere utilizzata dai generatori di programmi per visualizzare messaggi di errore che fanno riferimento al file sorgente invece che il programma generato.  
  
 Gli esempi seguenti utilizzano `#line` e le macro **\_\_FILE\_\_** e **\_\_LINE\_\_**.  
  
 In questa istruzione, il numero di riga internamente archiviato è impostato su 151 e il nome del file è stato modificato in `copy.c`.  
  
```  
#line 151 "copy.c"  
```  
  
 In questo esempio, la macro `ASSERT` utilizza le macro predefinite **\_\_LINE\_\_** e **\_\_FILE\_\_** per scrivere un messaggio di errore sul file di origine se "un'asserzione" specificata non è vera.  
  
```  
#define ASSERT(cond)  
  
if( !(cond) )\  
{printf( "assertion error line %d, file(%s)\n", \  
__LINE__, __FILE__ );}  
```  
  
## Vedere anche  
 [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)