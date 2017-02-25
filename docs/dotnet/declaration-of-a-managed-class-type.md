---
title: "Dichiarazione di un tipo classe gestito | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tipi __gc"
  - "__value (parola chiave)"
  - "class (parola chiave) [C++], CLR"
  - "classi [C++], gestito"
  - "interfaccia di classe (parola chiave)"
  - "classi gestite"
  - "ref (parola chiave) [C++]"
  - "value (parola chiave) [C++]"
  - "tipi di valori, dichiarazione"
ms.assetid: 16de9c94-91d7-492f-8ac7-f0729cc627e9
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Dichiarazione di un tipo classe gestito
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il modo in cui viene dichiarato un tipo classe di riferimento è stato modificato in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Nelle estensioni gestite, un tipo classe di riferimento è preceduto dalla parola chiave `__gc`.  Nella nuova sintassi, la parola chiave `__gc` viene sostituita da una di due parole chiave con spaziatura: `ref class` o `ref struct`.  La scelta di `struct` o `class` specifica il livello di accesso pubblico \(`struct`\) o privato \(`class`\) predefinito dei membri dichiarati in una sezione senza etichetta iniziale del corpo del tipo.  
  
 Analogamente, un tipo classe di valore è preceduto nelle estensioni gestite dalla parola chiave `__value`.  Nella nuova sintassi, la parola chiave `__value` viene sostituita da una di due parole chiave con spaziatura: `value class` o `value struct`.  
  
 Un tipo interfaccia è indicato nelle estensioni gestite con la parola chiave `__interface`.  Nella nuova sintassi, questa parola chiave viene sostituita con `interface class`.  
  
 Si considerino ad esempio le seguenti dichiarazioni di classe nelle estensioni gestite:  
  
```  
public __gc class Block {};     // reference class  
public __value class Vector {}; // value class  
public __interface IFooBar {};  // interface class  
```  
  
 Di seguito vengono riportate le dichiarazioni equivalenti nella nuova sintassi:  
  
```  
public ref class Block {};         // reference class  
public value class Vector {};      // value class  
public interface class IFooBar {}; // interface class  
```  
  
## Specifica della classe come astratta  
 Nelle estensioni gestite la parola chiave `__abstract` viene inserita prima della parola chiave `class`, prima o dopo `__gc`, per indicare che la classe è incompleta e gli oggetti della classe non possono essere creati all'interno del programma:  
  
```  
public __gc __abstract class Shape {};  
public __gc __abstract class Shape2D: public Shape {};  
```  
  
 Nella nuova sintassi la parola chiave contestuale `abstract` viene specificata dopo il nome della classe e prima del corpo della classe, dell'elenco di derivazione della classe base o di un punto e virgola.  
  
```  
public ref class Shape abstract {};  
public ref class Shape2D abstract : public Shape{};  
```  
  
 Il significato semantico rimane invariato.  
  
## Specifica della classe come sealed  
 Nelle estensioni gestite la parola chiave `__sealed` viene inserita prima della parola chiave `class`, prima o dopo `__gc`, per indicare che non è possibile ereditare dagli oggetti della classe:  
  
```  
public __gc __sealed class String {};  
```  
  
 Nella nuova sintassi la parola chiave contestuale `sealed` viene specificata dopo il nome della classe e prima del corpo della classe, dell'elenco di derivazione della classe base o di un punto e virgola.  
  
 È possibile derivare una classe e impostarla come sealed.  La classe `String` è ad esempio derivata in modo implicito da `Object`.  Una classe sealed offre il vantaggio di supportare la risoluzione statica, ovvero in fase di compilazione, di tutte le chiamate di funzioni virtuali nell'oggetto classe di riferimento sealed.  L'identificatore `sealed` garantisce infatti che l'handle di rilevamento `String` non possa fare riferimento a una classe successivamente derivata che potrebbe fornire un'istanza di override del metodo virtuale richiamato.  Di seguito è riportato un esempio di classe sealed nella nuova sintassi:  
  
```  
public ref class String sealed {};  
```  
  
 È inoltre possibile specificare una classe sia come astratta che come sealed. Questa speciale condizione indica una classe statica.  In base alla descrizione contenuta nella documentazione di CLR,  
  
 "un tipo sia `abstract` che `sealed` deve disporre soltanto di membri statici e funge da spazio dei nomi, in base alle denominazione utilizzata in alcuni linguaggi".  
  
 Di seguito viene ad esempio fornita una dichiarazione di classe astratta sealed basata sulla sintassi delle estensioni gestite:  
  
```  
public __gc __sealed __abstract class State {  
public:  
   static State() {}  
   static bool inParamList();  
  
private:  
   static bool ms_inParam;  
};  
```  
  
 Di seguito è riportata tale dichiarazione convertita nella nuova sintassi:  
  
```  
public ref class State abstract sealed {  
public:  
   static State();  
   static bool inParamList();  
  
private:  
   static bool ms_inParam;  
};  
```  
  
## Ereditarietà CLR: specifica della classe base  
 Nel modello a oggetti CLR, è supportata soltanto l'ereditarietà singola pubblica.  Nelle estensioni gestite, tuttavia, è stata conservata l'interpretazione predefinita dello standard ISO\-C\+\+ in base alla quale una classe base senza una parola chiave di accesso specifica una derivazione privata.  In ogni dichiarazione di ereditarietà CLR è pertanto necessario fornire la parola chiave `public` per eseguire l'override dell'interpretazione predefinita.  
  
```  
// Managed Extensions: error: defaults to private derivation  
__gc class Derived : Base {};  
```  
  
 Nella definizione della nuova sintassi l'assenza di una parola chiave di accesso indica una derivazione pubblica in una definizione di ereditarietà CLR.  La parola chiave `public` è ora pertanto facoltativa.  Non è tuttavia richiesta alcuna modifica del codice delle estensioni gestite per C\+\+.  
  
```  
// New syntax: ok: defaults to public derivation  
ref class Derived : Base{};  
```  
  
## Vedere anche  
 [Tipi gestiti \(C\+\+\/CL\)](../dotnet/managed-types-cpp-cl.md)   
 [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md)   
 [abstract](../windows/abstract-cpp-component-extensions.md)   
 [sealed](../windows/sealed-cpp-component-extensions.md)