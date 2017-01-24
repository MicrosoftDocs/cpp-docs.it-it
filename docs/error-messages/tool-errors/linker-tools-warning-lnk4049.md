---
title: "Avviso degli strumenti del linker LNK4049 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4049"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4049"
ms.assetid: 5fd5fb24-c860-4149-a557-0ac26a65d97c
caps.latest.revision: 19
caps.handback.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso degli strumenti del linker LNK4049
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il simbolo 'simbolo' definito localmente è stato importato  
  
 Il simbolo è stato sia esportato che importato nel programma.  
  
 Questo avviso viene generato dal linker quando si dichiara un simbolo utilizzando l'attributo di classe di archiviazione `__declspec(dllexport)` in un file oggetto e si fa riferimento a tale attributo attraverso l'attributo `__declspec(dllimport)` in un altro file oggetto.  
  
 L'avviso LNK4049 è una versione più generale dell'[Avviso degli strumenti del linker LNK4217](../../error-messages/tool-errors/linker-tools-warning-lnk4217.md).  Il linker genera l'avviso LNK4049 quando non è in grado di determinare da quale funzione viene fatto riferimento al simbolo importato.  
  
 I casi comuni in cui viene generato l'avviso LNK4049 invece dell'avviso LNK4217 sono:  
  
-   Collegamento incrementale mediante l'opzione [\/INCREMENTAL](../../build/reference/incremental-link-incrementally.md).  
  
-   Ottimizzazione dell'intero programma tramite l'opzione [\/LTCG](../../build/reference/ltcg-link-time-code-generation.md).  
  
 Per risolvere l'avviso LNK4049, effettuare una delle seguenti operazioni:  
  
-   Rimuovere la dichiarazione del nome `__declspec(dllimport)` dalla dichiarazione con prototipo del simbolo che ha attivato l'avviso LNK4049.  È possibile cercare simboli all'interno di un'immagine binaria utilizzando l'utilità **DUMPBIN**.  L'opzione **DUMPBIN\/SYMBOLS** visualizza la tabella di simboli COFF dell'immagine.  Per ulteriori informazioni sull'utilità **DUMPBIN**, vedere [Riferimenti a DUMPBIN](../../build/reference/dumpbin-reference.md).  
  
-   Disabilitare temporaneamente il collegamento incrementale e l'ottimizzazione dell'intero programma.  Durante la ricompilazione dell'applicazione verrà generato l'avviso LNK4217 che include il nome della funzione da cui viene fatto riferimento al simbolo importato.  Rimuovere la dichiarazione `__declspec(dllimport)` dal simbolo importato e attivare il collegamento incrementale o l'ottimizzazione dell'intero programma.  
  
 Nonostante il codice generato finale si comporti correttamente, il codice generato per chiamare la funzione importata è meno efficiente della chiamata diretta alla funzione.  Questo avviso non verrà visualizzato quando si esegue la compilazione utilizzando l'opzione [\/clr](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 Per ulteriori informazioni sull'importazione e l'esportazione di dichiarazioni di dati, vedere [dllexport, dllimport](../../cpp/dllexport-dllimport.md).  
  
## Esempio  
 Il collegamento dei due moduli seguenti genererà l'avviso LNK4049.  Il primo modulo genera un file oggetto che contiene una sola funzione esportata.  
  
```  
// LNK4049a.cpp  
// compile with: /c  
  
__declspec(dllexport) int func()   
{  
   return 3;  
}  
```  
  
## Esempio  
 Il secondo modulo genera un file oggetto che contiene una dichiarazione con prototipo nella funzione esportata nel primo modulo, insieme a una chiamata a questa funzione all'interno della funzione `main`.  Il collegamento di questo modulo con il primo genererà l'avviso LNK4049.  La rimozione della dichiarazione `__declspec(dllimport)` risolverà il problema.  
  
```  
// LNK4049b.cpp  
// compile with: /link /WX /LTCG LNK4049a.obj  
// LNK4049 expected  
  
__declspec(dllimport) int func();  
// try the following line instead  
// int func();  
  
int main()  
{  
   return func();  
}  
```  
  
## Vedere anche  
 [Avviso degli strumenti del linker LNK4217](../../error-messages/tool-errors/linker-tools-warning-lnk4217.md)   
 [dllexport, dllimport](../../cpp/dllexport-dllimport.md)