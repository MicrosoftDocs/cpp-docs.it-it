---
title: Compilatore (livello 3) avviso C4996 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4996
dev_langs:
- C++
helpviewer_keywords:
- C4996
ms.assetid: 926c7cc2-921d-43ed-ae75-634f560dd317
caps.latest.revision: 34
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
ms.sourcegitcommit: 3f69f0c3176d2fbe19e11ce08c071691a72d858d
ms.openlocfilehash: bf7b4ccd6309f08098416f4bdb6777b8eafd2e7f
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-warning-level-3-c4996"></a>Avviso C4996 avviso (livello 3) del compilatore
Il compilatore ha rilevato una dichiarazione deprecata.  
  
 Questo avviso o errore ha diversi significati possibili.  
  
 `C4996`si verifica quando il compilatore rileva una funzione o una variabile contrassegnata come [deprecata](../../cpp/deprecated-cpp.md). Alcune funzioni, le funzioni membro, le funzioni modello e le variabili globali nelle librerie di Visual Studio, sono contrassegnate come deprecate. Queste funzioni possono avere un nome preferito diverso, possono essere non sicure o avere varianti più sicure oppure possono essere obsolete. Il messaggio di errore potrebbe includere una sostituzione suggerita per la funzione o la variabile globale deprecata. È possibile disattivare l'avviso con il [avviso](../../preprocessor/warning.md) pragma o **/wd4996** opzione della riga di comando. È anche possibile usare le macro del preprocessore per disattivare alcune classi di avvisi di deprecazione.  
  
 **Il nome POSIX per questo elemento è deprecato. Utilizzare invece il nome conforme allo standard ISO C e C++:** nuovo_nome**. Vedere la Guida online per i dettagli.**  
  
 Alcune funzioni POSIX in CRT sono state rinominate per conformarle alle regole C99 e C++03 per i nomi delle funzioni globali definite dall'implementazione. Nella maggior parte dei casi, il carattere di sottolineatura iniziale è stato aggiunto al nome della funzione POSIX per creare un nome conforme allo standard. Il compilatore genera un avviso di deprecazione per i nomi di funzione originali e suggerisce un nome preferito. Solo i nomi originali sono deprecati, non le funzioni. Per disattivare gli avvisi di deprecazione per queste funzioni, definire la macro del preprocessore **_CRT_NONSTDC_NO_WARNINGS**. È possibile definirla nella riga di comando includendo l'opzione `/D_CRT_NONSTDC_NO_WARNINGS`. Per definire questa macro in Visual Studio, aprire la finestra di dialogo **Pagine delle proprietà** per il progetto. Espandere **Proprietà di configurazione**, **C/C++**, **Preprocessore**. In **Definizioni preprocessore**aggiungere `_CRT_NONSTDC_NO_WARNINGS`. Scegliere **OK** per salvare e ricompilare il progetto. Per definire la macro solo in specifici file di origine, aggiungere la riga `#define _CRT_NONSTDC_NO_WARNINGS` prima delle altre linee che includono un file di intestazione.  
  
 **Questa funzione o variabile potrebbe non essere sicura. Si consiglia di utilizzare** safe_version **invece. Per disabilitare la deprecazione, usare _CRT_SECURE_NO_WARNINGS.  Vedere la Guida online per i dettagli.**  
  
 Alcune funzioni CRT e della libreria Standard C++ e funzioni globali sono state deprecate a favore di nuove funzioni più sicure. Il compilatore genera un avviso di deprecazione per queste funzioni e suggerisce la funzione preferita. Per disattivare gli avvisi di deprecazione per queste funzioni in CRT, definire **_CRT_SECURE_NO_WARNINGS**. Per disattivare gli avvisi sulle variabili globali deprecate, definire **_CRT_SECURE_NO_WARNINGS_GLOBALS**. Per ulteriori informazioni su queste funzioni deprecate e funzioni globali, vedere [funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md) e [librerie protette: libreria Standard C++](../../standard-library/safe-libraries-cpp-standard-library.md).  
  
 **Chiamata di funzione con parametri che possono essere sicuri - questa chiamata si basa sul chiamante per verificare che i valori passati siano corretti. Per disabilitare questo avviso, utilizzare -D_SCL_SECURE_NO_WARNINGS. Vedere la documentazione su come usare 'Iteratori' Visual C++**  
  
 Alcune funzioni modello della libreria standard di C++ non controllano la correttezza dei parametri. Questo avviso consente di identificare l'utilizzo di queste funzioni. Per disattivare gli avvisi per queste funzioni, definire **_SCL_SECURE_NO_WARNINGS**. Per altre informazioni, vedere [Iteratori verificati](../../standard-library/checked-iterators.md).  
  
 **Questa funzione o variabile è stata sostituita dalla funzionalità di libreria o sistema operativo più recente. Si consiglia di utilizzare** new_item **invece. Vedere la Guida online per i dettagli.**  
  
 Alcune funzioni e variabili globali della libreria sono deprecate come obsolete. Queste funzioni e variabili potrebbero essere rimosse nelle future versioni della libreria. Il compilatore genera un avviso di deprecazione per questi elementi e suggerisce l'alternativa preferita. Per disattivare gli avvisi di deprecazione per questi elementi, definire **_CRT_OBSOLETE_NO_WARNINGS**. Per altre informazioni, vedere la documentazione per la funzione o la variabile deprecata.  
  
 **Vari messaggi nel codice MFC o ATL**  
  
 L'avviso `C4996` può verificarsi anche se si utilizzano le funzioni MFC o ATL considerate deprecate per motivi di sicurezza. Per eliminare questi avvisi, vedere [_AFX_SECURE_NO_WARNINGS](http://msdn.microsoft.com/Library/97dcfd41-1e56-41d5-bf7e-d240b950134b) e [_ATL_SECURE_NO_WARNINGS](http://msdn.microsoft.com/Library/587d29d8-a75a-44a3-bec8-f724087e5e73).  
  
 **Marshalling di errori nel codice CLR**  
  
 L'avviso `C4996` può verificarsi anche quando si utilizza la libreria di marshalling. In questo caso C4996 rappresenta un errore e non un avviso. Questo errore si verifica quando si utilizza [marshal_as](../../dotnet/marshal-as.md) per la conversione tra due tipi di dati che richiedono un [classe marshal_context](../../dotnet/marshal-context-class.md). Si riceverà anche questo errore quando la libreria del marshalling non supporta una conversione. Per ulteriori informazioni sulla libreria del marshalling, vedere [Overview of Marshaling in C++](../../dotnet/overview-of-marshaling-in-cpp.md).  
  
 **Esempi che generano l'avviso C4996**  
  
 Nel primo esempio l'avviso `C4996` viene generato per la riga su cui è dichiarata la funzione e per la riga su cui è utilizzata.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'avviso C4996.  
  
