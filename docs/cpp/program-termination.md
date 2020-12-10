---
title: Terminazione del programma C++
description: Informazioni sui modi standard per uscire da un programma in linguaggio C++.
ms.date: 12/07/2020
helpviewer_keywords:
- terminating execution
- quitting applications
- exiting applications
- programs [C++], terminating
ms.openlocfilehash: 15d31d8d454f6ac90e012d35ef14e6d6e0a9e29a
ms.sourcegitcommit: 754df5278f795f661d4eeb0d4cacc908aa630159
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/09/2020
ms.locfileid: "96933209"
---
# <a name="c-program-termination"></a>Terminazione del programma C++

In C++ è possibile uscire da un programma nei modi seguenti:

- Chiamare la [`exit`](../c-runtime-library/reference/exit-exit-exit.md) funzione.
- Chiamare la [`abort`](../c-runtime-library/reference/abort.md) funzione.
- Eseguire un' [`return`](return-statement-cpp.md) istruzione da `main` .

## <a name="exit-function"></a>Funzione `exit`

La [`exit`](../c-runtime-library/reference/exit-exit-exit.md) funzione, dichiarata in \<stdlib.h> , termina un programma C++. Il valore fornito come argomento per `exit` viene restituito al sistema operativo come codice restituito o codice di uscita del programma. Per convenzione, un codice restituito uguale a zero indica che il programma è stato completato correttamente. È possibile utilizzare le costanti `EXIT_FAILURE` e `EXIT_SUCCESS` definite anche in \<stdlib.h> per indicare l'esito positivo o negativo del programma.

Il rilascio di un' **`return`** istruzione dalla `main` funzione equivale alla chiamata della `exit` funzione con il valore restituito come argomento.

## <a name="abort-function"></a>Funzione `abort`

La [`abort`](../c-runtime-library/reference/abort.md) funzione, dichiarata anche nel file di inclusione standard \<stdlib.h> , termina un programma C++. La differenza tra `exit` e `abort` è che `exit` consente l'elaborazione della terminazione in fase di esecuzione C++ (i distruttori di oggetti globali vengono chiamati), ma `abort` termina immediatamente il programma. La `abort` funzione ignora il processo di distruzione normale per gli oggetti statici globali inizializzati. Ignora inoltre qualsiasi elaborazione speciale specificata mediante la [`atexit`](../c-runtime-library/reference/atexit.md) funzione.

## <a name="atexit-function"></a>Funzione `atexit`

Utilizzare la [`atexit`](../c-runtime-library/reference/atexit.md) funzione per specificare le azioni che vengono eseguite prima della terminazione del programma. Nessun oggetto statico globale inizializzato prima della chiamata a `atexit` viene eliminato definitivamente prima dell'esecuzione della funzione di elaborazione di uscita.

## <a name="return-statement-in-main"></a>`return` in `main`

Il rilascio di un' [`return`](return-statement-cpp.md) istruzione da equivale dal punto `main` di vista funzionale alla chiamata della `exit` funzione. Si consideri l'esempio seguente:

```cpp
// return_statement.cpp
#include <stdlib.h>
int main()
{
    exit( 3 );
    return 3;
}
```

Le `exit` **`return`** istruzioni e nell'esempio precedente sono funzionalmente identiche. In genere, C++ richiede che le funzioni con tipi restituiti diversi da **`void`** restituiscono un valore. La `main` funzione è un'eccezione, ma può terminare senza un' **`return`** istruzione. In tal caso, restituisce un valore specifico dell'implementazione al processo chiamante. L' **`return`** istruzione consente di specificare un valore restituito da `main` .

## <a name="destruction-of-static-objects"></a>Distruzione di oggetti statici

Quando si chiama `exit` o si esegue un' **`return`** istruzione da `main` , gli oggetti statici vengono eliminati in ordine inverso rispetto alla relativa inizializzazione (dopo la chiamata a `atexit` se ne esiste uno). Nell'esempio seguente viene mostrato come funziona un'inizializzazione e una pulizia di questo tipo.

### <a name="example"></a>Esempio

Nell'esempio seguente, gli oggetti statici `sd1` e `sd2` vengono creati e inizializzati prima della voce a `main` . Dopo che il programma termina con l' **`return`** istruzione, prima `sd2` viene eliminato definitivamente e quindi `sd1` . Il distruttore della classe `ShowData` chiude i file associati a questi oggetti statici.

```cpp
// using_exit_or_return1.cpp
#include <stdio.h>
class ShowData {
public:
   // Constructor opens a file.
   ShowData( const char *szDev ) {
   errno_t err;
      err = fopen_s(&OutputDev, szDev, "w" );
   }

   // Destructor closes the file.
   ~ShowData() { fclose( OutputDev ); }

   // Disp function shows a string on the output device.
   void Disp( char *szData ) {
      fputs( szData, OutputDev );
   }
private:
   FILE *OutputDev;
};

//  Define a static object of type ShowData. The output device
//   selected is "CON" -- the standard output device.
ShowData sd1 = "CON";

//  Define another static object of type ShowData. The output
//   is directed to a file called "HELLO.DAT"
ShowData sd2 = "hello.dat";

int main() {
   sd1.Disp( "hello to default device\n" );
   sd2.Disp( "hello to file hello.dat\n" );
}
```

Un altro modo per scrivere il codice consiste nel dichiarare gli oggetti `ShowData` con ambito blocco, consentendogli di essere eliminati definitivamente quando escono dall'ambito:

```cpp
int main() {
   ShowData sd1( "CON" ), sd2( "hello.dat" );

   sd1.Disp( "hello to default device\n" );
   sd2.Disp( "hello to file hello.dat\n" );
}
```

## <a name="see-also"></a>Vedere anche

[`main` argomenti della funzione e della riga di comando](main-function-command-line-args.md)
