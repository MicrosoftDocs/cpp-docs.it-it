---
title: "hdrstop | Microsoft Docs"
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
  - "hdrstop_CPP"
  - "vc-pragma.hdrstop"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "hdrstop (pragma)"
  - "pragma, hdrstop"
ms.assetid: 5ea8370a-10d1-4538-ade6-4c841185da0e
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# hdrstop
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Offre controllo aggiuntivo sui nomi file di precompilazione e sulla posizione in cui lo stato di compilazione viene salvato.  
  
## Sintassi  
  
```  
  
#pragma hdrstop [( "filename" )]    
```  
  
## Note  
 *filename* è il nome del file di intestazione precompilato da utilizzare o creare \(a seconda se è specificato [\/Yu](../build/reference/yu-use-precompiled-header-file.md) o [\/Yc](../build/reference/yc-create-precompiled-header-file.md)\).  Se *filename* non contiene una specifica del percorso, si presuppone che il file di intestazione precompilato si trovi nella stessa directory del file di origine.  
  
 Se un file C o C\+\+ contiene un pragma **hdrstop**, una volta compilato con \/Yc, il compilatore salva lo stato di compilazione nella posizione del pragma.  Lo stato compilato di eventuale codice che segue il pragma non viene salvato.  
  
 Utilizzare *filename* per denominare il file di intestazione precompilato in cui lo stato compilato deve essere salvato.  Uno spazio tra **hdrstop** e *filename* è facoltativo.  Il nome file specificato nel pragma **hdrstop** è una stringa, quindi è soggetto ai vincoli previsti per qualsiasi stringa C o C\+\+.  In particolare, deve essere racchiuso tra virgolette e utilizzare il carattere di escape \(barra rovesciata\) per specificare i nomi di directory.  Ad esempio:  
  
```  
#pragma hdrstop( "c:\\projects\\include\\myinc.pch" )  
```  
  
 Il nome del file di intestazione precompilato viene determinato in base agli elementi seguenti \(in ordine di priorità\):  
  
1.  L'argomento dell'opzione del compilatore \/Fp  
  
2.  L'argomento *filename* in \#**pragma hdrstop**  
  
3.  Il nome di base del file di origine con una estensione PCH  
  
 Per le opzioni \/Yu e \/Yc, se nessuna delle due opzioni di compilazione, né il pragma **hdrstop** specificano un nome file, il nome di base del file di origine viene utilizzato come nome di base del file di intestazione precompilato.  
  
 È inoltre possibile utilizzare i comandi di pre\-elaborazione per eseguire la sostituzione delle macro come indicato di seguito:  
  
```  
#define INCLUDE_PATH "c:\\progra~`1\\devstsu~1\\vc\\include\\"  
#define PCH_FNAME "PROG.PCH"  
.  
.  
.  
#pragma hdrstop( INCLUDE_PATH PCH_FNAME )  
```  
  
 Le regole seguenti determinano la posizione in cui può essere inserito il pragma **hdrstop**:  
  
-   Deve trovarsi all'esterno di eventuali dati o dichiarazione o definizione di funzione.  
  
-   Deve essere specificato nel file di origine, non all'interno di un file di intestazione.  
  
## Esempio  
  
```  
#include <windows.h>                 // Include several files  
#include "myhdr.h"  
  
__inline Disp( char *szToDisplay )   // Define an inline function  
{  
    ...                              // Some code to display string  
}  
#pragma hdrstop  
```  
  
 In questo esempio il pragma **hdrstop** viene visualizzato dopo che sono stati inclusi due file ed è stata definita una funzione inline.  Questa potrebbe a prima vista sembrare una posizione inconsueta per il pragma.  Considerare, tuttavia, che l'utilizzo delle opzioni di precompilazione manuali, \/Yc e \/Yu, con il pragma **hdrstop** consente di precompilare interi file di origine e persino il codice inline.  Il compilatore Microsoft non limita l'utente alla precompilazione delle sole dichiarazioni di dati.  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)