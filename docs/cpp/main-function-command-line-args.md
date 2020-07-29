---
title: :::no-loc(main):::argomenti della funzione e della riga di comando (C++)
description: 'La :::no-loc(main)::: funzione è il punto di ingresso per un programma C++.'
ms.date: 01/15/2019
ms.assetid: c6568ee6-40ab-4ae8-aa44-c99e232f64ac
no-loc:
- ':::no-loc(main):::'
- ':::no-loc(wmain):::'
- ':::no-loc(inline):::'
- ':::no-loc(static):::'
- ':::no-loc(_tmain):::'
- ':::no-loc(void):::'
- ':::no-loc(exit):::'
- ':::no-loc(argc):::'
- ':::no-loc(argv):::'
- ':::no-loc(envp):::'
- ':::no-loc(CreateProcess):::'
- ':::no-loc(GetModuleFileName):::'
- ':::no-loc(char):::'
- ':::no-loc(wchar_t):::'
- ':::no-loc(extern):::'
ms.openlocfilehash: 9fe7c7a0808584a70bffa541903866b3de364e5f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213320"
---
# <a name="no-locmain-function-and-command-line-arguments"></a>:::no-loc(main):::argomenti della funzione e della riga di comando

Tutti i programmi C++ devono disporre di una `:::no-loc(main):::` funzione. Se si tenta di compilare un progetto C++ *. exe* senza una :::no-loc(main)::: funzione, il compilatore genererà un errore. (Le librerie a collegamento dinamico e le :::no-loc(static)::: librerie non hanno una `:::no-loc(main):::` funzione). La `:::no-loc(main):::` funzione è il punto in cui inizia l'esecuzione del codice sorgente, ma prima che un programma entri nella `:::no-loc(main):::` funzione, tutti :::no-loc(static)::: i membri della classe senza inizializzatori espliciti vengono impostati su zero. In Microsoft C++, :::no-loc(static)::: anche gli oggetti globali vengono inizializzati prima della voce a `:::no-loc(main):::` . Diverse restrizioni si applicano alla `:::no-loc(main):::` funzione che non si applicano ad altre funzioni C++. La `:::no-loc(main):::` funzione:

- Non è possibile eseguire l'overload (vedere [Overload della funzione](function-overloading.md)).
- Non può essere dichiarato come **`:::no-loc(inline):::`** .
- Non può essere dichiarato come **`:::no-loc(static):::`** .
- Non è possibile accettarne l'indirizzo.
- Non può essere chiamato.

La :::no-loc(main)::: funzione non ha una dichiarazione, perché è incorporata nel linguaggio. In caso affermativo, la sintassi di dichiarazione per `:::no-loc(main):::` avrà un aspetto simile al seguente:

```cpp
int :::no-loc(main):::();
int :::no-loc(main):::(int :::no-loc(argc):::, :::no-loc(char)::: *:::no-loc(argv):::[], :::no-loc(char)::: *:::no-loc(envp):::[]);
```

**Specifico di Microsoft**

Se i file di origine usano :::no-loc(char)::: gli acter wide Unicode, è possibile usare `:::no-loc(wmain):::` , che è la :::no-loc(char)::: versione wide-acter di `:::no-loc(main):::` . La sintassi di dichiarazione per `:::no-loc(wmain):::` è la seguente:

```cpp
int :::no-loc(wmain):::( );
int :::no-loc(wmain):::(int :::no-loc(argc):::, :::no-loc(wchar_t)::: *:::no-loc(argv):::[], :::no-loc(wchar_t)::: *:::no-loc(envp):::[]);
```

È anche possibile usare `:::no-loc(_tmain):::` , che è definito in t :::no-loc(char)::: . h. `:::no-loc(_tmain):::`viene risolto in a `:::no-loc(main):::` meno che non sia stato definito _UNICODE. In tal caso, `:::no-loc(_tmain):::` si risolve in `:::no-loc(wmain):::`.

