---
title: "Modifiche nell&#39;ordine di inizializzazione del costruttore | Microsoft Docs"
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
  - "costruttori, C++"
ms.assetid: 8892c38d-6bf7-4cf7-ac8f-15e052135a79
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Modifiche nell&#39;ordine di inizializzazione del costruttore
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'ordine di inizializzazione dei costruttori di classe è stato modificato in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
## Confronto dell'ordine di inizializzazione del costruttore  
 Nelle estensioni gestite per C\+\+ l'inizializzazione del costruttore viene eseguita nell'ordine seguente:  
  
1.  Il costruttore della classe base, se disponibile, viene richiamato.  
  
2.  L'elenco di inizializzazione della classe viene valutato.  
  
3.  Il corpo del codice del costruttore della classe viene eseguito.  
  
 Questo ordine di esecuzione segue le stesse convenzioni della programmazione C\+\+ nativa.  Il nuovo linguaggio Visual C\+\+ stabilisce l'ordine di esecuzione seguente per le classi CLR:  
  
1.  L'elenco di inizializzazione della classe viene valutato.  
  
2.  Il costruttore della classe base, se disponibile, viene richiamato.  
  
3.  Il corpo del codice del costruttore della classe viene eseguito.  
  
 Si noti che questa modifica si riferisce solo alle classi CLR. Per le classi native in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] valgono ancora le convenzioni precedenti.  In entrambi i casi, queste regole vengono propagate a cascata verso l'alto nell'intera gerarchia di una classe determinata.  
  
 Si consideri l'esempio di codice seguente utilizzando le estensioni gestite per C\+\+:  
  
```  
__gc class A  
{  
public:  
   A() : _n(1)  
   {  
   }  
  
protected:  
   int _n;  
};  
  
__gc class B : public A  
{  
public:  
   B() : _m(_n)  
   {  
   }  
private:  
   int _m;  
};  
```  
  
 In base all'ordine di inizializzazione del costruttore stabilito sopra, la costruzione di nuove istanze della classe `B` avverrà nell'ordine di esecuzione seguente:  
  
1.  Il costruttore della classe base `A` viene richiamato.  Il membro `_n` viene inizializzato con il valore `1`.  
  
2.  L'elenco di inizializzazione della classe `B` viene valutato.  Il membro `_m` viene inizializzato con il valore `1`.  
  
3.  Il corpo del codice della classe `B` viene eseguito.  
  
 Si consideri ora lo stesso codice nella nuova sintassi di Visual C\+\+:  
  
```  
ref class A  
{  
public:  
   A() : _n(1)  
   {  
   }  
  
protected:  
   int _n;  
};  
  
ref class B : A  
{  
public:  
   B() : _m(_n)  
   {  
   }  
private:  
   int _m;  
};  
```  
  
 Nella nuova sintassi la costruzione di nuove istanze della classe `B` avviene nell'ordine di esecuzione seguente:  
  
1.  L'elenco di inizializzazione della classe `B` viene valutato.  Il membro `_m` viene inizializzato con `0` \(`0` è il valore non inizializzato del membro della classe `_m`\).  
  
2.  Il costruttore della classe base `A` viene richiamato.  Il membro `_n` viene inizializzato con il valore `1`.  
  
3.  Il corpo del codice della classe `B` viene eseguito.  
  
 Si noti come una sintassi simile produca risultati diversi per questi esempi di codice.  Il costruttore della classe `B` dipende da un valore della classe base `A` per l'inizializzazione del relativo membro.  Tuttavia, il costruttore della classe `A` non è ancora stato richiamato.  Tale dipendenza può essere particolarmente pericolosa quando la classe ereditata dipende da un'allocazione di memoria o risorsa che deve essere eseguita nel costruttore della classe base.  
  
## Implicazioni del passaggio dalle estensioni gestite per C\+\+ a Visual C\+\+ 2010  
 In molti casi, le modifiche all'ordine di esecuzione dei costruttori di classe devono essere trasparenti per il programmatore perché le classi base non hanno alcuna nozione del comportamento delle classi ereditate.  Tuttavia, come illustrato in questi esempi di codice, i costruttori delle classi ereditate possono essere influenzati notevolmente dal fatto che i relativi elenchi di inizializzazione dipendano dai valori dei membri della classe base.  Quando si trasferisce il codice dalle estensioni gestite per C\+\+ alla nuova sintassi, prendere in considerazione il trasferimento dei costrutti nel corpo del costruttore di classe, dove è garantito che l'esecuzione avvenga per ultima.  
  
## Vedere anche  
 [Tipi gestiti \(C\+\+\/CL\)](../dotnet/managed-types-cpp-cl.md)   
 [Costruttori](../cpp/constructors-cpp.md)   
 [Inizializzatori del costruttore](../misc/constructor-initializers.md)