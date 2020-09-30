---
title: Potenziali errori di passaggio di oggetti CRT attraverso i limiti DLL
description: Panoramica dei potenziali problemi che possono verificarsi quando si passano oggetti runtime di Microsoft C attraverso un limite della libreria di collegamento dinamico (DLL).
ms.date: 11/04/2016
ms.topic: conceptual
helpviewer_keywords:
- DLL conflicts [C++]
ms.assetid: c217ffd2-5d9a-4678-a1df-62a637a96460
ms.openlocfilehash: f6d831ac8b86be8a6669e8ee6c66da64507d129f
ms.sourcegitcommit: 9451db8480992017c46f9d2df23fb17b503bbe74
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2020
ms.locfileid: "91590186"
---
# <a name="potential-errors-passing-crt-objects-across-dll-boundaries"></a>Potenziali errori di passaggio di oggetti CRT attraverso i limiti DLL

Quando si passano oggetti di runtime del linguaggio C (CRT) come handle di file, impostazioni locali e variabili di ambiente all'interno o all'esterno di una DLL tramite chiamate di funzione attraverso il limite della DLL, è possibile che si verifichi un comportamento imprevisto se la DLL o tutti i file che eseguono chiamate nella DLL utilizzano copie diverse delle librerie CRT.

Un problema correlato può verificarsi quando si alloca memoria (in modo esplicito con `new` o o in modo `malloc` implicito con `strdup` , `strstreambuf::str` e così via) e quindi si passa un puntatore attraverso un limite di dll in cui viene liberato. Questo può causare una violazione di accesso alla memoria o un danneggiamento dell'heap se la DLL e i relativi consumer utilizzano copie diverse delle librerie CRT.

Un altro sintomo di questo problema è un errore nella finestra di output durante il debug, ad esempio `HEAP[]: Invalid Address specified to RtlValidateHeap(#,#)`

## <a name="causes"></a>Cause

Ogni copia della libreria CRT ha uno stato separato e distinto, che viene mantenuto dall'app o dalla DLL nella memoria locale dei thread.

Gli oggetti CRT come gli handle di file, le variabili di ambiente e le impostazioni locali sono validi solo per la copia di CRT nell'app o nella DLL in cui questi oggetti sono stati allocati o impostati. Quando una DLL e i relativi client utilizzano copie diverse della libreria CRT, non è possibile passare questi oggetti CRT attraverso i limiti della DLL e aspettarsi che vengano utilizzati correttamente sull'altro lato. Questo vale per le versioni CRT precedenti a Universal CRT in Visual Studio 2015 e versioni successive.

È presente una libreria CRT specifica della versione per ogni versione di Visual Studio compilata con Visual Studio 2013 o versioni precedenti. I dettagli di implementazione interni di CRT, ad esempio le strutture di dati e le convenzioni di denominazione, sono diversi in ogni versione. Il collegamento dinamico del codice compilato per una versione di CRT a una versione diversa della DLL CRT non è mai stato supportato. Occasionalmente funziona, ma a causa della fortuna piuttosto che della progettazione.

Poiché ogni copia della libreria CRT dispone di un proprio gestore dell'heap, l'allocazione della memoria in una libreria CRT e il passaggio del puntatore su un limite della DLL che deve essere liberato da una copia diversa della libreria CRT possono causare il danneggiamento dell'heap. Se si progetta la DLL in modo che passi gli oggetti CRT oltre i limiti della DLL oppure alloca memoria e si prevede che venga liberata all'esterno della DLL, i client della DLL devono usare la stessa copia della libreria CRT della DLL.

La DLL e i relativi client usano in genere la stessa copia della libreria CRT solo se sono collegati al momento del caricamento alla stessa versione della DLL CRT. Poiché la versione DLL della libreria Universal CRT usata da Visual Studio 2015 e versioni successive in Windows 10, è ora un componente Windows distribuito in modo centralizzato (ucrtbase.dll), è lo stesso per le app compilate con Visual Studio 2015 e versioni successive. Tuttavia, anche quando il codice CRT è identico, non è possibile assegnare memoria allocata in un heap a un componente che usa un heap diverso.

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

In questo esempio viene passato un handle di file oltre i limiti di una DLL.

I file DLL e exe sono compilati con `/MD` , in modo che condividono una sola copia di CRT.

Se si ricompila con in `/MT` modo che usino copie separate di CRT, l'esecuzione del **test1Main.exe** risultante comporta una violazione di accesso.

```cpp
// test1Dll.cpp
// compile with: cl /EHsc /W4 /MD /LD test1Dll.cpp
#include <stdio.h>
__declspec(dllexport) void writeFile(FILE *stream)
{
   char   s[] = "this is a string\n";
   fprintf( stream, "%s", s );
   fclose( stream );
}
```

```cpp
// test1Main.cpp
// compile with: cl /EHsc /W4 /MD test1Main.cpp test1Dll.lib
#include <stdio.h>
#include <process.h>
void writeFile(FILE *stream);

int main(void)
{
   FILE  * stream;
   errno_t err = fopen_s( &stream, "fprintf.out", "w" );
   writeFile(stream);
   system( "type fprintf.out" );
}
```

```Output
this is a string
```

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

In questo esempio vengono passate le variabili di ambiente oltre i limiti di una DLL.

```cpp
// test2Dll.cpp
// compile with: cl /EHsc /W4 /MT /LD test2Dll.cpp
#include <stdio.h>
#include <stdlib.h>

__declspec(dllexport) void readEnv()
{
   char *libvar;
   size_t libvarsize;

   /* Get the value of the MYLIB environment variable. */
   _dupenv_s( &libvar, &libvarsize, "MYLIB" );

   if( libvar != NULL )
      printf( "New MYLIB variable is: %s\n", libvar);
   else
      printf( "MYLIB has not been set.\n");
   free( libvar );
}
```

```cpp
// test2Main.cpp
// compile with: cl /EHsc /W4 /MT test2Main.cpp test2dll.lib
#include <stdlib.h>
#include <stdio.h>

void readEnv();

int main( void )
{
   _putenv( "MYLIB=c:\\mylib;c:\\yourlib" );
   readEnv();
}
```

```Output
MYLIB has not been set.
```

Se entrambi i file DLL e exe sono compilati con `/MD` , in modo che venga usata solo una copia di CRT, il programma viene eseguito correttamente e produce l'output seguente:

```
New MYLIB variable is: c:\mylib;c:\yourlib
```

## <a name="see-also"></a>Vedi anche

[Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)
