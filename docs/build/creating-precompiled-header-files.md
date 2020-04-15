---
title: File di intestazione precompilata
ms.date: 10/24/2019
helpviewer_keywords:
- precompiled header files, creating
- PCH files, creating
- cl.exe compiler, precompiling code
- .pch files, creating
ms.assetid: e2cdb404-a517-4189-9771-c869c660cb1b
ms.openlocfilehash: 158301ec3caacced1663892071b17ef2b8f8e741
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328664"
---
# <a name="precompiled-header-files"></a>File di intestazione precompilata

Quando si crea un nuovo progetto in Visual Studio, al progetto viene aggiunto un file di *intestazione precompilato* denominato *pch.h.* (In Visual Studio 2017 e versioni precedenti, il file è stato chiamato *stdafx.h*.) Lo scopo del file è accelerare il processo di compilazione. Tutti i file di intestazione stable, ad esempio le intestazioni della libreria Standard, ad `<vector>`esempio , devono essere inclusi qui. L'intestazione precompilata viene compilata solo quando viene modificata o i file inclusi. Se si apportano modifiche solo nel codice sorgente del progetto, la compilazione ignorerà la compilazione per l'intestazione precompilata.

Le opzioni del compilatore per le intestazioni precompilate sono [/Y](reference/y-precompiled-headers.md). Nelle pagine delle proprietà del progetto, le opzioni si trovano in Proprietà di **configurazione > C/C' > Intestazioni precompilate**. È possibile scegliere di non utilizzare intestazioni precompilate ed è possibile specificare il nome del file di intestazione e il nome e il percorso del file di output.

## <a name="custom-precompiled-code"></a>Codice precompilato personalizzato

Per i progetti di grandi dimensioni che richiedono molto tempo per la compilazione, è consigliabile creare file precompilati personalizzati. I compilatori Microsoft C e C++ includono opzioni per la precompilazione di codice C o C++ di qualsiasi tipo, incluso quello inline. Questa funzionalità avanzata consente di compilare un corpo di codice stabile, archiviare lo stato del codice compilato in un file e, durante le successive compilazioni, combinare il codice precompilato con quello ancora in fase di sviluppo. Le compilazioni successive risultano più veloci perché il codice stabile non deve essere ricompilato.

## <a name="when-to-precompile-source-code"></a>Condizioni per la precompilazione del codice sorgente

Il codice precompilato è utile durante il ciclo di sviluppo per ridurre il tempo di compilazione, soprattutto se:Precompiled code is useful during the development cycle to reduce compilation time, especially if:

- Si usa sempre un corpo di codice di grandi dimensioni che cambia raramente.

- Il programma comprende più moduli, che utilizzano tutti un set standard di file di inclusione e le stesse opzioni di compilazione. In questo caso, tutti i file di inclusione possono essere precompilati in un'intestazione precompilata.

La prima compilazione, ovvero quella che crea il file di intestazione precompilata (PCH), richiede un po' più tempo rispetto alle compilazioni successive. Le compilazioni successive possono procedere più rapidamente includendo il codice precompilato.

È possibile precompilare sia i programmi C che C. È pratica comune separare le informazioni sull'interfaccia di classe in file di intestazione. Questi file di intestazione possono essere successivamente inclusi nei programmi che utilizzano la classe . Precompilando queste intestazioni, è possibile ridurre il tempo necessario per la compilazione di un programma.

> [!NOTE]
> Sebbene sia possibile utilizzare un solo file di intestazione precompilata (con estensione pch) per ogni file di origine, è possibile utilizzare più file pch in un progetto.

## <a name="two-choices-for-precompiling-code"></a>Precompilazione del codice automatica e manuale

È possibile precompilare qualsiasi codice C o C . non si è limitati alla precompilazione solo dei file di intestazione.

La precompilazione richiede pianificazione, ma offre compilazioni significativamente più veloci se si precompila codice sorgente diverso da semplici file di intestazione.

Precompilare il codice quando si sa che i file di origine utilizzano set comuni di file di intestazione ma non li includono nello stesso ordine o quando si desidera includere il codice sorgente nella precompilazione.

Le opzioni dell'intestazione precompilata sono [/Yc (Crea file di intestazione precompilata)](reference/yc-create-precompiled-header-file.md) e [/Yu (Usa file di intestazione precompilata)](reference/yu-use-precompiled-header-file.md). Utilizzare **/Yc** per creare un'intestazione precompilata. Se utilizzato con il pragma [hdrstop](../preprocessor/hdrstop.md) facoltativo, **/Yc** consente di precompilare sia i file di intestazione che il codice sorgente. Selezionare **/Yu** per utilizzare un'intestazione precompilata esistente nella compilazione esistente. È inoltre possibile utilizzare **/Fp** con le opzioni **/Yc** e **/Yu** per fornire un nome alternativo per l'intestazione precompilata.

