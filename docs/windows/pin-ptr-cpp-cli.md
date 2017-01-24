---
title: "pin_ptr (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "pin_ptr_cpp"
  - "stdcli::language::pin_ptr"
  - "pin_ptr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pinning pointers"
  - "pin_ptr keyword [C++]"
ms.assetid: 6c2e6c73-4ec2-4dce-8e1f-ccf3a9f9d0aa
caps.latest.revision: 28
caps.handback.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# pin_ptr (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dichiara un *puntatore di blocco*, utilizzato solo con il Common Language Runtime.  
  
## Tutti i runtime  
 \(Non esistono note per questa funzionalità del linguaggio che si applichino a tutti i runtime\).  
  
## Windows Runtime  
 \(Questa funzionalità del linguaggio non è supportata nel runtime di Windows.\)  
  
## Common Language Runtime  
 Un *puntatore di blocco* è un puntatore interno che impedisce lo spostamento dell'oggetto puntato nell'heap del garbage collection.  Ovvero, il valore di un puntatore di blocco non viene modificato dal Common Language Runtime.  Ciò si rivela necessario quando si passa l'indirizzo di una classe gestita a una funzione non gestita in modo che l'indirizzo non cambierà in modo imprevisto durante la risoluzione della chiamata della funzione non gestita.  
  
### Sintassi  
  
```cpp  
[cli::]pin_ptr<cv_qualifier type> var = &initializer;  
```  
  
### Parametri  
 *cv\_qualifier*  
 Qualificatori `const` o `volatile`.  Per impostazione predefinita, un puntatore di blocco è `volatile`.  È ridondante ma non un errore dichiarare un puntatore di blocco `volatile`.  
  
 *type*  
 Tipo di `initializer`.  
  
 *var*  
 Il nome della variabile `pin_ptr`.  
  
 *initializer*  
 Un membro di un tipo di riferimento, di un elemento di un array gestito o di un qualsiasi altro oggetto che è possibile assegnare ad un puntatore nativo.  
  
### Osservazioni  
 Un `pin_ptr` rappresenta un superset della funzionalità di un puntatore nativo.  Pertanto, qualsiasi cosa che possa essere assegnata ad un puntatore nativo può anche essere assegnata ad un `pin_ptr`.  Un puntatore interno può eseguire lo stesso gruppo di operazioni dei puntatori nativi, incluso il confronto e l'aritmetica dei puntatori.  
  
 Un oggetto o un sotto\-oggetto di una classe gestita può essere bloccato, in questo caso il Common Language Runtime non lo sposterà durante il Garbage Collection.  L'uso principale di questo è passare un puntatore ai dati gestiti come parametro effettivo di una chiamata a funzione non gestita.  Durante un ciclo di raccolta, il runtime verificherà i metadati creati per il puntatore di blocco e non sposterà l'elemento a cui indica.  
  
 Bloccando un oggetto si bloccano anche i suoi campi valore; ovvero campi primitivi o di tipo valore.  Tuttavia, i campi dichiarati dal gestore di traccia \(`%`\) non vengono bloccati.  
  
 Bloccare un sotto\-oggetto definito in un oggetto gestito ha l'effetto di bloccare l'intero oggetto.  
  
 Se il puntatore di blocco viene riassegnato per puntare ad un nuovo valore, l'istanza precedente a cui puntava non verrà più considerata bloccata.  
  
 Un oggetto viene bloccato solo mentre un `pin_ptr` punta ad esso.  L'oggetto non è più bloccato quando il suo puntatore di blocco esce dall'ambito o viene impostato su [nullptr](../windows/nullptr-cpp-component-extensions.md).  Dopo che `pin_ptr` esce dall'ambito, l'oggetto che era bloccato può essere spostato nell'heap dal Garbage Collector.  Qualsiasi puntatore nativo che punta ancora all'oggetto non verrà aggiornato e dereferenziare uno di essi può generare un'eccezione irreversibile.  
  
 Se nessuno dei puntatori di blocco punta all'oggetto \(tutti i puntatori di blocco sono stati disconnesso dall'ambito, sono stati riassegnati per puntare altri oggetti o sono stati assegnati a [nullptr](../windows/nullptr-cpp-component-extensions.md)\), viene garantito che l'oggetto non è bloccato.  
  
 Un puntatore di blocco può puntare ad un handle di riferimento, ad un gestore di tipo valore o di tipo boxed, ad un membro di tipo gestito o ad un elemento di un array gestito.  Non può puntare ad un tipo di riferimento.  
  
 Prendere l'indirizzo di un `pin_ptr` che punta ad un oggetto nativo causa un comportamento indefinito.  
  
 I puntatori di blocco possono essere dichiarati solo come variabili locali non statiche nello stack.  
  
 I puntatori di blocco non possono essere utilizzati come:  
  
