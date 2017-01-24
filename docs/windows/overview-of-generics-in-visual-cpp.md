---
title: "Overview of Generics in Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "generics [C++], about generics"
  - "default initializers [C++]"
  - "type parameters [C++]"
  - "constructed types"
  - "type arguments [C++]"
  - "constructed types, open [C++]"
  - "open constructed types [C++]"
  - "constructed types, closed [C++]"
ms.assetid: 21f10637-0fce-4916-b925-6c86a126d3aa
caps.latest.revision: 21
caps.handback.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Overview of Generics in Visual C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I generics sono tipi parametrizzati supportati dal Common Language Runtime.  Un tipo parametrizzato è un tipo definito con un parametro di tipo sconosciuto specificato quando il generico viene utilizzato.  
  
## Perché generics?  
 C\+\+ supporta i modelli e sia i modelli che i generics supportano i tipi parametrizzati per creare classi di raccolta tipizzata.  Tuttavia, i modelli forniscono la parametrizzazione in fase di compilazione.  Non è possibile fare riferimento a un assembly contenente una definizione di modello e creare nuove specializzazioni del modello.  Dopo aver compilato, un modello specializzato appare come ogni altro modello o classe.  Al contrario, i generics sono generati in MSIL come tipo con parametri noto al runtime per essere un tipo con parametri; il codice sorgente che fa riferimento a un assembly che contiene un tipo generico può creare specializzazioni del tipo generico.  Per ulteriori informazioni sul confronto dei modelli e i generics di Visual C\+\+, vedere [Generics and Templates \(Visual C\+\+\)](../windows/generics-and-templates-visual-cpp.md).  
  
## Tipi e funzioni generici  
 I tipi classe, visto che sono tipi gestiti, possono essere generic.  Un esempio di ciò potrebbe essere una classe `List`.  Il tipo di oggetto nell'elenco sarebbe il parametro di tipo.  Se è necessaria una classe `List` per molti tipi diversi di oggetti, prima di generics è possibile utilizzare una `List` che accetta **System::Object** come tipo di elemento.  Ciò consentirebbe a qualsiasi oggetto \(inclusi oggetti del tipo errato\) di essere utilizzato nell'elenco.  Tale elenco viene chiamato una classe collection non tipizzata.  Idealmente, è possibile controllare il tipo a runtime e generare un'eccezione.  In alternativa, è possibile utilizzare un modello, che perderebbe la sua qualità generic una volta compilato in un assembly.  I consumer dell'assembly non possono creare le proprie specializzazioni del modello.  I generics consentono di creare le classi di raccolta tipizzata, indicano `List<int>` \(letto come "elenco di int"\) e `List<double>` \("elenco di double"\) che genererebbero un errore in fase di compilazione se si tenta di inserire un tipo che la raccolta non può accettare nella raccolta tipizzata.  Inoltre, questi tipi rimangono generici dopo la compilazione.  
  
 Una descrizione della sintassi delle classi generiche è reperibile in un nuovo spazio dei nomi [Generic Classes \(C\+\+\/CLI\)](../windows/generic-classes-cpp-cli.md)`.` , <xref:System.Collections.Generic>, introduce un set di tipi di raccolta con parametri inclusi <xref:System.Collections.Generic.Dictionary%602>, <xref:System.Collections.Generic.List%601> e <xref:System.Collections.Generic.LinkedList%601>.  Per ulteriori informazioni, vedere [Generics nella libreria di classi .NET Framework](../Topic/Generics%20in%20the%20.NET%20Framework%20Class%20Library%20\(C%23%20Programming%20Guide\).md).  
  
 Sia l'istanza che le funzioni statiche del membro di classe, i delegati e le funzioni globali possono essere generic.  Le funzioni generiche possono essere necessarie se i parametri della funzione sono di un tipo sconosciuto o se la funzione stessa deve utilizzare i tipi generici.  In molti casi in cui **System::Object** potrebbe essere stato utilizzato nel passato come un parametro per un tipo di oggetto sconosciuto, un parametro di tipo generico potrebbe venire utilizzato al suo posto, permettendo un codice indipendente dai tipi.  Qualsiasi tentativo di passare un tipo per cui la funzione non è stata progettata viene contrassegnato come un errore in fase di compilazione.  Utilizzando **System::Object** come parametro di funzione, il passaggio involontario di un oggetto per cui la funzione non è destinata non viene rilevato e è necessario eseguire il cast del tipo di oggetto sconosciuto a un tipo specifico nel corpo della funzione e rappresenta la possibilità di un evento InvalidCastException.  Con un generic, il codice che tenta di passare un oggetto alla funzione può provocare un conflitto di tipo pertanto il corpo della funzione è garantito che abbia il tipo corretto.  
  
 Gli stessi vantaggi si riferiscono alle classi di raccolta costruite sui generics.  Le classi di raccolta in passato usavano **System::Object** per archiviare gli elementi in una raccolta.  L'inserimento di oggetti di un tipo per cui la raccolta non è stata progettata non veniva contrassegnato in fase di compilazione e spesso nemmeno quando gli oggetti venivano inseriti.  In genere, un oggetto verrebbe castato a qualche altro tipo quando viene acceduto nella raccolta.  Solo quando il cast non è riesce, il tipo imprevisto verrebbe rilevato.  Generics risolve questo problema in fase di compilazione rilevando qualsiasi codice che inserisce un tipo che non corrisponde \(o converte in modo implicito\) il parametro di tipo della raccolta generica.  
  
 Per una descrizione della sintassi, vedere [Generic Functions \(C\+\+\/CLI\)](../windows/generic-functions-cpp-cli.md).  
  
