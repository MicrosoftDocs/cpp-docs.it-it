---
title: Errore degli strumenti del linker LNK2019
ms.date: 12/15/2017
f1_keywords:
- LNK2019
helpviewer_keywords:
- nochkclr.obj
- LNK2019
- _check_commonlanguageruntime_version
ms.openlocfilehash: 3c4e5578c7b0f496feb4d40933af624f462a31d2
ms.sourcegitcommit: 680a155cc44a38f88bb2b1c5a1ef6dcb7141c011
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/10/2019
ms.locfileid: "72252630"
---
# <a name="linker-tools-error-lnk2019"></a>Errore degli strumenti del linker LNK2019

si fa riferimento al simbolo esterno '*Symbol*' non risolto nella funzione '*Function*'

Il codice compilato per la *funzione* esegue un riferimento o una chiamata a *Symbol*, ma tale simbolo non è definito in nessuna delle librerie o dei file oggetto specificati al linker.

Questo messaggio di errore è seguito da un errore irreversibile [LNK1120](../../error-messages/tool-errors/linker-tools-error-lnk1120.md). È necessario correggere tutti gli errori LNK2001 e LNK2019 per correggere l'errore LNK1120.

## <a name="possible-causes"></a>Possibili cause

Esistono diversi modi per ottenere questo errore, ma tutti implicano un riferimento a una funzione o a una variabile che il linker non è in grado di *risolvere*o per cui è possibile trovare una definizione. Il compilatore è in grado di identificare quando un simbolo non è *dichiarato*, ma non quando non è *definito*, perché la definizione potrebbe trovarsi in un file di origine o in una raccolta diversa. Se viene fatto riferimento a un simbolo che non è mai stato definito, il linker genera un errore di simbolo esterno non risolto.

Di seguito sono riportati alcuni problemi comuni che causano l'errore LNK2019:

### <a name="the-object-file-or-library-that-contains-the-definition-of-the-symbol-is-not-linked"></a>Il file oggetto o la raccolta che contiene la definizione del simbolo non è collegato

In Visual Studio verificare che il file di origine che contiene la definizione venga compilato e collegato come parte del progetto. Nella riga di comando, verificare che il file di origine che contiene la definizione venga compilato e che il file oggetto risultante sia incluso nell'elenco dei file da collegare.

### <a name="the-declaration-of-the-symbol-is-not-spelled-the-same-as-the-definition-of-the-symbol"></a>La dichiarazione del simbolo non è stata digitata allo stesso modo della definizione del simbolo

Verificare che l'ortografia e la maiuscole corrette siano usate sia nella dichiarazione che nella definizione e ovunque venga usato o chiamato il simbolo.

### <a name="a-function-is-used-but-the-type-or-number-of-the-parameters-do-not-match-the-function-definition"></a>Viene usata una funzione, ma il tipo o il numero dei parametri non corrisponde alla definizione della funzione

La dichiarazione della funzione deve corrispondere alla definizione. Verificare che la chiamata di funzione corrisponda alla dichiarazione e che la dichiarazione corrisponda alla definizione. Il codice che richiama le funzioni modello deve contenere anche le dichiarazioni delle funzioni modello corrispondenti che includono gli stessi parametri modello della definizione. Per un esempio di mancata corrispondenza di una dichiarazione di modello, vedere Sample LNK2019e. cpp nella sezione Examples.

### <a name="a-function-or-variable-is-declared-but-not-defined"></a>Una funzione o una variabile è dichiarata ma non definita

Ciò significa in genere che è presente una dichiarazione in un file di intestazione, ma non è implementata alcuna definizione corrispondente. Per le funzioni membro o i membri di dati statici, l'implementazione deve includere il selettore di ambito di classe. Per un esempio, vedere [Missing Function Body or Variable](../../error-messages/tool-errors/missing-function-body-or-variable.md).

### <a name="the-calling-convention-is-different-between-the-function-declaration-and-the-function-definition"></a>La convenzione di chiamata è diversa tra la dichiarazione di funzione e la definizione di funzione

Le convenzioni di chiamata ([__cdecl](../../cpp/cdecl.md), [__stdcall](../../cpp/stdcall.md), [__fastcall](../../cpp/fastcall.md), or [__vectorcall](../../cpp/vectorcall.md)) sono codificate come parte del nome decorato. Verificare che la convenzione di chiamata sia la stessa.

