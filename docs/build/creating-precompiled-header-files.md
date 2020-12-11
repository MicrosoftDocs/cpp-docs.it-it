---
description: 'Altre informazioni su: file di intestazione precompilata'
title: File di intestazione precompilata
ms.date: 10/24/2019
helpviewer_keywords:
- precompiled header files, creating
- PCH files, creating
- cl.exe compiler, precompiling code
- .pch files, creating
ms.assetid: e2cdb404-a517-4189-9771-c869c660cb1b
ms.openlocfilehash: 9f3d6847043f988f4b0ef57df9b1558c1cd5655c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97163132"
---
# <a name="precompiled-header-files"></a>File di intestazione precompilata

Quando si crea un nuovo progetto in Visual Studio, al progetto viene aggiunto un *file di intestazione precompilato* denominato *PCH. h* . (In Visual Studio 2017 e versioni precedenti, il file era denominato *stdafx. h*). Lo scopo del file è velocizzare il processo di compilazione. Tutti i file di intestazione stabili, ad esempio le intestazioni della libreria standard, ad esempio `<vector>` , devono essere inclusi qui. L'intestazione precompilata viene compilata solo quando viene modificato il file o i file in esso inclusi. Se si apportano modifiche solo al codice sorgente del progetto, la compilazione ignorerà la compilazione per l'intestazione precompilata.

Le opzioni del compilatore per le intestazioni precompilate sono [/Y](reference/y-precompiled-headers.md). Nelle pagine delle proprietà del progetto le opzioni si trovano in **proprietà di configurazione > C/C++ > le intestazioni precompilate**. È possibile scegliere di non usare le intestazioni precompilate e specificare il nome del file di intestazione e il nome e il percorso del file di output.

## <a name="custom-precompiled-code"></a>Codice precompilato personalizzato

Per i progetti di grandi dimensioni che importano molto tempo per la compilazione, è consigliabile creare file precompilati personalizzati. I compilatori Microsoft C e C++ includono opzioni per la precompilazione di codice C o C++ di qualsiasi tipo, incluso quello inline. Questa funzionalità avanzata consente di compilare un corpo di codice stabile, archiviare lo stato del codice compilato in un file e, durante le successive compilazioni, combinare il codice precompilato con quello ancora in fase di sviluppo. Le compilazioni successive risultano più veloci perché il codice stabile non deve essere ricompilato.

## <a name="when-to-precompile-source-code"></a>Condizioni per la precompilazione del codice sorgente

Il codice precompilato è utile durante il ciclo di sviluppo per ridurre i tempi di compilazione, soprattutto se:

- Si usa sempre un corpo di codice di grandi dimensioni che viene modificato raramente.

- Il programma include più moduli, ognuno dei quali usa un insieme standard di file di inclusione e le stesse opzioni di compilazione. In questo caso, tutti i file di inclusione possono essere precompilati in un'unica intestazione precompilata.

La prima compilazione, quella che crea il file di intestazione precompilata (PCH), richiede un po' più tempo rispetto alle compilazioni successive. Le compilazioni successive possono continuare più rapidamente includendo il codice precompilato.

È possibile precompilare entrambi i programmi C e C++. Nella programmazione C++ è prassi comune separare le informazioni dell'interfaccia della classe in file di intestazione. Questi file di intestazione possono essere inclusi in un secondo momento nei programmi che usano la classe. Precompilando queste intestazioni, è possibile ridurre il tempo necessario per la compilazione di un programma.

> [!NOTE]
> Sebbene sia possibile usare un solo file di intestazione precompilata (PCH) per ogni file di origine, è possibile usare più file PCH in un progetto.

## <a name="two-choices-for-precompiling-code"></a>Precompilazione del codice automatica e manuale

È possibile precompilare qualsiasi codice C o C++; non si è limitati alla precompilazione solo dei file di intestazione.

La precompilazione richiede la pianificazione, ma offre compilazioni notevolmente più veloci se si esegue la precompilazione di codice sorgente diverso da semplici file di intestazione.

Precompilare il codice quando si è certi che i file di origine usano set comuni di file di intestazione, ma non includerli nello stesso ordine o quando si vuole includere il codice sorgente nella precompilazione.

Le opzioni di intestazione precompilata sono [/YC (Crea file di intestazione precompilata)](reference/yc-create-precompiled-header-file.md) e [/Yu (USA il file di intestazione precompilata)](reference/yu-use-precompiled-header-file.md). Usare **/YC** per creare un'intestazione precompilata. Se usato con il pragma facoltativo [hdrstop](../preprocessor/hdrstop.md) , **/YC** consente di precompilare sia i file di intestazione che il codice sorgente. Selezionare **/Yu** per utilizzare un'intestazione precompilata esistente nella compilazione esistente. È inoltre possibile utilizzare **/FP** con le opzioni **/YC** e **/Yu** per specificare un nome alternativo per l'intestazione precompilata.

