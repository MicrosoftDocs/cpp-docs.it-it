---
title: Potenziali errori di passaggio di oggetti CRT attraverso i limiti DLL
ms.date: 11/04/2016
helpviewer_keywords:
- DLL conflicts [C++]
ms.assetid: c217ffd2-5d9a-4678-a1df-62a637a96460
ms.openlocfilehash: 10fbb128698b6422779d09a15fe3c1d25e8de5b5
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65446662"
---
# <a name="potential-errors-passing-crt-objects-across-dll-boundaries"></a>Potenziali errori di passaggio di oggetti CRT attraverso i limiti DLL

Quando si passano oggetti di runtime del linguaggio C (CRT) come handle di file, impostazioni locali e variabili di ambiente all'interno o all'esterno di una DLL (chiamate di funzione oltre i limiti della DLL) può verificarsi un comportamento imprevisto se la DLL, nonché i file chiamati nella DLL, utilizzano copie diverse delle librerie CRT.

Un problema correlato può verificarsi quando viene allocata memoria (in modo esplicito con `new` o `malloc` oppure, in modo implicito, con `strdup`, `strstreambuf::str` e così via) e quindi viene passato un puntatore oltre i limiti della DLL da liberare. Questo può comportare una violazione di accesso alla memoria o problemi della memoria heap se la DLL e gli utenti utilizzano copie diverse delle librerie CRT.

Un altro sintomo di questo problema può essere un errore nella finestra di output durante il debug come:

HEAP[]: indirizzo non valido specificato a RtlValidateHeap(#,#)

## <a name="causes"></a>Cause

Ogni copia della libreria CRT ha uno stato separato e distinto, che viene mantenuto dall'app o dalla DLL nella memoria locale dei thread. Di conseguenza, gli oggetti CRT come gli handle di file, le variabili di ambiente e le impostazioni locali sono validi solo per la copia di CRT nell'app o nella DLL in cui questi oggetti vengono allocati o impostati. Quando una DLL e i relativi client app usano copie diverse della libreria CRT, non è possibile passare questi oggetti CRT attraverso il limite di DLL e aspettarsi di prelevarli correttamente dall'altra parte. Questo vale soprattutto per le versioni di CRT precedenti Universal CRT in Visual Studio 2015 e versioni successive. È presente una libreria CRT specifica della versione per ogni versione di Visual Studio compilata con Visual Studio 2013 o versioni precedenti. I dettagli interni di implementazione di CRT, ad esempio le strutture dati e le convenzioni di denominazione, sono differenti per ogni versione. Il collegamento dinamico di codice compilato per una versione di CRT a una versione diversa della DLL CRT non è mai stato supportato, ma talvolta funziona. Questo comportamento, tuttavia, si verifica più per caso che grazie alla progettazione.

Inoltre, poiché ogni copia della libreria CRT dispone di un proprio gestore dell'heap, allocando memoria in una libreria CRT e passando il puntatore oltre i limiti di una DLL da liberare da una copia diversa della libreria CRT è potenzialmente causa di problemi che si verificano nella memoria heap. Se si progetta la DLL in modo che passi gli oggetti CRT oltre i limiti o che allochi memoria e aspetti che questa venga liberata all'esterno della DLL, si limitano i client app della DLL a usare la stessa copia della libreria CRT usata dalla DLL. La DLL e i relativi client usano in genere la stessa copia della libreria CRT solo se sono collegati al momento del caricamento alla stessa versione della DLL CRT. Poiché la versione della DLL della libreria Universal CRT usata da Visual Studio 2015 e versioni successive il Windows 10 è ora un componente di Windows distribuito in modo centralizzato, ucrtbase.dll, tale componente è lo stesso per le app compilate con Visual Studio 2015 e versioni successive. Tuttavia, anche quando il codice CRT è identico, non è possibile assegnare memoria allocata in un heap a un componente che usa un altro heap.

## <a name="example"></a>Esempio

### <a name="description"></a>Description

In questo esempio viene passato un handle di file oltre i limiti di una DLL.

La DLL e il file .exe sono compilati con /MD, in modo che condividono una sola copia di CRT.

Se si ricompila con /MT in modo che vengano utilizzate copie separate di CRT, l'esecuzione del test1Main.exe risultante genera una violazione di accesso.

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

### <a name="description"></a>Description

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

Se la DLL e il file .exe sono compilati con /MD in modo che solo una copia di CRT venga utilizzata, il programma viene eseguito correttamente e produce l'output seguente:

```
New MYLIB variable is: c:\mylib;c:\yourlib
```

## <a name="see-also"></a>Vedere anche

[Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)