Gli argomenti di riferimento delle opzioni del compilatore per **/Yu** e **/Yc** illustrano come accedere a questa funzionalità nell'ambiente di sviluppo.

## <a name="precompiled-header-consistency-rules"></a>Regole di uniformità per le intestazioni precompilate

Poiché i file PCH contengono informazioni sull'ambiente del computer e informazioni sull'indirizzo di memoria relative al programma, è necessario utilizzare solo un file PCH nel computer in cui è stato creato.

## <a name="consistency-rules-for-per-file-use-of-precompiled-headers"></a>Regole di uniformità per l'utilizzo per singolo file delle intestazioni precompilate

L'opzione del compilatore [/Yu](reference/yu-use-precompiled-header-file.md) consente di specificare il file PCH da utilizzare.

Quando si utilizza un file PCH, il compilatore presuppone lo stesso ambiente di compilazione, ovvero uno che utilizza opzioni del compilatore coerenti, pragma e così via, che era attivo quando è stato creato il file PCH, a meno che non si specifichi diversamente. Se il compilatore rileva un'incoerenza, genera un avviso e identifica l'incoerenza, ove possibile. Tali avvisi non indicano necessariamente un problema con il file PCH; semplicemente vi avvertono di possibili conflitti. I requisiti di coerenza per i file PCH sono descritti nelle sezioni seguenti.

### <a name="compiler-option-consistency"></a>Coerenza delle opzioni del compilatoreCompiler Option Consistency

Le seguenti opzioni del compilatore possono attivare un avviso di incoerenza quando si utilizza un file PCH:

- Le macro create utilizzando l'opzione Preprocessore (/D) devono essere le stesse tra la compilazione che ha creato il file PCH e la compilazione corrente. Lo stato delle costanti definite non viene controllato, ma possono verificarsi risultati imprevisti se queste modifiche.

- I file PCH non funzionano con le opzioni /E e /EP.

- I file PCH devono essere creati utilizzando l'opzione Genera informazioni di visualizzazione (/FR) o l'opzione Escludi variabili locali (/Fr) prima che le compilazioni successive che utilizzano il file PCH possano utilizzare queste opzioni.

### <a name="c-70-compatible-z7"></a>C 7.0-Compatibile (/-7)

Se questa opzione è attiva quando viene creato il file PCH, le compilazioni successive che utilizzano il file PCH possono utilizzare le informazioni di debug.

Se l'opzione Compatibile con C 7.0 (/n7) non è attiva quando viene creato il file PCH, le compilazioni successive che utilizzano il file PCH e //7 attivano un avviso. Le informazioni di debug vengono inserite nel file obj corrente e i simboli locali definiti nel file PCH non sono disponibili per il debugger.

### <a name="include-path-consistency"></a>Includi coerenza percorso

Un file PCH non contiene informazioni sul percorso di inclusione che era attivo al momento della creazione. Quando si utilizza un file PCH, il compilatore utilizza sempre il percorso di inclusione specificato nella compilazione corrente.

### <a name="source-file-consistency"></a>Coerenza dei file di origine

Quando si specifica l'opzione Usa file di intestazione precompilata (/Yu), il compilatore ignora tutte le direttive del preprocessore (inclusi i pragma) che vengono visualizzate nel codice sorgente che verrà precompilato. La compilazione specificata da tali direttive per il preprocessore deve essere la stessa utilizzata per l'opzione Crea file di intestazione precompilata (/Yc).

### <a name="pragma-consistency"></a>Coerenza pragma

I pragma elaborati durante la creazione di un file PCH in genere influiscono sul file con cui il file PCH viene successivamente utilizzato. I `comment` `message` pragma e non influiscono sul resto della compilazione.

Questi pragma influiscono solo sul codice all'interno del file PCH; non influiscono sul codice che successivamente utilizza il file PCH:

||||
|-|-|-|
|`comment`|`page`|`subtitle`|
|`linesize`|`pagesize`|`title`|
|`message`|`skip`||

Questi pragma vengono mantenuti come parte di un'intestazione precompilata e influiscono sul resto di una compilazione che utilizza l'intestazione precompilata:

||||
|-|-|-|
|`alloc_text`|`include_alias`|`pack`|
|`auto_inline`|`init_seg`|`pointers_to_members`|
|`check_stack`|`inline_depth`|`setlocale`|
|`code_seg`|`inline_recursion`|`vtordisp`|
|`data_seg`|`intrinsic`|`warning`|
|`function`|`optimize`||