Gli argomenti di riferimento sulle opzioni del compilatore per **/Yu** e **/YC** illustrano come accedere a questa funzionalità nell'ambiente di sviluppo.

## <a name="precompiled-header-consistency-rules"></a>Regole di uniformità per le intestazioni precompilate

Poiché i file PCH contengono informazioni sull'ambiente del computer e le informazioni sull'indirizzo di memoria relative al programma, è consigliabile usare solo un file PCH nel computer in cui è stato creato.

## <a name="consistency-rules-for-per-file-use-of-precompiled-headers"></a>Regole di uniformità per l'utilizzo per singolo file delle intestazioni precompilate

L'opzione del compilatore [/Yu](reference/yu-use-precompiled-header-file.md) consente di specificare il file PCH da usare.

Quando si usa un file PCH, il compilatore presuppone lo stesso ambiente di compilazione, ovvero uno che usa opzioni del compilatore coerenti, pragma e così via, che era attivo al momento della creazione del file PCH, a meno che non si specifichi diversamente. Se il compilatore rileva un'incoerenza, emette un avviso e identifica l'incoerenza laddove possibile. Tali avvisi non indicano necessariamente un problema con il file PCH. si limitano ad avvertire i possibili conflitti. Le sezioni seguenti illustrano i requisiti di coerenza per i file PCH.

### <a name="compiler-option-consistency"></a>Coerenza delle opzioni del compilatore

Le seguenti opzioni del compilatore possono generare un avviso di incoerenza quando si usa un file PCH:

- Le macro create con l'opzione del preprocessore (/D) devono essere le stesse tra la compilazione che ha creato il file PCH e la compilazione corrente. Lo stato delle costanti definite non è selezionato, ma possono verificarsi risultati imprevedibili se tali modifiche.

- I file PCH non funzionano con le opzioni/E e/EP.

- È necessario creare i file PCH utilizzando l'opzione genera informazioni di visualizzazione (/FR) o l'opzione Escludi variabili locali (/FR) prima che le successive compilazioni che utilizzano il file PCH possano utilizzare tali opzioni.

### <a name="c-70-compatible-z7"></a>C 7,0 compatibile (/Z7)

Se questa opzione è attiva quando viene creato il file PCH, le compilazioni successive che usano il file PCH possono usare le informazioni di debug.

Se l'opzione C 7,0 compatibile (/Z7) non è attiva quando viene creato il file PCH, le compilazioni successive che usano il file PCH e/Z7 attivano un avviso. Le informazioni di debug vengono inserite nel file con estensione obj corrente e i simboli locali definiti nel file PCH non sono disponibili per il debugger.

### <a name="include-path-consistency"></a>Includi coerenza percorso

Un file PCH non contiene informazioni sul percorso di inclusione che era attivo al momento della creazione. Quando si usa un file PCH, il compilatore usa sempre il percorso di inclusione specificato nella compilazione corrente.

### <a name="source-file-consistency"></a>Coerenza file di origine

Quando si specifica l'opzione Usa file di intestazione precompilata (/Yu), il compilatore ignora tutte le direttive del preprocessore (inclusi i pragma) visualizzate nel codice sorgente che verrà precompilato. La compilazione specificata da tali direttive del preprocessore deve corrispondere alla compilazione utilizzata per l'opzione Crea file di intestazione precompilata (/YC).

### <a name="pragma-consistency"></a>Coerenza pragma

I pragma elaborati durante la creazione di un file PCH influiscono in genere sul file con cui viene successivamente utilizzato il file PCH. I `comment` `message` pragma e non influiscono sul resto della compilazione.

Questi pragma hanno effetto solo sul codice all'interno del file PCH. non influiscono sul codice che successivamente usa il file PCH:

:::row:::
   :::column span="":::
      `comment`\
      `linesize`
   :::column-end:::
   :::column span="":::
      `message`\
      `page`
   :::column-end:::
   :::column span="":::
      `pagesize`\
      `skip`
   :::column-end:::
   :::column span="":::
      `subtitle`\
      `title`
   :::column-end:::
:::row-end:::

Questi pragma vengono conservati come parte di un'intestazione precompilata e influiscono sul resto di una compilazione che usa l'intestazione precompilata:

