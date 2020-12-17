---
title: '`main` argomenti della funzione e della riga di comando (C++)'
description: La `main` funzione è il punto di ingresso per un programma C++.
ms.date: 12/16/2020
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
ms.openlocfilehash: a9c68f199d4169c02260542a9730472e4ab397bd
ms.sourcegitcommit: 387ce22a3b0137f99cbb856a772b5a910c9eba99
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/17/2020
ms.locfileid: "97645072"
---
# <a name="no-locmain-function-and-command-line-arguments"></a>`main` argomenti della funzione e della riga di comando

Tutti i programmi C++ devono disporre di una `main` funzione. Se si tenta di compilare un programma C++ senza una `main` funzione, il compilatore genera un errore. (Le librerie a collegamento dinamico e le static librerie non hanno una `main` funzione). La `main` funzione è il punto in cui inizia l'esecuzione del codice sorgente, ma prima che un programma entri nella `main` funzione, tutti static i membri della classe senza inizializzatori espliciti vengono impostati su zero. In Microsoft C++, static anche gli oggetti globali vengono inizializzati prima della voce a `main` . Diverse restrizioni si applicano alla `main` funzione che non si applicano ad altre funzioni C++. La funzione `main`:

- Non è possibile eseguire l'overload (vedere [Overload della funzione](./function-overloading.md)).
- Non può essere dichiarato come **`inline`** .
- Non può essere dichiarato come **`static`** .
- Non è possibile prendere l'indirizzo.
- Non può essere chiamato dal programma.

## <a name="the-no-locmain-function-signature"></a>`main`Firma della funzione

La `main` funzione non ha una dichiarazione, perché è incorporata nel linguaggio. In caso affermativo, la sintassi di dichiarazione per `main` avrà un aspetto simile al seguente:

```cpp
int main();
int main(int argc, char *argv[]);
```

Se non viene specificato alcun valore restituito in `main` , il compilatore fornisce un valore restituito pari a zero.

## <a name="standard-command-line-arguments"></a>Argomenti della riga di comando standard

Gli argomenti per `main` consentono l'analisi pratica della riga di comando degli argomenti. I tipi per `argc` e `argv` sono definiti dal linguaggio. I nomi `argc` e `argv` sono tradizionali, ma è possibile assegnare loro un nome qualsiasi.

Le definizioni degli argomenti sono le seguenti:

*`argc`*\
Intero contenente il numero di argomenti che seguono in *argv* . Il *argc* parametro è sempre maggiore o uguale a 1.

*`argv`*\
Una matrice di stringhe con terminazione null che rappresentano gli argomenti della riga di comando immessi dall'utente del programma. Per convenzione, `argv[0]` è il comando con cui viene richiamato il programma. `argv[1]` è il primo argomento della riga di comando. L'ultimo argomento della riga di comando è `argv[argc - 1]` e `argv[argc]` è sempre null.

