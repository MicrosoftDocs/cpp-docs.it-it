---
title: main argomenti della funzione e della riga di comando (C++)
description: La main funzione è il punto di ingresso per un programma C++.
ms.date: 01/15/2019
ms.assetid: c6568ee6-40ab-4ae8-aa44-c99e232f64ac
no-loc:
- main
- wmain
- inline
- static
- _tmain
- void
- exit
- argc
- argv
- envp
- CreateProcess
- GetModuleFileName
- char
- wchar_t
- extern
ms.openlocfilehash: b27668c3c7ce77e4369af144bb8be4efb695e522
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91499813"
---
# <a name="no-locmain-function-and-command-line-arguments"></a>main argomenti della funzione e della riga di comando

Tutti i programmi C++ devono disporre di una `main` funzione. Se si tenta di compilare un progetto C++ *. exe* senza una main funzione, il compilatore genererà un errore. (Le librerie a collegamento dinamico e le static librerie non hanno una `main` funzione). La `main` funzione è il punto in cui inizia l'esecuzione del codice sorgente, ma prima che un programma entri nella `main` funzione, tutti static i membri della classe senza inizializzatori espliciti vengono impostati su zero. In Microsoft C++, static anche gli oggetti globali vengono inizializzati prima della voce a `main` . Diverse restrizioni si applicano alla `main` funzione che non si applicano ad altre funzioni C++. La `main` funzione:

- Non è possibile eseguire l'overload (vedere [Overload della funzione](function-overloading.md)).
- Non può essere dichiarato come **`inline`** .
- Non può essere dichiarato come **`static`** .
- Non è possibile accettarne l'indirizzo.
- Non può essere chiamato.

La main funzione non ha una dichiarazione, perché è incorporata nel linguaggio. In caso affermativo, la sintassi di dichiarazione per `main` avrà un aspetto simile al seguente:

```cpp
int main();
int main(int argc, char *argv[], char *envp[]);
```

**Specifico di Microsoft**

Se i file di origine usano char gli acter wide Unicode, è possibile usare `wmain` , che è la char versione wide-acter di `main` . La sintassi di dichiarazione per `wmain` è la seguente:

```cpp
int wmain( );
int wmain(int argc, wchar_t *argv[], wchar_t *envp[]);
```

È anche possibile usare `_tmain` , che è definito in t char . h. `_tmain` viene risolto in a `main` meno che non sia stato definito _UNICODE. In tal caso, `_tmain` si risolve in `wmain`.

Se non viene specificato alcun valore restituito, il compilatore fornisce un valore restituito pari a zero. In alternativa, le `main` `wmain` funzioni e possono essere dichiarate come restituzione **`void`** (nessun valore restituito). Se si dichiara `main` o `wmain` come restituito **`void`** , non è possibile restituire un exit codice al processo padre o al sistema operativo usando un'istruzione [return](./program-termination.md) . Per restituire un exit codice quando `main` o `wmain` viene dichiarato come **`void`** , è necessario utilizzare la [exit](./program-termination.md) funzione.

**TERMINA specifica Microsoft**

## <a name="command-line-arguments"></a>Argomenti della riga di comando

Gli argomenti per `main` o `wmain` consentono l'analisi pratica della riga di comando degli argomenti e, facoltativamente, l'accesso alle variabili di ambiente. I tipi per `argc` e `argv` sono definiti dal linguaggio. I nomi `argc` , `argv` e `envp` sono tradizionali, ma è possibile assegnare loro un nome qualsiasi.

```cpp
int main( int argc, char* argv[], char* envp[]);
int wmain( int argc, wchar_t* argv[], wchar_t* envp[]);
```

Le definizioni degli argomenti sono le seguenti:

*argc*<br/>
Intero contenente il numero di argomenti che seguono in *argv* . Il *argc* parametro è sempre maggiore o uguale a 1.

