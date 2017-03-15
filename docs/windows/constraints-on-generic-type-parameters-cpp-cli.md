---
title: "Constraints on Generic Type Parameters (C++/CLI) | Microsoft Docs"
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
  - "where"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "where keyword [C++]"
  - "constraints, C++"
ms.assetid: eb828cc9-684f-48a3-a898-b327700c0a63
caps.latest.revision: 25
caps.handback.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Constraints on Generic Type Parameters (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nel tipo o nelle dichiarazioni di metodo generiche, è possibile qualificare un parametro di tipo con vincoli.  Un vincolo è un requisito che i tipi utilizzati come argomenti di tipo devono soddisfare.  Ad esempio, un vincolo può essere l'argomento di tipo che deve implementare una determinata interfaccia o ereditare da una classe specifica.  
  
 I vincoli sono facoltativi; non specificare un vincolo su un parametro è equivalente a vincolare il parametro a <xref:System.Object>.  
  
## Sintassi  
  
```  
  
where type-parameter: constraint list  
```  
  
#### Parametri  
 *parametro di tipo*.  
 Uno dei parametri di tipo, da vincolare.  
  
 *elenco di vincoli*  
 *elenco di vincoli* è un elenco delimitato da virgole di specifiche del vincolo.  L'elenco può includere le interfacce da implementare dal parametro di tipo.  
  
 L'elenco può includere anche una classe.  Perché l'argomento di tipo soddisfi un vincolo della classe base, deve essere la stessa classe del vincolo o derivare dal vincolo.  
  
 È inoltre possibile specificare `gcnew()` per indicare che l'argomento di tipo deve disporre di un costruttore pubblico senza parametri; o `ref class` per indicare che l'argomento di tipo deve essere un tipo di riferimento, incluso ogni tipo delegato, classe, interfaccia o array; o `value class` per indicare che l'argomento di tipo deve essere un tipo di valore.  Può essere specificato ogni tipo valore tranne Nullable\<T\>.  
  
 È inoltre possibile specificare un parametro generico come vincolo.  L'argomento di tipo fornito per il tipo che si sta vincolando deve corrispondere o derivare dal tipo del vincolo.  Questo viene chiamato un vincolo di tipo naked.  
  
## Note  
 La clausola di vincolo è costituita da **where** seguito da un parametro di tipo, dai due punti \(**:**\) e dal vincolo, che specifica la natura della restrizione sul parametro di tipo.  **where** è una parola chiave sensibile al contesto; vedere [Parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md) per ulteriori informazioni.  Separare più clausole **where** con uno spazio.  
  
 I vincoli vengono applicati ai parametri di tipo per mettere limitazioni sui tipi che possono essere utilizzati come argomenti di un tipo o metodo generico.  
  
 Vincoli di classe e di interfaccia specificano che i tipi di argomento devono corrispondere o ereditare da una classe specificata o implementare un'interfaccia specificata.  
  
 L'applicazione dei vincoli ad un tipo o metodo generico permette al codice in quel tipo o metodo di approfittare delle funzionalità note dei tipi vincolati.  Ad esempio si può dichiarare una classe generica come quella che il parametro di tipo implementa l'interfaccia **IComparable\<T\>**:  
  
```  
// generics_constraints_1.cpp  
// compile with: /c /clr  
using namespace System;  
generic <typename T>  
where T : IComparable<T>  
ref class List {};  
```  
  
 Questo vincolo richiede che un argomento di tipo utilizzato per  `T` implementi `IComparable<T>` in fase di compilazione.  Consente inoltre che vengano chiamati metodi di interfaccia, come **CompareTo**.  Non è necessario alcun cast su un'istanza del parametro di tipo per chiamare i metodi di interfaccia.  
  
 I metodi statici nella classe di argomenti di tipo non possono essere chiamati tramite il parametro di tipo; essi possono essere chiamati solo tramite l'effettivo tipo denominato.  
  
 Un vincolo non può essere un tipo di valore, inclusi i tipi incorporati come `int` o **double**.  Poiché i tipi di valore non possono avere classi derivate, solo una classe potrebbe soddisfare il vincolo.  In tal caso, il generic può essere riscritto con il parametro di tipo sostituito dal tipo di valore specifico.  
  
 I vincoli sono richiesti in alcuni casi poiché il compilatore non consente l'utilizzo di metodi o altre funzionalità di un tipo sconosciuto a meno che i vincoli implichino che il tipo sconosciuto supporti i metodi o le interfacce.  
  
 Più vincoli per lo stesso parametro di tipo possono essere specificati in un elenco delimitato da virgole  
  
```  
// generics_constraints_2.cpp  
// compile with: /c /clr  
using namespace System;  
using namespace System::Collections::Generic;  
generic <typename T>  
where T : List<T>, IComparable<T>  
ref class List {};  
```  
  
 Con più parametri di tipo, utilizzare una clausola **where** per ogni parametro di tipo.  Di seguito è riportato un esempio.  
  
```  
// generics_constraints_3.cpp  
// compile with: /c /clr  
using namespace System;  
using namespace System::Collections::Generic;  
  
generic <typename K, typename V>  
   where K: IComparable<K>  
   where V: IComparable<K>  
ref class Dictionary {};  
```  
  
 Riassumendo, utilizzare vincoli nel codice in base alle regole seguenti:  
  
-   Se sono elencati più vincoli, i vincoli possono essere visualizzati in qualsiasi ordine.  
  
-   I vincoli possono anche essere tipi di classe come classi base astratte.  Tuttavia, i vincoli non possono essere tipi di valore o classi sealed.  
  
-   I vincoli non possono essere essi stessi parametri di tipo, ma possono includere parametri di tipo in un tipo costruito aperto.  Di seguito è riportato un esempio.  
  
    ```  
    // generics_constraints_4.cpp  
    // compile with: /c /clr  
    generic <typename T>  
    ref class G1 {};  
  
    generic <typename Type1, typename Type2>  
    where Type1 : G1<Type2>   // OK, G1 takes one type parameter  
    ref class G2{};  
    ```  
  
## Esempio  
 L'esempio seguente mostra l'utilizzo dei vincoli per chiamare metodi di istanza sui parametri di tipo.  
  
```  
// generics_constraints_5.cpp  
// compile with: /clr  
using namespace System;  
  
interface class IAge {  
   int Age();  
};  
  
ref class MyClass {  
public:  
   generic <class ItemType> where ItemType : IAge   
   bool isSenior(ItemType item) {  
      // Because of the constraint,  
      // the Age method can be called on ItemType.  
      if (item->Age() >= 65)   
         return true;  
      else  
         return false;  
   }  
};  
  
ref class Senior : IAge {  
public:  
   virtual int Age() {  
      return 70;  
   }  
};  
  
ref class Adult: IAge {  
public:  
   virtual int Age() {  
      return 30;  
   }  
};  
  
int main() {  
   MyClass^ ageGuess = gcnew MyClass();  
   Adult^ parent = gcnew Adult();  
   Senior^ grandfather = gcnew Senior();  
  
   if (ageGuess->isSenior<Adult^>(parent))  
      Console::WriteLine("\"parent\" is a senior");  
   else  
      Console::WriteLine("\"parent\" is not a senior");  
  
   if (ageGuess->isSenior<Senior^>(grandfather))  
      Console::WriteLine("\"grandfather\" is a senior");  
   else  
      Console::WriteLine("\"grandfather\" is not a senior");  
}  
```  
  
  **"padre" non è un anziano**  
**"nonno" è un anziano**   
## Esempio  
 Quando un parametro di tipo generico viene utilizzato come vincolo, viene chiamato un vincolo di tipo naked.  I vincoli di tipo naked sono utili quando una funzione membro con il relativo parametro di tipo necessita di vincolare quel parametro al parametro di tipo del tipo contenitore.  
  
 Nell'esempio seguente, T è un vincolo di tipo naked nel contesto del metodo Add.  
  
 I vincoli di tipo naked possono anche essere utilizzati in definizioni di classi generiche.  I vincoli di tipo naked risultano meno utili se utilizzati in classi generiche poiché il compilatore non è in grado di dedurre alcuna informazione sul vincolo di tipo naked, tranne il fatto che deriva da <xref:System.Object>.  Utilizzare vincoli di tipo naked su classi generiche negli scenari nei quali si desidera imporre una relazione di ereditarietà tra due parametri di tipo.  
  
```  
// generics_constraints_6.cpp  
// compile with: /clr /c  
generic <class T>  
ref struct List {  
   generic <class U>  
   where U : T  
   void Add(List<U> items)  {}  
};  
  
generic <class A, class B, class C>  
where A : C  
ref struct SampleClass {};  
```  
  
## Vedere anche  
 [Generics](../windows/generics-cpp-component-extensions.md)