```cpp  
// C4996.cpp  
// compile with: /W3  
// C4996 warning expected  
#include <stdio.h>  
  
// #pragma warning(disable : 4996)  
void func1(void) {  
   printf_s("\nIn func1");  
}  
  
__declspec(deprecated) void func1(int) {  
   printf_s("\nIn func2");  
}  
  
int main() {  
   func1();  
   func1(1);  
}  
```  
  
## <a name="example"></a>Esempio  
 L'avviso C4996 può verificarsi anche se non si utilizza un iteratore verificato quando si esegue la compilazione con `_ITERATOR_DEBUG_LEVEL` definito (impostato su 1 per impostazione predefinita per le compilazioni in modalità di debug).  Per altre informazioni, vedere [Iteratori verificati](../../standard-library/checked-iterators.md).  
  
 Nell'esempio di codice della libreria Standard C++ seguente genera l'avviso C4996.  
  
```cpp  
// C4996_b.cpp  
// compile with: /EHsc /W3 /c  
#define _ITERATOR_DEBUG_LEVEL 1  
  
#include <algorithm>  
#include <iterator>  
  
using namespace std;  
using namespace stdext;  
  
int main() {  
    int a[] = { 1, 2, 3 };  
    int b[] = { 10, 11, 12 };  
    copy(a, a + 3, b + 1);   // C4996  
    // try the following line instead  
    //   copy(a, a + 3, b);  
    copy(a, a + 3, checked_array_iterator<int *>(b, 3));   // OK  
}  
  
```  
  
