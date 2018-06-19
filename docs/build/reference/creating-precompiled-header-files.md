---
title: Creazione di file di intestazione precompilata | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- pch
dev_langs:
- C++
helpviewer_keywords:
- precompiled header files, creating
- PCH files, creating
- cl.exe compiler, precompiling code
- .pch files, creating
ms.assetid: e2cdb404-a517-4189-9771-c869c660cb1b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 31d9708f203c3d79d4cf369583c75d348278d06a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32379211"
---
# <a name="creating-precompiled-header-files"></a>Creazione di file di intestazione precompilata
  
I compilatori Microsoft C e C++ includono opzioni per la precompilazione di codice C o C++ di qualsiasi tipo, incluso quello inline. Questa funzionalità avanzata consente di compilare un corpo di codice stabile, archiviare lo stato del codice compilato in un file e, durante le successive compilazioni, combinare il codice precompilato con quello ancora in fase di sviluppo. Le compilazioni successive risultano più veloci perché il codice stabile non deve essere ricompilato.  
  
In questo argomento vengono trattati gli argomenti di intestazione precompilata seguenti:  
  
-   [Condizioni per la precompilazione del codice sorgente](#when-to-precompile-source-code)  
  
-   [Precompilazione del codice automatica e manuale](#two-choices-for-precompiling-code)  
  
-   [Regole di uniformità per le intestazioni precompilate](#precompiled-header-consistency-rules)  
  
-   [Regole di uniformità per l'uso per singolo file delle intestazioni precompilate](#consistency-rules-for-per-file-use-of-precompiled-headers)  
  
-   [Regole di uniformità per /Yc e /Yu](#consistency-rules-for-yc-and-yu)  
  
-   [Uso di intestazioni precompilate in un progetto](#using-precompiled-headers-in-a-project)  
  
-   [File PCH nel processo di compilazione](#pch-files-in-the-build-process)  
  
-   [Makefile di esempio per PCH](#sample-makefile-for-pch)  
  
-   [Codice di esempio per PCH](#example-code-for-pch)  
  
Per informazioni sulle opzioni del compilatore correlate alle intestazioni precompilate, vedere [/Y (intestazioni precompilate)](../../build/reference/y-precompiled-headers.md).  
  
<a name="when-to-precompile-source-code"></a>  
  
## <a name="when-to-precompile-source-code"></a>Condizioni per la precompilazione del codice sorgente  
  
Il codice precompilato è utile durante il ciclo di sviluppo per ridurre i tempi di compilazione, soprattutto se:  
  
-   È sempre utilizzare gran parte del codice che vengono modificati raramente.  
  
-   Il programma è costituito da più moduli, ognuno dei quali utilizzerà un set standard di file di inclusione e le stesse opzioni di compilazione. In questo caso, tutti i file di inclusione può essere precompilato in un'intestazione precompilata.  
  
La prima compilazione, ovvero quello che crea il file di intestazione precompilata (PCH), richiede più tempo rispetto alle compilazioni successive. Le successive compilazioni possono essere più rapide, includendo il codice precompilato.  
  
È possibile precompilare programmi C e C++. In linguaggi di programmazione C++, è pratica comune per separare le informazioni di interfaccia di classe nel file di intestazione. Questi file di intestazione in un secondo momento possono essere inclusi nei programmi che usano la classe. La precompilazione di queste intestazioni, è possibile ridurre il tempo di un programma per la compilazione.  
  
> [!NOTE]
>  Sebbene sia possibile utilizzare un solo file di intestazione precompilata (PCH) per ogni file di origine, è possibile utilizzare più PCH (file) in un progetto.  
  
<a name="two-choices-for-precompiling-code"></a>  
  
# <a name="two-choices-for-precompiling-code"></a>Precompilazione del codice automatica e manuale  
  
Con Visual C++, è possibile precompilare qualsiasi codice C o C++. non è possibile eseguire solo i file di intestazione di precompilazione.  
  
La precompilazione richiede una pianificazione, ma consente di eseguire compilazioni significativamente più veloce se si esegue la precompilazione di codice sorgente diverso da semplici file di intestazione.  
  
Precompilazione del codice quando si è certi che i file di origine comune set di file di intestazione, ma non li includono nello stesso ordine o quando si desidera includere codice sorgente nella precompilazione.  
  
Le opzioni di intestazione precompilata sono [/Yc (Crea precompilata File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md) e [/Yu (utilizza il File intestazione precompilata)](../../build/reference/yu-use-precompiled-header-file.md). Utilizzare **/Yc** per creare un'intestazione precompilata. Se usato con l'opzione facoltativa [hdrstop](../../preprocessor/hdrstop.md) pragma, **/Yc** consente di precompilare entrambi i file di intestazione e il codice sorgente. Selezionare **/Yu** per utilizzare un'intestazione precompilata esistente nella compilazione esistente. È inoltre possibile utilizzare **/Fp** con il **/Yc** e **/Yu** le opzioni per fornire un nome alternativo per l'intestazione precompilata.  
  
Gli argomenti di riferimento di opzione del compilatore per **/Yu** e **/Yc** viene illustrato come accedere a questa funzionalità nell'ambiente di sviluppo.  
  
<a name="precompiled-header-consistency-rules"></a>  
  
## <a name="precompiled-header-consistency-rules"></a>Regole di uniformità per le intestazioni precompilate  
  
Poiché i file PCH contengono informazioni sull'ambiente del computer, nonché informazioni sull'indirizzo di memoria sul programma, utilizzare solo un file PCH nel computer in cui è stato creato.  
  
<a name="consistency-rules-for-per-file-use-of-precompiled-headers"></a>  
  
## <a name="consistency-rules-for-per-file-use-of-precompiled-headers"></a>Regole di uniformità per l'utilizzo per singolo file delle intestazioni precompilate

Il [/Yu](../../build/reference/yu-use-precompiled-header-file.md) l'opzione del compilatore consente di specificare il file PCH da utilizzare.  
  
Quando si utilizza un file PCH, il compilatore presuppone lo stesso ambiente di compilazione, che usa le opzioni del compilatore coerente, i pragma e così via, che avevano al momento della creazione del file PCH, se non diversamente specificato. Se il compilatore rileva un'incoerenza, genera un avviso e lo identifica l'incoerenza laddove possibile. Questi avvisi non indicano necessariamente un problema con il file PCH. essi avvisa semplicemente di possibili conflitti. Nelle sezioni seguenti sono descritti i requisiti di coerenza per PCH (file).  
  
### <a name="compiler-option-consistency"></a>Coerenza di opzione del compilatore  
  
Le seguenti opzioni del compilatore possono attivare un avviso di incoerenza quando si utilizza un file PHC:  
  
-   Le macro create mediante il preprocessore (/ D) opzione deve essere lo stesso tra la compilazione che ha creato il file PCH e la compilazione corrente. Non viene controllato lo stato delle costanti definite, ma possono verificarsi risultati imprevisti se queste sono modificate.  
  
-   PCH (file) non funzionano con le opzioni /E e /EP.  
  
-   PCH (file) devono essere creati usando uno Generate Browse Info (/ FR) opzione o le variabili locali escludere (o Fr) opzione prima che le successive compilazioni che utilizzano il file PCH è possono utilizzare queste opzioni.  
  
### <a name="c-70-compatible-z7"></a>Compatibile C 7.0 (/ Z7)  
  
Se questa opzione è attiva quando viene creato il file PCH, le successive compilazioni che utilizzano il file PCH possono utilizzare le informazioni di debug.  
  
Se il compatibile C 7.0 (/ Z7) opzione non è attiva quando viene creato il file PCH, le successive compilazioni che utilizzano il file PCH /Z7 generano un avviso. Le informazioni di debug viene inserite nel file obj corrente e i simboli locali definiti nel file PCH non sono disponibili per il debugger.  
  
### <a name="include-path-consistency"></a>Includere la coerenza di percorso  
  
Un file PHC non contiene informazioni sul percorso di inclusione che avevano al momento della creazione. Quando si utilizza un file PCH, il compilatore Usa sempre il percorso di inclusione specificato nella compilazione corrente.  
  
### <a name="source-file-consistency"></a>Coerenza di File di origine  
  
Quando si specifica l'opzione di utilizzo File di intestazione precompilata (/Yu), il compilatore ignora tutte le direttive del preprocessore (inclusi i pragma) presenti nel codice sorgente che verrà precompilato. La compilazione specificata dalle direttive del preprocessore deve essere identico dalla compilazione per l'opzione Creazione precompilate intestazione File (/Yc).  
  
### <a name="pragma-consistency"></a>Coerenza (pragma)    
  
I pragma elaborati durante la creazione di un file PHC in genere influisce sul file con cui viene successivamente utilizzato il file PCH. Il `comment` e `message` pragma non influiscono sul resto della compilazione.  
  
Questi pragma interessano solo il codice all'interno del file PCH; non influiscono sul codice che viene successivamente utilizzato il file PCH:  
  
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
  
<a name="consistency-rules-for-yc-and-yu"></a>  
  
## <a name="consistency-rules-for-yc-and-yu"></a>Regole di uniformità per /Yc e /Yu  
  
Quando si utilizza un'intestazione precompilata creata con /Yc o /Yu, il compilatore confronta l'ambiente di compilazione corrente a quella esistente al momento della creazione del file PCH. Assicurarsi di specificare un ambiente coerenza con quella precedente (utilizzando le opzioni del compilatore coerente, i pragma e così via) per la compilazione corrente. Se il compilatore rileva un'incoerenza, genera un avviso e lo identifica l'incoerenza laddove possibile. Questi avvisi non indicano necessariamente un problema con il file PCH. essi avvisa semplicemente di possibili conflitti. Le sezioni seguenti illustrano i requisiti di coerenza per le intestazioni precompilate.  
  
### <a name="compiler-option-consistency"></a>Coerenza di opzione del compilatore  
  
Questa tabella elenca le opzioni del compilatore potrebbero generare un avviso di incoerenza quando si utilizza un'intestazione precompilata:  
  
|Opzione|nome|Regola|  
|------------|----------|----------|  
|/D|Definire le costanti e macro|Deve essere lo stesso tra la compilazione che ha creato l'intestazione precompilata e la compilazione corrente. Non viene controllato lo stato delle costanti definite, ma possono verificarsi risultati inattesi se i file dipendono dai valori delle costanti modificate.|  
|/E o /EP|Copia l'output del preprocessore output standard|Le intestazioni precompilate non funzionano con l'opzione /E o /EP.|  
|/FR o /FR|Genera informazioni di Microsoft Source Browser|Per le opzioni essere valido con l'opzione /Yu and /Fr, essi devono anche essere stati attiva quando è stato creato l'intestazione precompilata. Le successive compilazioni che utilizzano l'intestazione precompilata inoltre generano informazioni di visualizzazione di origine. Informazioni di visualizzazione viene inserite in un unico file sbr e viene fatto riferimento da altri file nello stesso modo come informazioni di CodeView. Non è possibile ignorare la posizione delle informazioni di visualizzazione di origine.|  
|/ /GD, GA, /GE, /Gw o /GW|Opzioni del protocollo di Windows|Deve essere lo stesso tra la compilazione che ha creato l'intestazione precompilata e la compilazione corrente. Se queste opzioni sono diversi, verrà generato un messaggio di avviso.|  
|/ZI|Genera informazioni di debug complete|Se questa opzione è attiva quando viene creato l'intestazione precompilata, le successive compilazioni che utilizzano la precompilazione possono utilizzare le informazioni di debug. Se /Zi non è attiva quando viene creato l'intestazione precompilata successive compilazioni che utilizzano la precompilazione e l'opzione /Zi. generano un avviso. Le informazioni di debug viene inserite nel file oggetto corrente e i simboli locali definiti nell'intestazione precompilata non sono disponibili per il debugger.|  
  
> [!NOTE]
>  La funzionalità di intestazione precompilata deve essere utilizzato solo nei file di origine C e C++.  
  
<a name="using-precompiled-headers-in-a-project"></a>  
  
## <a name="using-precompiled-headers-in-a-project"></a>Utilizzo di intestazioni precompilate in un progetto  
  
Nelle sezioni precedenti presentano una panoramica delle intestazioni precompilate: /Yc e /Yu, l'opzione /Fp e [hdrstop](../../preprocessor/hdrstop.md) pragma. In questa sezione viene descritto un metodo per l'utilizzo delle opzioni di intestazione precompilata manuale in un progetto. che termina con un makefile di esempio e il codice che gestisce.  
  
Per un altro approccio per l'utilizzo delle opzioni di intestazione precompilata manuale in un progetto, esaminare uno dei makefile presenti nella directory MFC\SRC che viene creata durante l'installazione predefinita di Visual C++. I makefile adottano un approccio simile a quello presentato in questa sezione maggiore utilizzo di macro NMAKE Microsoft Program Maintenance Utility () ma offrono un maggiore controllo del processo di compilazione.  
  
<a name="pch-files-in-the-build-process"></a>  
  
## <a name="pch-files-in-the-build-process"></a>File PCH nel processo di compilazione  
  
La base di codice di un progetto software è contenuta generalmente in più C o C++ i file di origine, file oggetto, librerie e file di intestazione. In genere, un makefile coordina la combinazione di questi elementi in un file eseguibile. Nella figura seguente mostra la struttura di un makefile che utilizza un file di intestazione precompilata. I nomi di macro NMAKE e i nomi dei file in questo diagramma sono coerenti con quelli nel codice di esempio nel [Makefile di esempio per PCH](#sample-makefile-for-pch) e [codice di esempio per PCH](#example-code-for-pch).  
  
Nella figura utilizza tre motivi grafici per visualizzare il flusso del processo di compilazione. Denominato rappresentano i rettangoli ogni file o una macro. le tre macro rappresentano uno o più file. Le aree ombreggiate rappresentano ogni azione di compilazione o di collegamento. Le frecce indicano quali file e le macro vengono combinate durante la compilazione o di un processo di collegamento.  
  
![Makefile che utilizza un file di intestazione precompilata](../../build/reference/media/vc30ow1.gif "struttura di un Makefile che utilizza un File di intestazione precompilata")  
##### <a name="structure-of-a-makefile-that-uses-a-precompiled-header-file"></a>Struttura di un makefile che utilizza un file di intestazione precompilata  
  
A partire dalla parte superiore del diagramma, STABLEHDRS sia confine AS sono macro NMAKE in cui sono elencati i file probabilmente non devono essere ricompilati. Questi file vengono compilati dalla stringa di comando  
  
`CL /c /W3 /Yc$(BOUNDRY) applib.cpp myapp.cpp`  
  
solo se il file di intestazione precompilata (Stable. pch) non esiste o se si apportano modifiche ai file elencati nelle due macro. In entrambi i casi, il file di intestazione precompilata contengono codice solo dai file elencati nella macro STABLEHDRS. Elencare l'ultimo file desiderato precompilato nella macro confine AS.  
  
I file elencati in queste macro possono essere file di intestazione o il file di origine C o C++. (Impossibile utilizzare un unico file PCH con moduli C++ e C). Si noti che è possibile utilizzare il **hdrstop** macro per interrompere la precompilazione a un certo punto all'interno del file di confine AS. Vedere [hdrstop](../../preprocessor/hdrstop.md) per ulteriori informazioni.  
  
Continuare premuto nel diagramma, APPLIB rappresenta il codice di supporto utilizzato nell'applicazione finale. Viene creata da APPLIB, i file elencati nella macro UNSTABLEHDRS e del codice precompilato da intestazione precompilata.  
  
MyApp rappresenta finale dell'applicazione. Viene creata da MyApp. cpp, i file elencati nella macro UNSTABLEHDRS e del codice precompilato da intestazione precompilata.  
  
Infine, il file eseguibile (MYAPP. Con estensione EXE) viene creato collegando i file elencati nella macro OBJS (APPLIB e MyApp).  
  
<a name="sample-makefile-for-pch"></a>  
  
## <a name="sample-makefile-for-pch"></a>Makefile di esempio per PCH  
  
Il seguente file di progetto usa macro e un oggetto. SE! ALTRO! Struttura del flusso di controllo comando ENDIF che semplifica l'adattamento al progetto.  
  
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
  
A parte le macro STABLEHDRS confine AS e UNSTABLEHDRS illustrate nella figura "Struttura di un Makefile che utilizza un precompilata File di intestazione" in [file PCH nel processo di compilazione](#pch-files-in-the-build-process), questo makefile fornisce contiene due macro e un LINKFLAGS macro. È necessario utilizzare queste macro per visualizzare l'elenco di opzioni del compilatore e del linker che si applicano se si compila una versione di debug o finale del file eseguibile dell'applicazione. È inoltre disponibile una macro di librerie in cui vengono elencati le librerie richiede il progetto.  
  
Utilizza inoltre il file di progetto. SE! ALTRO! ENDIF per rilevare se si definisce un simbolo DEBUG nella riga di comando NMAKE:  
  
```NMAKE  
NMAKE DEBUG=[1|0]  
```  
  
Questa funzionalità rende possibile per poter utilizzare lo stesso makefile durante lo sviluppo e per le versioni finali del programma, utilizzare DEBUG = 0 per le versioni finali. Le righe di comando seguenti sono equivalenti:  
  
```NMAKE  
NMAKE   
NMAKE DEBUG=0  
```  
  
Per ulteriori informazioni sui makefile, vedere [riferimenti a NMAKE](../../build/nmake-reference.md). Vedere anche [opzioni del compilatore](../../build/reference/compiler-options.md) e [opzioni del Linker](../../build/reference/linker-options.md).  
  
<a name="example-code-for-pch"></a>  
  
## <a name="example-code-for-pch"></a>Codice di esempio per PCH  
  
I seguenti file di origine vengono utilizzati in makefile illustrato in [file PCH nel processo di compilazione](#pch-files-in-the-build-process) e [Makefile di esempio per PCH](#sample-makefile-for-pch). Si noti che i commenti che contengono importanti informazioni.  
  
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
[C/C++ Building Reference](../../build/reference/c-cpp-building-reference.md)  (Informazioni di riferimento per la compilazione in C/C++)  
[Opzioni del compilatore](../../build/reference/compiler-options.md)