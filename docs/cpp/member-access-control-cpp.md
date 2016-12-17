---
title: "Controllo di accesso dei membri | Microsoft Docs"
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
  - "controllo di accesso [C++]"
  - "accesso membri [C++]"
  - "controllo dell'accesso ai membri [C++]"
ms.assetid: 2d596bca-56ad-4277-94e1-ce3db45fa14a
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Controllo di accesso dei membri
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I controlli di accesso permettono di separare l'interfaccia [pubblica](../cpp/public-cpp.md) di una classe dai dettagli di implementazione [privati](../cpp/private-cpp.md) e i membri [protetti](../cpp/protected-cpp.md) che devono essere usati solo dalle classi derivate.  L'identificatore di accesso si applica a tutti i membri dichiarati dopo l'identificatore stesso, fino a quando non viene rilevato l'identificatore di accesso successivo.  
  
```  
class Point  
{  
public:                   
    Point( int, int ) // Declare public constructor.;  
    Point();// Declare public default constructor.  
    int &x( int ); // Declare public accessor.  
    int &y( int ); // Declare public accessor.  
  
private:                 // Declare private state variables.  
    int _x;  
    int _y;  
  
protected:      // Declare protected function for derived classes only.  
    Point ToWindowCoords();  
};  
  
```  
  
 L'accesso predefinito è `private` in una classe e `public` in uno struct o un'unione.  Gli specificatori di accesso in una classe possono essere usati per un numero qualsiasi di volte in qualunque ordine.  L'allocazione di memoria per oggetti di tipo classe è indipendente dall'implementazione, ma ai membri vengono assegnati gli indirizzi di memoria successivamente superiori tra gli identificatori di accesso.  
  
### Controllo dell'accesso ai membri  
  
|Tipo di accesso|Significato|  
|---------------------|-----------------|  
|[private](../cpp/private-cpp.md)|I membri della classe dichiarati come `private` possono essere usati solo dalle funzioni membro e dagli elementi friend \(classi o funzioni\) della classe.|  
|[protected](../cpp/protected-cpp.md)|I membri della classe dichiarati come `protected` possono essere usati dalle funzioni membro e dagli elementi friend \(classi o funzioni\) della classe.  Inoltre, possono essere usati dalle classi derivate dalla classe.|  
|[public](../cpp/public-cpp.md)|I membri della classe dichiarati come **public** possono essere usati da qualsiasi funzione.|  
  
 Il controllo di accesso consente di impedire l'uso di oggetti secondo modalità di uso non previsto.  Questa protezione viene persa quando vengono eseguite conversioni esplicite \(di tipo cast\).  
  
> [!NOTE]
>  Il controllo di accesso è ugualmente applicabile a tutti i nomi: funzioni membro, dati membro, classi annidate ed enumeratori.  
  
## Controllo di accesso nelle classi derivate  
 I due seguenti fattori controllano quali membri di una classe base sono accessibili in una classe derivata; questi stessi fattori controllano anche l'accesso ai membri ereditati presenti nella classe derivata:  
  
-   Se la classe derivata dichiara la classe base mediante l'identificatore di accesso **public** in *class\-head* \(*class\-head* è descritta nella sezione Grammatica di [Definizione dei tipi di classe](http://msdn.microsoft.com/it-it/e8c65425-0f3a-4dca-afc2-418c3b1e57da)\).  
  
-   Quale è l'accesso ai membri presenti nella della classe base.  
  
 La tabella riportata di seguito mostra l'interazione tra questi fattori e come è possibile determinare l'accesso ai membri della classe base.  
  
### Accesso ai membri nella classe base  
  
|private|protected|Public|  
|-------------|---------------|------------|  
|Sempre inaccessibile indipendentemente dall'accesso della derivazione|Privato nella classe derivata se si usa la derivazione privata|Privato nella classe derivata se si usa la derivazione privata|  
||Protetto nella classe derivata se si usa la derivazione protetta|Protetto nella classe derivata se si usa la derivazione protetta|  
||Protetto nella classe derivata se si usa la derivazione pubblica|Pubblico nella classe derivata se si usa la derivazione pubblica|  
  
 Questa condizione è illustrata nell'esempio che segue.  
  
```  
// access_specifiers_for_base_classes.cpp  
class BaseClass  
{  
public:  
    int PublicFunc();    // Declare a public member.  
protected:  
    int ProtectedFunc(); // Declare a protected member.  
private:  
    int PrivateFunc();   // Declare a private member.  
};  
  
// Declare two classes derived from BaseClass.  
class DerivedClass1 : public BaseClass  
{  
};  
  
class DerivedClass2 : private BaseClass  
{  
};  
  
int main()  
{  
}  
```  
  
 In `DerivedClass1` la funzione membro `PublicFunc` è un membro pubblico e `ProtectedFunc` è un membro protetto perché `BaseClass` è una classe base pubblica.  `PrivateFunc` è privato per `BaseClass` ed è accessibile a tutte le classi derivate.  
  
 In `DerivedClass2` le funzioni `PublicFunc` e `ProtectedFunc` sono considerate membri privati perché `BaseClass` è una classe base privata.  Anche in questo caso `PrivateFunc` è privato per `BaseClass` ed è inaccessibile a tutte le classi derivate.  
  
 È possibile dichiarare una classe derivata senza identificatore di accesso della classe base.  In tal caso, la derivazione è considerata privata se la dichiarazione della classe derivata usa la parola chiave **class**.  La derivazione è considerata pubblica se la dichiarazione della classe derivata usa la parola chiave `struct`.  Ad esempio, il seguente codice:  
  
