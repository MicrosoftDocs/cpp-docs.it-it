---
title: "/BASE (indirizzo di base) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/base"
  - "VC.Project.VCLinkerTool.BaseAddress"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/BASE (opzione del linker)"
  - "@ (simbolo per indirizzo di base)"
  - "simbolo @ per indirizzi di base"
  - "indirizzi di base [C++]"
  - "BASE (opzione del linker)"
  - "-BASE (opzione del linker)"
  - "DLL [C++], collegamento"
  - "variabili di ambiente [C++], LIB"
  - "file eseguibili [C++], indirizzo di base"
  - "dimensione dell'indirizzo chiave"
  - "variabile di ambiente LIB"
  - "programmi [C++], indirizzo di base"
  - "programmi [C++], prevenzione della rilocazione"
  - "punto e virgola [C++], identificatore"
ms.assetid: 00b9f6fe-0bd2-4772-a69c-7365eb199069
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# /BASE (indirizzo di base)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/BASE:{address[,size] | @filename,key}  
```  
  
 L'opzione \/BASE consente di impostare un indirizzo di base per il programma, eseguendo l'override del percorso predefinito di un file exe \(in corrispondenza di 0x400000\) o di una DLL \(in corrispondenza di 0x10000000\).  Viene eseguito dapprima un tentativo di caricare un programma dall'indirizzo specificato o dall'indirizzo di base predefinito.  Se lo spazio disponibile non è sufficiente, il programma verrà spostato in un'altra posizione.  Per impedire la rilocazione, utilizzare l'opzione [\/FIXED](../../build/reference/fixed-fixed-base-address.md).  
  
 Se *address* non è un multiplo di 64 KB, verrà generato un errore.  Facoltativamente, è possibile specificare le dimensioni del programma, in modo da poter visualizzare un avviso in caso non siano sufficienti.  
  
 Alla riga di comando, un altro modo per specificare l'indirizzo di base consiste nell'utilizzare *filename* preceduto da un simbolo di chiocciola \(@\) e una `key` nel file.  *Filename* è un file di testo contenente i percorsi e le dimensioni di tutte le DLL utilizzate nel programma.  *Filename* viene cercato nel percorso specificato oppure, se non viene specificato alcun percorso, nelle directory specificate nella variabile di ambiente LIB.  Ogni riga di *filename* rappresenta una DLL e presenta la seguente sintassi:  
  
```  
  
key address [size] ;comment  
```  
  
 `key` è una stringa di caratteri alfanumerici in cui non viene effettuata la distinzione tra maiuscole e minuscole.  Si tratta in genere, ma non sempre, del nome di una DLL.  Il parametro `key` è seguito da un indirizzo di base \(*address*\) in linguaggio C, con notazione esadecimale o decimale, ed eventualmente da un valore massimo di `size`.  Tutti e tre gli argomenti sono separati da spazi o caratteri di tabulazione.  Se il valore specificato di `size` è inferiore allo spazio degli indirizzi virtuali richiesto dal programma, verrà generato un avviso.  `comment` è specificato da un punto e virgola \(;\) e può trovarsi sulla stessa riga o su una riga separata.  Tutto il testo compreso tra il punto e virgola e la fine della riga viene ignorato.  In questo esempio viene illustrata parte di un file con queste caratteristiche:  
  
```  
main   0x00010000    0x08000000    ; for PROJECT.exe  
one    0x28000000    0x00100000    ; for DLLONE.DLL  
two    0x28100000    0x00300000    ; for DLLTWO.DLL  
```  
  
 Se il file che contiene queste righe è denominato DLLS.txt, con il comando di esempio che segue verranno applicate queste informazioni:  
  
```  
link dlltwo.obj /dll /base:@dlls.txt,two  
```  
  
## Note  
 È possibile ridurre il paging e migliorare le prestazioni del programma assegnando gli indirizzi di base in modo che le DLL non si sovrappongano nello spazio degli indirizzi.  
  
 È inoltre possibile impostare l'indirizzo di base con l'argomento *BASE* in un'istruzione [NAME](../../build/reference/name-c-cpp.md) o [LIBRARY](../../build/reference/library.md).  L'utilizzo congiunto delle opzioni \/BASE e [\/DLL](../../build/reference/dll-build-a-dll.md) equivale all'utilizzo dell'istruzione **LIBRARY**.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
4.  Modificare la proprietà **Indirizzo di base**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.BaseAddress%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)