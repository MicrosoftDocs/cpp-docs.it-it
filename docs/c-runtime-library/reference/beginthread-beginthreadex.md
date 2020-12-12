---
description: 'Altre informazioni su: _beginthread, _beginthreadex'
title: _beginthread, _beginthreadex
ms.date: 4/2/2020
api_name:
- _beginthread
- _beginthreadex
- _o__beginthread
- _o__beginthreadex
api_location:
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- beginthread
- _beginthread
- beginthreadex
- _beginthreadex
helpviewer_keywords:
- _beginthread function
- threading [C++], creating threads
- beginthreadex function
- _beginthreadex function
- beginthread function
ms.assetid: 0df64740-a978-4358-a88f-fb0702720091
ms.openlocfilehash: f4357186a970914e70116650bd1c218521327f99
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97171907"
---
# <a name="_beginthread-_beginthreadex"></a>_beginthread, _beginthreadex

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
Indirizzo iniziale di una routine che avvia l'esecuzione di un nuovo thread. Per **_beginthread**, la convenzione di chiamata è [__cdecl](../../cpp/cdecl.md) (per il codice nativo) o [__clrcall](../../cpp/clrcall.md) (per il codice gestito); per **_beginthreadex**, è [__stdcall](../../cpp/stdcall.md) (per il codice nativo) o [__clrcall](../../cpp/clrcall.md) (per il codice gestito).

*stack_size*<br/>
Dimensione dello stack per un nuovo thread, oppure 0.

*arglist*<br/>
Elenco di argomenti da passare a un nuovo thread o **null**.

*Security*<br/>
Puntatore a una struttura [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) che determina se l'handle restituito può essere ereditato dai processi figlio. Se *Security* è **null**, l'handle non può essere ereditato. Deve essere **null** per le applicazioni Windows 95.

*initflag*<br/>
Flag che controllano lo stato iniziale di un nuovo thread. Impostare *initflag* su 0 per eseguirlo immediatamente oppure per **CREATE_SUSPENDED** per creare il thread in stato Suspended. usare [ResumeThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-resumethread) per eseguire il thread. Impostare *initflag* su **STACK_SIZE_PARAM_IS_A_RESERVATION** flag per utilizzare *stack_size* come dimensione di riserva iniziale dello stack in byte; Se questo flag non è specificato, *stack_size* specifica la dimensione del commit.

*thrdaddr*<br/>
Punta a una variabile a 32 bit che riceve l'identificatore del thread. Se è **null**, non viene utilizzato.

## <a name="return-value"></a>Valore restituito

In caso di esito positivo, ognuna di queste funzioni restituisce un handle per il thread appena creato. Tuttavia, se il thread appena creato si chiude troppo rapidamente, **_beginthread** potrebbe non restituire un handle valido. (Vedere la discussione nella sezione Osservazioni). In caso di errore, **_beginthread** restituisce-1L e **errno** viene impostato su **EAGAIN** se sono presenti troppi thread, su **EINVAL** se l'argomento non è valido o la dimensione dello stack è errata o su **EACCES** se non sono disponibili risorse sufficienti (ad esempio la memoria). In un errore, **_beginthreadex** restituisce 0 e **errno** e **_doserrno** sono impostati.

Se *start_address* è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL** e restituiscono-1.

Per altre informazioni su questi e altri codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Per ulteriori informazioni su **uintptr_t**, vedere [tipi standard](../../c-runtime-library/standard-types.md).

## <a name="remarks"></a>Commenti

La funzione **_beginthread** crea un thread che inizia l'esecuzione di una routine in *start_address*. La routine in *start_address* deve usare la **`__cdecl`** convenzione di chiamata (per il codice nativo) o **__clrcall** (per il codice gestito) e non deve avere alcun valore restituito. Quando il thread viene restituito da quella routine, viene terminato automaticamente. Per altre informazioni sui thread, vedere [Supporto del multithreading per il codice precedente (Visual C++)](../../parallel/multithreading-support-for-older-code-visual-cpp.md).

**_beginthreadex** è simile all'API Win32 [CreateThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread) più di **_beginthread** . **_beginthreadex** differisce da **_beginthread** nei modi seguenti:

- **_beginthreadex** presenta tre parametri aggiuntivi: *initflag*, *Security* e **threadaddr**. Il nuovo thread può essere creato in uno stato sospeso, con una sicurezza specificata ed è possibile accedervi usando *thrdaddr*, che è l'identificatore del thread.

- La routine in *start_address* passata a **_beginthreadex** deve usare la convenzione di **`__stdcall`** chiamata (per il codice nativo) o **__clrcall** (per il codice gestito) e deve restituire un codice di uscita del thread.

- **_beginthreadex** restituisce 0 in caso di errore, anziché-1L.

- Un thread creato utilizzando **_beginthreadex** viene terminato da una chiamata al [_endthreadex](endthread-endthreadex.md).

La funzione **_beginthreadex** offre un maggiore controllo sulla modalità di creazione del thread rispetto a **_beginthread** . La funzione **_endthreadex** è inoltre più flessibile. Con **_beginthreadex**, ad esempio, è possibile usare le informazioni di sicurezza, impostare lo stato iniziale del thread (in esecuzione o sospeso) e ottenere l'identificatore del thread appena creato. È anche possibile usare l'handle del thread restituito da **_beginthreadex** con le API di sincronizzazione, che non è possibile eseguire con **_beginthread**.