Se non viene specificato alcun valore restituito, il compilatore fornisce un valore restituito pari a zero. In alternativa, le `:::no-loc(main):::` `:::no-loc(wmain):::` funzioni e possono essere dichiarate come restituzione **`:::no-loc(void):::`** (nessun valore restituito). Se si dichiara `:::no-loc(main):::` o `:::no-loc(wmain):::` come restituito **`:::no-loc(void):::`** , non è possibile restituire un :::no-loc(exit)::: codice al processo padre o al sistema operativo usando un'istruzione [return](../cpp/return-statement-in-program-termination-cpp.md) . Per restituire un :::no-loc(exit)::: codice quando `:::no-loc(main):::` o `:::no-loc(wmain):::` viene dichiarato come **`:::no-loc(void):::`** , è necessario utilizzare la [:::no-loc(exit):::](../cpp/:::no-loc(exit):::-function.md) funzione.

**TERMINA specifica Microsoft**

## <a name="command-line-arguments"></a>Argomenti della riga di comando

Gli argomenti per `:::no-loc(main):::` o `:::no-loc(wmain):::` consentono l'analisi pratica della riga di comando degli argomenti e, facoltativamente, l'accesso alle variabili di ambiente. I tipi per `:::no-loc(argc):::` e `:::no-loc(argv):::` sono definiti dal linguaggio. I nomi `:::no-loc(argc):::` , `:::no-loc(argv):::` e `:::no-loc(envp):::` sono tradizionali, ma è possibile assegnare loro un nome qualsiasi.

```cpp
int :::no-loc(main):::( int :::no-loc(argc):::, :::no-loc(char):::* :::no-loc(argv):::[], :::no-loc(char):::* :::no-loc(envp):::[]);
int :::no-loc(wmain):::( int :::no-loc(argc):::, :::no-loc(wchar_t):::* :::no-loc(argv):::[], :::no-loc(wchar_t):::* :::no-loc(envp):::[]);
```

Le definizioni degli argomenti sono le seguenti:

*:::no-loc(argc):::*<br/>
Intero contenente il numero di argomenti che seguono in *:::no-loc(argv):::* . Il *:::no-loc(argc):::* parametro è sempre maggiore o uguale a 1.

*:::no-loc(argv):::*<br/>
Una matrice di stringhe con terminazione null che rappresentano gli argomenti della riga di comando immessi dall'utente del programma. Per convenzione, `:::no-loc(argv):::[0]` è il comando con cui il programma viene richiamato, `:::no-loc(argv):::[1]` è il primo argomento della riga di comando e così via, fino a `:::no-loc(argv):::[:::no-loc(argc):::]` , che è sempre null. Per informazioni sull'eliminazione dell'elaborazione da riga di comando, vedere [personalizzazione dell'elaborazione della riga](../cpp/customizing-cpp-command-line-processing.md) di comando.

Il primo argomento della riga di comando è sempre `:::no-loc(argv):::[1]` e l'ultimo è `:::no-loc(argv):::[:::no-loc(argc)::: - 1]`.

> [!NOTE]
> Per convenzione, `:::no-loc(argv):::[0]` è il comando con cui viene richiamato il programma. Tuttavia, è possibile generare un processo utilizzando e, [:::no-loc(CreateProcess):::](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulefilenamew) se si utilizza sia il primo che il secondo argomento (*LpApplicationName* e *lpCommandLine*), `:::no-loc(argv):::[0]` potrebbe non essere il nome eseguibile, utilizzare [:::no-loc(GetModuleFileName):::](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulefilenamew) per recuperare il nome dell'eseguibile e il percorso completo.

**Specifico di Microsoft**

