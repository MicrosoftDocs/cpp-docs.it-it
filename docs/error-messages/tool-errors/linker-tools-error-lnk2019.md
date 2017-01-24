---
title: "Errore degli strumenti del linker LNK2019 | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2019"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_check_commonlanguageruntime_version"
  - "LNK2019"
  - "nochkclr.obj"
ms.assetid: 4392be92-195c-4eb2-bd4d-49cfac3ca291
caps.latest.revision: 39
caps.handback.revision: 37
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK2019
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Riferimento al simbolo esterno 'simbolo' non risolto nella funzione 'funzione'  
  
 Il linker non è riuscito a trovare una definizione per il simbolo esterno "`symbol`" usato nella funzione "`function`". Questo errore può essere causato da molti problemi. Questo argomento consente di identificare la causa e di trovare una soluzione.  
  
 Un *simbolo esterno* è il nome dichiarato usato nel codice sorgente per fare riferimento a un elemento definito in un altro file oggetto o di libreria, ad esempio una funzione esterna o una variabile globale. Il linker è responsabile della risoluzione di tutti i riferimenti al simbolo esterno in ogni file oggetto quando vengono collegati in un'applicazione o DLL. Se il linker non riesce a trovare una definizione corrispondente per un simbolo esterno in uno dei file collegati, viene generato l'errore LNK2019. Questo errore può verificarsi se il file di codice sorgente o di libreria contenente la definizione del simbolo non viene incluso nella compilazione. Può anche verificarsi se il nome cercato dal linker non corrisponde al nome del simbolo nel file oggetto o di libreria che lo definisce.  
  
 Il codice che usa il collegamento C\+\+ usa la [Decorazione dei nomi](../../error-messages/tool-errors/name-decoration.md), nota anche come *alterazione dei nomi*, per codificare le informazioni aggiuntive su un tipo di simbolo e chiamando la convenzione insieme al nome del simbolo. Il *nome decorato* è il nome cercato dal linker per risolvere i simboli esterni. Poiché diventa parte del nome decorato del simbolo, se il tipo di dichiarazione del riferimento al simbolo non corrisponde al tipo di dichiarazione della definizione del simbolo, può verificarsi l'errore LNK2019. Il messaggio di errore mostra sia il simbolo esterno che il relativo nome decorato per consentire di trovare la causa dell'errore.  
  
 **Problemi comuni**  
  
 Di seguito sono riportati alcuni problemi comuni che causano l'errore LNK2019:  
  
-   **La dichiarazione del simbolo non è stata digitata nello stesso modo in cui è stata digitata la definizione del simbolo.** Verificare che i valori siano stati digitati correttamente.  
  
-   **Viene usata una funzione, ma il tipo o il numero dei parametri non corrisponde alla definizione della funzione.** La dichiarazione della funzione deve corrispondere alla definizione. Il codice che richiama le funzioni modello deve contenere anche le dichiarazioni delle funzioni modello corrispondenti che includono gli stessi parametri modello della definizione. Verificare che la chiamata di funzione corrisponda alla dichiarazione e che la dichiarazione corrisponda alla definizione.  
  
-   **Una funzione o una variabile viene dichiarata ma non definita.** In genere tale situazione indica che esiste una dichiarazione in un file di intestazione, ma non è implementata alcuna definizione. Per le funzioni membro o i membri di dati statici, l'implementazione deve includere il selettore di ambito di classe. Per un esempio, vedere [Codice di funzione o variabile mancante](../../error-messages/tool-errors/missing-function-body-or-variable.md).  
  
-   **La convenzione di chiamata è diversa tra la dichiarazione di funzione e la definizione di funzione.** Le convenzioni di chiamata \([\_\_cdecl](../../cpp/cdecl.md), [\_\_stdcall](../../cpp/stdcall.md), [\_\_fastcall](../../cpp/fastcall.md), or [\_\_vectorcall](../../cpp/vectorcall.md)\) sono codificate come parte del nome decorato. Verificare che la convenzione di chiamata sia la stessa.  
  
-   **Un simbolo viene definito in un file C, ma viene dichiarato senza l'uso di extern "C" in un file C\+\+.** I simboli definiti in un file compilato come C hanno nomi decorati diversi rispetto ai simboli dichiarati in un file C\+\+, a meno che non venga usato il modificatore [extern "C"](../../cpp/using-extern-to-specify-linkage.md). Verificare che la dichiarazione corrisponda al collegamento di compilazione per ogni simbolo.  
  
     Analogamente, se si definisce un simbolo in un file di C\+\+ che verrà usato da un programma C, usare `extern "C"` nella definizione.  
  