-   parametri di funzione  
  
-   il tipo restituito di una funzione.  
  
-   un membro di una classe  
  
-   il tipo di destinazione di un cast.  
  
 `pin_ptr` è nello spazio dei nomi `cli`.  Per ulteriori informazioni, vedere [Platform, default, and cli Namespaces](../windows/platform-default-and-cli-namespaces-cpp-component-extensions.md).  
  
 Per ulteriori informazioni sui puntatori interni, vedere [interior\_ptr \(C\+\+\/CLI\)](../windows/interior-ptr-cpp-cli.md).  
  
 Per ulteriori informazioni sui puntatori di blocco, vedere [How to: Pin Pointers and Arrays](../windows/how-to-pin-pointers-and-arrays.md) e [How to: Declare Pinning Pointers and Value Types](../windows/how-to-declare-pinning-pointers-and-value-types.md).  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 **Esempio**  
  
 L'esempio seguente utilizza `pin_ptr` per vincolare la posizione del primo elemento di un array.  
  
```  
// pin_ptr_1.cpp  
// compile with: /clr   
using namespace System;  
#define SIZE 10  
  
#pragma unmanaged  
// native function that initializes an array  
void native_function(int* p) {  
   for(int i = 0 ; i < 10 ; i++)  
    p[i] = i;  
}  
#pragma managed  
  
public ref class A {  
private:  
   array<int>^ arr;   // CLR integer array  
  
public:  
   A() {  
      arr = gcnew array<int>(SIZE);  
   }  
  
   void load() {  
   pin_ptr<int> p = &arr[0];   // pin pointer to first element in arr  
   int* np = p;   // pointer to the first element in arr  
   native_function(np);   // pass pointer to native function  
   }  
  
   int sum() {  
      int total = 0;  
      for (int i = 0 ; i < SIZE ; i++)  
         total += arr[i];  
      return total;  
   }  
};  
  
int main() {  
   A^ a = gcnew A;  
   a->load();   // initialize managed array using the native function  
   Console::WriteLine(a->sum());  
}  
```  
  
 **Output**  
  
  **45** **Esempio**  
  
 L'esempio seguente mostra che un puntatore interno può essere convertito in un puntatore di blocco e che il tipo restituito dall'operatore address\-of \(`&`\) è un puntatore interno quando l'operando è nell'heap gestito.  
  
```  
// pin_ptr_2.cpp  
// compile with: /clr  
using namespace System;  
  
ref struct G {  
   G() : i(1) {}  
   int i;  
};  
  
ref struct H {  
   H() : j(2) {}  
   int j;  
};  
  
int main() {  
   G ^ g = gcnew G;   // g is a whole reference object pointer  
   H ^ h = gcnew H;  
  
   interior_ptr<int> l = &(g->i);   // l is interior pointer  
  
   pin_ptr<int> k = &(h->j);   // k is a pinning interior pointer  
  
   k = l;   // ok  
   Console::WriteLine(*k);  
};  
```  
  
 **Output**  
  
 **1** **Esempio**  
  
 L'esempio seguente mostra che un puntatore di blocco può essere castato ad un altro tipo.  
  
```  
// pin_ptr_3.cpp  
// compile with: /clr  
using namespace System;  
  
ref class ManagedType {  
public:  
   int i;  
};  
  
int main() {  
   ManagedType ^mt = gcnew ManagedType;  
   pin_ptr< int > pt = &mt->i;  
   *pt = 8;  
   Console::WriteLine(mt->i);  
  
   char *pc = ( char* ) pt;  
   *pc = 255;  
   Console::WriteLine(mt->i);  
}  
```  
  
 **Output**  
  
 **8**   
**255**