---
title: File di intestazione precompilata
ms.date: 05/06/2019
helpviewer_keywords:
- precompiled header files, creating
- PCH files, creating
- cl.exe compiler, precompiling code
- .pch files, creating
ms.assetid: e2cdb404-a517-4189-9771-c869c660cb1b
ms.openlocfilehash: 1dc6ff9de94f98a4eef3d3827bec177f22672674
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65220814"
---
# <a name="precompiled-header-files"></a>File di intestazione precompilata

Quando si crea un nuovo progetto in Visual Studio, un *file di intestazione precompilata* denominato "PCH. h" viene aggiunto al progetto. (Nelle versioni precedenti di Visual Studio, il file è stato chiamato "stdafx. h".) Lo scopo del file è per velocizzare il processo di compilazione. Qualsiasi stabile file di intestazione, ad esempio le intestazioni della libreria Standard, ad esempio `<vector>`, devono essere inclusi qui. L'intestazione precompilata viene compilato solo quando, o tutti i file che includa, vengono modificati. Se solo si apportano modifiche nel codice sorgente del progetto, la compilazione verrà ignorata la compilazione per l'intestazione precompilata. 

Le opzioni del compilatore per le intestazioni precompilate [/Y](reference/y-precompiled-headers.md). Pagine delle proprietà del progetto, le opzioni si trovano sotto **le proprietà di configurazione > C/C++ > intestazioni precompilate**. È possibile scegliere di non utilizzare le intestazioni precompilate, ed è possibile specificare l'intestazione di nome file e il nome e percorso del file di output. 

## <a name="custom-precompiled-code"></a>Codice precompilato personalizzato

Per i progetti di grandi dimensioni che richiedere parecchio tempo di compilazione, è possibile provare a creare i file precompilati personalizzati. I compilatori Microsoft C e C++ includono opzioni per la precompilazione di codice C o C++ di qualsiasi tipo, incluso quello inline. Questa funzionalità avanzata consente di compilare un corpo di codice stabile, archiviare lo stato del codice compilato in un file e, durante le successive compilazioni, combinare il codice precompilato con quello ancora in fase di sviluppo. Le compilazioni successive risultano più veloci perché il codice stabile non deve essere ricompilato.

## <a name="when-to-precompile-source-code"></a>Condizioni per la precompilazione del codice sorgente

Il codice precompilato è utile durante il ciclo di sviluppo per ridurre il tempo di compilazione, soprattutto se:

- È sempre usare gran parte del codice che non vengono modificati spesso.

- Il programma è costituito da più moduli, ognuno dei quali utilizzerà un set standard di file di inclusione e le stesse opzioni di compilazione. In questo caso, tutti i file di inclusione possono essere precompilati in un'intestazione precompilata.

La prima compilazione, ovvero quello che crea il file di intestazione precompilata (PCH): richiede un po' più tempo rispetto alle compilazioni successive. Le compilazioni successive possono essere più rapide, includendo il codice precompilato.

È possibile precompilare i programmi C e C++. Nella programmazione C++, è pratica comune per separare le informazioni di interfaccia di classe in file di intestazione. Questi file di intestazione in un secondo momento possono essere incluso nei programmi che usano la classe. La precompilazione di queste intestazioni, è possibile ridurre il tempo di un programma per la compilazione.

> [!NOTE]
> Sebbene sia possibile usare un solo file di intestazione precompilata (PCH) per ogni file di origine, è possibile usare più file con estensione pch in un progetto.

## <a name="two-choices-for-precompiling-code"></a>Precompilazione del codice automatica e manuale

È possibile precompilare C o C++ del codice; non si è limitati alla precompilazione solo i file di intestazione.

La precompilazione richiede una pianificazione, ma consente di eseguire compilazioni significativamente più veloce se si precompilazione del codice sorgente diverso da semplici file di intestazione.

Precompilazione del codice quando si è certi che i file di origine usano set di file di intestazione comuni ma non includono nello stesso ordine o quando si desidera includere codice sorgente di precompilazione.

