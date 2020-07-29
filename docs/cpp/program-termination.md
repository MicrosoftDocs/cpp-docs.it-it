---
title: Terminazione del programma C++
description: 'Descrive le modalità di :::no-loc(exit)::: un programma in linguaggio C++.'
ms.date: 01/15/2020
helpviewer_keywords:
- terminating execution
- quitting applications
- :::no-loc(exit):::ing applications
- programs [C++], terminating
ms.assetid: fa0ba9de-b5f1-4e7b-aa65-e7932068b48c
no-loc:
- ':::no-loc(exit):::'
- ':::no-loc(abort):::'
- ':::no-loc(return):::'
- ':::no-loc(main):::'
- ':::no-loc(atexit):::'
- ':::no-loc(void):::'
ms.openlocfilehash: 216aef5dbe8d110f9d75d43b5009b89fc5bfda51
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227179"
---
# <a name="c-program-termination"></a>Terminazione del programma C++

In C++ è possibile :::no-loc(exit)::: programmare un programma nei modi seguenti:

- Chiamare la [:::no-loc(exit):::](:::no-loc(exit):::-function.md) funzione.
- Chiamare la [:::no-loc(abort):::](:::no-loc(abort):::-function.md) funzione.
- Eseguire un' [:::no-loc(return):::](:::no-loc(return):::-statement-cpp.md) istruzione da `:::no-loc(main):::` .

## <a name="no-locexit-function"></a>Funzione :::no-loc(exit):::

La [:::no-loc(exit):::](../c-runtime-library/reference/:::no-loc(exit):::-:::no-loc(exit):::-:::no-loc(exit):::.md) funzione, dichiarata in \<stdlib.h> , termina un programma C++. Il valore fornito come argomento di `:::no-loc(exit):::` è :::no-loc(return)::: ed al sistema operativo come :::no-loc(return)::: codice o codice del programma :::no-loc(exit)::: . Per convenzione, :::no-loc(return)::: il codice zero indica che il programma è stato completato correttamente. È possibile utilizzare le costanti EXIT_FAILURE e EXIT_SUCCESS, definite anche in \<stdlib.h> , per indicare l'esito positivo o negativo del programma.

Il rilascio di un' **`:::no-loc(return):::`** istruzione dalla `:::no-loc(main):::` funzione equivale alla chiamata della `:::no-loc(exit):::` funzione con il :::no-loc(return)::: valore come argomento.

## <a name="no-locabort-function"></a>Funzione :::no-loc(abort):::

La [:::no-loc(abort):::](../c-runtime-library/reference/:::no-loc(abort):::.md) funzione, dichiarata anche nel file di inclusione standard \<stdlib.h> , termina un programma C++. La differenza tra `:::no-loc(exit):::` e `:::no-loc(abort):::` è che `:::no-loc(exit):::` consente l'elaborazione della terminazione in fase di esecuzione C++ (i distruttori di oggetti globali verranno chiamati), mentre `:::no-loc(abort):::` termina immediatamente il programma. La `:::no-loc(abort):::` funzione ignora il processo di distruzione normale per gli oggetti statici globali inizializzati. Ignora inoltre qualsiasi elaborazione speciale specificata mediante la [:::no-loc(atexit):::](../c-runtime-library/reference/:::no-loc(atexit):::.md) funzione.

## <a name="no-locatexit-function"></a>Funzione :::no-loc(atexit):::

Utilizzare la [:::no-loc(atexit):::](../c-runtime-library/reference/:::no-loc(atexit):::.md) funzione per specificare le azioni che vengono eseguite prima della terminazione del programma. Nessun oggetto statico globale inizializzato prima della chiamata a **:::no-loc(atexit):::** viene eliminato definitivamente prima dell'esecuzione della :::no-loc(exit)::: funzione di elaborazione.

## <a name="no-locreturn-statement-in-no-locmain"></a>:::no-loc(return):::in:::no-loc(main):::

Il rilascio di un' [:::no-loc(return):::](:::no-loc(return):::-statement-cpp.md) istruzione da equivale dal punto `:::no-loc(main):::` di vista funzionale alla chiamata della `:::no-loc(exit):::` funzione. Prendere in considerazione gli esempi seguenti:

```cpp
// :::no-loc(return):::_statement.cpp
#include <stdlib.h>
int :::no-loc(main):::()
{
    :::no-loc(exit):::( 3 );
    :::no-loc(return)::: 3;
}
```

Le `:::no-loc(exit):::` **`:::no-loc(return):::`** istruzioni e nell'esempio precedente sono funzionalmente identiche. Tuttavia, C++ richiede che funzioni con :::no-loc(return)::: tipi diversi da **`:::no-loc(void):::`** :::no-loc(return)::: un valore. L' **`:::no-loc(return):::`** istruzione consente di :::no-loc(return)::: scegliere un valore da `:::no-loc(main):::` .

## <a name="destruction-of-static-objects"></a>Distruzione di oggetti statici

Quando si chiama `:::no-loc(exit):::` o si esegue un' **`:::no-loc(return):::`** istruzione da `:::no-loc(main):::` , gli oggetti statici vengono eliminati in ordine inverso rispetto alla relativa inizializzazione (dopo la chiamata a `:::no-loc(atexit):::` se ne esiste uno). Nell'esempio seguente viene mostrato come funziona un'inizializzazione e una pulizia di questo tipo.

### <a name="example"></a>Esempio

Nell'esempio seguente, gli oggetti statici `sd1` e `sd2` vengono creati e inizializzati prima della voce a `:::no-loc(main):::` . Dopo che il programma termina con l' **`:::no-loc(return):::`** istruzione, prima `sd2` viene eliminato definitivamente e quindi `sd1` . Il distruttore della classe `ShowData` chiude i file associati a questi oggetti statici.

```cpp
// using_:::no-loc(exit):::_or_:::no-loc(return):::1.cpp
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
   :::no-loc(void)::: Disp( char *szData ) {
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

int :::no-loc(main):::() {
   sd1.Disp( "hello to default device\n" );
   sd2.Disp( "hello to file hello.dat\n" );
}
```

Un altro modo per scrivere il codice consiste nel dichiarare gli oggetti `ShowData` con ambito blocco, consentendogli di essere eliminati definitivamente quando escono dall'ambito:

```cpp
int :::no-loc(main):::() {
   ShowData sd1, sd2( "hello.dat" );

   sd1.Disp( "hello to default device\n" );
   sd2.Disp( "hello to file hello.dat\n" );
}
```

## <a name="see-also"></a>Vedere anche

[:::no-loc(main):::argomenti della funzione e della riga di comando](:::no-loc(main):::-function-command-line-args.md)
