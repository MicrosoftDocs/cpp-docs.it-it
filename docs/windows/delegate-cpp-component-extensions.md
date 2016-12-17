---
title: "delegato (Estensioni del componente C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "delegate_cpp"
  - "delegate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "delegate (parola chiave) [C++]"
ms.assetid: 03caf23d-7873-4a23-9b34-becf42aaf429
caps.latest.revision: 26
caps.handback.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# delegato (Estensioni del componente C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dichiara un tipo che rappresenta un puntatore a funzione.  
  
## Tutti i runtime  
 Sia [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] che Common Language Runtime supportano i delegati.  
  
### Osservazioni  
 `delegate` è una parola chiave sensibile al contesto.  Per ulteriori informazioni, vedere [Parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md).  
  
 Per rilevare in fase di compilazione se un tipo è un delegato, utilizzare il tratto di tipo `__is_delegate()`.  Per ulteriori informazioni, vedere [Compiler Support for Type Traits](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
## Windows Runtime  
 C\+\+\/CX supporta i delegati utilizzando la seguente sintassi.  
  
### Sintassi  
  
```cpp  
  
access delegate return-type delegate-type-identifier ([ parameters ])  
```  
  
### Parametri  
 *access*  
 \(facoltativo\) L'accessibilità del delegato, che può essere `public` \(impostazione predefinita\) o `private`.  Il prototipo di funzione può anche essere qualificato con le parole chiave `volatile` o `const`.  
  
 *return\-type*  
 Il tipo restituito del prototipo della funzione.  
  
 *delegate\-type\-identifier*  
 Il nome del tipo delegato dichiarato.  
  
 *parameters*  
 \(Facoltativo\) Tipi e identificatori dei prototipi di funzione.  
  
### Osservazioni  
 Utilizzare *delegate\-type\-identifier* per dichiarare un evento con lo stesso prototipo del delegato.  Per ulteriori informazioni, vedere i [delegati \(C\+\+\/CX\)](../Topic/Delegates%20\(C++-CX\).md).  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## Common Language Runtime  
 Il Common Language Runtime supporta i delegati con la seguente sintassi.  
  
### Sintassi  
  
```cpp  
  
access delegate function_declaration  
```  
  
### Parametri  
 *access*  
 \(facoltativo\) L'accessibilità del delegato al di fuori dell'assembly può essere public o private.  Il valore predefinito è private.  In una classe, un delegato può avere qualsiasi accessibilità.  
  
 *function\_declaration*  
 La firma della funzione che può essere associata al delegato.  Il tipo restituito di un delegato può essere qualsiasi tipo gestito.  Per motivi di interoperabilità, il tipo restituito di un delegato dovrebbe essere un tipo CLS.  
  
 Per definire un delegato non associato, il primo parametro di *function\_declaration* deve essere il tipo del puntatore `this` per l'oggetto.  Per ulteriori informazioni, vedere [Delegati non associati](../misc/unbound-delegates.md).  
  
### Osservazioni  
 I delegati sono multicast: il "puntatore a funzione" può essere associato a uno o più metodi all'interno di una classe gestita.  La parola chiave **delegate** definisce un tipo delegato multicast con una specifica firma del metodo.  
  
 Un delegato può anche essere associato a un metodo di una classe di valori, ad esempio ad un metodo statico.  
  
 Un delegato presenta le caratteristiche descritte di seguito:  
  
-   Eredita da **System::MulticastDelegate**.  
  
-   Ha un costruttore che accetta due argomenti: un puntatore a una classe gestita o a **NULL** \(nel caso di associazione ad un metodo statico\) e un metodo completamente qualificato del tipo specificato.  
  
-   Ha un metodo denominato `Invoke`, la cui firma corrisponde alla firma del delegato dichiarata.  
  
 Quando il delegato viene invocato, le relative funzioni vengono chiamate nell'ordine in cui sono state associate.  
  
 Il valore restituito di un delegato è il valore restituito dall'ultima funzione membro associata.  
  
 I delegati non possono essere sottoposti a overload.  
  
 I delegati possono essere associati o non associati.  
  
 Quando viene creata un'istanza di un delegato associato, il primo argomento è un riferimento ad un oggetto.  Il secondo argomento per la creazione di un'istanza del delegato è l'indirizzo di un metodo di un oggetto di una classe gestita o un puntatore a un metodo di un tipo di valore.   Il secondo argomento per la creazione di un'istanza del delegato deve assegnare un nome al metodo utilizzando la sintassi completa dell'ambito della classe e applicando l'operatore address\-of.  
  
 Quando viene creata un'istanza di un delegato non associato, il primo argomento è l'indirizzo di un metodo di un oggetto di una classe gestita o un puntatore a un metodo di un tipo di valore.   L'argomento deve assegnare un nome al metodo utilizzando la sintassi completa dell'ambito della classe e applicando l'operatore address\-of.  
  
 Quando si crea un delegato per una funzione statica o globale, un solo parametro è obbligatorio: la funzione \(l'indirizzo della funzione è facoltativo\).  
  
 Per ulteriori informazioni sui delegati, vedere  
  
-   [Delegati non associati](../misc/unbound-delegates.md)  
  
-   [Procedura: definire e utilizzare delegati](../dotnet/how-to-define-and-use-delegates-cpp-cli.md)  
  
-   [Delegato a un membro di una classe di valore](../misc/how-to-associate-delegates-to-members-of-a-value-class.md)  
  
-   [Delegato a una funzione non gestita](../misc/how-to-associate-delegates-to-unmanaged-functions.md)  
  
-   [Delegati composti](../misc/how-to-compose-delegates.md)  
  
-   [Procedura: passare un delegato a una funzione nativa per la quale è previsto un puntatore a funzione](../misc/how-to-pass-a-delegate-hat-to-a-native-function-expecting-a-function-pointer.md)  
  
-   [Generic Delegates \(Visual C\+\+\)](../windows/generic-delegates-visual-cpp.md)  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 **Esempio**  
  
 Nell'esempio che segue viene illustrato come dichiarare, inizializzare ed invocare i delegati.  
  
```cpp  
// mcppv2_delegate.cpp  
// compile with: /clr  
using namespace System;  
  
// declare a delegate  
public delegate void MyDel(int i);  
  
ref class A {  
public:  
   void func1(int i) {  
      Console::WriteLine("in func1 {0}", i);  
   }  
  
   void func2(int i) {  
      Console::WriteLine("in func2 {0}", i);  
   }  
  
   static void func3(int i) {  
      Console::WriteLine("in static func3 {0}", i);  
   }  
};  
  
int main () {  
   A ^ a = gcnew A;  
  
   // declare a delegate instance  
   MyDel^ DelInst;  
  
   // test if delegate is initialized  
   if (DelInst)  
      DelInst(7);  
  
   // assigning to delegate  
   DelInst = gcnew MyDel(a, &A::func1);  
  
   // invoke delegate  
   if (DelInst)  
      DelInst(8);  
  
   // add a function  
   DelInst += gcnew MyDel(a, &A::func2);  
  
   DelInst(9);  
  
   // remove a function  
   DelInst -= gcnew MyDel(a, &A::func1);  
  
   // invoke delegate with Invoke  
   DelInst->Invoke(10);  
  
   // make delegate to static function  
   MyDel ^ StaticDelInst = gcnew MyDel(&A::func3);  
   StaticDelInst(11);  
}  
```  
  
 **Output**  
  
  **in func1 8**  
 **in func1 9**  
 **in func2 9**  
 **in func2 10**  
 **in func3 statica 11**   
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)