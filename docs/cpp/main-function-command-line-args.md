---
title: funzione Main e argomenti della riga di comandoC++()
description: La funzione Main è il punto di ingresso di C++ un programma.
ms.date: 12/10/2019
ms.assetid: c6568ee6-40ab-4ae8-aa44-c99e232f64ac
ms.openlocfilehash: 95e774700c63dc815f6d814bfda84a38a38d4e6e
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75302398"
---
# <a name="main-function-and-command-line-arguments"></a>funzione Main e argomenti della riga di comando

Tutti C++ i programmi devono disporre di una funzione `main`. Se si tenta di compilare un C++ progetto con *estensione exe* senza una funzione Main, il compilatore genererà un errore. (Le librerie a collegamento dinamico e le librerie statiche non hanno una funzione `main`). La funzione `main` è il punto in cui inizia l'esecuzione del codice sorgente, ma prima che un programma entri nella funzione `main`, tutti i membri di classe statici senza inizializzatori espliciti vengono impostati su zero. In Microsoft C++, gli oggetti statici globali vengono inizializzati anche prima della voce `main`. Diverse restrizioni si applicano alla funzione `main` che non si applicano ad C++ altre funzioni. La funzione `main`:

- Non è possibile eseguire l'overload (vedere [Overload della funzione](function-overloading.md)).
- Non può essere dichiarata come **inline**.
- Non può essere dichiarato come **static**.
- Non è possibile accettarne l'indirizzo.
- Non può essere chiamato.

La sintassi di dichiarazione per `main` è la seguente:

```cpp
int main();
int main(int argc, char *argv[], char *envp[]);
```

**Sezione specifica Microsoft**

Se i file di origine utilizzano caratteri wide Unicode, è possibile utilizzare `wmain`, ovvero la versione a caratteri wide di `main`. La sintassi di dichiarazione per `wmain` è la seguente:

```cpp
int wmain( );
int wmain(int argc, wchar_t *argv[], wchar_t *envp[]);
```

È inoltre possibile utilizzare `_tmain`, definito in TCHAR. h. `_tmain` risolve `main` a meno che non sia stato definito _UNICODE. In tal caso, `_tmain` si risolve in `wmain`.

Se non viene specificato alcun valore restituito, il compilatore fornisce un valore restituito pari a zero. In alternativa, le funzioni `main` e `wmain` possono essere dichiarate come restituendo **void** (nessun valore restituito). Se si dichiara `main` o `wmain` come restituire **void**, non è possibile restituire un codice di uscita al processo padre o al sistema operativo usando un'istruzione [Return](../cpp/return-statement-in-program-termination-cpp.md) . Per restituire un codice di uscita quando `main` o `wmain` viene dichiarato come **void**, è necessario usare la funzione [Exit](../cpp/exit-function.md) .

**Fine sezione specifica Microsoft**

## <a name="command-line-arguments"></a>Argomenti della riga di comando

Gli argomenti per `main` o `wmain` consentono l'analisi di argomenti della riga di comando e, facoltativamente, l'accesso alle variabili di ambiente. I tipi per `argc` e `argv` sono definiti dal linguaggio. I nomi `argc`, `argv`e `envp` sono tradizionali, ma è possibile assegnare loro un nome qualsiasi.

```cpp
int main( int argc, char* argv[], char* envp[]);
int wmain( int argc, wchar_t* argv[], wchar_t* envp[]);
```

Le definizioni degli argomenti sono le seguenti:

*argc*<br/>
Intero contenente il conteggio degli argomenti seguiti da *argv*. Il parametro *argc* è sempre maggiore o uguale a 1.

*argv*<br/>
Una matrice di stringhe con terminazione null che rappresentano gli argomenti della riga di comando immessi dall'utente del programma. Per convenzione, `argv[0]` è il comando con cui il programma viene richiamato, `argv[1]` è il primo argomento della riga di comando e così via, fino a quando non viene `argv[argc]`, che è sempre NULL. Per informazioni sull'eliminazione dell'elaborazione da riga di comando, vedere [personalizzazione dell'elaborazione della riga](../cpp/customizing-cpp-command-line-processing.md) di comando.

Il primo argomento della riga di comando è sempre `argv[1]` e l'ultimo è `argv[argc - 1]`.

> [!NOTE]
> Per convenzione, `argv[0]` è il comando con cui viene richiamato il programma. Tuttavia, è possibile generare un processo usando [CreateProcess](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulefilenamew) e se si usano sia il primo che il secondo argomento (*lpApplicationName* e *lpCommandLine*), `argv[0]` potrebbe non essere il nome eseguibile; usare [GetModuleFileName](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulefilenamew) per recuperare il nome dell'eseguibile e il percorso completo.

**Sezione specifica Microsoft**

