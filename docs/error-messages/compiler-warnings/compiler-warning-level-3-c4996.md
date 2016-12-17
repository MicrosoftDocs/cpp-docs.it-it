---
title: "Avviso del compilatore (livello 3) C4996 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4996"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4996"
ms.assetid: 926c7cc2-921d-43ed-ae75-634f560dd317
caps.latest.revision: 34
caps.handback.revision: 34
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4996
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il compilatore ha rilevato una dichiarazione deprecata.  
  
 Questo avviso o errore ha diversi significati possibili.  
  
 `C4996` si verifica quando il compilatore rileva una funzione o una variabile contrassegnata come [deprecata](../../cpp/deprecated-cpp.md). Alcune funzioni, le funzioni membro, le funzioni modello e le variabili globali nelle librerie di Visual Studio, sono contrassegnate come deprecate. Queste funzioni possono avere un nome preferito diverso, possono essere non sicure o avere varianti più sicure oppure possono essere obsolete. Il messaggio di errore potrebbe includere una sostituzione suggerita per la funzione o la variabile globale deprecata. È possibile disattivare questo avviso con il pragma [warning](../../preprocessor/warning.md) o l'opzione della riga di comando **\/wd4996**. È anche possibile usare le macro del preprocessore per disattivare alcune classi di avvisi di deprecazione.  
  
 **Il nome POSIX per questo elemento è deprecato. In alternativa, usare il nome conforme ISO C e C\+\+:** new\_name**. Vedere la Guida per i dettagli.**  
  
 Alcune funzioni POSIX in CRT sono state rinominate per conformarle alle regole C99 e C\+\+03 per i nomi delle funzioni globali definite dall'implementazione. Nella maggior parte dei casi, il carattere di sottolineatura iniziale è stato aggiunto al nome della funzione POSIX per creare un nome conforme allo standard. Il compilatore genera un avviso di deprecazione per i nomi di funzione originali e suggerisce un nome preferito. Solo i nomi originali sono deprecati, non le funzioni. Per disattivare gli avvisi di deprecazione per queste funzioni, definire la macro del preprocessore **\_CRT\_NONSTDC\_NO\_WARNINGS**. È possibile definirla nella riga di comando includendo l'opzione  `/D_CRT_NONSTDC_NO_WARNINGS`. Per definire questa macro in Visual Studio, aprire la finestra di dialogo **Pagine delle proprietà** per il progetto. Espandere **Proprietà di configurazione**, **C\/C\+\+**, **Preprocessore**. In **Definizioni preprocessore** aggiungere `_CRT_NONSTDC_NO_WARNINGS`. Scegliere **OK** per salvare e ricompilare il progetto. Per definire la macro solo in specifici file di origine, aggiungere la riga `#define _CRT_NONSTDC_NO_WARNINGS` prima delle altre linee che includono un file di intestazione.  
  
 **Questa funzione o variabile potrebbe non essere sicura. Al suo posto, considerare l'uso di** safe\_version **. Per disabilitare la deprecazione, usare \_CRT\_SECURE\_NO\_WARNINGS.  Vedere la Guida per i dettagli.**  
  
 Alcune funzioni e variabili globali della libreria standard di C\+\+ e CRT sono state deprecate e sostituite con nuove funzioni più sicure. Il compilatore genera un avviso di deprecazione per queste funzioni e suggerisce la funzione preferita. Per disattivare gli avvisi di deprecazione per queste funzioni in CRT, definire **\_CRT\_SECURE\_NO\_WARNINGS**. Per disattivare gli avvisi sulle variabili globali deprecate, definire **\_CRT\_SECURE\_NO\_WARNINGS\_GLOBALS**. Per altre informazioni su queste funzioni e variabili globali deprecate, vedere [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md) e [Librerie protette: libreria standard C\+\+](../../standard-library/safe-libraries-cpp-standard-library.md).  
  
 **Chiamata di funzione con parametri potenzialmente non sicuri: questa chiamata prevede che il chiamante verifichi la correttezza dei valori passati. Per disabilitare questo avviso, utilizzare \-D\_SCL\_SECURE\_NO\_WARNINGS. Vedere la documentazione relativa all'utilizzo degli "iteratori verificati" di Visual C\+\+**  
  
 Alcune funzioni modello della libreria standard di C\+\+ non controllano la correttezza dei parametri. Questo avviso consente di identificare l'utilizzo di queste funzioni. Per disattivare gli avvisi per queste funzioni, definire **\_SCL\_SECURE\_NO\_WARNINGS**. Per altre informazioni, vedere [Iteratori verificati](../../standard-library/checked-iterators.md).  
  
 **Questa funzione o variabile è stata sostituita da una libreria o una funzionalità del sistema operativo più recente. Al suo posto, considerare l'uso di** new\_item**. Vedere la Guida per i dettagli.**  
  
 Alcune funzioni e variabili globali della libreria sono deprecate come obsolete. Queste funzioni e variabili potrebbero essere rimosse nelle future versioni della libreria. Il compilatore genera un avviso di deprecazione per questi elementi e suggerisce l'alternativa preferita. Per disattivare gli avvisi di deprecazione per questi elementi, definire **\_CRT\_OBSOLETE\_NO\_WARNINGS**. Per altre informazioni, vedere la documentazione per la funzione o la variabile deprecata.  
  
 **Vari messaggi nel codice MFC o ATL**  
  
 L'avviso `C4996` può verificarsi anche se si utilizzano le funzioni MFC o ATL considerate deprecate per motivi di sicurezza. Per eliminare questi avvisi, vedere [\_AFX\_SECURE\_NO\_WARNINGS](../Topic/_AFX_SECURE_NO_WARNINGS.md) e [\_ATL\_SECURE\_NO\_WARNINGS](../Topic/_ATL_SECURE_NO_WARNINGS.md).  
  
 **Errori di marshalling nel codice CLR**  
  
 L'avviso `C4996` può verificarsi anche quando si utilizza la libreria di marshalling. In questo caso C4996 rappresenta un errore e non un avviso. Questo errore si verifica quando si usa [marshal\_as](../../dotnet/marshal-as.md) per la conversione tra due tipi di dati che richiedono [Classe marshal\_context](../../dotnet/marshal-context-class.md). Si riceverà anche questo errore quando la libreria del marshalling non supporta una conversione. Per altre informazioni sulla libreria di marshalling, vedere [Panoramica del marshaling in C\+\+](../../dotnet/overview-of-marshaling-in-cpp.md).  
  
 **Esempi che generano l'avviso C4996**  
  
 Nel primo esempio l'avviso `C4996` viene generato per la riga su cui è dichiarata la funzione e per la riga su cui è utilizzata.  
  