-   **Un simbolo viene definito come static e successivamente vi viene fatto riferimento all'esterno del file.** In C\+\+, diversamente da C, le [costanti globali](../../error-messages/tool-errors/global-constants-in-cpp.md) contengono un collegamento `static`. Per evitare questa limitazione, è possibile includere le inizializzazioni `const` in un file di intestazione e includere l'intestazione nei file cpp o è possibile rendere la variabile non costante e usare un riferimento costante per accedervi.  
  
-   **Un membro statico di una classe non è definito.** Un membro statico di una classe deve avere una definizione univoca, altrimenti violerà la regola della definizione unica. Un membro statico di una classe che non può essere definito inline deve essere definito in un unico file di origine usando il nome completo. Se non viene definito in alcun modo, il linker genera l'errore LNK2019.  
  
-   **Una dipendenza di compilazione viene definita solo come dipendenza di progetto nella soluzione.** Nelle versioni precedenti di [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)] questo livello di dipendenza è sufficiente. Tuttavia, a partire da Visual Studio 2010, [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)] richiede un [riferimento da progetto a progetto](../Topic/Managing%20references%20in%20a%20project.md). Se il progetto non contiene un riferimento da progetto a progetto, è possibile che venga visualizzato questo errore del linker. Aggiungere un riferimento da progetto a progetto per risolvere il problema.  
  
-   **Un'applicazione console viene compilata usando le impostazioni di un'applicazione Windows**. Se il messaggio di errore è simile a **unresolved external symbol WinMain referenced in function** `function_name`, eseguire il collegamento usando **\/SUBSYSTEM:CONSOLE** invece di **\/SUBSYSTEM:WINDOWS**. Per altre informazioni su questa impostazione e per istruzioni su come impostare questa proprietà in Visual Studio, vedere [\/SUBSYSTEM \(Specifica il sottosistema\)](../../build/reference/subsystem-specify-subsystem.md).  
  
-   **Vengono usate opzioni del compilatore diverse per l'inline delle funzioni in file di origine diversi.** L'uso delle funzioni inline definite nei file cpp e la combinazione di opzioni del compilatore per l'inline delle funzioni in file di origine diversi può causare l'errore LNK2019. Per altre informazioni, vedere [Problemi di inline di funzioni](../../error-messages/tool-errors/function-inlining-problems.md).  
  
-   **Vengono usate variabili automatiche al di fuori dell'ambito.** Le variabili automatiche \(ambito funzione\) possono essere usate solo nell'ambito di tale funzione. Queste variabili non possono essere dichiarate come `extern` e usate in altri file di origine. Per un esempio, vedere [Variabili automatiche \(ambito funzione\)](../../error-messages/tool-errors/automatic-function-scope-variables.md).  
  
-   **Vengono chiamate funzioni intrinseche o vengono passati tipi di argomento alle funzioni intrinseche non supportati nell'architettura di destinazione.** Se ad esempio si usa un elemento AVX2 intrinseco, ma non si specifica l'opzione del compilatore [\/ARCH:AVX2](../../build/reference/arch-x86.md), il compilatore presuppone che l'elemento intrinseco sia una funzione esterna. Anziché generare un'istruzione inline, il compilatore genera una chiamata a un simbolo esterno con lo stesso nome dell'elemento intrinseco. Quando il linker prova a cercare la definizione di questa funzione mancante, viene generato l'errore LNK2019. Verificare di usare solo elementi intrinseci e tipi supportati dall'architettura di destinazione.  
  
-   **Viene combinato codice che usa wchar\_t nativo con codice che non lo usa.** Le operazioni di conformità del linguaggio C\+\+ eseguite in Visual C\+\+ 2005 hanno reso `wchar_t` un tipo nativo per impostazione predefinita. È necessario usare l'opzione del compilatore [\/Zc:wchar\_t\-](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per generare codice compatibile con i file oggetto e di libreria compilati con le versioni precedenti di Visual C\+\+. Se non tutti i file sono stati compilati usando le stesse impostazioni di **\/Zc:wchar\_t**, i riferimenti ai tipi non possono essere risolti in tipi compatibili. Verificare che i tipi `wchar_t` in tutti i file oggetto e di libreria siano compatibili aggiornando i tipi usati o usando impostazioni di **\/Zc:wchar\_t** coerenti durante la compilazione.  
  
 Per altre informazioni sulle possibili cause e soluzioni per l'errore LNK2019, vedere la domanda di Stack Overflow relativa agli [errori di simbolo esterno non risolti o con riferimento non definito e su come risolverli](http://stackoverflow.com/q/12573816/2002113).  
  
 **Strumenti di diagnosi**  
  
 Può essere difficile stabilire il motivo per cui il linker non riesce trovare una definizione di un simbolo specifico. Spesso il problema deriva dal fatto di non avere incluso il codice nella compilazione oppure viene generato perché le opzioni di compilazione hanno creato nomi decorati diversi per i simboli esterni. Sono disponibili diversi strumenti e opzioni che consentono di diagnosticare un errore LNK2019.  
  
