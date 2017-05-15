---
title: Strumenti del linker LNK2019 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK2019
dev_langs:
- C++
helpviewer_keywords:
- nochkclr.obj
- LNK2019
- _check_commonlanguageruntime_version
ms.assetid: 4392be92-195c-4eb2-bd4d-49cfac3ca291
caps.latest.revision: 39
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 128bd124c2536d86c8b673b54abc4b5505526b41
ms.openlocfilehash: fad921c3b4f13f5704c293188c0b91315146c33c
ms.contentlocale: it-it
ms.lasthandoff: 05/10/2017

---
# <a name="linker-tools-error-lnk2019"></a>Errore degli strumenti del linker LNK2019
simbolo esterno non risolto '*simbolo*'a cui fa riferimento nella funzione'*funzione*'  
  
Il codice compilato per *funzione* rende un riferimento o una chiamata a *simbolo*, ma il simbolo non è definito in tutte le librerie o file oggetto specificati per il linker.  
  
Questo messaggio di errore è seguito dall'errore irreversibile [LNK1120](../../error-messages/tool-errors/linker-tools-error-lnk1120.md). È necessario correggere gli errori di tutti i LNK2001 e l'errore LNK2019 per correggere l'errore LNK1120.  
  
## <a name="possible-causes"></a>Possibili cause  
  
Esistono diversi modi per ottenere questo errore, ma tutti gli elementi coinvolti un riferimento a una funzione o variabile che il linker non *risolvere*, o trovare una definizione per. Il compilatore può identificare quando non è un simbolo *dichiarato*, ma non quando non è *definito*, perché la definizione può trovarsi in un altro file di origine o una raccolta. Se un simbolo viene definito ma mai definito, il linker genera un errore di simbolo esterno non risolto.  
  
Di seguito sono riportati alcuni problemi comuni che causano l'errore LNK2019:  
  
-   **Il file oggetto o una raccolta che contiene la definizione del simbolo non è collegata.** In Visual Studio, verificare che il file di origine che contiene la definizione viene compilato e collegato come parte del progetto. Nella riga di comando, verificare che il file di origine che contiene la definizione viene compilato e che il file oggetto risultante è incluso nell'elenco dei file da collegare.  
  
-   **La dichiarazione del simbolo non è stata digitata nello stesso modo in cui è stata digitata la definizione del simbolo.** Verificare la versione corretta e uso delle maiuscole viene utilizzata sia la dichiarazione e la definizione e ovunque il simbolo viene utilizzato o chiamato.  
  
-   **Viene usata una funzione, ma il tipo o il numero dei parametri non corrisponde alla definizione della funzione.** La dichiarazione della funzione deve corrispondere alla definizione. Verificare che la chiamata di funzione corrisponda alla dichiarazione e che la dichiarazione corrisponda alla definizione. Il codice che richiama le funzioni modello deve contenere anche le dichiarazioni delle funzioni modello corrispondenti che includono gli stessi parametri modello della definizione. Per un esempio di una mancata corrispondenza dichiarazione di modello, vedere l'esempio LNK2019e.cpp nella sezione esempi.  
  
-   **Una funzione o una variabile viene dichiarata ma non definita.** Ciò significa in genere esiste una dichiarazione in un file di intestazione, ma è implementata alcuna definizione corrispondente. Per le funzioni membro o i membri di dati statici, l'implementazione deve includere il selettore di ambito di classe. Per un esempio, vedere [Missing Function Body or Variable](../../error-messages/tool-errors/missing-function-body-or-variable.md).  
  
-   **La convenzione di chiamata è diversa tra la dichiarazione di funzione e la definizione di funzione.** Le convenzioni di chiamata ([__cdecl](../../cpp/cdecl.md), [__stdcall](../../cpp/stdcall.md), [__fastcall](../../cpp/fastcall.md), or [__vectorcall](../../cpp/vectorcall.md)) sono codificate come parte del nome decorato. Verificare che la convenzione di chiamata sia la stessa.  
  
-   **Un simbolo viene definito in un file C, ma viene dichiarato senza l'uso di extern "C" in un file C++.** I simboli definiti in un file compilato come C hanno nomi decorati diversi rispetto ai simboli dichiarati in un file C++, a meno che non venga usato il modificatore [extern "C"](../../cpp/using-extern-to-specify-linkage.md) . Verificare che la dichiarazione corrisponda al collegamento di compilazione per ogni simbolo. Analogamente, se si definisce un simbolo in un file di C++ che verrà usato da un programma C, usare `extern "C"` nella definizione.  
  
-   **Un simbolo viene definito come static e successivamente vi viene fatto riferimento all'esterno del file.** In C++, diversamente da C, le [costanti globali](../../error-messages/tool-errors/global-constants-in-cpp.md) contengono un collegamento `static` . Per evitare questa limitazione, è possibile includere le inizializzazioni `const` in un file di intestazione e includere l'intestazione nei file cpp o è possibile rendere la variabile non costante e usare un riferimento costante per accedervi.  
  
-   **Un membro statico di una classe non è definito.** Un membro statico di una classe deve avere una definizione univoca, altrimenti violerà la regola della definizione unica. Un membro statico di una classe che non può essere definito inline deve essere definito in un unico file di origine usando il nome completo. Se non viene definito in alcun modo, il linker genera l'errore LNK2019.  
  
-   **Una dipendenza di compilazione viene definita solo come dipendenza di progetto nella soluzione.** Nelle versioni precedenti di Visual Studio, questo livello di dipendenza è sufficiente. Tuttavia, a partire da Visual Studio 2010, Visual Studio richiede un [riferimento da progetto a progetto](/visualstudio/ide/managing-references-in-a-project). Se il progetto non contiene un riferimento da progetto a progetto, è possibile che venga visualizzato questo errore del linker. Aggiungere un riferimento da progetto a progetto per risolvere il problema.  
  