Sono le opzioni di intestazione precompilata [/Yc (Crea precompilati o meno File di intestazione)](reference/yc-create-precompiled-header-file.md) e [/Yu (Usa il File intestazione precompilata)](reference/yu-use-precompiled-header-file.md). Uso **/Yc** per creare un'intestazione precompilata. Se usato con l'opzione facoltativa [hdrstop](../preprocessor/hdrstop.md) pragma, **/Yc** consente di precompilare entrambi i file di intestazione e il codice sorgente. Selezionare **/Yu** usare un'intestazione precompilata esistente nella compilazione corrente. È anche possibile usare **/Fp** con il **/Yc** e **/Yu** le opzioni per fornire un nome alternativo per l'intestazione precompilata.

Gli argomenti di riferimento di opzione del compilatore per **/Yu** e **/Yc** illustra come accedere a questa funzionalità nell'ambiente di sviluppo.

## <a name="precompiled-header-consistency-rules"></a>Regole di uniformità per le intestazioni precompilate

Poiché i file PCH contengono informazioni sull'ambiente del computer, nonché informazioni sull'indirizzo di memoria sul programma, utilizzare solo un file PCH nel computer in cui è stato creato.

## <a name="consistency-rules-for-per-file-use-of-precompiled-headers"></a>Regole di uniformità per l'utilizzo per singolo file delle intestazioni precompilate

Il [/Yu](reference/yu-use-precompiled-header-file.md) opzione del compilatore consente di specificare il file PCH da utilizzare.

Quando si usa un file PCH, il compilatore presuppone che l'ambiente di compilazione stesso, ovvero una che usa le opzioni del compilatore coerente, direttive pragma e così via, che avevano al momento della creazione del file PCH, a meno che non venga specificato diversamente. Se il compilatore rileva un'incoerenza, genera un avviso e identifica l'incoerenza laddove possibile. Tali avvisi non indicano necessariamente un problema con il file PCH; sono semplicemente un avviso di possibili conflitti. Requisiti di coerenza per i file PCH sono descritte nelle sezioni seguenti.

### <a name="compiler-option-consistency"></a>Coerenza di opzione del compilatore

Le seguenti opzioni del compilatore possono attivare un avviso di incoerenza, quando si usa un file PCH:

- Le macro create mediante il preprocessore (/ 1!d) opzione deve essere lo stesso tra la compilazione corrente e la compilazione che ha creato il file PCH. Non viene controllato lo stato delle costanti definite, ma possono verificarsi risultati inattesi se queste sono modificate.

- File PCH non funzionano con le opzioni /E mentre /EP.

- File PCH devono essere creati usando entrambi Generate Browse Info (/ FR) opzione o le variabili locali escludere (/ Fr) opzione prima che le compilazioni successive che usano il file PCH possono usare queste opzioni.

### <a name="c-70-compatible-z7"></a>Compatibile C 7.0 (/ Z7)

Se questa opzione è attiva quando viene creato il file PCH, le compilazioni successive che usano il file PCH possono usare le informazioni di debug.

Se il compatibile C 7.0 (/ Z7) opzione non è attiva quando viene creato il file PCH, le compilazioni successive che usano il file PCH/Z7 attivano un avviso. Le informazioni di debug viene inserite nel file con estensione obj corrente e non sono disponibili al debugger di simboli locali definiti nel file PCH.

### <a name="include-path-consistency"></a>Includere la coerenza di percorso

Un file PCH non contiene informazioni sul percorso di inclusione che era attivo al momento della creazione. Quando si usa un file PCH, il compilatore Usa sempre percorso di inclusione specificato nella compilazione corrente.

### <a name="source-file-consistency"></a>Coerenza dei File di origine

Quando si specifica l'opzione di utilizzo File di intestazione precompilata (/Yu), il compilatore ignora tutte le direttive del preprocessore (inclusi i pragma) presenti nel codice sorgente che verrà precompilato. La compilazione specificata dalle direttive del preprocessore deve essere quello utilizzato per la compilazione utilizzata per l'opzione di creare le File di una intestazione precompilata (/Yc).

### <a name="pragma-consistency"></a>Coerenza (pragma)

I pragma elaborati durante la creazione di un file PCH, in genere influisce sul file con cui viene successivamente utilizzato il file PCH. Il `comment` e `message` pragma non influiscono sul resto della compilazione.

Questi pragma influiscono solo sul codice all'interno del file PCH; non influiscono sul codice che poi utilizzerà il file PCH:

||||
|-|-|-|
|`comment`|`page`|`subtitle`|
|`linesize`|`pagesize`|`title`|
|`message`|`skip`||

Questi pragma vengono mantenuti come parte di un'intestazione precompilata e interessano il resto di una compilazione che utilizza l'intestazione precompilata:

||||
|-|-|-|
|`alloc_text`|`include_alias`|`pack`|
|`auto_inline`|`init_seg`|`pointers_to_members`|
|`check_stack`|`inline_depth`|`setlocale`|
|`code_seg`|`inline_recursion`|`vtordisp`|
|`data_seg`|`intrinsic`|`warning`|
|`function`|`optimize`||

## <a name="consistency-rules-for-yc-and-yu"></a>Regole di uniformità per /Yc e /Yu

Quando si usa un'intestazione precompilata creata con /Yc o /Yu, il compilatore confronta l'ambiente di compilazione corrente a quella esistente al momento della creazione del file PCH. Assicurarsi di specificare un ambiente coerenza con quello precedente (utilizzando le opzioni del compilatore coerente, direttive pragma e così via) per la compilazione corrente. Se il compilatore rileva un'incoerenza, genera un avviso e identifica l'incoerenza laddove possibile. Tali avvisi non indicano necessariamente un problema con il file PCH; sono semplicemente un avviso di possibili conflitti. Le sezioni seguenti illustrano i requisiti di coerenza per le intestazioni precompilate.

### <a name="compiler-option-consistency"></a>Coerenza di opzione del compilatore

Questa tabella elenca le opzioni del compilatore potrebbero generare un avviso di incoerenza quando si usa un'intestazione precompilata:

|Opzione|Nome|Regola|
|------------|----------|----------|
|/D|Definire le costanti e macro|Deve essere lo stesso tra la compilazione che ha creato l'intestazione precompilata e della compilazione corrente. Non viene controllato lo stato delle costanti definite, ma possono verificarsi risultati inattesi se i file dipendono dai valori delle costanti modificati.|
|/EP o /E|Copiare l'output del preprocessore all'output standard|Intestazioni precompilate non funzionano con l'opzione /E o /EP.|
|/FR o /FR|Genera informazioni di Microsoft Browser di origine|Per le opzioni /Fr e /FR sia valida con l'opzione /Yu, essi devono anche essere stati in vigore quando è stato creato l'intestazione precompilata. Le compilazioni successive che usano l'intestazione precompilata anche generano informazioni di visualizzazione di origine. Informazioni di visualizzazione viene inserite in un unico file sbr e viene fatto riferimento da altri file nello stesso modo come informazioni di CodeView. Non è possibile ignorare la posizione delle informazioni del Browser di origine.|
|/ GA, /GD, /GE, /Gw o /GW|Opzioni del protocollo Windows|Deve essere lo stesso tra la compilazione che ha creato l'intestazione precompilata e della compilazione corrente. Se queste opzioni sono diversi, viene generato un messaggio di avviso.|
|/ZI|Genera informazioni di debug completate|Se questa opzione è attiva quando viene creato l'intestazione precompilata, le compilazioni successive che usano la precompilazione possono usare le informazioni di debug. Se /Zi non attivo quando viene creato l'intestazione precompilata, le compilazioni successive che usano la precompilazione e l'opzione /Zi. generano un avviso. Le informazioni di debug viene inserite nel file dell'oggetto corrente e simboli locali definiti nell'intestazione precompilata non sono disponibili al debugger.|

> [!NOTE]
>  La struttura di intestazione precompilata è destinata solo nei file di origine C e C++.

## <a name="using-precompiled-headers-in-a-project"></a>Utilizzo di intestazioni precompilate in un progetto

Nelle sezioni precedenti presentano una panoramica delle intestazioni precompilate: /Yc e /Yu, l'opzione /Fp e il [hdrstop](../preprocessor/hdrstop.md) pragma. Questa sezione viene descritto un metodo per l'uso di opzioni di intestazione precompilata manuale in un progetto. termina con un makefile di esempio e il codice che gestisce.

Per un altro approccio per usare le opzioni di intestazione precompilata manuale in un progetto, studiare a uno dei makefile che si trova nella directory MFC\SRC che viene creata durante l'installazione predefinita di Visual Studio. Questi makefile adottano un approccio simile a quello presentato in questa sezione, ma diffondere l'utilizzo di macro Microsoft Program Maintenance Utility (NMAKE) e offrono un maggiore controllo del processo di compilazione.

## <a name="pch-files-in-the-build-process"></a>File PCH nel processo di compilazione