### <a name="a-symbol-is-defined-in-a-c-file-but-declared-without-using-extern-c-in-a-c-file"></a>Un simbolo viene definito in un file C, ma dichiarato senza usare extern "C" in un C++ file

I simboli definiti in un file compilato come C hanno nomi decorati diversi rispetto ai simboli dichiarati in un file C++, a meno che non venga usato il modificatore [extern "C"](../../cpp/using-extern-to-specify-linkage.md) . Verificare che la dichiarazione corrisponda al collegamento di compilazione per ogni simbolo. Analogamente, se si definisce un simbolo in un file di C++ che verrà usato da un programma C, usare `extern "C"` nella definizione.

### <a name="a-symbol-is-defined-as-static-and-then-later-referenced-outside-the-file"></a>Un simbolo viene definito come static e successivamente vi viene fatto riferimento all'esterno del file

In C++, diversamente da C, le [costanti globali](../../error-messages/tool-errors/global-constants-in-cpp.md) contengono un collegamento `static` . Per evitare questa limitazione, è possibile includere le inizializzazioni `const` in un file di intestazione e includere l'intestazione nei file cpp o è possibile rendere la variabile non costante e usare un riferimento costante per accedervi.

### <a name="a-static-member-of-a-class-is-not-defined"></a>Un membro statico di una classe non è definito

Un membro statico di una classe deve avere una definizione univoca, altrimenti violerà la regola della definizione unica. Un membro statico di una classe che non può essere definito inline deve essere definito in un unico file di origine usando il nome completo. Se non viene definito in alcun modo, il linker genera l'errore LNK2019.

### <a name="a-build-dependency-is-only-defined-as-a-project-dependency-in-the-solution"></a>Una dipendenza di compilazione viene definita solo come dipendenza di progetto nella soluzione

Nelle versioni precedenti di Visual Studio, questo livello di dipendenza era sufficiente. Tuttavia, a partire da Visual Studio 2010, Visual Studio richiede un [riferimento da progetto a progetto](/visualstudio/ide/managing-references-in-a-project). Se il progetto non contiene un riferimento da progetto a progetto, è possibile che venga visualizzato questo errore del linker. Aggiungere un riferimento da progetto a progetto per risolvere il problema.

### <a name="an-entry-point-is-not-defined"></a>Un punto di ingresso non è definito

Il codice dell'applicazione deve definire un punto di ingresso appropriato: `main` o `wmain` per le applicazioni console, `WinMain` o `wWinMain` per le applicazioni Windows. Per ulteriori informazioni, vedere [main: Funzione di avvio del programma @ no__t-0 o [WinMain](/windows/win32/api/winbase/nf-winbase-winmain). Per usare un punto di ingresso personalizzato, specificare l'opzione del linker [/entry (simbolo del punto di ingresso)](../../build/reference/entry-entry-point-symbol.md) . 

### <a name="you-build-a-console-application-by-using-settings-for-a-windows-application"></a>Per compilare un'applicazione console, è possibile usare le impostazioni di un'applicazione Windows

Se il messaggio di errore è simile a un **simbolo esterno non risolto a cui viene fatto riferimento nella funzione** *function_name*, eseguire il collegamento usando **/SUBSYSTEM: console** anziché **/SUBSYSTEM: Windows**. Per altre informazioni su questa impostazione e per istruzioni su come impostare questa proprietà in Visual Studio, vedere [/SUBSYSTEM (Specify Subsystem)](../../build/reference/subsystem-specify-subsystem.md).

### <a name="you-attempt-to-link-64-bit-libraries-to-32-bit-code-or-32-bit-libraries-to-64-bit-code"></a>Si tenta di collegare librerie a 64 bit a codice a 32 bit o a librerie a 32 bit a codice a 64 bit

Le librerie e i file oggetto collegati al codice devono essere compilati per la stessa architettura del codice. Verificare che le librerie a cui fa riferimento il progetto siano compilate per la stessa architettura del progetto. Verificare che l'opzione percorso [/LIBPATH](../../build/reference/libpath-additional-libpath.md) o **Directory libreria aggiuntiva** usata dal linker punti alle librerie compilate per l'architettura corretta.

### <a name="you-use-different-compiler-options-for-function-inlining-in-different-source-files"></a>Si usano diverse opzioni del compilatore per l'incorporamento di funzioni in file di origine diversi