-   **Un'applicazione console viene compilata usando le impostazioni di un'applicazione Windows**. Se il messaggio di errore è simile a **unresolved external symbol WinMain referenced in function**`function_name`, eseguire il collegamento usando **/SUBSYSTEM:CONSOLE** invece di **/SUBSYSTEM:WINDOWS**. Per altre informazioni su questa impostazione e per istruzioni su come impostare questa proprietà in Visual Studio, vedere [/SUBSYSTEM (Specify Subsystem)](../../build/reference/subsystem-specify-subsystem.md).  
  
-   **Vengono usate opzioni del compilatore diverse per l'inline delle funzioni in file di origine diversi.** L'uso delle funzioni inline definite nei file cpp e la combinazione di opzioni del compilatore per l'inline delle funzioni in file di origine diversi può causare l'errore LNK2019. Per altre informazioni, vedere [Function Inlining Problems](../../error-messages/tool-errors/function-inlining-problems.md).  
  
-   **Vengono usate variabili automatiche al di fuori dell'ambito.** Le variabili automatiche (ambito funzione) possono essere usate solo nell'ambito di tale funzione. Queste variabili non possono essere dichiarate come `extern` e usate in altri file di origine. Per un esempio, vedere [Automatic (Function Scope) Variables](../../error-messages/tool-errors/automatic-function-scope-variables.md).  
  
-   **Vengono chiamate funzioni intrinseche o vengono passati tipi di argomento alle funzioni intrinseche non supportati nell'architettura di destinazione.** Se ad esempio si usa un elemento AVX2 intrinseco, ma non si specifica l'opzione del compilatore [/ARCH:AVX2](../../build/reference/arch-x86.md) , il compilatore presuppone che l'elemento intrinseco sia una funzione esterna. Anziché generare un'istruzione inline, il compilatore genera una chiamata a un simbolo esterno con lo stesso nome dell'elemento intrinseco. Quando il linker prova a cercare la definizione di questa funzione mancante, viene generato l'errore LNK2019. Verificare di usare solo elementi intrinseci e tipi supportati dall'architettura di destinazione.  
  
-   **Viene combinato codice che utilizza wchar native\_t con codice che non.** Le operazioni di conformità del linguaggio C++ eseguite in Visual C++ 2005 hanno reso `wchar_t` un tipo nativo per impostazione predefinita. È necessario usare l'opzione del compilatore [/Zc:wchar_t-](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per generare codice compatibile con i file oggetto e di libreria compilati con le versioni precedenti di Visual C++. Se non tutti i file sono stati compilati usando le stesse **/Zc:wchar\_t** impostazioni, tipo di riferimenti non possono essere risolti in tipi compatibili. Verificare che i tipi `wchar_t` in tutti i file oggetto e di libreria siano compatibili aggiornando i tipi usati o usando impostazioni di **/Zc:wchar_t** coerenti durante la compilazione.  
  
## <a name="diagnosis-tools"></a>Strumenti di diagnosi    
  
Può essere difficile stabilire il motivo per cui il linker non riesce trovare una definizione di un simbolo specifico. Spesso il problema è che non sono state incluse il codice che contiene la definizione di compilazione o compilazione creato diverse opzioni decorati nomi per i simboli esterni. Sono disponibili diversi strumenti e opzioni che consentono di diagnosticare un errore LNK2019.  
  
-   L'opzione del linker [/VERBOSE](../../build/reference/verbose-print-progress-messages.md) consente di determinare i file a cui il linker fa riferimento. Ciò consente di verificare se il file che contiene la definizione del simbolo è incluso nella compilazione.  
  
-   Le opzioni [/EXPORTS](../../build/reference/dash-exports.md) e [/SYMBOLS](../../build/reference/symbols.md) dell'utilità DUMPBIN consentono di individuare quali simboli sono definiti nel file dll e nei file oggetto o di libreria. Verificare che i nomi decorati esportati corrispondano ai nomi esportati cercati dal linker.  
  
-   L'utilità UNDNAME consente di visualizzare il simbolo esterno non decorato equivalente di un nome decorato.  
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
  
A meno che non `i` e `g` sono definiti in uno dei file inclusi nella compilazione, il linker genera l'errore LNK2019. È possibile correggere gli errori includendo il file del codice sorgente che contiene le definizioni come parte della compilazione. In alternativa, è possibile passare i file con estensione obj o LIB che contengono le definizioni per il linker.  
  
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
  
Nell'esempio seguente utilizza la DLL dell'esempio precedente e genera l'errore LNK2019 perché i tipi unsigned short * e WCHAR\* non sono uguali.  
  
```cpp  
// LNK2019h.cpp  
// compile by using: cl /EHsc LNK2019h LNK2019g.lib  
// LNK2019 expected  
__declspec(dllimport) void func(unsigned short*);  
  
int main() {  
   func(0);  
}  
```  
  
 Per correggere l'errore, modificare `unsigned short` a `wchar_t` o `WCHAR`, oppure compilare LNK2019g.cpp usando **/Zc:wchar_t-**.  
  
## <a name="additional-resources"></a>Risorse aggiuntive  
  
Per ulteriori informazioni sulle possibili cause e soluzioni per l'errore LNK2001, vedere la domanda Stack Overflow [che cos'è un errore di simbolo esterno non definito non risolto riferimento e come si risolve?](http://stackoverflow.com/q/12573816/2002113).  