*argv*<br/>
Una matrice di stringhe con terminazione null che rappresentano gli argomenti della riga di comando immessi dall'utente del programma. Per convenzione, `argv[0]` è il comando con cui il programma viene richiamato, `argv[1]` è il primo argomento della riga di comando e così via, fino a `argv[argc]` , che è sempre null. Per informazioni sull'eliminazione dell'elaborazione da riga di comando, vedere [personalizzazione dell'elaborazione della riga]() di comando.

Il primo argomento della riga di comando è sempre `argv[1]` e l'ultimo è `argv[argc - 1]`.

> [!NOTE]
> Per convenzione, `argv[0]` è il comando con cui viene richiamato il programma. Tuttavia, è possibile generare un processo utilizzando e, [CreateProcess](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulefilenamew) se si utilizza sia il primo che il secondo argomento (*LpApplicationName* e *lpCommandLine*), `argv[0]` potrebbe non essere il nome eseguibile, utilizzare [GetModuleFileName](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulefilenamew) per recuperare il nome dell'eseguibile e il percorso completo.

**Specifico di Microsoft**

*envp*<br/>
La *envp* matrice, che è un'estensione comune in molti sistemi UNIX, viene utilizzata in Microsoft C++. È una matrice di stringhe che rappresentano le variabili impostate nell'ambiente dell'utente. Questa matrice viene terminata da una voce NULL. Può essere dichiarato come una matrice di puntatori a **`char`** ( `char *envp[]` ) o come puntatore a puntatori a **`char`** ( `char **envp` ). Se il programma usa `wmain` invece di `main` , usare il **`wchar_t`** tipo di dati anziché **`char`** . Il blocco di ambiente passato a `main` e `wmain` è una copia "bloccata" dell'ambiente corrente. Se successivamente si modifica l'ambiente tramite una chiamata a `putenv` o `_wputenv` , l'ambiente corrente (come restituito da `getenv` o `_wgetenv` e dalla `_environ`  `_wenviron` variabile o) cambia, ma il blocco a cui punta envp non viene modificato. Per informazioni sull'eliminazione dell'elaborazione dell'ambiente, vedere [personalizzazione dell'elaborazione della riga di comando]() . Questo argomento è compatibile con ANSI in C, ma non in C++.

**TERMINA specifica Microsoft**

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare gli *argc* *argv* argomenti, e *envp* per `main` :

```cpp
// argument_definitions.cpp
// compile with: /EHsc
#include <iostream>
#include <string.h>

using namespace std;
int main( int argc, char *argv[], char *envp[] ) {
    int iNumberLines = 0;    // Default is no line numbers.

    // If /n is passed to the .exe, display numbered listing
    // of environment variables.

    if ( (argc == 2) && _stricmp( argv[1], "/n" ) == 0 )
         iNumberLines = 1;

    // Walk through list of strings until a NULL is encountered.
    for( int i = 0; envp[i] != NULL; ++i ) {
        if( iNumberLines )
            cout << i << ": " << envp[i] << "\n";
    }
}
```

## <a name="parsing-c-command-line-arguments"></a>Analisi degli argomenti della riga di comando C++

**Specifico di Microsoft**

Il codice di avvio C/C++ di Microsoft utilizza le regole seguenti quando interpreta gli argomenti forniti alla riga di comando del sistema operativo.

- Gli argomenti sono delimitati da spazi vuoti, ovvero da uno spazio o da una tabulazione.

- Il punto di inserimento del cursore char (^) non è riconosciuto come un char acter di escape o un delimitatore. charActer viene gestito completamente dal parser della riga di comando nel sistema operativo prima di essere passato alla `argv` matrice nel programma.

- Una stringa racchiusa tra virgolette doppie ("*String*") viene interpretata come un argomento singolo, indipendentemente dallo spazio vuoto contenuto all'interno di. Una stringa tra virgolette può essere incorporata in un argomento.

- Le virgolette doppie precedute da una barra rovesciata ( \\ ") vengono interpretate come virgolette doppie letterali char (").

- Le barre rovesciate vengono interpretate letteralmente, a meno che non precedano virgolette doppie.