La codebase di un progetto software è in genere contenuta in più C o C++ i file di origine, file di oggetti, librerie e i file di intestazione. In genere, un makefile coordina la combinazione di questi elementi in un file eseguibile. Nella figura seguente mostra la struttura di un makefile che utilizza un file di intestazione precompilata. I nomi di macro NMAKE e i nomi dei file in questo diagramma sono coerenti con quelle nell'esempio di codice trovato [Makefile di esempio per PCH](#sample-makefile-for-pch) e [codice di esempio per PCH](#example-code-for-pch).

Nella figura Usa tre dispositivi diagrammatico per mostrare il flusso del processo di compilazione. Denominato rettangoli rappresentano ogni file o una macro. le tre macro rappresentano uno o più file. Le aree ombreggiate rappresentano ogni azione di compilazione o di collegamento. Le frecce indicano i file e le macro vengono combinate durante la compilazione o di un processo di collegamento.

![Struttura di un makefile che utilizza un file di intestazione precompilata](media/vc30ow1.gif "struttura di un makefile che utilizza un file di intestazione precompilata") <br/>
Struttura di un makefile che utilizza un file di intestazione precompilata

Iniziare nella parte superiore del diagramma, STABLEHDRS sia confine AS sono macro NMAKE in cui sono elencati i file probabilmente non devono essere ricompilati. Questi file vengono compilati dalla stringa di comando

`CL /c /W3 /Yc$(BOUNDRY) applib.cpp myapp.cpp`

solo se il file di intestazione precompilata (Stable. pch) non esiste o se si apportano modifiche ai file elencati nelle due macro. In entrambi i casi, il file di intestazione precompilata conterrà codice solo da file elencati nella macro STABLEHDRS. Elencare l'ultimo file desiderato precompilata nella macro confine AS.

I file è elencare in queste macro possono essere file di intestazione o file di origine C o C++. (Un singolo file PCH non può essere usato con i moduli di C e C++). Si noti che è possibile usare la **hdrstop** macro per interrompere la precompilazione a un certo punto all'interno del file confine AS. Visualizzare [hdrstop](../preprocessor/hdrstop.md) per altre informazioni.

Continuando verso il basso del diagramma, APPLIB rappresenta il codice di supporto usato nell'applicazione finale. Viene creata da APPLIB, i file elencati nella macro UNSTABLEHDRS e codice precompilato da intestazione precompilata.

MyApp rappresenta l'applicazione finale. Viene creata da MyApp. cpp, i file elencati nella macro UNSTABLEHDRS e codice precompilato da intestazione precompilata.

Infine, il file eseguibile (MYAPP. Con estensione EXE) viene creato collegando i file elencati nella macro obj (APPLIB e MyApp).

## <a name="sample-makefile-for-pch"></a>Makefile di esempio per PCH

Il file di progetto seguente usa le macro e un oggetto. SE! ELSE. Struttura dei comandi di controllo di flusso ENDIF che semplifica l'adattamento al progetto.

```NMAKE
# Makefile : Illustrates the effective use of precompiled
#            headers in a project
# Usage:     NMAKE option
# option:    DEBUG=[0|1]
#            (DEBUG not defined is equivalent to DEBUG=0)
#
OBJS = myapp.obj applib.obj
# List all stable header files in the STABLEHDRS macro.
STABLEHDRS = stable.h another.h
# List the final header file to be precompiled here:
BOUNDRY = stable.h
# List header files under development here:
UNSTABLEHDRS = unstable.h
# List all compiler options common to both debug and final
# versions of your code here:
CLFLAGS = /c /W3
# List all linker options common to both debug and final
# versions of your code here:
LINKFLAGS = /NOD /ONERROR:NOEXE
!IF "$(DEBUG)" == "1"
CLFLAGS   = /D_DEBUG $(CLFLAGS) /Od /Zi /f
LINKFLAGS = $(LINKFLAGS) /COD
LIBS      = slibce
!ELSE
CLFLAGS   = $(CLFLAGS) /Oselg /Gs
LINKFLAGS = $(LINKFLAGS)
LIBS      = slibce
!ENDIF
myapp.exe: $(OBJS)
    link $(LINKFLAGS) @<<
$(OBJS), myapp, NUL, $(LIBS), NUL;
<<
# Compile myapp
myapp.obj  : myapp.cpp $(UNSTABLEHDRS)  stable.pch
    $(CPP) $(CLFLAGS) /Yu$(BOUNDRY)    myapp.cpp
# Compile applib
applib.obj : applib.cpp $(UNSTABLEHDRS) stable.pch
    $(CPP) $(CLFLAGS) /Yu$(BOUNDRY)    applib.cpp
# Compile headers
stable.pch : $(STABLEHDRS)
    $(CPP) $(CLFLAGS) /Yc$(BOUNDRY)    applib.cpp myapp.cpp
```

