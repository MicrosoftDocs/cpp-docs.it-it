---
title: Errore LNK2019 degli strumenti del linker | Documenti di Microsoft
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
translationtype: Machine Translation
ms.sourcegitcommit: 6cad5222fb0d97594d5b13b5cf8903eb2934ee88
ms.openlocfilehash: 86b43f2688b6e1dbfb39dfec681ca9adafd2c093
ms.lasthandoff: 02/24/2017

---
# <a name="linker-tools-error-lnk2019"></a>Errore degli strumenti del linker LNK2019
Riferimento al simbolo esterno 'simbolo' non risolto nella funzione 'funzione'  
  
 Il linker non è riuscito a trovare una definizione per il simbolo esterno "`symbol`" usato nella funzione "`function`".  
  
 Questo errore può essere causato da molti problemi. Questo argomento consente di identificare la causa e di trovare una soluzione.  
  
 Oggetto *simbolo* è il nome viene utilizzato per una funzione o variabile globale. Un *simbolo esterno* è il nome utilizzato per fare riferimento a un simbolo è definito in un file di origine o un oggetto diverso. Il linker deve *risolvere*, oppure la definizione per il simbolo esterno per ogni funzione o una variabile globale utilizzato da ogni file compilato quando è collegato in un'applicazione o DLL. Se il linker non riesce a trovare una definizione corrispondente per un simbolo esterno in uno dei file collegati, viene generato l'errore LNK2019.  
  
 Questo errore può verificarsi se il file oggetto o una libreria contenente la definizione di un simbolo non è incluso nella compilazione. Può inoltre verificarsi se il linker cerca il nome del simbolo non corrisponde al nome del simbolo nel file di libreria o un oggetto che lo definisce. Questa situazione può verificarsi se il nome in codice di chiamata è errato, utilizza diverso, viene utilizzata una convenzione di chiamata diversa o specifica parametri diversi.  
  
 Codice che usa il collegamento C++ Usa [la decorazione dei nomi](../../error-messages/tool-errors/name-decoration.md), noto anche come *alterazione dei nomi*, per codificare le informazioni aggiuntive su una variabile o tipo e la convenzione di chiamata nel nome del simbolo della funzione. Il *nome decorato* è il nome cercato dal linker per risolvere i simboli esterni. Dato che le informazioni sul tipo diventano parte del nome decorato del simbolo, l'errore LNK2019 può verificarsi se la dichiarazione del simbolo esterno in cui viene utilizzato non corrisponde alla dichiarazione del simbolo in cui è definito. Per individuare la causa dell'errore, il messaggio di errore Mostra sia il "nome descrittivo," il nome utilizzato nel codice sorgente e il nome decorato (tra parentesi) per il simbolo esterno non risolto. Non è necessario conoscere le modalità convertire il nome decorato per poter eseguire il confronto con altri nomi decorati.  
  
 **Problemi comuni**  
  
 Di seguito sono riportati alcuni problemi comuni che causano l'errore LNK2019:  
  
-   **Il file oggetto o una raccolta che contiene la definizione del simbolo non è collegato.** In Visual Studio, verificare che il file di origine che contiene la definizione viene compilato e collegato come parte del progetto. Nella riga di comando, verificare che il file di origine che contiene la definizione viene compilato e che il file dell'oggetto risultante è incluso nell'elenco dei file da collegare.  
  
-   **La dichiarazione del simbolo non è stata digitata lo stesso della definizione del simbolo.** Verificare l'ortografia corretta e uso delle maiuscole è utilizzato nella dichiarazione e la definizione e nel punto in cui il simbolo viene utilizzato o denominato.  
  
-   **Viene utilizzata una funzione ma il tipo o il numero dei parametri non corrisponde alla definizione di funzione.** La dichiarazione della funzione deve corrispondere alla definizione. Verificare che la chiamata di funzione corrisponda alla dichiarazione e che la dichiarazione corrisponda alla definizione. Il codice che richiama le funzioni modello deve contenere anche le dichiarazioni delle funzioni modello corrispondenti che includono gli stessi parametri modello della definizione. Per un esempio di una mancata corrispondenza dichiarazione di modello, vedere l'esempio LNK2019e.cpp nella sezione esempi.  
  