*:::no-loc(envp):::*<br/>
La *:::no-loc(envp):::* matrice, che è un'estensione comune in molti sistemi UNIX, viene utilizzata in Microsoft C++. È una matrice di stringhe che rappresentano le variabili impostate nell'ambiente dell'utente. Questa matrice viene terminata da una voce NULL. Può essere dichiarato come una matrice di puntatori a **`:::no-loc(char):::`** ( `:::no-loc(char)::: *:::no-loc(envp):::[]` ) o come puntatore a puntatori a **`:::no-loc(char):::`** ( `:::no-loc(char)::: **:::no-loc(envp):::` ). Se il programma usa `:::no-loc(wmain):::` invece di `:::no-loc(main):::` , usare il **`:::no-loc(wchar_t):::`** tipo di dati anziché **`:::no-loc(char):::`** . Il blocco di ambiente passato a `:::no-loc(main):::` e `:::no-loc(wmain):::` è una copia "bloccata" dell'ambiente corrente. Se successivamente si modifica l'ambiente tramite una chiamata a `putenv` o `_wputenv` , l'ambiente corrente (come restituito da `getenv` o `_wgetenv` e dalla `_environ` `_wenviron` variabile o) cambia, ma il blocco a cui punta :::no-loc(envp)::: non viene modificato. Per informazioni sull'eliminazione dell'elaborazione dell'ambiente, vedere [personalizzazione dell'elaborazione della riga di comando](../cpp/customizing-cpp-command-line-processing.md) . Questo argomento è compatibile con ANSI in C, ma non in C++.

**TERMINA specifica Microsoft**

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare gli *:::no-loc(argc):::* *:::no-loc(argv):::* argomenti, e *:::no-loc(envp):::* per `:::no-loc(main):::` :

```cpp
// argument_definitions.cpp
// compile with: /EHsc
#include <iostream>
#include <string.h>

using namespace std;
int :::no-loc(main):::( int :::no-loc(argc):::, :::no-loc(char)::: *:::no-loc(argv):::[], :::no-loc(char)::: *:::no-loc(envp):::[] ) {
    int iNumberLines = 0;    // Default is no line numbers.

    // If /n is passed to the .exe, display numbered listing
    // of environment variables.

    if ( (:::no-loc(argc)::: == 2) && _stricmp( :::no-loc(argv):::[1], "/n" ) == 0 )
         iNumberLines = 1;

    // Walk through list of strings until a NULL is encountered.
    for( int i = 0; :::no-loc(envp):::[i] != NULL; ++i ) {
        if( iNumberLines )
            cout << i << ": " << :::no-loc(envp):::[i] << "\n";
    }
}
```

## <a name="parsing-c-command-line-arguments"></a>Analisi degli argomenti della riga di comando C++

**Specifico di Microsoft**

Il codice di avvio C/C++ di Microsoft utilizza le regole seguenti quando interpreta gli argomenti forniti alla riga di comando del sistema operativo.

- Gli argomenti sono delimitati da spazi vuoti, ovvero da uno spazio o da una tabulazione.

- Il punto di inserimento del cursore :::no-loc(char)::: (^) non è riconosciuto come un :::no-loc(char)::: acter di escape o un delimitatore. :::no-loc(char):::Acter viene gestito completamente dal parser della riga di comando nel sistema operativo prima di essere passato alla `:::no-loc(argv):::` matrice nel programma.

- Una stringa racchiusa tra virgolette doppie ("*String*") viene interpretata come un argomento singolo, indipendentemente dallo spazio vuoto contenuto all'interno di. Una stringa tra virgolette può essere incorporata in un argomento.

- Le virgolette doppie precedute da una barra rovesciata ( \\ ") vengono interpretate come virgolette doppie letterali :::no-loc(char)::: (").

- Le barre rovesciate vengono interpretate letteralmente, a meno che non precedano virgolette doppie.

- Se le virgolette doppie seguono un numero pari di barre rovesciate, per ciascuna coppia di barre rovesciate nella matrice `:::no-loc(argv):::` viene inserita una barra rovesciata e le virgolette doppie vengono interpretate come un delimitatore di stringa.

- Se un numero dispari di barre rovesciate è seguito da virgolette doppie, viene inserita una barra rovesciata nella `:::no-loc(argv):::` matrice per ogni coppia di barre rovesciate e le virgolette doppie sono "precedute da un carattere di escape" dalla :::no-loc(main)::: barra rovesciata di reimpostazione, causando l'inserimento di virgolette doppie (") letterali in `:::no-loc(argv):::` .

