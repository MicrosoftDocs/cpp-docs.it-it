---
title: "Semantica dello stack C++ per i tipi di riferimento | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tipi di riferimento, semantica dello stack C++"
ms.assetid: 319a1304-f4a4-4079-8b84-01cec847d531
caps.latest.revision: 15
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Semantica dello stack C++ per i tipi di riferimento
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Prima di Visual C\+\+ 2005, un'istanza di un tipo di riferimento poteva essere creata solo mediante l'operatore `new`, il quale ha creato l'oggetto nell'heap sottoposto a garbage collection.  Tuttavia, adesso è possibile creare un'istanza di un tipo riferimento utilizzando la stessa sintassi che viene utilizzata per creare un'istanza di un tipo nativo nello stack.  Pertanto, non è necessario utilizzare [ref new, gcnew](../windows/ref-new-gcnew-cpp-component-extensions.md) per creare un oggetto di un tipo riferimento.  E quando l'oggetto esce dall'ambito, il compilatore chiama il distruttore di oggetti.  
  
## Osservazioni  
 Quando si crea un'istanza di un tipo riferimento mediante la semantica dello stack, il compilatore crea internamente l'istanza nell'heap sottoposto a garbage collection \(utilizzando `gcnew`\).  
  
 Quando la firma o il tipo restituito di una funzione include un'istanza di un tipo riferimento per valore, la funzione verrà contrassegnata nei metadati indicando che richiede una gestione speciale \(con modreq\).  Questo tipo di gestione speciale attualmente è disponibile solo per i client Visual C\+\+; attualmente gli altri linguaggi non supportano l'utilizzo di funzioni o dati che utilizzano i tipi riferimenti creati con la semantica dello stack.  
  
 Una ragione per utilizzare `gcnew` \(allocazione dinamica\) anziché la semantica dello stack si ha quando il tipo non ha un distruttore.  Inoltre, non è possibile utilizzare i tipi riferimento creati con la semantica dello stack nelle firme della funzione se si desidera che le funzioni debbano essere utilizzate in linguaggi diversi da Visual C\+\+.  
  
 Il compilatore non genera un costruttore di copia per un tipo di riferimento.  Pertanto, se si definisce una funzione che utilizza un tipo riferimento per valore nella firma, è necessario definire un costruttore di copia per il tipo riferimento.  Un costruttore di copia per un tipo riferimento ha una firma con la forma seguente: `R(R%){}`.  
  
 Il compilatore non genererà un operatore di assegnazione predefinito per un tipo riferimento.  Un operatore di assegnazione consente di creare un oggetto mediante la semantica dello stack e di inizializzarlo con un oggetto esistente creato mediante la semantica dello stack.  Un operatore di assegnazione per un tipo riferimento ha una firma con la forma seguente: `void operator=( R% ){}`.  
  
 Se il distruttore del tipo rilascia delle risorse critiche e si utilizza la semantica dello stack per i tipi riferimento, non è necessario chiamare in modo esplicito il distruttore \(o chiamare `delete`\).  Per ulteriori informazioni sui distruttori nei tipi riferimento, vedere [Distruttori e finalizzatori in Visual C\+\+](../misc/destructors-and-finalizers-in-visual-cpp.md).  
  
 Un operatore di assegnazione generato dal compilatore seguirà le normali regole standard C\+\+ con le seguenti modifiche:  
  
-   Tutti i membri dati non statici il cui tipo è un handle per un tipo riferimento saranno copiati superficialmente \(considerato come un membro dati non statico il cui tipo è un puntatore\).  
  
-   Qualsiasi membro dati non statico il cui tipo è un tipo di valore verrà copiato superficialmente.  
  
-   Qualsiasi membro dati non statico il cui tipo è un'istanza di un tipo riferimento causerà una chiamata al costruttore di copia del tipo riferimento.  
  
 Il compilatore fornisce inoltre un operatore unario `%` per convertire un'istanza di un tipo riferimento creato mediante la semantica dello stack nel tipo dell'handle sottostante.  
  
 I seguenti tipi riferimento non sono disponibili per l'utilizzo con la semantica dello stack:  
  
-   [delegato](../windows/delegate-cpp-component-extensions.md)  
  
-   [Arrays](../windows/arrays-cpp-component-extensions.md)  
  
-   <xref:System.String>  
  
## Esempio  
  
### Descrizione  
 Nell'esempio di codice seguente viene mostrato come dichiarare le istanze dei tipi riferimento con la semantica dello stack, il funzionamento di un costruttore di copia e dell'operatore di assegnazione e come inizializzare un riferimento di traccia con un tipo riferimento creato mediante la semantica dello stack.  
  
### Codice  
  
```  
// stack_semantics_for_reference_types.cpp  
// compile with: /clr  
ref class R {  
public:  
   int i;  
   R(){}  
  
   // assignment operator  
   void operator=(R% r) {  
      i = r.i;  
   }  
  
   // copy constructor  
   R(R% r) : i(r.i) {}  
};  
  
void Test(R r) {}   // requires copy constructor  
  
int main() {  
   R r1;  
   r1.i = 98;  
  
   R r2(r1);   // requires copy constructor  
   System::Console::WriteLine(r1.i);  
   System::Console::WriteLine(r2.i);  
  
   // use % unary operator to convert instance using stack semantics  
   // to its underlying handle  
   R ^ r3 = %r1;  
   System::Console::WriteLine(r3->i);  
  
   Test(r1);  
  
   R r4;  
   R r5;  
   r5.i = 13;  
   r4 = r5;   // requires a user-defined assignment operator  
   System::Console::WriteLine(r4.i);  
  
   // initialize tracking reference  
   R % r6 = r4;  
   System::Console::WriteLine(r6.i);  
}  
```  
  
### Output  
  
```  
98  
98  
98  
13  
13  
```  
  
## Vedere anche  
 [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md)