## <a name="consistency-rules-for-yc-and-yu"></a>Regole di uniformità per /Yc e /Yu

Quando si utilizza un'intestazione precompilata creata utilizzando /Yc o /Yu, il compilatore confronta l'ambiente di compilazione corrente con quello esistente al momento della creazione del file PCH. Assicurarsi di specificare un ambiente coerente con quello precedente (utilizzando opzioni del compilatore coerenti, pragma e così via) per la compilazione corrente. Se il compilatore rileva un'incoerenza, genera un avviso e identifica l'incoerenza, ove possibile. Tali avvisi non indicano necessariamente un problema con il file PCH; semplicemente vi avvertono di possibili conflitti. Nelle sezioni seguenti vengono illustrati i requisiti di coerenza per le intestazioni precompilate.

### <a name="compiler-option-consistency"></a>Coerenza delle opzioni del compilatoreCompiler Option Consistency

Questa tabella elenca le opzioni del compilatore che potrebbero attivare un avviso di incoerenza quando si utilizza un'intestazione precompilata:This table lists compiler options that might trigger an inconsistency warning when using a precompiled header:

|Opzione|Nome|Regola|
|------------|----------|----------|
|/D|Definire costanti e macro|Deve essere lo stesso tra la compilazione che ha creato l'intestazione precompilata e la compilazione corrente. Lo stato delle costanti definite non viene controllato, ma possono verificarsi risultati imprevisti se i file dipendono dai valori delle costanti modificate.|
|/E o /EP|Copiare l'output del preprocessore nell'output standardCopy preprocessor output to standard output|Le intestazioni precompilate non funzionano con l'opzione /E o /EP.|
|/Fr o /FR|Generare informazioni sul browser Microsoft Source|Affinché le opzioni /Fr e /FR siano valide con l'opzione /Yu, devono essere state attive anche quando è stata creata l'intestazione precompilata. Le compilazioni successive che utilizzano l'intestazione precompilata generano anche informazioni sul browser di origine. Le informazioni del browser vengono inserite in un singolo file sbr e fanno riferimento ad altri file nello stesso modo delle informazioni di CodeView. Non è possibile sostituire il posizionamento delle informazioni del browser di origine.|
|/GA, /GD, /GE, /Gw o /GW|Opzioni del protocollo di Windows|Deve essere lo stesso tra la compilazione che ha creato l'intestazione precompilata e la compilazione corrente. Se queste opzioni sono diverse, viene visualizzato un messaggio di avviso.|
|/Zi|Genera informazioni di debug complete|Se questa opzione è attiva quando viene creata l'intestazione precompilata, le compilazioni successive che utilizzano la precompilazione possono utilizzare tali informazioni di debug. Se al momento della creazione dell'intestazione precompilata non è attiva l'opzione /i, le compilazioni successive che utilizzano la precompilazione e l'opzione /i attivano un avviso. Le informazioni di debug vengono inserite nel file di oggetti corrente e i simboli locali definiti nell'intestazione precompilata non sono disponibili per il debugger.|

> [!NOTE]
> La funzionalità di intestazione precompilata è destinata all'utilizzo solo nei file di origine C e C.

## <a name="using-precompiled-headers-in-a-project"></a>Utilizzo di intestazioni precompilate in un progetto

Nelle sezioni precedenti viene fornita una panoramica delle intestazioni precompilate: /Yc e /Yu, l'opzione /Fp e il pragma [hdrstop.](../preprocessor/hdrstop.md) In questa sezione viene descritto un metodo per l'utilizzo delle opzioni di intestazione precompilata manuale in un progetto. termina con un makefile di esempio e il codice che gestisce.

Per un altro approccio all'utilizzo delle opzioni di intestazione precompilata manuale in un progetto, studiare uno dei makefile che si trovano nella directory MFC-SRC che viene creato durante l'installazione predefinita di Visual Studio. Questi makefile adottano un approccio simile a quello presentato in questa sezione, ma fanno un maggiore uso delle macro di Microsoft Program Maintenance Utility (NMAKE) e offrono un maggiore controllo del processo di compilazione.

## <a name="pch-files-in-the-build-process"></a>File PCH nel processo di compilazione