-   **Una funzione o una variabile viene dichiarata ma non definito.** Questo significa in genere esista una dichiarazione in un file di intestazione, ma nessuna definizione corrispondente viene implementato. Per le funzioni membro o i membri di dati statici, l'implementazione deve includere il selettore di ambito di classe. Per un esempio, vedere [mancante corpo della funzione o variabile](../../error-messages/tool-errors/missing-function-body-or-variable.md).  
  
-   **La convenzione di chiamata è diversa tra la dichiarazione di funzione e la definizione di funzione.** Convenzioni di chiamata ([cdecl](../../cpp/cdecl.md), [stdcall](../../cpp/stdcall.md), [fastcall](../../cpp/fastcall.md), o [vectorcall](../../cpp/vectorcall.md)) sono codificate come parte del nome decorato. Verificare che la convenzione di chiamata sia la stessa.  
  
-   **Un simbolo viene definito in un file C, ma è dichiarato senza l'uso di extern "C" in un file C++.** I simboli definiti in un file che viene compilato come C hanno nomi decorati diversi rispetto ai simboli dichiarati in un file C++, a meno che non si utilizza un [extern "C"](../../cpp/using-extern-to-specify-linkage.md) modificatore. Verificare che la dichiarazione corrisponda al collegamento di compilazione per ogni simbolo.  
  
     Analogamente, se si definisce un simbolo in un file di C++ che verrà usato da un programma C, usare `extern "C"` nella definizione.  
  
-   **Un simbolo è definito come static e quindi si fa riferimento all'esterno del file.** In C++, diversamente da C, [costanti globali](../../error-messages/tool-errors/global-constants-in-cpp.md) hanno `static` collegamento. Per evitare questa limitazione, è possibile includere le inizializzazioni `const` in un file di intestazione e includere l'intestazione nei file cpp o è possibile rendere la variabile non costante e usare un riferimento costante per accedervi.  
  
-   **Un membro statico di una classe non è definito.** Un membro statico di una classe deve avere una definizione univoca, altrimenti violerà la regola della definizione unica. Un membro statico di una classe che non può essere definito inline deve essere definito in un unico file di origine usando il nome completo. Se non viene definito in alcun modo, il linker genera l'errore LNK2019.  
  
-   **Una dipendenza di compilazione viene definita solo come dipendenza di progetto nella soluzione.** Nelle versioni precedenti di [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)] questo livello di dipendenza è sufficiente. Tuttavia, a partire da Visual Studio 2010, [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)] richiede un [riferimento da progetto a progetto](/visualstudio/ide/managing-references-in-a-project). Se il progetto non contiene un riferimento da progetto a progetto, è possibile che venga visualizzato questo errore del linker. Aggiungere un riferimento da progetto a progetto per risolvere il problema.  
  
-   **Un'applicazione console viene compilata usando le impostazioni di un'applicazione Windows**. Se il messaggio di errore è simile a **unresolved external symbol WinMain referenced in function**`function_name`, eseguire il collegamento usando **/SUBSYSTEM:CONSOLE** invece di **/SUBSYSTEM:WINDOWS**. Per ulteriori informazioni su questa impostazione e per istruzioni su come impostare questa proprietà in Visual Studio, vedere [/SUBSYSTEM (specifica il sottosistema)](../../build/reference/subsystem-specify-subsystem.md).  
  
-   **Utilizzare le opzioni del compilatore diverse per l'inline delle funzioni nei file di origine diversa.** L'uso delle funzioni inline definite nei file cpp e la combinazione di opzioni del compilatore per l'inline delle funzioni in file di origine diversi può causare l'errore LNK2019. Per ulteriori informazioni, vedere [problemi di inline di funzioni](../../error-messages/tool-errors/function-inlining-problems.md).  
  
-   **Utilizzare le variabili automatiche all'esterno all'ambito.** Le variabili automatiche (ambito funzione) possono essere usate solo nell'ambito di tale funzione. Queste variabili non possono essere dichiarate come `extern` e usate in altri file di origine. Per un esempio, vedere [variabili automatiche (ambito funzione)](../../error-messages/tool-errors/automatic-function-scope-variables.md).  
  
