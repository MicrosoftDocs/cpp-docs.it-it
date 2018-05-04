---
title: _beginthread, _beginthreadex | Microsoft Docs
ms.custom: ''
ms.date: 02/27/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _beginthread
- _beginthreadex
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- beginthread
- _beginthread
- beginthreadex
- _beginthreadex
dev_langs:
- C++
helpviewer_keywords:
- _beginthread function
- threading [C++], creating threads
- beginthreadex function
- _beginthreadex function
- beginthread function
ms.assetid: 0df64740-a978-4358-a88f-fb0702720091
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f04d6bc5ab0864a1dfc27a1de8b09f1740f845d9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="beginthread-beginthreadex"></a>_beginthread, _beginthreadex

Crea un thread.

## <a name="syntax"></a>Sintassi

```cpp
uintptr_t _beginthread( // NATIVE CODE
   void( __cdecl *start_address )( void * ),
   unsigned stack_size,
   void *arglist
);
uintptr_t _beginthread( // MANAGED CODE
   void( __clrcall *start_address )( void * ),
   unsigned stack_size,
   void *arglist
);
uintptr_t _beginthreadex( // NATIVE CODE
   void *security,
   unsigned stack_size,
   unsigned ( __stdcall *start_address )( void * ),
   void *arglist,
   unsigned initflag,
   unsigned *thrdaddr
);
uintptr_t _beginthreadex( // MANAGED CODE
   void *security,
   unsigned stack_size,
   unsigned ( __clrcall *start_address )( void * ),
   void *arglist,
   unsigned initflag,
   unsigned *thrdaddr
);
```

### <a name="parameters"></a>Parametri

*start_address*<br/>
Indirizzo iniziale di una routine che avvia l'esecuzione di un nuovo thread. Per **beginthread**, la convenzione di chiamata è [cdecl](../../cpp/cdecl.md) (per il codice nativo) o [clrcall](../../cpp/clrcall.md) (per il codice gestito); per **beginthreadex**, è [stdcall](../../cpp/stdcall.md) (per il codice nativo) o [clrcall](../../cpp/clrcall.md) (per il codice gestito).

*stack_size*<br/>
Dimensione dello stack per un nuovo thread, oppure 0.

*arglist*<br/>
Elenco di argomenti da passare a un nuovo thread o NULL.

*Sicurezza*<br/>
Puntatore a una struttura [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) che determina se l'handle restituito può essere ereditato dai processi figlio. Se *sicurezza* è NULL, l'handle non può essere ereditato. Deve essere NULL per le applicazioni Windows 95.

*initflag*<br/>
Flag che controllano lo stato iniziale di un nuovo thread. Impostare *initflag* su 0 per l'esecuzione immediata o per **CREATE_SUSPENDED** per creare il thread in uno stato sospeso; usare [ResumeThread](http://msdn.microsoft.com/library/windows/desktop/ms685086.aspx) per eseguire il thread. Impostare *initflag* alla **STACK_SIZE_PARAM_IS_A_RESERVATION** contrassegno per l'utilizzo *stack_size* come dimensione dello stack in byte di riserva iniziale; se questo flag non è specificato, *stack_size* specifica la dimensione del commit.

*thrdaddr*<br/>
Punta a una variabile a 32 bit che riceve l'identificatore del thread. Se è NULL, non viene usato.

## <a name="return-value"></a>Valore restituito

Se completata correttamente, ognuna di queste funzioni restituisce un handle per il thread appena creato. Tuttavia, se il thread appena creato termina troppo rapidamente **beginthread** potrebbe non restituire un handle valido. Vedere la discussione nella sezione Osservazioni. In caso di errore **beginthread** restituisce-1L e **errno** è impostato su **EAGAIN** se sono presenti troppi thread, a **EINVAL** se l'argomento è non valido o la dimensione dello stack non è corretta, o a **EACCES** se sono presenti risorse insufficienti (ad esempio memoria). In caso di errore **beginthreadex** restituisce 0, e **errno** e **doserrno** sono impostati.

Se *start_address* è NULL, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** alla **EINVAL** e restituiscono -1.

