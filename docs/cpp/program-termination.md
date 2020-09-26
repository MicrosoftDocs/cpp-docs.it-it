---
title: Terminazione del programma C++
description: Descrive le modalità di exit un programma in linguaggio C++.
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
ms.openlocfilehash: fd0c7699ae032b5551f4fbc37eb3b7fa999a168f
ms.sourcegitcommit: d9c94dcabd94537e304be0261b3263c2071b437b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/25/2020
ms.locfileid: "91352921"
---
# <a name="c-program-termination"></a>Terminazione del programma C++

In C++ è possibile exit programmare un programma nei modi seguenti:

- Chiamare la [exit](../c-runtime-library/reference/exit-exit-exit.md) funzione.
- Chiamare la [abort](../c-runtime-library/reference/abort.md) funzione.
- Eseguire un' [return](return-statement-cpp.md) istruzione da `main` .

## <a name="no-locexit-function"></a>Funzione exit

La [exit](../c-runtime-library/reference/exit-exit-exit.md) funzione, dichiarata in \<stdlib.h> , termina un programma C++. Il valore fornito come argomento di `exit` è return ed al sistema operativo come return codice o codice del programma exit . Per convenzione, return il codice zero indica che il programma è stato completato correttamente. È possibile utilizzare le costanti EXIT_FAILURE e EXIT_SUCCESS, definite anche in \<stdlib.h> , per indicare l'esito positivo o negativo del programma.

Il rilascio di un' **`return`** istruzione dalla `main` funzione equivale alla chiamata della `exit` funzione con il return valore come argomento.

## <a name="no-locabort-function"></a>Funzione abort

La [abort](../c-runtime-library/reference/abort.md) funzione, dichiarata anche nel file di inclusione standard \<stdlib.h> , termina un programma C++. La differenza tra `exit` e `abort` è che `exit` consente l'elaborazione della terminazione in fase di esecuzione C++ (i distruttori di oggetti globali verranno chiamati), mentre `abort` termina immediatamente il programma. La `abort` funzione ignora il processo di distruzione normale per gli oggetti statici globali inizializzati. Ignora inoltre qualsiasi elaborazione speciale specificata mediante la [atexit](../c-runtime-library/reference/atexit.md) funzione.

## <a name="no-locatexit-function"></a>Funzione atexit

Utilizzare la [atexit](../c-runtime-library/reference/atexit.md) funzione per specificare le azioni che vengono eseguite prima della terminazione del programma. Nessun oggetto statico globale inizializzato prima della chiamata a **atexit** viene eliminato definitivamente prima dell'esecuzione della exit funzione di elaborazione.

## <a name="no-locreturn-statement-in-no-locmain"></a>return in main

Il rilascio di un' [return](return-statement-cpp.md) istruzione da equivale dal punto `main` di vista funzionale alla chiamata della `exit` funzione. Si consideri l'esempio seguente:

```cpp
// return_statement.cpp
#include <stdlib.h>
int main()
{
    exit( 3 );
    return 3;
}
```

Le `exit` **`return`** istruzioni e nell'esempio precedente sono funzionalmente identiche. Tuttavia, C++ richiede che funzioni con return tipi diversi da **`void`** return un valore. L' **`return`** istruzione consente di return scegliere un valore da `main` .

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
   ShowData sd1, sd2( "hello.dat" );

   sd1.Disp( "hello to default device\n" );
   sd2.Disp( "hello to file hello.dat\n" );
}
```

## <a name="see-also"></a>Vedere anche

[main argomenti della funzione e della riga di comando](main-function-command-line-args.md)