*envp*<br/>
La matrice *envp* , che è un'estensione comune in molti sistemi UNIX, viene utilizzata in Microsoft C++. È una matrice di stringhe che rappresentano le variabili impostate nell'ambiente dell'utente. Questa matrice viene terminata da una voce NULL. Può essere dichiarato come una matrice di puntatori a **char** (`char *envp[]`) o come puntatore a puntatori a **char** (`char **envp`). Se il programma usa `wmain` anziché `main`, usare il tipo di dati **wchar_t** anziché **char**. Il blocco di ambiente passato a `main` e `wmain` è una copia "bloccata" dell'ambiente corrente. Se successivamente si modifica l'ambiente tramite una chiamata a `putenv` o `_wputenv`, l'ambiente corrente (come restituito da `getenv` o `_wgetenv` e la variabile `_environ` o `_wenviron`) cambierà, ma il blocco a cui punta envp non cambierà. Per informazioni sull'eliminazione dell'elaborazione dell'ambiente, vedere [personalizzazione dell'elaborazione della riga di comando](../cpp/customizing-cpp-command-line-processing.md) . Questo argomento è compatibile con ANSI in C, ma non in C++.

**Fine sezione specifica Microsoft**

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare gli argomenti *argc*, *argv*e *envp* per `main`:

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

## <a name="parsing-c-command-line-arguments"></a>Analisi degli C++ argomenti della riga di comando

**Sezione specifica Microsoft**

Il codice di avvio C/C++ di Microsoft utilizza le regole seguenti quando interpreta gli argomenti forniti alla riga di comando del sistema operativo.

- Gli argomenti sono delimitati da spazi vuoti, ovvero da uno spazio o da una tabulazione.

- L'accento circonflesso (^) non viene riconosciuto come carattere di escape o delimitatore. Il carattere viene completamente gestito dal parser della riga di comando nel sistema operativo prima di essere passato alla matrice `argv` nel programma.

- Una stringa racchiusa tra virgolette doppie ("*String*") viene interpretata come un argomento singolo, indipendentemente dallo spazio vuoto contenuto all'interno di. Una stringa tra virgolette può essere incorporata in un argomento.

- Le virgolette doppie precedute da una barra rovesciata (\\") vengono interpretate come carattere letterale virgolette doppie (").

- Le barre rovesciate vengono interpretate letteralmente, a meno che non precedano virgolette doppie.

- Se le virgolette doppie seguono un numero pari di barre rovesciate, per ciascuna coppia di barre rovesciate nella matrice `argv` viene inserita una barra rovesciata e le virgolette doppie vengono interpretate come un delimitatore di stringa.

- Se le virgolette doppie seguono un numero dispari di barre rovesciate, per ciascuna coppia di barre rovesciate nella matrice `argv` viene inserita una barra rovesciata e le virgolette doppie vengono ignorate dalla barra rovesciata rimanente, determinando l'aggiunta del carattere virgolette doppie (") in `argv`.

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

|Input della riga di comando|argv[1]|argv[2]|argv[3]|
|-------------------------|---------------|---------------|---------------|
|`"abc" d e`|`abc`|`d`|`e`|
|`a\\b d"e f"g h`|`a\\b`|`de fg`|`h`|
|`a\\\"b c d`|`a\"b`|`c`|`d`|
|`a\\\\"b c" d e`|`a\\b c`|`d`|`e`|

**Fine sezione specifica Microsoft**

## <a name="wildcard-expansion"></a>Espansione di caratteri jolly

**Sezione specifica Microsoft**

È possibile usare caratteri jolly, ovvero il punto interrogativo (?) e l'asterisco (*), per specificare gli argomenti del percorso e del nome del file nella riga di comando.

Gli argomenti della riga di comando vengono gestiti da una routine denominata `_setargv` (o `_wsetargv` nell'ambiente a caratteri wide), che per impostazione predefinita non espande i caratteri jolly in stringhe separate nella matrice di `argv` stringa. Per ulteriori informazioni sull'abilitazione dell'espansione dei caratteri jolly, vedere l'argomento relativo all' [espansione degli argomenti jolly](../c-language/expanding-wildcard-arguments.md).

**Fine sezione specifica Microsoft**

## <a name="customizing-c-command-line-processing"></a>Personalizzazione dell'elaborazione dalla riga di comando C++

**Sezione specifica Microsoft**

Se il programma non accetta argomenti della riga di comando, è possibile salvare una piccola quantità di spazio eliminando l'utilizzo della routine di libreria che esegue l'elaborazione della riga di comando. Questa routine viene chiamata `_setargv` ed è descritta in [espansione con caratteri jolly](../cpp/wildcard-expansion.md). Per evitarne l'utilizzo, definire una routine che non esegue alcuna operazione nel file contenente la funzione `main` e denominarla `_setargv`. La chiamata a `_setargv` viene quindi soddisfatta dalla definizione di `_setargv`e la versione della libreria non è caricata.

Analogamente, se non si accede mai alla tabella dell'ambiente tramite l'argomento `envp`, è possibile fornire la propria routine vuota da usare al posto di `_setenvp`, la routine di elaborazione dell'ambiente. Analogamente alla funzione `_setargv`, `_setenvp` deve essere dichiarata come **extern "C"** .

Il programma potrebbe effettuare chiamate al `spawn` o `exec` famiglia di routine nella libreria di runtime del linguaggio C. In questo caso, non si deve eliminare la routine di elaborazione dell'ambiente, dato che questa routine viene utilizzata per passare un ambiente dal processo padre al processo figlio.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Concetti di base](../cpp/basic-concepts-cpp.md)