Per informazioni sull'eliminazione dell'elaborazione da riga di comando, vedere [personalizzare l'elaborazione da riga di comando C++](#customize).

> [!NOTE]
> Per convenzione, `argv[0]` è il nome del file del programma. Tuttavia, in Windows è possibile generare un processo usando [`CreateProcess`](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulefilenamew) . Se si utilizzano sia il primo che il secondo argomento ( *`lpApplicationName`* e *`lpCommandLine`* ), `argv[0]` potrebbe non corrispondere al nome dell'eseguibile. È possibile utilizzare [`GetModuleFileName`](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulefilenamew) per recuperare il nome dell'eseguibile e il percorso completo.

## <a name="microsoft-specific-extensions"></a>Estensioni specifiche di Microsoft

Le sezioni seguenti descrivono il comportamento specifico di Microsoft.

## <a name="the-no-locwmain-function-and-no-loc_tmain-macro"></a>`wmain`Funzione e `_tmain` macro

Se si progetta il codice sorgente per l'uso di char acters wide Unicode, è possibile usare il `wmain` punto di ingresso specifico di Microsoft, che è la versione wide- char Acten di `main` . Di seguito è illustrata la sintassi di dichiarazione efficace per `wmain` :

```cpp
int wmain();
int wmain(int argc, wchar_t *argv[]);
```

È anche possibile usare la specifica di Microsoft `_tmain` , ovvero una macro del preprocessore definita in *`tchar.h`* . `_tmain` viene risolto in a `main` meno che non `_UNICODE` sia definito. In tal caso, `_tmain` si risolve in `wmain`. La `_tmain` macro e altre macro che iniziano con `_t` sono utili per il codice che deve compilare versioni separate per i set di char acter narrow e Wide. Per ulteriori informazioni, vedere [utilizzo di mapping di testo generico](../c-runtime-library/using-generic-text-mappings.md).

## <a name="returning-no-locvoid-from-no-locmain"></a>Restituzione `void` da main

Come estensione Microsoft, le `main` funzioni e `wmain` possono essere dichiarate come restituzione **`void`** (nessun valore restituito). Questa estensione è disponibile anche in altri compilatori, ma non è consigliabile usarla. È disponibile per la simmetria quando `main` non restituisce un valore.

Se si dichiara `main` o `wmain` come restituito **`void`** , non è possibile restituire un exit codice al processo padre o al sistema operativo usando un' [`return`](./program-termination.md) istruzione. Per restituire un exit codice quando `main` o `wmain` viene dichiarato come **`void`** , è necessario utilizzare la [`exit`](./program-termination.md) funzione.

## <a name="the-no-locenvp-command-line-argument"></a>`envp`Argomento della riga di comando

Le `main` `wmain` firme o consentono un'estensione specifica di Microsoft facoltativa per l'accesso alle variabili di ambiente. Questa estensione è anche comune in altri compilatori per i sistemi Windows e UNIX. Il nome *`envp`* è tradizionale, ma è possibile denominare il parametro di ambiente come desiderato. Di seguito sono riportate le dichiarazioni valide per gli elenchi di argomenti che includono il parametro Environment:

```cpp
int main(int argc, char* argv[], char* envp[]);
int wmain(int argc, wchar_t* argv[], wchar_t* envp[]);
```

*`envp`*\
Il *`envp`* parametro facoltativo è una matrice di stringhe che rappresentano le variabili impostate nell'ambiente dell'utente. Questa matrice viene terminata da una voce NULL. Può essere dichiarato come una matrice di puntatori a **`char`** ( `char *envp[]` ) o come puntatore a puntatori a **`char`** ( `char **envp` ). Se il programma usa `wmain` invece di `main` , usare il **`wchar_t`** tipo di dati anziché **`char`** .

Il blocco di ambiente passato a `main` e `wmain` è una copia "bloccata" dell'ambiente corrente. Se successivamente si modifica l'ambiente effettuando una chiamata a `putenv` o `_wputenv` , l'ambiente corrente (come restituito da `getenv` o `_wgetenv` e dalla `_environ`  `_wenviron` variabile o) cambia, ma il blocco a cui punta *`envp`* non viene modificato. Per altre informazioni su come evitare l'elaborazione dell'ambiente, vedere [personalizzare l'elaborazione della riga di comando di C++](#customize). L' *`envp`* argomento è compatibile con lo standard C89, ma non con gli standard C++.

### <a name="example-arguments-to-no-locmain"></a>Argomenti di esempio per `main`

Nell'esempio seguente viene illustrato come utilizzare gli *`argc`* *`argv`* argomenti, e *`envp`* per `main` :

```cpp
// argument_definitions.cpp
// compile with: /EHsc
#include <iostream>
#include <string.h>

using namespace std;
int main( int argc, char *argv[], char *envp[] )
{
    bool numberLines = false;    // Default is no line numbers.

    // If /n is passed to the .exe, display numbered listing
    // of environment variables.
    if ( (argc == 2) && _stricmp( argv[1], "/n" ) == 0 )
         numberLines = true;

    // Walk through list of strings until a NULL is encountered.
    for ( int i = 0; envp[i] != NULL; ++i )
    {
        if ( numberLines )
            cout << i << ": "; // Prefix with numbers if /n specified
        cout << envp[i] << "\n";
    }
}
```

## <a name="parsing-c-command-line-arguments"></a>Analisi di argomenti della riga di comando C++

Le regole di analisi della riga di comando utilizzate dal codice Microsoft C/C++ sono specifiche di Microsoft. Il codice di avvio del runtime usa queste regole per interpretare gli argomenti specificati nella riga di comando del sistema operativo:

- Gli argomenti sono delimitati da spazi vuoti, ovvero da uno spazio o da una tabulazione.

- Il primo argomento ( `argv[0]` ) viene trattato in modo speciale. Rappresenta il nome del programma. Poiché deve essere un percorso valido, sono consentite le parti racchiuse tra virgolette doppie ( **`"`** ). Le virgolette doppie non sono incluse nell' `argv[0]` output. Le parti racchiuse tra virgolette doppie impediscono l'interpretazione di uno spazio o di una scheda char acter come la fine dell'argomento. Le regole successive in questo elenco non sono valide.

- Una stringa racchiusa tra virgolette doppie viene interpretata come un unico argomento, che può contenere gli char acter di spazio vuoto. Una stringa tra virgolette può essere incorporata in un argomento. Il punto di inserimento ( **`^`** ) non è riconosciuto come carattere di escape char o delimitatore. All'interno di una stringa tra virgolette, una coppia di virgolette doppie viene interpretata come virgolette doppie con escape singolo. Se la riga di comando termina prima che venga trovata una virgoletta doppia di chiusura, tutti i char acter letti finora vengono restituiti come ultimo argomento.

- Un segno di virgolette doppie preceduto da una barra rovesciata ( **`\"`** ) viene interpretato come virgolette doppie ( **`"`** ).

- Le barre rovesciate vengono interpretate letteralmente, a meno che non precedano immediatamente virgolette doppie.

- Se un numero pari di barre rovesciate è seguito da un segno di virgolette doppie, viene inserita una barra rovesciata ( **`\`** ) nella `argv` matrice per ogni coppia di barre rovesciate ( **`\\`** ) e le virgolette doppie ( **`"`** ) vengono interpretate come delimitatore di stringa.

- Se un numero dispari di barre rovesciate è seguito da un segno di virgolette doppie, viene inserita una barra rovesciata ( **`\`** ) nella `argv` matrice per ogni coppia di barre rovesciate ( **`\\`** ). Il segno di virgolette doppie viene interpretato come una sequenza di escape dalla main barra rovesciata di reimpostazione, causando l'inserimento di un segno di virgolette doppie ( **`"`** ) `argv` .

### <a name="example-of-command-line-argument-parsing"></a>Esempio di analisi di argomenti della riga di comando

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

### <a name="results-of-parsing-command-lines"></a>Risultati dell'analisi delle righe di comando

La tabella seguente mostra input di esempio e output previsto, dimostrando le regole dell'elenco precedente.

| Input della riga di comando | argv[1] | argv[2] | argv3 |
|--|--|--|--|
| `"abc" d e` | `abc` | `d` | `e` |
| `a\\b d"e f"g h` | `a\\b` | `de fg` | `h` |
| `a\\\"b c d` | `a\"b` | `c` | `d` |
| `a\\\\"b c" d e` | `a\\b c` | `d` | `e` |
| `a"b"" c d` | `ab" c d` |  |  |

## <a name="wildcard-expansion"></a>Espansione di caratteri jolly

Il compilatore Microsoft, facoltativamente, consente di usare i *caratteri jolly* char , il punto interrogativo ( **`?`** ) e l'asterisco ( **`*`** ), per specificare gli argomenti del percorso e del nome del file nella riga di comando.

Gli argomenti della riga di comando vengono gestiti da una routine interna nel codice di avvio del runtime, che per impostazione predefinita non espande i caratteri jolly in stringhe separate nella `argv` matrice di stringhe. È possibile abilitare l'espansione con caratteri jolly includendo il *`setargv.obj`* file ( *`wsetargv.obj`* file per `wmain` ) nelle **`/link`** Opzioni del compilatore o nella **`LINK`** riga di comando.

Per altre informazioni sulle opzioni del linker di avvio runtime, vedere [Opzioni di collegamento](../c-runtime-library/link-options.md).

## <a name="customize-c-command-line-processing"></a><a name="customize"/> Personalizzare l'elaborazione della riga di comando C++

Se il programma non accetta argomenti della riga di comando, è possibile disattivare la routine di elaborazione da riga di comando per salvare una piccola quantità di spazio. Per evitarne l'uso, includere il *`noarg.obj`* file (per `main` e `wmain` ) nelle **`/link`** Opzioni del compilatore o nella **`LINK`** riga di comando.

Analogamente, se non si accede mai alla tabella dell'ambiente tramite l' *`envp`* argomento, è possibile disattivare la routine interna di elaborazione dell'ambiente. Per evitarne l'uso, includere il *`noenv.obj`* file (per `main` e `wmain` ) nelle **`/link`** Opzioni del compilatore o nella **`LINK`** riga di comando.

Il programma potrebbe effettuare chiamate alla `spawn` `exec` famiglia di routine o nella libreria di runtime C. In tal caso, non è necessario disattivare la routine di elaborazione dell'ambiente, perché viene usata per passare un ambiente dal processo padre al processo figlio.

## <a name="see-also"></a>Vedere anche

[Concetti di base](../cpp/basic-concepts-cpp.md)