:::row:::
   :::column span="":::
      `alloc_text`\
      `auto_inline`\
      `check_stack`\
      `code_seg`\
      `data_seg`
   :::column-end:::
   :::column span="":::
      `function`\
      `include_alias`\
      `init_seg`\
      `inline_depth`
   :::column-end:::
   :::column span="":::
      `inline_recursion`\
      `intrinsic`\
      `optimize`\
      `pack`
   :::column-end:::
   :::column span="":::
      `pointers_to_members`\
      `setlocale`\
      `vtordisp`\
      `warning`
   :::column-end:::
:::row-end:::

## <a name="consistency-rules-for-yc-and-yu"></a>Regole di uniformità per /Yc e /Yu

Quando si usa un'intestazione precompilata creata con/Yc o/Yu, il compilatore confronta l'ambiente di compilazione corrente con quello esistente al momento della creazione del file PCH. Assicurarsi di specificare un ambiente coerente con quello precedente (usando le opzioni del compilatore coerenti, i pragma e così via) per la compilazione corrente. Se il compilatore rileva un'incoerenza, emette un avviso e identifica l'incoerenza laddove possibile. Tali avvisi non indicano necessariamente un problema con il file PCH. si limitano ad avvertire i possibili conflitti. Le sezioni seguenti illustrano i requisiti di coerenza per le intestazioni precompilate.

### <a name="compiler-option-consistency"></a>Coerenza delle opzioni del compilatore

Questa tabella elenca le opzioni del compilatore che potrebbero attivare un avviso di incoerenza quando si usa un'intestazione precompilata:

|Opzione|Nome|Regola|
|------------|----------|----------|
|/D|Definire costanti e macro|Deve essere lo stesso tra la compilazione che ha creato l'intestazione precompilata e la compilazione corrente. Lo stato delle costanti definite non è selezionato, ma possono verificarsi risultati imprevedibili se i file dipendono dai valori delle costanti modificate.|
|/E o/EP|Copia l'output del preprocessore nell'output standard|Le intestazioni precompilate non funzionano con l'opzione/E o/EP.|
|/Fr o/FR|Genera informazioni sul browser Microsoft Source|Affinché le opzioni/FR e/FR siano valide con l'opzione/Yu, devono essere attive anche al momento della creazione dell'intestazione precompilata. Le compilazioni successive che usano l'intestazione precompilata generano anche informazioni sul browser di origine. Le informazioni del browser vengono inserite in un singolo file SBR a cui fanno riferimento altri file allo stesso modo delle informazioni CodeView. Non è possibile eseguire l'override del posizionamento delle informazioni del browser di origine.|
|/GA,/GD,/GE,/GW o/GW|Opzioni del protocollo Windows|Deve essere lo stesso tra la compilazione che ha creato l'intestazione precompilata e la compilazione corrente. Se queste opzioni sono diverse, viene restituito un messaggio di avviso.|
|/Zi|Genera informazioni di debug complete|Se questa opzione è attiva al momento della creazione dell'intestazione precompilata, le compilazioni successive che usano la precompilazione possono usare tali informazioni di debug. Se/Zi non è attivo al momento della creazione dell'intestazione precompilata, le compilazioni successive che usano la precompilazione e l'opzione/Zi attivano un avviso. Le informazioni di debug vengono inserite nel file oggetto corrente e i simboli locali definiti nell'intestazione precompilata non sono disponibili per il debugger.|

> [!NOTE]
> La funzionalità di intestazione precompilata è destinata all'uso solo nei file di origine C e C++.

## <a name="using-precompiled-headers-in-a-project"></a>Utilizzo di intestazioni precompilate in un progetto

Le sezioni precedenti presentano una panoramica delle intestazioni precompilate:/YC e/Yu, l'opzione/FP e il pragma [hdrstop](../preprocessor/hdrstop.md) . In questa sezione viene descritto un metodo per l'utilizzo delle opzioni di intestazione precompilata manuali in un progetto. termina con un makefile di esempio e il codice che gestisce.

Per un altro approccio all'uso delle opzioni di intestazione precompilata manuali in un progetto, studiare uno dei makefile presenti nella directory MFC\SRC creata durante la configurazione predefinita di Visual Studio. Questi makefile accettano un approccio simile a quello presentato in questa sezione, ma usano maggiormente le macro di Microsoft Program Maintenance Utility (NMAKE) e offrono un maggiore controllo del processo di compilazione.

## <a name="pch-files-in-the-build-process"></a>File PCH nel processo di compilazione