## <a name="example"></a>Esempio  
 Nell'esempio di codice della libreria Standard C++ seguente genera l'avviso C4996 come avviso. I commenti sono inline.  
  
```cpp  
#include <algorithm>  
#include <array>  
#include <iostream>  
#include <iterator>  
#include <numeric>  
#include <string>  
#include <vector>  
  
using namespace std;  
  
template <typename C> void print(const string& s, const C& c) {  
    cout << s;  
  
    for (const auto& e : c) {  
        cout << e << " ";  
    }  
  
    cout << endl;  
}  
  
int main()  
{  
    vector<int> v(16);  
    iota(v.begin(), v.end(), 0);  
    print("v: ", v);  
  
    // OK: vector::iterator is checked in debug mode  
    // (i.e. an overrun will trigger a debug assertion)  
    vector<int> v2(16);  
    transform(v.begin(), v.end(), v2.begin(), [](int n) { return n * 2; });  
    print("v2: ", v2);  
  
    // OK: back_insert_iterator is marked as checked in debug mode  
    // (i.e. an overrun is impossible)  
    vector<int> v3;  
    transform(v.begin(), v.end(), back_inserter(v3), [](int n) { return n * 3; });  
    print("v3: ", v3);  
  
    // OK: array::iterator is checked in debug mode  
    // (i.e. an overrun will trigger a debug assertion)  
    array<int, 16> a4;  
    transform(v.begin(), v.end(), a4.begin(), [](int n) { return n * 4; });  
    print("a4: ", a4);  
  
    // OK: Raw arrays are checked in debug mode  
    // (i.e. an overrun will trigger a debug assertion)  
    // NOTE: This applies only when raw arrays are given to C++ Standard Library algorithms!  
    int a5[16];  
    transform(v.begin(), v.end(), a5, [](int n) { return n * 5; });  
    print("a5: ", a5);  
  
    // WARNING C4996: Pointers cannot be checked in debug mode  
    // (i.e. an overrun will trigger undefined behavior)  
    int a6[16];  
    int * p6 = a6;  
    transform(v.begin(), v.end(), p6, [](int n) { return n * 6; });  
    print("a6: ", a6);  
  
    // OK: stdext::checked_array_iterator is checked in debug mode  
    // (i.e. an overrun will trigger a debug assertion)  
    int a7[16];  
    int * p7 = a7;  
    transform(v.begin(), v.end(), stdext::make_checked_array_iterator(p7, 16), [](int n) { return n * 7; });  
    print("a7: ", a7);  
  
    // WARNING SILENCED: stdext::unchecked_array_iterator is marked as checked in debug mode  
    // (i.e. it performs no checking, so an overrun will trigger undefined behavior)  
    int a8[16];  
    int * p8 = a8;  
    transform(v.begin(), v.end(), stdext::make_unchecked_array_iterator(p8), [](int n) { return n * 8; });  
    print("a8: ", a8);  
}  
  
```  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'avviso C4996 perché la libreria di marshalling richiede un contesto per eseguire la conversione da `System::String` a `const char *`.  
  
```cpp  
// C4996_Marshal.cpp  
// compile with: /clr   
// C4996 expected  
#include <stdlib.h>  
#include <string.h>  
#include <msclr\marshal.h>  
  
using namespace System;  
using namespace msclr::interop;  
  
int main() {  
   String^ message = gcnew String("Test String to Marshal");  
   const char* result;  
   result = marshal_as<const char*>( message );  
   return 0;  
}  
```