-   L'opzione del linker [\/VERBOSE](../../build/reference/verbose-print-progress-messages.md) consente di determinare i file a cui il linker fa riferimento. Ciò consente di verificare se il file che contiene la definizione del simbolo è incluso nella compilazione.  
  
-   Le opzioni [\/EXPORTS](../../build/reference/dash-exports.md) e [\/SYMBOLS](../../build/reference/symbols.md) dell'utilità DUMPBIN consentono di individuare quali simboli sono definiti nel file dll e nei file oggetto o di libreria. Verificare che i nomi decorati esportati corrispondano ai nomi esportati cercati dal linker.  
  
-   L'utilità UNDNAME consente di visualizzare il simbolo esterno non decorato equivalente di un nome decorato.  
  
 **Esempi**  
  
 Di seguito sono riportati alcuni esempi di codice che causano un errore LNK2019 insieme alle informazioni su come correggere l'errore.  
  
 **Un simbolo viene dichiarato ma non definito**  
  
 L'esempio seguente genera l'errore LNK2019 perché un simbolo esterno viene dichiarato ma non definito :  
  
```cpp  
// LNK2019.cpp // Compile by using: cl /EHsc LNK2019.cpp // LNK2019 expected extern char B[100];   // B is not available to the linker int main() { B[0] = ' ';   // LNK2019 }  
```  
  
 Di seguito è riportato un altro esempio:  
  
```cpp  
// LNK2019c.cpp // Compile by using: cl /EHsc LNK2019c.cpp // LNK2019 expected extern int i; extern void g(); void f() { i++; g(); } int main() {}  
```  
  
 Se `i` e `g` non sono definiti in uno dei file inclusi nella compilazione, il linker genera l'errore LNK2019. È possibile correggere gli errori includendo il file del codice sorgente che contiene le definizioni come parte della compilazione. In alternativa, è possibile passare al linker i file obj o lib che contengono le definizioni.  
  
 **Un membro dati statici viene dichiarato ma non definito**  
  
 L'errore LNK2019 può verificarsi anche quando un membro dati statici viene dichiarato ma non definito. L'esempio seguente genera l'errore LNK2019 e mostra come risolverlo.  
  
```cpp  
// LNK2019b.cpp // Compile by using: cl /EHsc LNK2019b.cpp // LNK2019 expected struct C { static int s; }; // Uncomment the following line to fix the error. // int C::s; int main() { C c; C::s = 1; }  
```  
  
 **I parametri della dichiarazione non corrispondono alla definizione**  
  
 Il codice che richiama le funzioni modello deve contenere le dichiarazioni delle funzioni modello corrispondenti. Le dichiarazioni devono includere gli stessi parametri modello della definizione. L'esempio seguente genera l'errore LNK2019 per un operatore definito dall'utente e mostra come risolverlo.  
  
```cpp  
// LNK2019e.cpp // compile by using: cl /EHsc LNK2019e.cpp // LNK2019 expected #include <iostream> using namespace std; template<class T> class Test { // The operator<< declaration does not match the definition below: friend ostream& operator<<(ostream&, Test&); // To fix, replace the line above with the following: // template<typename T> friend ostream& operator<<(ostream&, Test<T>&); }; template<typename T> ostream& operator<<(ostream& os, Test<T>& tt) { return os; } int main() { Test<int> t; cout << "Test: " << t << endl;   // LNK2019 unresolved external }  
```  
  
 **Definizioni di tipo wchar\_t incoerenti**  
  
 L'esempio seguente crea una DLL contenente un'esportazione che usa `WCHAR`, che viene risolta in `wchar_t`.  
  
```cpp  
// LNK2019g.cpp // compile with: cl /EHsc /LD LNK2019g.cpp #include "windows.h" // WCHAR resolves to wchar_t __declspec(dllexport) void func(WCHAR*) {}  
```  
  
 L'esempio seguente usa la DLL dell'esempio precedente e genera l'errore LNK2019 perché i tipi unsigned short \* e WCHAR \* non sono uguali.  
  
```cpp  
// LNK2019h.cpp // compile by using: cl /EHsc LNK2019h LNK2019g.lib // LNK2019 expected __declspec(dllimport) void func(unsigned short*); int main() { func(0); }  
```  
  
 Per risolvere questo errore, modificare `unsigned short` in `wchar_t` o `WCHAR` oppure compilare LNK2019g.cpp usando **\/Zc:wchar\_t\-**.