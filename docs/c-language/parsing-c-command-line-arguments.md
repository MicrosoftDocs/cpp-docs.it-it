---
title: Analisi di argomenti della riga di comando C
description: Informazioni sul modo in cui il codice di avvio del runtime di Microsoft C interpreta gli argomenti della riga di comando per creare i parametri argv e argc.
ms.date: 11/09/2020
helpviewer_keywords:
- quotation marks, command-line arguments
- double quotation marks
- double quote marks
- command line, parsing
- parsing, command-line arguments
- startup code, parsing command-line arguments
ms.assetid: ffce8037-2811-45c4-8db4-1ed787859c80
ms.openlocfilehash: 92921e91ee6bb37b2bf7b702a1b31ed045187b59
ms.sourcegitcommit: b38485bb3a9d479e0c5d64ffc3d841fa2c2b366f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2020
ms.locfileid: "94441255"
---
# <a name="parsing-c-command-line-arguments"></a>Analisi di argomenti della riga di comando C

**Specifico di Microsoft**

Il codice di avvio C di Microsoft utilizza le regole seguenti quando interpreta gli argomenti forniti alla riga di comando del sistema operativo.

- Gli argomenti sono delimitati da spazi vuoti, ovvero da uno spazio o da una tabulazione.

- Il primo argomento ( `argv[0]` ) viene trattato in modo speciale. Rappresenta il nome del programma. Poiché deve essere un percorso valido, sono consentite le parti racchiuse tra virgolette doppie ( **`"`** ). Le virgolette doppie non sono incluse nell' `argv[0]` output. Le parti racchiuse tra virgolette doppie impediscono l'interpretazione di uno spazio o un carattere di tabulazione come fine dell'argomento. Le regole successive in questo elenco non sono valide.

- Una stringa racchiusa tra virgolette doppie viene interpretata come un argomento singolo, indipendentemente dal fatto che contenga uno spazio vuoto. Una stringa tra virgolette può essere incorporata in un argomento. Il punto di inserimento ( **`^`** ) non è riconosciuto come carattere di escape o delimitatore. All'interno di una stringa tra virgolette, una coppia di virgolette doppie viene interpretata come virgolette doppie con escape singolo. Se la riga di comando termina prima che venga individuato un segno di virgolette doppie di chiusura, tutti i caratteri letti finora vengono restituiti come ultimo argomento.

- Un segno di virgolette doppie preceduto da una barra rovesciata ( **`\"`** ) viene interpretato come virgolette doppie ( **`"`** ).

- Le barre rovesciate vengono interpretate letteralmente, a meno che non precedano immediatamente virgolette doppie.

- Se un numero pari di barre rovesciate è seguito da un segno di virgolette doppie, viene inserita una barra rovesciata ( **`\`** ) nella `argv` matrice per ogni coppia di barre rovesciate ( **`\\`** ) e le virgolette doppie ( **`"`** ) vengono interpretate come delimitatore di stringa.

- Se un numero dispari di barre rovesciate è seguito da un segno di virgolette doppie, viene inserita una barra rovesciata ( **`\`** ) nella `argv` matrice per ogni coppia di barre rovesciate ( **`\\`** ). Il segno di virgolette doppie viene interpretato come una sequenza di escape dalla barra rovesciata rimanente, causando l'inserimento di un segno di virgolette doppie ( **`"`** ) `argv` .

In questo elenco vengono illustrate le regole precedenti per visualizzare il risultato interpretato come passato a `argv` per alcuni esempi di argomenti della riga di comando. L'output elencato nella seconda, terza e quarta colonna viene dal programma ARGS.C che segue l'elenco.

|Input della riga di comando|argv[1]|argv[2]|argv[3]|
|-------------------------|---------------|---------------|---------------|
|`"a b c" d e`|`a b c`|`d`|`e`|
|`"ab\"c" "\\" d`|`ab"c`|`\`|`d`|
|`a\\\b d"e f"g h`|`a\\\b`|`de fg`|`h`|
|`a\\\"b c d`|`a\"b`|`c`|`d`|
|`a\\\\"b c" d e`|`a\\b c`|`d`|`e`|
|`a"b"" c d`|`ab" c d`|||

## <a name="example"></a>Esempio

### <a name="code"></a>Codice

```c
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

## <a name="comments"></a>Commenti

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

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Funzione principale ed esecuzione di programmi](../c-language/main-function-and-program-execution.md)