-   **Vengono chiamate funzioni intrinseche o passa tipi di argomento alle funzioni intrinseche non supportati nell'architettura di destinazione.** Ad esempio, se si utilizza un elemento AVX2 intrinseco, ma non si specifica il [/arch: avx2](../../build/reference/arch-x86.md) l'opzione del compilatore, il compilatore presuppone che la funzione intrinseca è una funzione esterna. Anziché generare un'istruzione inline, il compilatore genera una chiamata a un simbolo esterno con lo stesso nome dell'elemento intrinseco. Quando il linker prova a cercare la definizione di questa funzione mancante, viene generato l'errore LNK2019. Verificare di usare solo elementi intrinseci e tipi supportati dall'architettura di destinazione.  
  
-   **Viene combinato codice che usa wchar_t nativo con codice che non.** Le operazioni di conformità del linguaggio C++ eseguite in Visual C++ 2005 hanno reso `wchar_t` un tipo nativo per impostazione predefinita. È necessario utilizzare il [/Zc:wchar_t-](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md) l'opzione del compilatore per generare codice compatibile con i file di libreria e oggetto compilati con le versioni precedenti di Visual C++. Se non tutti i file sono stati compilati usando le stesse impostazioni di **/Zc:wchar_t** , i riferimenti ai tipi non possono essere risolti in tipi compatibili. Verificare che i tipi `wchar_t` in tutti i file oggetto e di libreria siano compatibili aggiornando i tipi usati o usando impostazioni di **/Zc:wchar_t** coerenti durante la compilazione.  
  
 Per altre informazioni sulle possibili cause e soluzioni per l'errore LNK2019, vedere la domanda di Stack Overflow relativa agli [errori di simbolo esterno non risolti o con riferimento non definito e su come risolverli](http://stackoverflow.com/q/12573816/2002113).  
  
 **Strumenti di diagnosi**  
  
 Può essere difficile stabilire il motivo per cui il linker non riesce trovare una definizione di un simbolo specifico. Spesso il problema deriva dal fatto di non avere incluso il codice nella compilazione oppure viene generato perché le opzioni di compilazione hanno creato nomi decorati diversi per i simboli esterni. Sono disponibili diversi strumenti e opzioni che consentono di diagnosticare un errore LNK2019.  
  
-   Il [/Verbose](../../build/reference/verbose-print-progress-messages.md) l'opzione del linker consente di determinare i file a cui il linker fa riferimento. Ciò consente di verificare se il file che contiene la definizione del simbolo è incluso nella compilazione.  
  
-   Il [/EXPORTS](../../build/reference/dash-exports.md) e [/simboli](../../build/reference/symbols.md) opzioni dell'utilità DUMPBIN consentono di individuare quali simboli sono definiti nei file con estensione dll e oggetto o di libreria. Verificare che i nomi decorati esportati corrispondano ai nomi esportati cercati dal linker.  
  
-   L'utilità UNDNAME consente di visualizzare il simbolo esterno non decorato equivalente di un nome decorato.  
  
 **Esempi**  
  
 Di seguito sono riportati alcuni esempi di codice che causano un errore LNK2019 insieme alle informazioni su come correggere l'errore.  
  
 **Un simbolo viene dichiarato ma non definito**  
  
 L'esempio seguente genera l'errore LNK2019 perché un simbolo esterno viene dichiarato ma non definito :  
  
```cpp  
// LNK2019.cpp  
// Compile by using: cl /EHsc LNK2019.cpp  
// LNK2019 expected  
extern char B[100];   // B is not available to the linker  
int main() {  
   B[0] = ' ';   // LNK2019  
}  
```  
  
 Di seguito è riportato un altro esempio:  
  
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
  
 Se `i` e `g` non sono definiti in uno dei file inclusi nella compilazione, il linker genera l'errore LNK2019. È possibile correggere gli errori includendo il file del codice sorgente che contiene le definizioni come parte della compilazione. In alternativa, è possibile passare al linker i file obj o lib che contengono le definizioni.  
  
 **Un membro dati statici viene dichiarato ma non definito**  
  
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
  
 **I parametri della dichiarazione non corrispondono alla definizione**  
  
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
  
 **Definizioni di tipo wchar_t incoerenti**  
  
 L'esempio seguente crea una DLL contenente un'esportazione che usa `WCHAR`, che viene risolta in `wchar_t`.  
  
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
  
 Per risolvere questo errore, modificare `unsigned short` a `wchar_t` o `WCHAR`, oppure compilare LNK2019g. cpp utilizzando **/Zc:wchar_t-**.
