---
title: "friend (C++) | Microsoft Docs"
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
  - "Friend"
  - "friend_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi di tipo friend"
  - "friend (parola chiave) [C++]"
  - "accesso a membri, funzioni di tipo friend"
ms.assetid: 8fe9ee55-d56f-40cd-9075-d9fb1375aff4
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# friend (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In alcune circostanze è preferibile concedere l'accesso a livello di membro alle funzioni non membro di una classe oppure a tutte le funzioni in una classe separata.  Solo l'implementatore della classe può dichiarare i rispettivi elementi friend.  Una funzione o una classe non può dichiarare se stessa come elemento friend di una classe.  In una dichiarazione di classe usare la parola chiave `friend` e il nome di una funzione non membro o un'altra classe per concedere l'accesso ai membri privati e protetti della classe.  
  
## Sintassi  
  
```  
  
        friend class-name;  
friend function-declarator;  
```  
  
## Dichiarazioni Friend  
 Se si dichiara una funzione Friend che non è stata dichiarata precedentemente, tale funzione viene esportata nell'ambito nonclass contenitore.  
  
 Le funzioni dichiarate in una dichiarazione Friend vengono considerate come se fossero state dichiarate usando la parola chiave `extern`.  \(Per altre informazioni su `extern`, vedere [Identificatori della classe di archiviazione statica](http://msdn.microsoft.com/it-it/3ba9289a-a412-4a17-b319-ceb2c087df48)\).  
  
 Sebbene le funzioni con ambito globale possono essere dichiarate come Friend prima dei relativi prototipi, le funzioni membro non possono essere dichiarate come Friend prima che venga visualizzata la relativa dichiarazione di classe completa.  Nel codice seguente è illustrato il motivo dell'errore:  
  
```  
class ForwardDeclared;   // Class name is known.  
class HasFriends  
{  
    friend int ForwardDeclared::IsAFriend();   // C2039 error expected  
};  
```  
  
 L'esempio precedente immette il nome della classe `ForwardDeclared` nell'ambito, ma la dichiarazione completa \(in particolare, la parte che dichiara la funzione `IsAFriend`\) non è nota.  Di conseguenza, la dichiarazione `friend` nella classe `HasFriends` genera un errore.  
  
 Per dichiarare due classi che rappresentano elementi Friend l'uno dell'altro, la seconda classe per intero deve essere specificata come Friend della prima classe.  Il motivo di questa restrizione è che il compilatore dispone di informazioni sufficienti per dichiarare le singole funzioni Friend solo nel punto in cui la seconda classe viene dichiarata.  
  
> [!NOTE]
>  Sebbene la seconda classe per intero debba essere Friend della prima classe, è possibile selezionare le funzioni nella prima classe che saranno Friend della seconda classe.  
  
## funzioni di tipo friend  
 Una funzione `friend` è una funzione che non è un membro di una classe ma ha accesso ai membri privati e protetti della classe.  Le funzioni friend non sono considerate membri della classe; sono funzioni esterne normali a cui vengono concessi privilegi di accesso speciali.  Gli elementi friend non sono nell'ambito della classe e non vengono chiamati usando gli operatori di selezione dei membri \(**.** e –**\>**\), a meno che non siano membri di un'altra classe.  Una funzione `friend` viene dichiarata dalla classe che le sta concedendo accesso.  La dichiarazione `friend` può essere inserita in un punto qualsiasi della dichiarazione di classe.  Non è influenzata dalle parole chiave di controllo di accesso.  
  
 Nell'esempio seguente viene illustrata una classe `Point` e una funzione friend `ChangePrivate`.  La funzione `friend` ha accesso al membro dati privato dell'oggetto `Point` ricevuto come parametro.  
  
```  
// friend_functions.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
class Point  
{  
    friend void ChangePrivate( Point & );  
public:  
    Point( void ) : m_i(0) {}  
    void PrintPrivate( void ){cout << m_i << endl; }  
  
private:  
    int m_i;  
};  
  
void ChangePrivate ( Point &i ) { i.m_i++; }  
  
int main()  
{  
   Point sPoint;  
   sPoint.PrintPrivate();  
   ChangePrivate(sPoint);  
   sPoint.PrintPrivate();  
// Output: 0  
           1  
}  
```  
  
## Membri di classe come elementi friend  
 Le funzioni membro di classe possono essere dichiarate come friend in altre classi.  Si consideri l'esempio seguente:  
  
```  
// classes_as_friends1.cpp  
// compile with: /c  
class B;  
  
class A {  
public:  
   int Func1( B& b );  
  
private:  
   int Func2( B& b );  
};  
  
class B {  
private:  
   int _b;  
  
   // A::Func1 is a friend function to class B  
   // so A::Func1 has access to all members of B  
   friend int A::Func1( B& );  
};  
  
int A::Func1( B& b ) { return b._b; }   // OK  
int A::Func2( B& b ) { return b._b; }   // C2248  
```  
  
 Nell'esempio precedente, solo alla funzione `A::Func1( B& )` viene concesso l'accesso Friend alla classe `B`.  Di conseguenza, l'accesso al membro privato `_b` è corretto in `Func1` di classe `A` ma non in `Func2`.  
  
 Una classe `friend` è una classe in cui tutte le funzioni membro sono funzioni Friend di una classe, ovvero, le cui funzioni membro hanno accesso agli altri membri privati e protetti della classe.  Si supponga che la dichiarazione `friend` nella classe `B` sia stata:  
  
```  
friend class A;  
```  
  
 In tal caso, a tutte le funzioni membro nella classe `A` sarebbe stato concesso l'accesso Friend alla classe `B`.  Il codice seguente è un esempio di una classe Friend:  
  
```  
// classes_as_friends2.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
class YourClass {  
friend class YourOtherClass;  // Declare a friend class  
public:  
   YourClass() : topSecret(0){}  
   void printMember() { cout << topSecret << endl; }  
private:  
   int topSecret;  
};  
  
class YourOtherClass {  
public:  
   void change( YourClass& yc, int x ){yc.topSecret = x;}  
};  
  
int main() {  
   YourClass yc1;  
   YourOtherClass yoc1;  
   yc1.printMember();  
   yoc1.change( yc1, 5 );  
   yc1.printMember();  
}  
```  
  
 L'accesso Friend non è reciproco a meno che non venga specificato in modo esplicito come tale.  Nell'esempio precedente, le funzioni membro di `YourClass` non possono accedere ai membri privati di `YourOtherClass`.  
  
 Un tipo gestito non può avere nessuna funzione Friend, classe Friend o interfaccia Friend.  
  
 L'accesso Friend non è ereditato, pertanto classi derivate da `YourOtherClass` non possono accedere a membri privati di `YourClass`.  L'accesso Friend non è transitivo, pertanto classi che rappresentano elementi friend di `YourOtherClass` non possono accedere a membri privati di `YourClass`.  
  
 Nella figura seguente vengono illustrate quattro dichiarazioni di classe: `Base`, `Derived`, `aFriend` e `anotherFriend`.  Solo la classe `aFriend` ha accesso diretto ai membri privati di `Base` \(e a tutti i membri che `Base` possa aver ereditato\).  
  
 ![Implicazioni della relazione Friend](../cpp/media/vc38v41.png "vc38V41")  
Implicazioni di relazioni friend  
  
## Definizioni di elementi friend inline  
 Le funzioni friend possono essere definite all'interno delle dichiarazioni di classe.  Queste funzioni sono funzioni inline e, analogamente alle funzioni membro inline, si comportano come se fossero definite immediatamente dopo la visualizzazione di tutti i membri di classe ma prima della chiusura dell'ambito di classe \(ovvero la fine della dichiarazione di classe\).  
  
 Le funzioni friend definite all'interno delle dichiarazioni di classe non sono considerate come esistenti nell'ambito della classe che le contiene, ma si trovano in ambito file.  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)