### <a name="example"></a>Esempio

Nel programma seguente viene illustrato come vengono passati gli argomenti della riga di comando:

```cpp
// command_line_arguments.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
int :::no-loc(main):::( int :::no-loc(argc):::,      // Number of strings in array :::no-loc(argv):::
          :::no-loc(char)::: *:::no-loc(argv):::[],   // Array of command-line argument strings
          :::no-loc(char)::: *:::no-loc(envp):::[] )  // Array of environment variable strings
{
    int count;

    // Display each command-line argument.
    cout << "\nCommand-line arguments:\n";
    for( count = 0; count < :::no-loc(argc):::; count++ )
         cout << "  :::no-loc(argv):::[" << count << "]   "
                << :::no-loc(argv):::[count] << "\n";
}
```

La tabella seguente mostra input di esempio e output previsto, dimostrando le regole dell'elenco precedente.

### <a name="results-of-parsing-command-lines"></a>Risultati dell'analisi delle righe di comando

|Input della riga di comando|:::no-loc(argv):::[1]|:::no-loc(argv):::[2]|:::no-loc(argv):::3|
|-------------------------|---------------|---------------|---------------|
|`"abc" d e`|`abc`|`d`|`e`|
|`a\\b d"e f"g h`|`a\\b`|`de fg`|`h`|
|`a\\\"b c d`|`a\"b`|`c`|`d`|
|`a\\\\"b c" d e`|`a\\b c`|`d`|`e`|

**TERMINA specifica Microsoft**

## <a name="wildcard-expansion"></a>Espansione di caratteri jolly

**Specifico di Microsoft**

È possibile usare caratteri jolly, ovvero il punto interrogativo (?) e l'asterisco (*), per specificare gli argomenti del percorso e del nome del file nella riga di comando.

Gli argomenti della riga di comando vengono gestiti da una routine denominata `_set:::no-loc(argv):::` (o `_wset:::no-loc(argv):::` nell'ambiente Wide- :::no-loc(char)::: acter), che per impostazione predefinita non espande i caratteri jolly in stringhe separate nella matrice di stringhe `:::no-loc(argv):::` . Per ulteriori informazioni sull'abilitazione dell'espansione dei caratteri jolly, vedere l'argomento relativo all' [espansione degli argomenti jolly](../c-language/expanding-wildcard-arguments.md).

**TERMINA specifica Microsoft**

## <a name="customizing-c-command-line-processing"></a>Personalizzazione dell'elaborazione dalla riga di comando C++

**Specifico di Microsoft**

Se il programma non accetta argomenti della riga di comando, è possibile salvare una piccola quantità di spazio eliminando l'utilizzo della routine di libreria che esegue l'elaborazione della riga di comando. Questa routine viene chiamata `_set:::no-loc(argv):::` ed è descritta in [espansione con caratteri jolly](../cpp/wildcard-expansion.md). Per evitarne l'utilizzo, definire una routine che non esegue alcuna operazione nel file che contiene la `:::no-loc(main):::` funzione e denominarla `_set:::no-loc(argv):::` . La chiamata a `_set:::no-loc(argv):::` viene quindi soddisfatta dalla definizione di `_set:::no-loc(argv):::` e la versione della libreria non è caricata.

Analogamente, se non si accede mai alla tabella dell'ambiente tramite l' `:::no-loc(envp):::` argomento, è possibile fornire la propria routine vuota da usare al posto di `_set:::no-loc(envp):::` , la routine di elaborazione dell'ambiente. Come per la `_set:::no-loc(argv):::` funzione, `_set:::no-loc(envp):::` deve essere dichiarato come ** :::no-loc(extern)::: "C"**.

Il programma potrebbe effettuare chiamate alla `spawn` `exec` famiglia di routine o nella libreria di runtime del linguaggio C. In tal caso, non è necessario disattivare la routine di elaborazione dell'ambiente, perché questa routine viene utilizzata per passare un ambiente dal processo padre al processo figlio.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Concetti di base](../cpp/basic-concepts-cpp.md)
