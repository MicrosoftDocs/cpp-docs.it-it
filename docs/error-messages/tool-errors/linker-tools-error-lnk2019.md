---
title: Errore degli strumenti del linker LNK2019
ms.date: 12/15/2017
f1_keywords:
- LNK2019
helpviewer_keywords:
- nochkclr.obj
- LNK2019
- _check_commonlanguageruntime_version
ms.openlocfilehash: 0ef0bfd565b8c76816cc1f8a20b1521da238cdfc
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65447704"
---
# <a name="linker-tools-error-lnk2019"></a>Errore degli strumenti del linker LNK2019

simbolo esterno non risolto '*simbolo*'fa riferimento nella funzione'*funzione*'

Il codice compilato per *funzione* rende un riferimento o una chiamata a *simbolo*, ma tale simbolo non è definito in tutte le librerie o file oggetto specificati per il linker.

Questo messaggio di errore è seguito dall'errore irreversibile [LNK1120](../../error-messages/tool-errors/linker-tools-error-lnk1120.md). È necessario correggere gli errori di tutti i LNK2001 e l'errore LNK2019 per correggere l'errore LNK1120.

## <a name="possible-causes"></a>Possibili cause

Esistono molti modi per visualizzare questo errore, ma tutti gli elementi comportano un riferimento a una funzione o variabile che il linker non può *risolvere*, o trovare una definizione per. Il compilatore può identificare quando non è un simbolo *dichiarato*, ma non quando non è *definiti*, perché la definizione potrebbe trovarsi in un file di origine differente o una raccolta. Se un simbolo viene definito ma mai definito, il linker genera un errore di simbolo esterno non risolto.

Di seguito sono riportati alcuni problemi comuni che causano l'errore LNK2019:

### <a name="the-object-file-or-library-that-contains-the-definition-of-the-symbol-is-not-linked"></a>Il file oggetto o una raccolta che contiene la definizione del simbolo non è collegato

In Visual Studio, verificare che il file di origine che contiene la definizione viene compilato e collegato come parte del progetto. Nella riga di comando, verificare che il file di origine che contiene la definizione viene compilato e che il file oggetto risultante sia incluso nell'elenco dei file da collegare.

### <a name="the-declaration-of-the-symbol-is-not-spelled-the-same-as-the-definition-of-the-symbol"></a>La dichiarazione del simbolo non è stata digitata quello utilizzato per la definizione del simbolo

Verificare l'ortografici e maiuscole/minuscole viene utilizzata sia la dichiarazione e la definizione e ovunque il simbolo viene utilizzato o chiamato.

### <a name="a-function-is-used-but-the-type-or-number-of-the-parameters-do-not-match-the-function-definition"></a>Viene usata una funzione ma il tipo o il numero di parametri non corrisponde alla definizione di funzione

La dichiarazione della funzione deve corrispondere alla definizione. Verificare che la chiamata di funzione corrisponda alla dichiarazione e che la dichiarazione corrisponda alla definizione. Il codice che richiama le funzioni modello deve contenere anche le dichiarazioni delle funzioni modello corrispondenti che includono gli stessi parametri modello della definizione. Per un esempio di una mancata corrispondenza dichiarazione di modello, vedere l'esempio LNK2019e.cpp nella sezione esempi.

### <a name="a-function-or-variable-is-declared-but-not-defined"></a>Una funzione o variabile è dichiarata ma non definita

Ciò significa in genere esiste una dichiarazione in un file di intestazione, ma è implementata alcuna definizione corrispondente. Per le funzioni membro o i membri di dati statici, l'implementazione deve includere il selettore di ambito di classe. Per un esempio, vedere [Missing Function Body or Variable](../../error-messages/tool-errors/missing-function-body-or-variable.md).

### <a name="the-calling-convention-is-different-between-the-function-declaration-and-the-function-definition"></a>La convenzione di chiamata è diversa tra la dichiarazione di funzione e la definizione di funzione

Le convenzioni di chiamata ([__cdecl](../../cpp/cdecl.md), [__stdcall](../../cpp/stdcall.md), [__fastcall](../../cpp/fastcall.md), or [__vectorcall](../../cpp/vectorcall.md)) sono codificate come parte del nome decorato. Verificare che la convenzione di chiamata sia la stessa.

### <a name="a-symbol-is-defined-in-a-c-file-but-declared-without-using-extern-c-in-a-c-file"></a>Un simbolo viene definito in un file C, ma dichiarato senza l'uso di extern "C" in un file C++

I simboli definiti in un file compilato come C hanno nomi decorati diversi rispetto ai simboli dichiarati in un file C++, a meno che non venga usato il modificatore [extern "C"](../../cpp/using-extern-to-specify-linkage.md) . Verificare che la dichiarazione corrisponda al collegamento di compilazione per ogni simbolo. Analogamente, se si definisce un simbolo in un file di C++ che verrà usato da un programma C, usare `extern "C"` nella definizione.