## Esempio  
 L'esempio seguente genera l'avviso C4996.  
  
```cpp  
// C4996.cpp // compile with: /W3 // C4996 warning expected #include <stdio.h> // #pragma warning(disable : 4996) void func1(void) { printf_s("\nIn func1"); } __declspec(deprecated) void func1(int) { printf_s("\nIn func2"); } int main() { func1(); func1(1); }  
```  
  
## Esempio  
 L'avviso C4996 può verificarsi anche se non si utilizza un iteratore verificato quando si esegue la compilazione con `_ITERATOR_DEBUG_LEVEL` definito \(impostato su 1 per impostazione predefinita per le compilazioni in modalità di debug\).  Per altre informazioni, vedere [Iteratori verificati](../../standard-library/checked-iterators.md).  
  
 Nell'esempio di codice STL seguente viene generato l'avviso C4996.  
  
```cpp  
// C4996_b.cpp // compile with: /EHsc /W3 /c #define _ITERATOR_DEBUG_LEVEL 1 #include <algorithm> #include <iterator> using namespace std; using namespace stdext; int main() { int a[] = { 1, 2, 3 }; int b[] = { 10, 11, 12 }; copy(a, a + 3, b + 1);   // C4996 // try the following line instead //   copy(a, a + 3, b); copy(a, a + 3, checked_array_iterator<int *>(b, 3));   // OK }  
  
```  
  
## Esempio  
 Nell'esempio di codice STL seguente viene generato l'avviso C4996 come avviso. I commenti sono inline.  
  
```cpp  
#include <algorithm> #include <array> #include <iostream> #include <iterator> #include <numeric> #include <string> #include <vector> using namespace std; template <typename C> void print(const string& s, const C& c) { cout << s; for (const auto& e : c) { cout << e << " "; } cout << endl; } int main() { vector<int> v(16); iota(v.begin(), v.end(), 0); print("v: ", v); // OK: vector::iterator is checked in debug mode // (i.e. an overrun will trigger a debug assertion) vector<int> v2(16); transform(v.begin(), v.end(), v2.begin(), [](int n) { return n * 2; }); print("v2: ", v2); // OK: back_insert_iterator is marked as checked in debug mode // (i.e. an overrun is impossible) vector<int> v3; transform(v.begin(), v.end(), back_inserter(v3), [](int n) { return n * 3; }); print("v3: ", v3); // OK: array::iterator is checked in debug mode // (i.e. an overrun will trigger a debug assertion) array<int, 16> a4; transform(v.begin(), v.end(), a4.begin(), [](int n) { return n * 4; }); print("a4: ", a4); // OK: Raw arrays are checked in debug mode // (i.e. an overrun will trigger a debug assertion) // NOTE: This applies only when raw arrays are given to STL algorithms! int a5[16]; transform(v.begin(), v.end(), a5, [](int n) { return n * 5; }); print("a5: ", a5); // WARNING C4996: Pointers cannot be checked in debug mode // (i.e. an overrun will trigger undefined behavior) int a6[16]; int * p6 = a6; transform(v.begin(), v.end(), p6, [](int n) { return n * 6; }); print("a6: ", a6); // OK: stdext::checked_array_iterator is checked in debug mode // (i.e. an overrun will trigger a debug assertion) int a7[16]; int * p7 = a7; transform(v.begin(), v.end(), stdext::make_checked_array_iterator(p7, 16), [](int n) { return n * 7; }); print("a7: ", a7); // WARNING SILENCED: stdext::unchecked_array_iterator is marked as checked in debug mode // (i.e. it performs no checking, so an overrun will trigger undefined behavior) int a8[16]; int * p8 = a8; transform(v.begin(), v.end(), stdext::make_unchecked_array_iterator(p8), [](int n) { return n * 8; }); print("a8: ", a8); }  
  
```  
  
## Esempio  
 Nell'esempio seguente viene generato l'avviso C4996 perché la libreria di marshalling richiede un contesto per eseguire la conversione da `System::String` a `const char *`.  
  
```cpp  
// C4996_Marshal.cpp // compile with: /clr // C4996 expected #include <stdlib.h> #include <string.h> #include <msclr\marshal.h> using namespace System; using namespace msclr::interop; int main() { String^ message = gcnew String("Test String to Marshal"); const char* result; result = marshal_as<const char*>( message ); return 0; }  
```