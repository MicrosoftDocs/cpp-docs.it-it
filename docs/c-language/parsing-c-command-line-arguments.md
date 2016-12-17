---
title: "Analisi di argomenti della riga di comando C | Microsoft Docs"
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
  - "riga di comando, analisi"
  - "virgolette doppie"
  - "analisi, argomenti della riga di comando"
  - "virgolette, argomenti della riga di comando"
  - "avvio (codice), analisi di argomenti della riga di comando"
ms.assetid: ffce8037-2811-45c4-8db4-1ed787859c80
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Analisi di argomenti della riga di comando C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Il codice di avvio C di Microsoft utilizza le regole seguenti quando interpreta gli argomenti forniti alla riga di comando del sistema operativo.  
  
-   Gli argomenti sono delimitati da spazi vuoti, ovvero da uno spazio o da una tabulazione.  
  
-   Una stringa racchiusa tra virgolette doppie viene interpretata come argomento singolo, indipendentemente dalla presenza di spazi al suo interno.  Una stringa tra virgolette può essere incorporata in un argomento.  Si noti che l'accento circonflesso \(**^**\) non viene riconosciuto come carattere di escape o delimitatore.  
  
-   Le virgolette doppie precedute da una barra rovesciata \(**\\"**\) vengono interpretate letteralmente come virgolette doppie \(**"**\).  
  
-   Le barre rovesciate vengono interpretate letteralmente, a meno che non precedano virgolette doppie.  
  
-   Se le virgolette doppie seguono un numero pari di barre rovesciate, per ciascuna coppia di barre rovesciate \(**\\\\**\) viene inserita nella matrice `argv` una barra rovesciata \(**\\**\) e le virgolette doppie \(**"**\) vengono interpretate come delimitatori di stringa.  
  
-   Se un numero dispari di barre rovesciate è seguito da un segno di virgolette doppie, viene inserita una barra rovesciata \(**\\**\) nella matrice `argv` per ciascuna coppia di barre rovesciate \(**\\\\**\) e le virgolette doppie vengono interpretate come sequenza di escape dalla barra rovesciata rimanente, causando l'inserimento di virgolette doppie \(**"**\) letterali in `argv`.  
  
 In questo elenco vengono illustrate le regole precedenti per visualizzare il risultato interpretato come passato a `argv` per alcuni esempi di argomenti della riga di comando.  L'output elencato nella seconda, terza e quarta colonna viene dal programma ARGS.C che segue l'elenco.  
  
|Input della riga di comando|argv\[1\]|argv\[2\]|argv\[3\]|  
|---------------------------------|---------------|---------------|---------------|  
|`"a b c" d e`|`a b c`|`d`|`e`|  
|`"ab\"c" "\\" d`|`ab"c`|`\`|`d`|  
|`a\\\b d"e f"g h`|`a\\\b`|`de fg`|`h`|  
|`a\\\"b c d`|`a\"b`|`c`|`d`|  
|`a\\\\"b c" d e`|`a\\b c`|`d`|`e`|  
  
## Esempio  
  
### Codice  
  
```  
// Parsing_C_Commandline_args.c  
// ARGS.C illustrates the following variables used for accessing  
// command-line arguments and environment variables:  
// argc  argv  envp  
//  
  
#include <stdio.h>  
  
int main( int argc, // Number of strings in array argv  
 char *argv[],      // Array of command-line argument strings  
 char **envp )      // Array of environment variable strings  
{  
    int count;  
  
    // Display each command-line argument.  
    printf_s( "\nCommand-line arguments:\n" );  
    for( count = 0; count < argc; count++ )  
        printf_s( "  argv[%d]   %s\n", count, argv[count] );  
  
    // Display each environment variable.  
    printf_s( "\nEnvironment variables:\n" );  
    while( *envp != NULL )  
        printf_s( "  %s\n", *(envp++) );  
  
    return;  
}  
```  
  
## Commenti  
 Un esempio di output del programma è:  
  
```  
Command-line arguments:  
  argv[0]   C:\MSC\TEST.EXE  
  
Environment variables:  
  COMSPEC=C:\NT\SYSTEM32\CMD.EXE  
  
  PATH=c:\nt;c:\binb;c:\binr;c:\nt\system32;c:\word;c:\help;c:\msc;c:\;  
  PROMPT=[$p]   
  TEMP=c:\tmp  
  TMP=c:\tmp  
  EDITORS=c:\binr  
  WINDIR=c:\nt        
```  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Funzione main ed esecuzione di programmi](../c-language/main-function-and-program-execution.md)