### <a name="a-symbol-is-defined-as-static-and-then-later-referenced-outside-the-file"></a>Un simbolo è definito come static e quindi in un secondo momento un riferimento all'esterno del file

In C++, diversamente da C, le [costanti globali](../../error-messages/tool-errors/global-constants-in-cpp.md) contengono un collegamento `static` . Per evitare questa limitazione, è possibile includere le inizializzazioni `const` in un file di intestazione e includere l'intestazione nei file cpp o è possibile rendere la variabile non costante e usare un riferimento costante per accedervi.

### <a name="a-static-member-of-a-class-is-not-defined"></a>Non è definito un membro statico di una classe

Un membro statico di una classe deve avere una definizione univoca, altrimenti violerà la regola della definizione unica. Un membro statico di una classe che non può essere definito inline deve essere definito in un unico file di origine usando il nome completo. Se non viene definito in alcun modo, il linker genera l'errore LNK2019.

### <a name="a-build-dependency-is-only-defined-as-a-project-dependency-in-the-solution"></a>Una dipendenza di compilazione viene definita solo come dipendenza di progetto nella soluzione

Nelle versioni precedenti di Visual Studio, questo livello di dipendenza è sufficiente. Tuttavia, a partire da Visual Studio 2010, Visual Studio richiede un [riferimento da progetto a progetto](/visualstudio/ide/managing-references-in-a-project). Se il progetto non contiene un riferimento da progetto a progetto, è possibile che venga visualizzato questo errore del linker. Aggiungere un riferimento da progetto a progetto per risolvere il problema.

### <a name="you-build-a-console-application-by-using-settings-for-a-windows-application"></a>Un'applicazione console viene compilata usando le impostazioni di un'applicazione Windows

Se il messaggio di errore è simile a **simbolo esterno non risolto WinMain referenced nella funzione** *nome_funzione*, collegamento usando **/SUBSYSTEM: console** anziché **/SUBSYSTEM: Windows**. Per altre informazioni su questa impostazione e per istruzioni su come impostare questa proprietà in Visual Studio, vedere [/SUBSYSTEM (Specify Subsystem)](../../build/reference/subsystem-specify-subsystem.md).

### <a name="you-attempt-to-link-64-bit-libraries-to-32-bit-code-or-32-bit-libraries-to-64-bit-code"></a>Si prova a collegare librerie a 64 bit a codice a 32 bit o 32 bit librerie da codice a 64 bit

Le librerie e file oggetto collegati al codice devono essere compilati per la stessa architettura del codice. Verificare che le librerie vengono compilati i riferimenti del progetto per la stessa architettura del progetto. Assicurarsi che il [/LIBPATH](../../build/reference/libpath-additional-libpath.md) oppure **Directory librerie aggiuntive** opzione path utilizzate dai punti di linker a librerie create per l'architettura corretta.

### <a name="you-use-different-compiler-options-for-function-inlining-in-different-source-files"></a>Vengono usate opzioni del compilatore diverse per l'inline delle funzioni in file di origine differenti

L'uso delle funzioni inline definite nei file cpp e la combinazione di opzioni del compilatore per l'inline delle funzioni in file di origine diversi può causare l'errore LNK2019. Per altre informazioni, vedere [Function Inlining Problems](../../error-messages/tool-errors/function-inlining-problems.md).

### <a name="you-use-automatic-variables-outside-their-scope"></a>Vengono usate variabili automatiche di fuori ambito

Le variabili automatiche (ambito funzione) possono essere usate solo nell'ambito di tale funzione. Queste variabili non possono essere dichiarate come `extern` e usate in altri file di origine. Per un esempio, vedere [Automatic (Function Scope) Variables](../../error-messages/tool-errors/automatic-function-scope-variables.md).

### <a name="you-call-instrinsic-functions-or-pass-argument-types-to-intrinsic-functions-that-are-not-supported-on-your-target-architecture"></a>Vengono chiamate funzioni intrinseche o passati tipi di argomento alle funzioni intrinseche non supportate nell'architettura di destinazione

Se ad esempio si usa un elemento AVX2 intrinseco, ma non si specifica l'opzione del compilatore [/ARCH:AVX2](../../build/reference/arch-x86.md) , il compilatore presuppone che l'elemento intrinseco sia una funzione esterna. Anziché generare un'istruzione inline, il compilatore genera una chiamata a un simbolo esterno con lo stesso nome dell'elemento intrinseco. Quando il linker prova a cercare la definizione di questa funzione mancante, viene generato l'errore LNK2019. Verificare di usare solo elementi intrinseci e tipi supportati dall'architettura di destinazione.

### <a name="you-mix-code-that-uses-native-wchart-with-code-that-doesnt"></a>Viene combinato codice che usa wchar native\_t con codice che non