È più sicuro usare **_beginthreadex** di **_beginthread**. Se il thread generato da **_beginthread** viene chiuso rapidamente, l'handle restituito al chiamante di **_beginthread** potrebbe non essere valido o puntare a un altro thread. Tuttavia, l'handle restituito da **_beginthreadex** deve essere chiuso dal chiamante di **_beginthreadex**, quindi è garantito che sia un handle valido se **_beginthreadex** non ha restituito un errore.

È possibile chiamare in modo esplicito [_endthread](endthread-endthreadex.md) o **_endthreadex** per terminare un thread. Tuttavia, **_endthread** o **_endthreadex** viene chiamato automaticamente quando il thread viene restituito dalla routine passata come parametro. La terminazione di un thread con una chiamata a **_endthread** o **_endthreadex** consente di assicurare il ripristino corretto delle risorse allocate per il thread.

**_endthread** chiude automaticamente l'handle del thread, mentre **_endthreadex** non lo è. Pertanto, quando si utilizzano **_beginthread** e **_endthread**, non chiudere in modo esplicito l'handle del thread chiamando l'API Win32 [CloseHandle](/windows/win32/api/handleapi/nf-handleapi-closehandle) . Questo comportamento è diverso dall'API Win32 [ExitThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-exitthread) .

> [!NOTE]
> Per un file eseguibile collegato a LIBCMT. lib, non chiamare l'API **ExitThread** Win32 in modo da non impedire al sistema di runtime di recuperare le risorse allocate. **_endthread** e **_endthreadex** recuperare le risorse del thread allocate, quindi chiamare **ExitThread**.

Il sistema operativo gestisce l'allocazione dello stack quando viene chiamato **_beginthread** o **_beginthreadex** ; non è necessario passare l'indirizzo dello stack di thread a una di queste funzioni. Inoltre, l'argomento *stack_size* può essere 0, nel qual caso il sistema operativo utilizza lo stesso valore dello stack specificato per il thread principale.

*arglist* è un parametro da passare al thread appena creato. In genere è l'indirizzo di un elemento di dati, quale una stringa di caratteri. *arglist* può essere **null** se non è necessario, ma è necessario assegnare a **_beginthread** e **_beginthreadex** un valore da passare al nuovo thread. Tutti i thread vengono terminati se un thread chiama [Abort](abort.md), **Exit**, **_exit** o **ExitProcess**.

Le impostazioni locali del nuovo thread vengono inizializzate utilizzando le informazioni sulle impostazioni locali globali per processo. Se le impostazioni locali per thread sono abilitate da una chiamata a [_configthreadlocale](configthreadlocale.md) (sia globalmente che solo per i nuovi thread), il thread può modificare le proprie impostazioni locali indipendentemente da altri thread chiamando **setlocale** o **_wsetlocale**. I thread per i quali non è impostato il flag delle impostazioni locali per thread possono influenzare le informazioni sulle impostazioni locali in tutti gli altri thread per i quali non è impostato il flag delle impostazioni locali per thread, nonché tutti i thread appena creati. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Per il codice **/CLR** , **_beginthread** e **_beginthreadex** hanno due overload. Uno accetta un puntatore alla funzione nativa della convenzione di chiamata e l'altro accetta un puntatore a funzione **__clrcall** . Il primo overload non è indipendente dal dominio applicazione e non lo sarà mai. Se si sta scrivendo codice **/CLR** , è necessario assicurarsi che il nuovo thread entri nel dominio dell'applicazione corretto prima di accedere alle risorse gestite. Questa operazione può essere eseguita, ad esempio, usando la funzione [call_in_domain](../../dotnet/call-in-appdomain-function.md). Il secondo overload è indipendente dal dominio dell'applicazione. il thread appena creato finirà sempre nel dominio applicazione del chiamante del **_beginthread** o **_beginthreadex**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_beginthread**|\<process.h>|
|**_beginthreadex**|\<process.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo versioni multithread delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md) .

Per usare **_beginthread** o **_beginthreadex**, l'applicazione deve collegarsi a una delle librerie di runtime C multithread.

## <a name="examples"></a>Esempio

Nell'esempio seguente vengono utilizzati **_beginthread** e **_endthread**.

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

// Bounce - Thread to create and control a colored letter that moves
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

Il codice di esempio seguente illustra come è possibile usare l'handle del thread restituito da **_beginthreadex** con l'API di sincronizzazione [WaitForSingleObject](/windows/win32/api/synchapi/nf-synchapi-waitforsingleobject). Il thread principale attende che il secondo thread termini prima di continuare. Quando il secondo thread chiama **_endthreadex**, il relativo oggetto thread passa allo stato segnalato. Ciò consente al thread principale di continuare l'esecuzione. Questa operazione non può essere eseguita con **_beginthread** e **_endthread**, perché **_endthread** chiama **CloseHandle**, che elimina l'oggetto thread prima che possa essere impostato sullo stato segnalato.

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

## <a name="see-also"></a>Vedi anche

- [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)
- [_endthread, _endthreadex](endthread-endthreadex.md)
- [interruzione](abort.md)
- [exit, _Exit, _exit](exit-exit-exit.md)
- [GetExitCodeThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getexitcodethread)
