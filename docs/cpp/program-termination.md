---
title: C++terminazione programma
description: Vengono descritte le modalità di exit C++un programma in lingua.
ms.date: 01/15/2020
helpviewer_keywords:
- terminating execution
- quitting applications
- exiting applications
- programs [C++], terminating
ms.assetid: fa0ba9de-b5f1-4e7b-aa65-e7932068b48c
no-loc:
- exit
- abort
- return
- main
- atexit
- void
ms.openlocfilehash: f83c9d5da5b0a1127603a97fd7946e9cca43a7a5
ms.sourcegitcommit: e93f3e6a110fe38bc642055bdf4785e620d4220f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2020
ms.locfileid: "76123955"
---
# <a name="c-program-termination"></a>C++terminazione programma

In C++è possibile exit un programma nei modi seguenti:

- Chiamare la funzione [exit](exit-function.md) .
- Chiamare la funzione [abort](abort-function.md) .
- Eseguire un'istruzione [return](return-statement-cpp.md) da `main`.

## <a name="opno-locexit-function"></a>Funzione exit

La funzione [exit](../c-runtime-library/reference/exit-exit-exit.md) , dichiarata in \<stdlib. h >, termina C++ un programma. Il valore fornito come argomento per `exit` viene restituito al sistema operativo come codice return o exit codice del programma. Per convenzione, un codice return zero indica che il programma è stato completato correttamente. Per indicare l'esito positivo o negativo del programma, è possibile utilizzare le costanti EXIT_FAILURE e EXIT_SUCCESS, definite anche in \<stdlib. h >.

Il rilascio di un'istruzione **return** dalla funzione `main` equivale alla chiamata della funzione `exit` con il valore di return come argomento.

## <a name="opno-locabort-function"></a>Funzione abort

La funzione [abort](../c-runtime-library/reference/abort.md) , dichiarata anche nel file di inclusione standard \<stdlib. h >, C++ termina un programma. La differenza tra `exit` e `abort` è che `exit` consente l' C++ elaborazione della terminazione in fase di esecuzione (i distruttori di oggetti globali verranno chiamati), mentre `abort` termina immediatamente il programma. La funzione `abort` ignora il processo di distruzione normale per gli oggetti statici globali inizializzati. Ignora inoltre qualsiasi elaborazione speciale specificata mediante la funzione [atexit](../c-runtime-library/reference/atexit.md) .

## <a name="opno-locatexit-function"></a>Funzione atexit

Utilizzare la funzione [atexit](../c-runtime-library/reference/atexit.md) per specificare le azioni che vengono eseguite prima della terminazione del programma. Nessun oggetto statico globale inizializzato prima della chiamata a **atexit** viene eliminato definitivamente prima dell'esecuzione della funzione di elaborazione del exit.

## <a name="opno-locreturn-statement-in-opno-locmain"></a>istruzione return in main

Il rilascio di un'istruzione [return](return-statement-cpp.md) da `main` è funzionalmente equivalente alla chiamata della funzione `exit`. Si consideri l'esempio seguente:

```cpp
// return_statement.cpp
#include <stdlib.h>
int main()
{
    exit( 3 );
    return 3;
}
```

Le istruzioni `exit` e **return** nell'esempio precedente sono funzionalmente identiche. Tuttavia, C++ richiede che funzioni con return tipi diversi da **void** return un valore. L'istruzione **return** consente di return un valore da `main`.

## <a name="destruction-of-static-objects"></a>Distruzione di oggetti statici

Quando si chiama `exit` o si esegue un'istruzione **return** da `main`, gli oggetti statici vengono eliminati in ordine inverso rispetto alla relativa inizializzazione (dopo la chiamata a `atexit` se ne esiste uno). Nell'esempio seguente viene mostrato come funziona un'inizializzazione e una pulizia di questo tipo.

### <a name="example"></a>Esempio

Nell'esempio seguente, gli oggetti statici `sd1` e `sd2` vengono creati e inizializzati prima della voce `main`. Una volta terminato il programma utilizzando l'istruzione **return** , il primo `sd2` viene eliminato definitivamente, quindi `sd1`. Il distruttore della classe `ShowData` chiude i file associati a questi oggetti statici.

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
   ShowData sd1, sd2( "hello.dat" );

   sd1.Disp( "hello to default device\n" );
   sd2.Disp( "hello to file hello.dat\n" );
}
```

## <a name="see-also"></a>Vedere anche

[main funzione e argomenti della riga di comando](main-function-command-line-args.md)