- Se le virgolette doppie seguono un numero pari di barre rovesciate, per ciascuna coppia di barre rovesciate nella matrice `argv` viene inserita una barra rovesciata e le virgolette doppie vengono interpretate come un delimitatore di stringa.

- Se un numero dispari di barre rovesciate è seguito da virgolette doppie, viene inserita una barra rovesciata nella `argv` matrice per ogni coppia di barre rovesciate e le virgolette doppie sono "precedute da un carattere di escape" dalla main barra rovesciata di reimpostazione, causando l'inserimento di virgolette doppie (") letterali in `argv` .

### <a name="example"></a>Esempio

Nel programma seguente viene illustrato come vengono passati gli argomenti della riga di comando:

```cpp
// command_line_arguments.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
int main( int argc,      // Number of strings in array argv
          char *argv[],   // Array of command-line argument strings
          char *envp[] )  // Array of environment variable strings
{
    int count;

    // Display each command-line argument.
    cout << "\nCommand-line arguments:\n";
    for( count = 0; count < argc; count++ )
         cout << "  argv[" << count << "]   "
                << argv[count] << "\n";
}
```

La tabella seguente mostra input di esempio e output previsto, dimostrando le regole dell'elenco precedente.

### <a name="results-of-parsing-command-lines"></a>Risultati dell'analisi delle righe di comando

|Input della riga di comando|argv[1]|argv[2]|argv3|
|-------------------------|---------------|---------------|---------------|
|`"abc" d e`|`abc`|`d`|`e`|
|`a\\b d"e f"g h`|`a\\b`|`de fg`|`h`|
|`a\\\"b c d`|`a\"b`|`c`|`d`|
|`a\\\\"b c" d e`|`a\\b c`|`d`|`e`|

**TERMINA specifica Microsoft**

## <a name="wildcard-expansion"></a>Espansione di caratteri jolly

**Specifico di Microsoft**

È possibile usare caratteri jolly, ovvero il punto interrogativo (?) e l'asterisco (*), per specificare gli argomenti del percorso e del nome del file nella riga di comando.

Gli argomenti della riga di comando vengono gestiti da una routine denominata `_setargv` (o `_wsetargv` nell'ambiente Wide- char acter), che per impostazione predefinita non espande i caratteri jolly in stringhe separate nella matrice di stringhe `argv` . Per ulteriori informazioni sull'abilitazione dell'espansione dei caratteri jolly, vedere l'argomento relativo all' [espansione degli argomenti jolly](../c-language/expanding-wildcard-arguments.md).

**TERMINA specifica Microsoft**

## <a name="customizing-c-command-line-processing"></a>Personalizzazione dell'elaborazione dalla riga di comando C++

**Specifico di Microsoft**

Se il programma non accetta argomenti della riga di comando, è possibile salvare una piccola quantità di spazio eliminando l'utilizzo della routine di libreria che esegue l'elaborazione della riga di comando. Questa routine viene chiamata `_setargv` ed è descritta in [espansione con caratteri jolly](). Per evitarne l'utilizzo, definire una routine che non esegue alcuna operazione nel file che contiene la `main` funzione e denominarla `_setargv` . La chiamata a `_setargv` viene quindi soddisfatta dalla definizione di `_setargv` e la versione della libreria non è caricata.

Analogamente, se non si accede mai alla tabella dell'ambiente tramite l' `envp` argomento, è possibile fornire la propria routine vuota da usare al posto di `_setenvp` , la routine di elaborazione dell'ambiente. Come per la `_setargv` funzione, `_setenvp` deve essere dichiarato come ** extern "C"**.

Il programma potrebbe effettuare chiamate alla `spawn` `exec` famiglia di routine o nella libreria di runtime del linguaggio C. In tal caso, non è necessario disattivare la routine di elaborazione dell'ambiente, perché questa routine viene utilizzata per passare un ambiente dal processo padre al processo figlio.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Concetti di base](../cpp/basic-concepts-cpp.md)
