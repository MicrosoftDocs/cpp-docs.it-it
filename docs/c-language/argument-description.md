---
title: "Descrizione di argomenti | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "argc (argomento)"
  - "argomenti [C++], main (funzione)"
  - "argv (argomento)"
  - "envp (argomento)"
  - "main (funzione), sintassi"
ms.assetid: 91c2cbe3-9aca-4277-afa1-6137eb8fb704
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Descrizione di argomenti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il parametro `argc` nelle funzioni **main** e **wmain** corrisponde a un Integer che specifica il numero degli argomenti che vengono passati al programma dalla riga di comando.  Poiché il nome del programma è considerato un argomento, il valore di `argc` è almeno uno.  
  
## Osservazioni  
 Il parametro `argv` è una matrice di puntatori a stringhe con terminazione null che rappresentano gli argomenti del programma.  Ogni elemento della matrice punta a una rappresentazione di stringa di un argomento passato a **main** \(o a **wmain**\). Per ulteriori informazioni riguardo alle matrici, vedere [Dichiarazioni di matrice](../c-language/array-declarations.md). Il parametro `argv` può essere dichiarato sia come matrice di puntatori al tipo `char` \(`char *argv[]`\), che come puntatore a puntatori al tipo `char` \(`char **argv`\).  Per **wmain**, il parametro `argv` può essere dichiarato sia come matrice di puntatori al tipo `wchar_t` \(`wchar_t *argv[]`\), che come puntatore a puntatori al tipo `wchar_t` \(`wchar_t **argv`\).  
  
 Per convenzione, `argv`**\[0\]** è il comando con cui il programma viene richiamato.  Tuttavia, è possibile generare un processo utilizzando [CreateProcess](http://msdn.microsoft.com/library/windows/desktop/ms682425) e, se si utilizza sia il primo che il secondo argomento, \(`lpApplicationName` e `lpCommandLine`\), `argv`**\[0\]** non può essere il nome eseguibile; utilizzare [GetModuleFileName](http://msdn.microsoft.com/library/windows/desktop/ms683197) per recuperare il nome eseguibile.  
  
 L'ultimo puntatore \(`argv[argc]`\) è **NULL**. Vedere [getenv](../c-runtime-library/reference/getenv-wgetenv.md) in *Riferimenti della libreria di runtime*, se si desidera conoscere un metodo alternativo per ottenere informazioni sulle variabili di ambiente.  
  
 **Sezione specifica Microsoft**  
  
 Il parametro `envp` è un puntatore a una matrice di stringhe con terminazione null che rappresentano i valori impostati nelle variabili di ambiente dell'utente.  Il parametro `envp` può essere dichiarato come matrice di puntatori a `char` \(`char *envp[]`\) o come puntatore a puntatori a `char` \(`char **envp`\).  In una funzione **wmain**, il parametro `envp` può essere dichiarato come matrice di puntatori a `wchar_t` \(`wchar_t *envp[]`\) o come puntatore a puntatori a `wchar_t` \(`wchar_t **envp`\).  La fine della matrice è indicata da un puntatore\* **NULL**.  Si noti che il blocco di ambiente passato a **main** o **wmain** è una copia "bloccata" dell'ambiente corrente.  Se successivamente si modifica l'ambiente tramite una chiamata a \_**putenv** o a `_wputenv`, l'ambiente corrente \(come restituito da `getenv`\/`_wgetenv` e dalle variabili `_wenviron` o `_environ`\) cambia, ma il blocco a cui punta `envp` rimane invariato.  Il parametro `envp` è compatibile con ANSI in C, ma non in C\+\+.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Funzione main ed esecuzione di programmi](../c-language/main-function-and-program-execution.md)