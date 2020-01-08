---
title: C++terminazione programma
ms.date: 12/10/2019
helpviewer_keywords:
- terminating execution
- quitting applications
- exiting applications
- programs [C++], terminating
ms.assetid: fa0ba9de-b5f1-4e7b-aa65-e7932068b48c
ms.openlocfilehash: a0e86cacd951327d39296a183be5ee4fbc36fd15
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75301340"
---
# <a name="c-program-termination"></a>C++terminazione programma

In C++è possibile uscire da un programma nei modi seguenti:

- Chiamare la funzione [Exit](exit-function.md) .
- Chiamare la funzione [Abort](abort-function.md) .
- Eseguire un'istruzione [return](return-statement-cpp.md) da `main`.

## <a name="exit-function"></a>Funzione exit

La funzione [Exit](../c-runtime-library/reference/exit-exit-exit.md) , dichiarata in \<stdlib. h >, termina C++ un programma. Il valore fornito come argomento per `exit` viene restituito al sistema operativo come codice restituito o codice di uscita del programma. Per convenzione, un codice restituito uguale a zero indica che il programma è stato completato correttamente. Per indicare l'esito positivo o negativo del programma, è possibile utilizzare le costanti EXIT_FAILURE e EXIT_SUCCESS, definite anche in \<stdlib. h >.

Il rilascio di un'istruzione **return** dalla funzione `main` equivale alla chiamata della funzione `exit` con il valore restituito come argomento.

## <a name="abort-function"></a>abort (funzione)

La funzione [Abort](../c-runtime-library/reference/abort.md) , dichiarata anche nel file di inclusione standard \<stdlib. h >, C++ termina un programma. La differenza tra `exit` e `abort` è che `exit` consente l' C++ elaborazione della terminazione in fase di esecuzione (i distruttori di oggetti globali verranno chiamati), mentre `abort` termina immediatamente il programma. La funzione `abort` ignora il processo di distruzione normale per gli oggetti statici globali inizializzati. Ignora inoltre qualsiasi elaborazione speciale specificata mediante la funzione [atexit](../c-runtime-library/reference/atexit.md) .

## <a name="atexit-function"></a>atexit (funzione)

Utilizzare la funzione [atexit](../c-runtime-library/reference/atexit.md) per specificare le azioni che vengono eseguite prima della terminazione del programma. Nessun oggetto statico globale inizializzato prima della chiamata a **atexit** viene eliminato definitivamente prima dell'esecuzione della funzione di elaborazione di uscita.

## <a name="return-statement-in-main"></a>return (istruzione) in Main

Il rilascio di un'istruzione [return](return-statement-cpp.md) da `main` è equivalente dal punto di vista funzionale alla chiamata della funzione `exit`. Si consideri l'esempio seguente:

```cpp
// return_statement.cpp
#include <stdlib.h>
int main()
{
    exit( 3 );
    return 3;
}
```

Le istruzioni `exit` e **return** nell'esempio precedente sono funzionalmente identiche. Tuttavia, C++ richiede che le funzioni con tipi restituiti diversi da **void** restituiscano un valore. L'istruzione **return** consente di restituire un valore da `main`.

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

[main: avvio del programma](main-program-startup.md)