La base di codice di un progetto software è in genere contenuta in più file di origine, file oggetto, librerie e file di intestazione C o C. In genere, un makefile coordina la combinazione di questi elementi in un file eseguibile. Nella figura seguente viene illustrata la struttura di un makefile che utilizza un file di intestazione precompilato. I nomi delle macro NMAKE e i nomi dei file in questo diagramma sono coerenti con quelli nel codice di esempio disponibile in [Sample Makefile for PCH](#sample-makefile-for-pch) e [Codice di esempio per PCH](#example-code-for-pch).

La figura usa tre dispositivi diagrammatici per mostrare il flusso del processo di compilazione. I rettangoli denominati rappresentano ogni file o macro; le tre macro rappresentano uno o più file. Le aree ombreggiate rappresentano ogni azione di compilazione o collegamento. Le frecce mostrano quali file e macro vengono combinati durante il processo di compilazione o collegamento.

![Struttura di un makefile che utilizza un file di intestazione precompilato](media/vc30ow1.gif "Struttura di un makefile che utilizza un file di intestazione precompilato") <br/>
Struttura di un makefile che utilizza un file di intestazione precompilata

A partire dalla parte superiore del diagramma, sia STABLEHDRS che BOUNDRY sono macro NMAKE in cui è possibile elencare i file che non richiedono la ricompilazione. Questi file vengono compilati dalla stringa di comando

`CL /c /W3 /Yc$(BOUNDRY) applib.cpp myapp.cpp`

solo se il file di intestazione precompilato (STABLE.pch) non esiste o se si apportano modifiche ai file elencati nelle due macro. In entrambi i casi, il file di intestazione precompilato conterrà il codice solo dai file elencati nella macro STABLEHDRS. Elencare l'ultimo file che si desidera precompilare nella macro BOUNDRY.

I file elencati in queste macro possono essere file di intestazione o file di origine C o C. (Non è possibile utilizzare un singolo file PCH con entrambi i moduli C e C. Si noti che è possibile utilizzare la macro **hdrstop** per interrompere la precompilazione a un certo punto all'interno del file BOUNDRY. Per ulteriori informazioni, vedere [hdrstop.](../preprocessor/hdrstop.md)

Continuando verso il basso il diagramma, APPLIB.obj rappresenta il codice di supporto utilizzato nell'applicazione finale. Viene creato da APPLIB.cpp, i file elencati nella macro UNSTABLEHDRS e il codice precompilato dall'intestazione precompilata.

MYAPP.obj rappresenta l'applicazione finale. Viene creato da MYAPP.cpp, i file elencati nella macro UNSTABLEHDRS e il codice precompilato dall'intestazione precompilata.

Infine, il file eseguibile (MYAPP. EXE) viene creato collegando i file elencati nella macro OBJS (APPLIB.obj e MYAPP.obj).

## <a name="sample-makefile-for-pch"></a>Makefile di esempio per PCH

Il makefile seguente utilizza macro e un oggetto ! Se! Altro! EndIF struttura di comando flow-of-control per semplificarne l'adattamento al progetto.

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
LINKFLAGS = /nologo
!IF "$(DEBUG)" == "1"
CLFLAGS   = /D_DEBUG $(CLFLAGS) /Od /Zi
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

A parte le macro STABLEHDRS, BOUNDRY e UNSTABLEHDRS illustrate nella figura "Struttura di un makefile che utilizza un file di intestazione precompilato" in [File PCH nel processo](#pch-files-in-the-build-process)di compilazione , questo makefile fornisce una macro CLFLAGS e una macro LINKFLAGS. È necessario utilizzare queste macro per elencare le opzioni del compilatore e del linker che si applicano se si compila una versione di debug o finale del file eseguibile dell'applicazione. È inoltre disponibile una macro LIBS in cui sono elencate le librerie necessarie per il progetto.

Il makefile utilizza anche ! Se! Altro! ENDIF per rilevare se si definisce un simbolo DEBUG nella riga di comando nMAKE:

```NMAKE
NMAKE DEBUG=[1|0]
```

Questa funzionalità consente di utilizzare lo stesso makefile durante lo sviluppo e per le versioni finali del programma, ovvero l'utilizzo di DEBUG 0 per le versioni finali. Le seguenti righe di comando sono equivalenti:

```NMAKE
NMAKE
NMAKE DEBUG=0
```

Per ulteriori informazioni sui makefile, vedere Riferimenti a [NMAKE](reference/nmake-reference.md). Vedere anche [Opzioni del compilatore MSVC](reference/compiler-options.md) e [Opzioni del linker MSVC](reference/linker-options.md).

## <a name="example-code-for-pch"></a>Codice di esempio per PCH

I seguenti file di origine vengono utilizzati nel makefile descritto in [File PCH in Processo di compilazione](#pch-files-in-the-build-process) e [Esempio Makefile per PCH](#sample-makefile-for-pch). Si noti che i commenti contengono informazioni importanti.

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
#include<iostream>
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
using namespace std;
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