L'uso delle funzioni inline definite nei file cpp e la combinazione di opzioni del compilatore per l'inline delle funzioni in file di origine diversi può causare l'errore LNK2019. Per altre informazioni, vedere [Function Inlining Problems](../../error-messages/tool-errors/function-inlining-problems.md).

### <a name="you-use-automatic-variables-outside-their-scope"></a>Vengono usate variabili automatiche al di fuori dell'ambito

Le variabili automatiche (ambito funzione) possono essere usate solo nell'ambito di tale funzione. Queste variabili non possono essere dichiarate come `extern` e usate in altri file di origine. Per un esempio, vedere [Automatic (Function Scope) Variables](../../error-messages/tool-errors/automatic-function-scope-variables.md).

### <a name="you-call-instrinsic-functions-or-pass-argument-types-to-intrinsic-functions-that-are-not-supported-on-your-target-architecture"></a>Si chiamano funzioni intrinseche o si passano tipi di argomento alle funzioni intrinseche che non sono supportate nell'architettura di destinazione

Se ad esempio si usa un elemento AVX2 intrinseco, ma non si specifica l'opzione del compilatore [/ARCH:AVX2](../../build/reference/arch-x86.md) , il compilatore presuppone che l'elemento intrinseco sia una funzione esterna. Anziché generare un'istruzione inline, il compilatore genera una chiamata a un simbolo esterno con lo stesso nome dell'elemento intrinseco. Quando il linker prova a cercare la definizione di questa funzione mancante, viene generato l'errore LNK2019. Verificare di usare solo elementi intrinseci e tipi supportati dall'architettura di destinazione.

### <a name="you-mix-code-that-uses-native-wchar_t-with-code-that-doesnt"></a>È possibile combinare codice che usa WCHAR nativo @ no__t-0T con codice che non

C++le operazioni di conformità del linguaggio eseguite in Visual Studio 2005 hanno reso `wchar_t` un tipo nativo per impostazione predefinita. È necessario utilizzare l'opzione [/Zc: wchar_t-](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md) Compiler per generare codice compatibile con i file oggetto e di libreria compilati utilizzando versioni precedenti di Visual Studio. Se non tutti i file sono stati compilati usando le stesse impostazioni **/Zc: WCHAR @ no__t-1T** , i riferimenti ai tipi non possono essere risolti in tipi compatibili. Verificare che i tipi `wchar_t` in tutti i file oggetto e di libreria siano compatibili aggiornando i tipi usati o usando impostazioni di **/Zc:wchar_t** coerenti durante la compilazione.

## <a name="third-party-library-issues-and-vcpkg"></a>Problemi relativi alla libreria di terze parti e vcpkg