C++operazioni di conformità del linguaggio che è stata eseguita in Visual Studio 2005 hanno reso `wchar_t` un tipo nativo per impostazione predefinita. È necessario usare il [/Zc:wchar_t-](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md) opzione del compilatore per generare codice compatibile con i file oggetto e di libreria compilati con le versioni precedenti di Visual Studio. Se non tutti i file sono stati compilati usando le stesse **/Zc:wchar\_t** impostazioni, tipo di riferimenti non possono essere risolti in tipi compatibili. Verificare che i tipi `wchar_t` in tutti i file oggetto e di libreria siano compatibili aggiornando i tipi usati o usando impostazioni di **/Zc:wchar_t** coerenti durante la compilazione.

## <a name="third-party-library-issues-and-vcpkg"></a>Problemi di una libreria di terze parti e Vcpkg

Se viene visualizzato questo errore quando si tenta di configurare una libreria di terze parti come parte della compilazione, è consigliabile usare [Vcpkg](../../vcpkg.md), installare e compilare la libreria di gestione pacchetti Visual C++. Vcpkg supporta un elevato e continuamente crescente [elenco delle librerie di terze parti](https://github.com/Microsoft/vcpkg/tree/master/ports)e imposta tutte le proprietà di configurazione e le dipendenze necessarie per la riuscita della compilazione come parte del progetto. Per altre informazioni, vedere i relativi [Blog di Visual C++](https://blogs.msdn.microsoft.com/vcblog/2016/09/19/vcpkg-a-tool-to-acquire-and-build-c-open-source-libraries-on-windows/) post.

## <a name="diagnosis-tools"></a>Strumenti di diagnosi

Può essere difficile stabilire il motivo per cui il linker non riesce trovare una definizione di un simbolo specifico. Spesso il problema è che il codice che contiene la definizione di compilazione non è stata inclusa o dei nomi per i simboli esterni decorati creato diverse opzioni di compilazione. Sono disponibili diversi strumenti e opzioni che consentono di diagnosticare un errore LNK2019.

- L'opzione del linker [/VERBOSE](../../build/reference/verbose-print-progress-messages.md) consente di determinare i file a cui il linker fa riferimento. Ciò consente di verificare se il file che contiene la definizione del simbolo è incluso nella compilazione.

- Il [/ESPORTA](../../build/reference/dash-exports.md) e [/simboli](../../build/reference/symbols.md) le opzioni del **DUMPBIN** utilità permette di individuare quali simboli sono definiti nei file con estensione dll e oggetto o di libreria. Verificare che i nomi decorati esportati corrispondano ai nomi esportati cercati dal linker.

- Il **UNDNAME** utilità consente di visualizzare il simbolo esterno non decorato equivalente di un nome decorato.

## <a name="examples"></a>Esempi

Di seguito sono riportati alcuni esempi di codice che causano un errore LNK2019 insieme alle informazioni su come correggere l'errore.

### <a name="a-symbol-is-declared-but-not-defined"></a>Un simbolo viene dichiarato ma non definito

In questo esempio, una variabile esterna viene dichiarata ma non definita:

```cpp
// LNK2019.cpp
// Compile by using: cl /EHsc /W4 LNK2019.cpp
// LNK2019 expected
extern char B[100];   // B is not available to the linker
int main() {
   B[0] = ' ';   // LNK2019
}
```

Ecco un altro esempio in cui una variabile e funzione vengono dichiarati come `extern` ma viene specificata alcuna definizione:

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

A meno che `i` e `g` sono definiti in uno dei file inclusi nella compilazione, il linker genera l'errore LNK2019. È possibile correggere gli errori includendo il file del codice sorgente che contiene le definizioni come parte della compilazione. In alternativa, è possibile passare i file con estensione obj o LIB che contengono le definizioni per il linker.

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

### <a name="inconsistent-wchart-type-definitions"></a>Definizioni di tipo wchar_t incoerenti

In questo esempio crea una DLL contenente un'esportazione che usa `WCHAR`, che viene risolta in `wchar_t`.

```cpp
// LNK2019g.cpp
// compile with: cl /EHsc /LD LNK2019g.cpp
#include "windows.h"
// WCHAR resolves to wchar_t
__declspec(dllexport) void func(WCHAR*) {}
```

Nell'esempio seguente usa la DLL dell'esempio precedente e genera l'errore LNK2019 perché i tipi unsigned short * e WCHAR\* non sono uguali.

```cpp
// LNK2019h.cpp
// compile by using: cl /EHsc LNK2019h LNK2019g.lib
// LNK2019 expected
__declspec(dllimport) void func(unsigned short*);

int main() {
   func(0);
}
```

Per correggere questo errore, modificare `unsigned short` al `wchar_t` oppure `WCHAR`, oppure compilare LNK2019g.cpp usando **/Zc:wchar_t-**.

## <a name="additional-resources"></a>Risorse aggiuntive

Per altre informazioni sulle possibili cause e soluzioni per LNK2001, vedere la domanda in Stack Overflow [che cos'è un errore di simbolo esterno non definito o non risolti con riferimento e come correggerlo?](http://stackoverflow.com/q/12573816/2002113).