```  
class Derived : Base  
...  
```  
  
 equivale a:  
  
```  
class Derived : private Base  
...  
```  
  
 In modo analogo, il seguente codice.  
  
```  
struct Derived : Base  
...  
```  
  
 equivale a:  
  
```  
struct Derived : public Base  
...  
```  
  
 Tenere presente che i membri dichiarati con accesso privato non sono accessibili alle funzioni o alle classi derivate a meno che tali funzioni o classi non vengano dichiarate usando la dichiarazione `friend` nella classe base.  
  
 Un tipo **union** non può avere una classe base.  
  
> [!NOTE]
>  Quando si specifica una classe base privata, si consiglia di usare in modo esplicito la parola chiave `private` per consentire agli utenti della classe derivata di comprendere l'accesso al membro.  
  
## Controllo di accesso e membri statici  
 Quando si definisce una classe base come `private`, tale classe influisce solo sui membri non statici.  I membri statici pubblici sono ancora accessibili nelle classi derivate.  Tuttavia, l'accesso ai membri della classe base usando i puntatori, i riferimenti o gli oggetti può richiedere una conversione, momento in cui viene nuovamente applicato il controllo di accesso.  Si consideri l'esempio seguente:  
  
```  
// access_control.cpp  
class Base  
{  
public:  
    int Print();             // Nonstatic member.  
    static int CountOf();    // Static member.  
};  
  
// Derived1 declares Base as a private base class.  
class Derived1 : private Base  
{  
};  
// Derived2 declares Derived1 as a public base class.  
class Derived2 : public Derived1  
{  
    int ShowCount();    // Nonstatic member.  
};  
// Define ShowCount function for Derived2.  
int Derived2::ShowCount()  
{  
   // Call static member function CountOf explicitly.  
    int cCount = Base::CountOf();     // OK.  
  
   // Call static member function CountOf using pointer.  
    cCount = this->CountOf();  // C2247. Conversion of  
                               //  Derived2 * to Base * not  
                               //  permitted.  
    return cCount;  
}  
```  
  
 Nel codice precedente, il controllo di accesso impedisce la conversione da un puntatore a `Derived2` in un puntatore a `Base`.  Il puntatore **this** è implicitamente di tipo `Derived2 *`.  Per selezionare la funzione `CountOf`, **this** deve essere convertito nel tipo `Base *`.  Tale conversione non è consentita perché `Base` è una classe base indiretta privata di `Derived2`.  La conversione in un tipo di classe base privata è accettabile solo per i puntatori alle classi derivate immediate.  Di conseguenza, i puntatori di tipo `Derived1 *` possono essere convertiti nel tipo `Base *`.  
  
 Si noti che la chiamata alla funzione `CountOf` in modo esplicito, senza usare un puntatore, un riferimento o un oggetto per selezionarla, non implica alcuna conversione.  La chiamata è pertanto consentita.  
  
 I membri e gli elementi friend di una classe derivata, `T`, possono convertire un puntatore a `T` in un puntatore a una classe base diretta privata `T`.  
  
## Accesso alle funzioni virtuali  
 Il controllo accessi applicato alle funzioni [virtuali](../cpp/virtual-cpp.md) è determinato dal tipo usato per eseguire la chiamata di funzione.  L'esecuzione dell'override delle dichiarazioni di funzione non influisce sul controllo accessi per un determinato tipo.  Ad esempio:  
  
```  
// access_to_virtual_functions.cpp  
class VFuncBase  
{  
public:  
    virtual int GetState() { return _state; }  
protected:  
    int _state;  
};  
  
class VFuncDerived : public VFuncBase  
{  
private:  
    int GetState() { return _state; }  
};  
  
int main()  
{  
   VFuncDerived vfd;             // Object of derived type.  
   VFuncBase *pvfb = &vfd;       // Pointer to base type.  
   VFuncDerived *pvfd = &vfd;    // Pointer to derived type.  
   int State;  
  
   State = pvfb->GetState();     // GetState is public.  
   State = pvfd->GetState();     // C2248 error expected; GetState is private;  
}  
```  
  
 Nell'esempio precedente, chiamando la funzione virtuale `GetState` mediante un al tipo `VFuncBase` viene chiamato `VFuncDerived::GetState` e `GetState` viene considerato come pubblico.  Tuttavia, chiamando `GetState` con un puntatore al tipo `VFuncDerived` è una violazione del controllo accessi perché `GetState` è dichiarato privato nella classe `VFuncDerived`.  
  
> [!CAUTION]
>  La funzione virtuale `GetState` può essere chiamata usando un puntatore alla classe base `VFuncBase`.  Ciò non significa che la funzione chiamata è la versione della classe base di tale funzione.  
  
## Controllo di accesso con ereditarietà multipla  
 In reticoli con ereditarietà multipla che includono classi base virtuali un nome specificato può essere raggiunto da più di un percorso.  Poiché a questi percorsi differenti è possibile applicare un controllo di accesso diverso, il compilatore sceglie il percorso con maggiori possibilità di accesso.  Vedere la figura riportata di seguito.  
  
 ![Rappresentazione grafica dell'accesso ai percorsi di un'ereditarietà](../cpp/media/vc38v91.png "vc38V91")  
Accesso ai percorsi di un grafico di ereditarietà  
  
 Nella figura un nome dichiarato nella classe `VBase` viene sempre raggiunto tramite la classe `RightPath`.  Il percorso corretto è più accessibile perché `RightPath` dichiara `VBase` come classe base pubblica, mentre `LeftPath` dichiara `VBase` come privata.  
  
## Vedere anche  
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)