Se questo errore viene visualizzato quando si tenta di configurare una libreria di terze parti come parte della compilazione, è consigliabile utilizzare [vcpkg](../../vcpkg.md), gestione pacchetti C++ visuale, per installare e compilare la libreria. Vcpkg supporta un [elenco di librerie di terze parti di](https://github.com/Microsoft/vcpkg/tree/master/ports)grandi dimensioni e in continua crescita e imposta tutte le proprietà di configurazione e le dipendenze necessarie per le compilazioni riuscite come parte del progetto. Per ulteriori informazioni, vedere il post [di C++ Blog visivo](https://blogs.msdn.microsoft.com/vcblog/2016/09/19/vcpkg-a-tool-to-acquire-and-build-c-open-source-libraries-on-windows/) correlato.

## <a name="diagnosis-tools"></a>Strumenti di diagnosi

Può essere difficile stabilire il motivo per cui il linker non riesce trovare una definizione di un simbolo specifico. Spesso il problema è che non è stato incluso il codice che contiene la definizione nella compilazione oppure le opzioni di compilazione hanno creato nomi decorati diversi per i simboli esterni. Sono disponibili diversi strumenti e opzioni che consentono di diagnosticare un errore LNK2019.

- L'opzione del linker [/VERBOSE](../../build/reference/verbose-print-progress-messages.md) consente di determinare i file a cui il linker fa riferimento. Ciò consente di verificare se il file che contiene la definizione del simbolo è incluso nella compilazione.

- Le opzioni [/exports.](../../build/reference/dash-exports.md) e [/symbols](../../build/reference/symbols.md) dell'utilità **dumpbin** consentono di individuare i simboli definiti nei file con estensione dll e oggetto o libreria. Verificare che i nomi decorati esportati corrispondano ai nomi esportati cercati dal linker.

- L'utilità **UNDNAME** consente di visualizzare il simbolo esterno non decorato equivalente per un nome decorato.

## <a name="examples"></a>Esempi

Di seguito sono riportati alcuni esempi di codice che causano un errore LNK2019 insieme alle informazioni su come correggere l'errore.

### <a name="a-symbol-is-declared-but-not-defined"></a>Un simbolo viene dichiarato ma non definito

In questo esempio, una variabile esterna è dichiarata ma non definita:

```cpp
// LNK2019.cpp
// Compile by using: cl /EHsc /W4 LNK2019.cpp
// LNK2019 expected
extern char B[100];   // B is not available to the linker
int main() {
   B[0] = ' ';   // LNK2019
}
```

Di seguito è riportato un altro esempio in cui una variabile e una funzione sono dichiarate come `extern`, ma non viene fornita alcuna definizione:

```cpp
// LNK2019c.cpp
// Compile by using: cl /EHsc LNK2019c.cpp
// LNK2019 expected
extern int i;
extern void g();
void f() {
   i++;
   g();
}
int main() {}
```

A meno che non siano definiti `i` e `g` in uno dei file inclusi nella compilazione, il linker genera LNK2019. È possibile correggere gli errori includendo il file del codice sorgente che contiene le definizioni come parte della compilazione. In alternativa, è possibile passare i file con estensione obj o lib che contengono le definizioni al linker.

### <a name="a-static-data-member-is-declared-but-not-defined"></a>Un membro dati statici viene dichiarato ma non definito

L'errore LNK2019 può verificarsi anche quando un membro dati statici viene dichiarato ma non definito. L'esempio seguente genera l'errore LNK2019 e mostra come risolverlo.

```cpp
// LNK2019b.cpp
// Compile by using: cl /EHsc LNK2019b.cpp
// LNK2019 expected
struct C {
   static int s;
};

// Uncomment the following line to fix the error.
// int C::s;

int main() {
   C c;
   C::s = 1;
}
```

### <a name="declaration-parameters-do-not-match-definition"></a>I parametri della dichiarazione non corrispondono alla definizione

Il codice che richiama le funzioni modello deve contenere le dichiarazioni delle funzioni modello corrispondenti. Le dichiarazioni devono includere gli stessi parametri modello della definizione. L'esempio seguente genera l'errore LNK2019 per un operatore definito dall'utente e mostra come risolverlo.

```cpp
// LNK2019e.cpp
// compile by using: cl /EHsc LNK2019e.cpp
// LNK2019 expected
#include <iostream>
using namespace std;

template<class T> class
Test {
   // The operator<< declaration does not match the definition below:
   friend ostream& operator<<(ostream&, Test&);
   // To fix, replace the line above with the following:
   // template<typename T> friend ostream& operator<<(ostream&, Test<T>&);
};

template<typename T>
ostream& operator<<(ostream& os, Test<T>& tt) {
   return os;
}

int main() {
   Test<int> t;
   cout << "Test: " << t << endl;   // LNK2019 unresolved external
}
```

### <a name="inconsistent-wchar_t-type-definitions"></a>Definizioni di tipo wchar_t incoerenti

Questo esempio crea una DLL con un'esportazione che usa `WCHAR`, che viene risolta in `wchar_t`.

```cpp
// LNK2019g.cpp
// compile with: cl /EHsc /LD LNK2019g.cpp
#include "windows.h"
// WCHAR resolves to wchar_t
__declspec(dllexport) void func(WCHAR*) {}
```

Nell'esempio seguente viene usata la DLL nell'esempio precedente e viene generato LNK2019 perché i tipi unsigned short * e WCHAR @ no__t-0 non sono uguali.

```cpp
// LNK2019h.cpp
// compile by using: cl /EHsc LNK2019h LNK2019g.lib
// LNK2019 expected
__declspec(dllimport) void func(unsigned short*);

int main() {
   func(0);
}
```

Per correggere l'errore, modificare `unsigned short` in `wchar_t` o `WCHAR` oppure compilare LNK2019g. cpp utilizzando **/Zc: wchar_t-** .

## <a name="additional-resources"></a>Risorse aggiuntive

Per ulteriori informazioni sulle possibili cause e soluzioni per LNK2001, vedere la Stack Overflow domanda [che cos'è un errore non definito di riferimento/simbolo esterno non risolto e come risolvere](https://stackoverflow.com/q/12573816/2002113)il problema.