Per altre informazioni su questi e altri codici restituiti, vedere [errno, _doserrno, _sys_errlist, e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Per ulteriori informazioni **uintptr_t**, vedere [tipi Standard](../../c-runtime-library/standard-types.md).

## <a name="remarks"></a>Note

Il **beginthread** funzione crea un thread che inizia l'esecuzione di una routine presente in *start_address*. La routine in *start_address* deve usare il **cdecl** (per il codice nativo) o **clrcall** (per il codice gestito) convenzione di chiamata e deve avere alcun valore restituito. Quando il thread viene restituito da quella routine, viene terminato automaticamente. Per altre informazioni sui thread, vedere [Supporto del multithreading per il codice precedente (Visual C++)](../../parallel/multithreading-support-for-older-code-visual-cpp.md).

**beginthreadex** è simile a Win32 [CreateThread](http://msdn.microsoft.com/library/windows/desktop/ms682453.aspx) API più da vicino più **beginthread** does. **beginthreadex** è diverso da **beginthread** nei modi seguenti:

- **beginthreadex** presenta tre parametri aggiuntivi: *initflag*, *sicurezza*, e **threadaddr**. Il nuovo thread può essere creato in uno stato sospeso, con una sicurezza specificata ed è possibile accedere tramite *thrdaddr*, ovvero l'identificatore del thread.

- La routine in *start_address* che viene passata a **beginthreadex** necessario utilizzare il **stdcall** (per il codice nativo) o **clrcall** (per codice gestito) la convenzione di chiamata e deve restituire un codice di uscita del thread.

- **beginthreadex** restituisce 0 in caso di errore, anziché-1L.

- Un thread creato usando **beginthreadex** viene terminata da una chiamata a [endthreadex](endthread-endthreadex.md).

Il **beginthreadex** funzione offre maggiore controllo sul modo in cui viene creato il thread rispetto a **beginthread** does. Il **endthreadex** funzione è inoltre più flessibile. Ad esempio, con **beginthreadex**, è possibile utilizzare le informazioni di sicurezza, impostare lo stato iniziale del thread (in esecuzione o sospeso) e ottenere l'identificatore del thread del thread appena creato. È inoltre possibile utilizzare l'handle del thread restituito da **beginthreadex** con le API, si possono fare con di sincronizzazione **beginthread**.

È preferibile usare **beginthreadex** rispetto **beginthread**. Se il thread generato da **beginthread** termina rapidamente, l'handle restituito al chiamante del **beginthread** potrebbe essere non valido o puntare a un altro thread. Tuttavia, l'handle restituito da **beginthreadex** deve essere chiuso dal chiamante di **beginthreadex**, pertanto è garantita da un handle valido se **beginthreadex** non ha restituito un errore.

È possibile chiamare [endthread](endthread-endthreadex.md) o **endthreadex** in modo esplicito per terminare un thread; tuttavia **endthread** oppure **endthreadex** viene chiamato automaticamente quando il thread viene restituito dalla routine passata come parametro. Terminazione di un thread con una chiamata a **endthread** oppure **endthreadex** consente di assicurare il ripristino corretto delle risorse che sono stati allocati per il thread.

**endthread** chiude automaticamente l'handle del thread, mentre **endthreadex** non lo è. Pertanto, quando si usano **beginthread** e **endthread**, non chiudere in modo esplicito l'handle del thread chiamando Win32 [CloseHandle](http://msdn.microsoft.com/library/windows/desktop/ms724211.aspx) API. Questo comportamento è diverso dall'API Win32 [ExitThread](http://msdn.microsoft.com/library/windows/desktop/ms682659.aspx) .

> [!NOTE]
> Per un file eseguibile collegato a LIBCMT. lib, non chiamare Win32 **ExitThread** API in modo da non impedire il sistema in fase di esecuzione del recupero le risorse allocate. **endthread** e **endthreadex** recuperano le risorse del thread allocate, quindi chiamare **ExitThread**.

Il sistema operativo gestisce l'allocazione dello stack quando entrambi **beginthread** oppure **beginthreadex** viene chiamato; non è necessario passare l'indirizzo dello stack di thread a una di queste funzioni. Inoltre, il *stack_size* argomento può essere 0, nel qual caso il sistema operativo Usa lo stesso valore dello stack specificato per il thread principale.

*elenco di argomenti* è un parametro da passare al thread appena creato. In genere è l'indirizzo di un elemento di dati, quale una stringa di caratteri. *arglist* può essere NULL se non è necessaria, ma **beginthread** e **beginthreadex** deve essere assegnato un valore da passare al nuovo thread. Tutti i thread vengono terminati se un thread qualsiasi chiama [abort](abort.md), **uscire**, **Exit**, oppure **ExitProcess**.

Le impostazioni locali del nuovo thread viene inizializzata utilizzando informazioni di impostazioni locali correnti globali per ogni processo. Se le impostazioni locali per thread vengono abilitate da una chiamata a [configthreadlocale](configthreadlocale.md) (a livello globale o per i nuovi thread solo), il thread può modificare le impostazioni locali in modo indipendente da altri thread chiamando **setlocale** o **wsetlocale**. Thread che non hanno il flag di impostazioni locali per thread impostato possono influenzare le informazioni sulle impostazioni locali in tutti gli altri thread che inoltre non impostare il flag di impostazioni locali per thread, nonché tutti i thread appena creato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Per codice misto e puro, **beginthread** e **beginthreadex** dispongono ognuno di due overload. Uno accetta un puntatore alla funzione nativa della convenzione di chiamata, mentre l'altro accetta un **clrcall** puntatore a funzione. Il primo overload non è indipendente dal dominio applicazione e non lo sarà mai. Se si sta scrivendo codice misto o puro, è necessario assicurarsi che il nuovo thread acceda al dominio dell'applicazione corretto prima di accedere alle risorse gestite. Questa operazione può essere eseguita, ad esempio, usando la funzione [call_in_domain](../../dotnet/call-in-appdomain-function.md). Il secondo overload è indipendente dal dominio; dell'applicazione il thread appena creato finirà sempre nel dominio dell'applicazione del chiamante del **beginthread** oppure **beginthreadex**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_beginthread**|\<process.h>|
|**_beginthreadex**|\<process.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo versioni multithread delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md) .

Per utilizzare **beginthread** oppure **beginthreadex**, l'applicazione deve essere collegata a una delle librerie di runtime C con multithreading.

## <a name="example"></a>Esempio

Nell'esempio seguente viene utilizzata **beginthread** e **endthread**.

```C
// crt_BEGTHRD.C
// compile with: /MT /D "_X86_" /c
// processor: x86
#include <windows.h>
#include <process.h>    /* _beginthread, _endthread */
#include <stddef.h>
#include <stdlib.h>
#include <conio.h>

void Bounce( void * );
void CheckKey( void * );

// GetRandom returns a random integer between min and max.
#define GetRandom( min, max ) ((rand() % (int)(((max) + 1) - (min))) + (min))
// GetGlyph returns a printable ASCII character value
#define GetGlyph( val ) ((char)((val + 32) % 93 + 33))

BOOL repeat = TRUE;                 // Global repeat flag
HANDLE hStdOut;                     // Handle for console window
CONSOLE_SCREEN_BUFFER_INFO csbi;    // Console information structure

int main()
{
    int param = 0;
    int * pparam = &param;

    // Get display screen's text row and column information.
    hStdOut = GetStdHandle( STD_OUTPUT_HANDLE );
    GetConsoleScreenBufferInfo( hStdOut, &csbi );

    // Launch CheckKey thread to check for terminating keystroke.
    _beginthread( CheckKey, 0, NULL );

    // Loop until CheckKey terminates program or 1000 threads created.
    while( repeat && param < 1000 )
    {
        // launch another character thread.
        _beginthread( Bounce, 0, (void *) pparam );

        // increment the thread parameter
        param++;

        // Wait one second between loops.
        Sleep( 1000L );
    }
}

// CheckKey - Thread to wait for a keystroke, then clear repeat flag.
void CheckKey( void * ignored )
{
    _getch();
    repeat = 0;    // _endthread implied
}

// Bounce - Thread to create and and control a colored letter that moves
// around on the screen.
//
// Params: parg - the value to create the character from
void Bounce( void * parg )
{
    char       blankcell = 0x20;
    CHAR_INFO  ci;
    COORD      oldcoord, cellsize, origin;
    DWORD      result;
    SMALL_RECT region;

    cellsize.X = cellsize.Y = 1;
    origin.X = origin.Y = 0;

    // Generate location, letter and color attribute from thread argument.
    srand( _threadid );
    oldcoord.X = region.Left = region.Right =
        GetRandom(csbi.srWindow.Left, csbi.srWindow.Right - 1);
    oldcoord.Y = region.Top = region.Bottom =
        GetRandom(csbi.srWindow.Top, csbi.srWindow.Bottom - 1);
    ci.Char.AsciiChar = GetGlyph(*((int *)parg));
    ci.Attributes = GetRandom(1, 15);

    while (repeat)
    {
        // Pause between loops.
        Sleep( 100L );

        // Blank out our old position on the screen, and draw new letter.
        WriteConsoleOutputCharacterA(hStdOut, &blankcell, 1, oldcoord, &result);
        WriteConsoleOutputA(hStdOut, &ci, cellsize, origin, &region);

        // Increment the coordinate for next placement of the block.
        oldcoord.X = region.Left;
        oldcoord.Y = region.Top;
        region.Left = region.Right += GetRandom(-1, 1);
        region.Top = region.Bottom += GetRandom(-1, 1);

        // Correct placement (and beep) if about to go off the screen.
        if (region.Left < csbi.srWindow.Left)
            region.Left = region.Right = csbi.srWindow.Left + 1;
        else if (region.Right >= csbi.srWindow.Right)
            region.Left = region.Right = csbi.srWindow.Right - 2;
        else if (region.Top < csbi.srWindow.Top)
            region.Top = region.Bottom = csbi.srWindow.Top + 1;
        else if (region.Bottom >= csbi.srWindow.Bottom)
            region.Top = region.Bottom = csbi.srWindow.Bottom - 2;

        // If not at a screen border, continue, otherwise beep.
        else
            continue;
        Beep((ci.Char.AsciiChar - 'A') * 100, 175);
    }
    // _endthread given to terminate
    _endthread();
}
```

Premere un tasto qualsiasi per chiudere l'applicazione di esempio.

## <a name="example"></a>Esempio

Esempio di codice seguente viene illustrato come è possibile utilizzare l'handle del thread restituito da **beginthreadex** con l'API di sincronizzazione [WaitForSingleObject](http://msdn.microsoft.com/library/windows/desktop/ms687032.aspx). Il thread principale attende che il secondo thread termini prima di continuare. Quando il secondo thread chiama **endthreadex**, altrimenti il relativo oggetto thread passa allo stato segnalato. Ciò consente al thread principale di continuare l'esecuzione. Questa operazione non può essere eseguita con **beginthread** e **endthread**, in quanto **endthread** chiamate **CloseHandle**, quale Elimina definitivamente il thread oggetto prima che possa essere impostato sullo stato segnalato.

```cpp
// crt_begthrdex.cpp
// compile with: /MT
#include <windows.h>
#include <stdio.h>
#include <process.h>

unsigned Counter;
unsigned __stdcall SecondThreadFunc( void* pArguments )
{
    printf( "In second thread...\n" );

    while ( Counter < 1000000 )
        Counter++;

    _endthreadex( 0 );
    return 0;
}

int main()
{
    HANDLE hThread;
    unsigned threadID;

    printf( "Creating second thread...\n" );

    // Create the second thread.
    hThread = (HANDLE)_beginthreadex( NULL, 0, &SecondThreadFunc, NULL, 0, &threadID );

    // Wait until second thread terminates. If you comment out the line
    // below, Counter will not be correct because the thread has not
    // terminated, and Counter most likely has not been incremented to
    // 1000000 yet.
    WaitForSingleObject( hThread, INFINITE );
    printf( "Counter should be 1000000; it is-> %d\n", Counter );
    // Destroy the thread object.
    CloseHandle( hThread );
}
```

```Output
Creating second thread...
In second thread...
Counter should be 1000000; it is-> 1000000
```

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[_endthread, _endthreadex](endthread-endthreadex.md)<br/>
[abort](abort.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[GetExitCodeThread](http://msdn.microsoft.com/library/windows/desktop/ms683190)<br/>