## Terminologia utilizzata con i generics  
  
##### Parametri di tipo  
 Una dichiarazione generica contiene uno o più tipi non sconosciuti, noti come *parametri di tipo*.  I parametri di tipo hanno un nome che rappresenta il tipo nel corpo della dichiarazione generica.  Il parametro di tipo è utilizzato come un tipo nel corpo della dichiarazione generica.  La dichiarazione generica per ListT\<T\> contiene il parametro di tipo T.  
  
##### Argomenti di tipo  
 L'*argomento di tipo* è il tipo effettivo utilizzato al posto del parametro di tipo quando il generico viene specializzato per tipo o tipi specifici.  Ad esempio, `int` è l'argomento di tipo in `List<int>`.  I tipi di valore e i tipi di handle sono gli unici tipi consentiti come argomento di tipo generico.  
  
##### Tipo costruito  
 Un tipo costruito da un tipo generico è considerato come un *tipo costruito*.  Un tipo non completamente specificato, come `List<T>` è un *tipo costruito aperto*; un tipo completamente specificato, come `List<double>,` è un *tipo costruito chiuso* o *tipo specializzato*.  Tipi costruiti aperti possono essere utilizzati nella definizione di altri tipi o metodi generici e potrebbero non essere specificati del tutto fino a che il generic di inclusione non è specificato.  Ad esempio, il seguente è un utilizzo di un tipo costruito aperto come una classe base per un generic:  
  
 `// generics_overview.cpp`  
  
 `// compile with: /clr /c`  
  
 `generic <typename T>`  
  
 `ref class List {};`  
  
 `generic <typename T>`  
  
 `ref class Queue : public List<T> {};`  
  
##### Vincolo  
 Un vincolo è una restrizione sui tipi che possono essere utilizzati come parametro di tipo.  Ad esempio, una classe generica data può accettare solo le classi che ereditano da una determinata classe o implementano un'interfaccia specificata.  Per ulteriori informazioni, vedere [Constraints on Generic Type Parameters \(C\+\+\/CLI\)](../windows/constraints-on-generic-type-parameters-cpp-cli.md).  
  
## Tipi di riferimento e tipi di valore  
 I tipi handles e i tipi valore possono essere utilizzati come argomenti di tipo.  Nella definizione generica, in cui qualsiasi tipo può essere utilizzato, la sintassi è quella dei tipi di riferimento.  Ad esempio, l'operatore **\-\>** viene utilizzata per accedere ai membri del tipo del parametro di tipo se il tipo verrà utilizzato è un tipo di riferimento o un tipo di valore.  Quando un tipo di valore viene utilizzato come argomento di tipo, il runtime genera codice che utilizza i tipi di valore direttamente senza eseguire il boxing dei tipi di valore.  
  
 Quando si utilizza un tipo di riferimento come argomento di tipo generico, utilizzare la sintassi di handle.  Quando si utilizza un tipo di valore come argomento di tipo generico, utilizzare direttamente il nome del tipo.  
  
 `// generics_overview_2.cpp`  
  
 `// compile with: /clr`  
  
 `generic <typename T>`  
  
 `ref class GenericType {};`  
  
 `ref class ReferenceType {};`  
  
 `value struct ValueType {};`  
  
 `int main() {`  
  
 `GenericType<ReferenceType^> x;`  
  
 `GenericType<ValueType> y;`  
  
 `}`  
  
## Parametri di tipo  
 Parametri di tipo in una classe generica vengono considerati come altri identificatori.  Tuttavia, poiché il tipo non è noto, esistono restrizioni sul relativo utilizzo.  Ad esempio, non è possibile utilizzare i membri e i metodi della classe parametro di tipo a meno che il parametro di tipo è noto per supportare questi membri.  Ovvero, per accedere ad un membro con il parametro di tipo, è necessario aggiungere il tipo contenente il membro all'elenco dei vincoli del parametro di tipo.  
  
 `// generics_overview_3.cpp`  
  
 `// compile with: /clr`  
  
```  
interface class I {  
   void f1();  
   void f2();  
};  
  
ref struct R : public I {  
   virtual void f1() {}  
   virtual void f2() {}   
   virtual void f3() {}   
};  
  
generic <typename T>  
where T : I  
void f(T t) {  
   t->f1();  
   t->f2();  
   safe_cast<R^>(t)->f3();  
}  
  
int main() {  
   f(gcnew R());  
}  
```  
  
 Queste restrizioni si applicano anche agli operatori.  Un parametro di tipo generico non vincolato non può utilizzare gli operatori `==` e `!=` per confrontare due istanze del parametro di tipo, nel caso il tipo non supporti questi operatori.  Questi controlli sono necessari per i generics, ma non per i modelli poiché i generics possono essere specializzati in fase di esecuzione da qualsiasi classe che soddisfi i vincoli, quando non è più possibile verificare l'utilizzo di membri non validi.  
  
 Un'istanza predefinita del parametro di tipo può essere creata utilizzando l'operatore `()`.  Di seguito è riportato un esempio.  
  
 `T t = T();`  
  
 dove `T` è un parametro di tipo in una classe o in una definizione di metodo generico, inizializza la variabile al suo valore predefinito.  Se `T` è una classe di riferimento sarà un puntatore null; se `T` è una classe di valore, l'oggetto viene inizializzata a zero.  Questo è chiamato *inizializzatore predefinito*.  
  
## Vedere anche  
 [Generics](../windows/generics-cpp-component-extensions.md)