A parte le macro STABLEHDRS confine AS e UNSTABLEHDRS illustrate nella figura "Struttura di un Makefile che utilizza un precompilati o meno File di intestazione" nella [file PCH nel processo di compilazione](#pch-files-in-the-build-process), questa makefile fornisce un LINKFLAGS e contiene due macro: macro. È necessario utilizzare queste macro per ottenere l'elenco di opzioni del compilatore e linker applicabili se si compila una versione di debug o finale del file eseguibile dell'applicazione. È inoltre disponibile una macro: le librerie in cui vengono elencati le librerie richieste dal progetto.

Usa anche il makefile. SE! ELSE. ENDIF per rilevare se si definisce un simbolo DEBUG nella riga di comando NMAKE:

```NMAKE
NMAKE DEBUG=[1|0]
```

Questa funzionalità rende possibile per l'utilizzo del makefile stesso durante lo sviluppo e per le versioni finali del programma, ovvero usare DEBUG = 0 per le versioni finali. Le righe di comando seguenti sono equivalenti:

```NMAKE
NMAKE
NMAKE DEBUG=0
```

Per altre informazioni su makefile, vedere [riferimenti a NMAKE](reference/nmake-reference.md). Vedere anche [opzioni del compilatore MSVC](reference/compiler-options.md) e il [le opzioni del Linker MSVC](reference/linker-options.md).

## <a name="example-code-for-pch"></a>Codice di esempio per PCH

File di origine seguenti vengono utilizzati nel makefile descritto nella [file PCH nel processo di compilazione](#pch-files-in-the-build-process) e [Makefile di esempio per PCH](#sample-makefile-for-pch). Si noti che i commenti che contengono importanti informazioni.

```cpp
// ANOTHER.H : Contains the interface to code that is not
//             likely to change.
//
#ifndef __ANOTHER_H
#define __ANOTHER_H
#include<iostream>
void savemoretime( void );
#endif // __ANOTHER_H
```

```cpp
// STABLE.H : Contains the interface to code that is not likely
//            to change. List code that is likely to change
//            in the makefile's STABLEHDRS macro.
//
#ifndef __STABLE_H
#define __STABLE_H
#include<iostream>
void savetime( void );
#endif // __STABLE_H
```

```cpp
// UNSTABLE.H : Contains the interface to code that is
//              likely to change. As the code in a header
//              file becomes stable, remove the header file
//              from the makefile's UNSTABLEHDR macro and list
//              it in the STABLEHDRS macro.
//
#ifndef __UNSTABLE_H
#define __UNSTABLE_H
#include<iostream.h>
void notstable( void );
#endif // __UNSTABLE_H
```

```cpp
// APPLIB.CPP : This file contains the code that implements
//              the interface code declared in the header
//              files STABLE.H, ANOTHER.H, and UNSTABLE.H.
//
#include"another.h"
#include"stable.h"
#include"unstable.h"
// The following code represents code that is deemed stable and
// not likely to change. The associated interface code is
// precompiled. In this example, the header files STABLE.H and
// ANOTHER.H are precompiled.
void savetime( void )
    { cout << "Why recompile stable code?\n"; }
void savemoretime( void )
    { cout << "Why, indeed?\n\n"; }
// The following code represents code that is still under
// development. The associated header file is not precompiled.
void notstable( void )
    { cout << "Unstable code requires"
            << " frequent recompilation.\n";
    }
```

```cpp
// MYAPP.CPP : Sample application
//             All precompiled code other than the file listed
//             in the makefile's BOUNDRY macro (stable.h in
//             this example) must be included before the file
//             listed in the BOUNDRY macro. Unstable code must
//             be included after the precompiled code.
//
#include"another.h"
#include"stable.h"
#include"unstable.h"
int main( void )
{
    savetime();
    savemoretime();
    notstable();
}
```

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](reference/c-cpp-building-reference.md)<br/>
[Opzioni del compilatore MSVC](reference/compiler-options.md)