La codebase di un progetto software è in genere contenuta in più file di origine C o C++, file oggetto, librerie e file di intestazione. In genere, un makefile coordina la combinazione di questi elementi in un file eseguibile. Nella figura seguente viene illustrata la struttura di un makefile che utilizza un file di intestazione precompilato. I nomi delle macro NMAKE e i nomi di file in questo diagramma sono coerenti con quelli del codice di esempio disponibile in [Makefile di esempio per PCH](#sample-makefile-for-pch) e [codice di esempio per PCH](#example-code-for-pch).

La figura usa tre dispositivi diagrammatiche per visualizzare il flusso del processo di compilazione. I rettangoli denominati rappresentano ogni file o macro. le tre macro rappresentano uno o più file. Le aree ombreggiate rappresentano ogni azione di compilazione o collegamento. Le frecce mostrano quali file e macro vengono combinati durante il processo di compilazione o collegamento.

![Struttura di un makefile che usa un file di intestazione precompilato](media/vc30ow1.gif "Struttura di un makefile che usa un file di intestazione precompilato") <br/>
Struttura di un makefile che utilizza un file di intestazione precompilata

A partire dalla parte superiore del diagramma, sia STABLEHDRS che delimitatore sono macro NMAKE in cui è possibile elencare i file che probabilmente non devono essere ricompilati. Questi file vengono compilati dalla stringa di comando

`CL /c /W3 /Yc$(BOUNDRY) applib.cpp myapp.cpp`

solo se il file di intestazione precompilato (STABLE. pch) non esiste o se si apportano modifiche ai file elencati nelle due macro. In entrambi i casi, il file di intestazione precompilata conterrà il codice solo dai file elencati nella macro STABLEHDRS. Elencare l'ultimo file che si desidera precompilato nella macro delimitatore.

I file elencati in queste macro possono essere file di intestazione o file di origine C o C++. Non è possibile usare un singolo file PCH con i moduli C e C++. Si noti che è possibile usare la macro **hdrstop** per arrestare la precompilazione a un certo punto all'interno del file delimitatore. Per ulteriori informazioni, vedere [hdrstop](../preprocessor/hdrstop.md) .

Continuando il diagramma, APPLIB. obj rappresenta il codice di supporto usato nell'applicazione finale. Viene creata da APPLIB. cpp, i file elencati nella macro UNSTABLEHDRS e il codice precompilato dall'intestazione precompilata.

MYAPP. obj rappresenta l'applicazione finale. Viene creato da MYAPP. cpp, i file elencati nella macro UNSTABLEHDRS e il codice precompilato dall'intestazione precompilata.

Infine, il file eseguibile (MYAPP.EXE) viene creato collegando i file elencati nella macro obj (APPLIB. obj e MYAPP. obj).

## <a name="sample-makefile-for-pch"></a>Makefile di esempio per PCH

Il makefile seguente usa le macro e una. Se,! In caso contrario,. Struttura dei comandi del flusso di controllo ENDIF per semplificare l'adattamento al progetto.

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

A parte le macro STABLEHDRS, delimitatore e UNSTABLEHDRS mostrate nella figura "struttura di un makefile che usa un file di intestazione precompilato" nei [file PCH del processo di compilazione](#pch-files-in-the-build-process), questo makefile fornisce una macro: CLFLAGS e una macro LINKFLAGS. È necessario usare queste macro per elencare le opzioni del compilatore e del linker che si applicano se si compila una versione di debug o finale del file eseguibile dell'applicazione. È anche disponibile una macro LIBS in cui è possibile elencare le librerie richieste dal progetto.

Il makefile usa anche! Se,! In caso contrario,. ENDIF per rilevare se si definisce un simbolo di DEBUG nella riga di comando NMAKE:

```NMAKE
NMAKE DEBUG=[1|0]
```

Questa funzionalità consente di usare lo stesso Makefile durante lo sviluppo e per le versioni finali del programma: usare DEBUG = 0 per le versioni finali. Le righe di comando seguenti sono equivalenti:

```NMAKE
NMAKE
NMAKE DEBUG=0
```

Per ulteriori informazioni sui makefile, vedere [riferimenti a NMAKE](reference/nmake-reference.md). Vedere anche [Opzioni del compilatore MSVC](reference/compiler-options.md) e [Opzioni del linker MSVC](reference/linker-options.md).

## <a name="example-code-for-pch"></a>Codice di esempio per PCH

I seguenti file di origine vengono usati nel makefile descritto in [file PCH nel processo di compilazione](#pch-files-in-the-build-process) e nel [Makefile di esempio per PCH](#sample-makefile-for-pch). Si noti che i commenti contengono informazioni importanti.

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

## <a name="see-also"></a>Vedi anche

[Riferimenti alla compilazione in C/C++](reference/c-cpp-building-reference.md)<br/>
[Opzioni del compilatore MSVC](reference/compiler-options.md)
