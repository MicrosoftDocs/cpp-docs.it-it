---
title: "Modifiche agli operatori di conversione | Microsoft Docs"
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
  - "operatori di conversione"
  - "conversioni, esplicita"
  - "explicit (parola chiave) [C++]"
  - "operatori [C++], conversione esplicita di tipi"
  - "tipo (conversione), conversioni esplicite"
ms.assetid: 9b83925c-71b7-4bd3-ac2e-843dd7c7f184
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Modifiche agli operatori di conversione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La sintassi degli operatori di conversione è stata modificata in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Un esempio è scrivere `op_Implicit` per specificare una conversione.  Di seguito è riportato un esempio di definizione di `MyDouble` tratto dalla specifica di linguaggio:  
  
```  
__gc struct MyDouble {  
   static MyDouble* op_Implicit( int i );   
   static int op_Explicit( MyDouble* val );  
   static String* op_Explicit( MyDouble* val );   
};  
```  
  
 Tale codice indica che, dato un Integer, l'algoritmo per convertire tale Integer in un `MyDouble` viene fornito dall'operatore `op_Implicit`.  Tale conversione verrà inoltre eseguita in modo implicito dal compilatore.  Analogamente, dato un oggetto `MyDouble`, i due operatori `op_Explicit` forniscono i rispettivi algoritmi per la conversione di tale oggetto in un Integer o in un'entità `String` gestita.  Tuttavia, il compilatore non eseguirà alcuna conversione, a meno che questa non venga esplicitamente richiesta dall'utente.  
  
 In C\# questa situazione viene rappresentata come segue:  
  
```  
class MyDouble {  
   public static implicit operator MyDouble( int i );   
   public static explicit operator int( MyDouble val );  
   public static explicit operator string( MyDouble val );   
};  
```  
  
 Il codice C\# è più simile a C\+\+ che le estensioni gestite di C\+\+.  Ciò non è vero nella nuova sintassi.  
  
 Il comitato ISO\-C\+\+ ha introdotto una parola chiave, `explicit`, per mitigare le eventuali conseguenze impreviste. Ad esempio, una classe `Array` che assume un unico argomento integer come dimensione convertirà implicitamente qualsiasi Integer in un oggetto `Array`, anche quando questo rappresenta il risultato meno desiderabile.  Un modo per impedire questo fenomeno è l'utilizzo di un linguaggio di progettazione relativo a un secondo argomento fittizio per un costruttore  
  
 D'altra parte, non si deve fornire una coppia di conversione quando si progetta un tipo di classe in C\+\+.  L'esempio migliore è costituito dalla classe String standard.  Nella conversione implicita il costruttore con un singolo argomento assume una stringa di tipo C.  Non viene tuttavia fornito il corrispondente operatore di conversione implicito, ovvero quello che esegue la conversione di un oggetto stringa in una stringa di tipo C, ma viene invece richiesto all'utente di chiamare in modo esplicito una funzione denominata, in questo caso `c_str()`.  
  
 Di conseguenza, la possibilità di associare un comportamento implicito\/esplicito in un operatore di conversione \(e di incapsulare l'insieme di conversioni in un unico form di dichiarazione\) sembra rappresentare un miglioramento rispetto al supporto originale fornito da C\+\+ per gli operatori di conversione. A ciò ha quindi fatto seguito la creazione della parola chiave `explicit`.  Il supporto del linguaggio [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] per gli operatori di conversione ha l'aspetto indicato di seguito, che risulta leggermente meno dettagliato rispetto a C\#, grazie al comportamento predefinito dell'operatore che supporta un'applicazione implicita dell'algoritmo di conversione:  
  
```  
ref struct MyDouble {  
public:  
   static operator MyDouble^ ( int i );  
   static explicit operator int ( MyDouble^ val );  
   static explicit operator String^ ( MyDouble^ val );  
};  
```  
  
 In seguito a un'ulteriore modifica, un costruttore con un singolo argomento viene considerato come se fosse dichiarato `explicit`.  Questo significa che, per attivarne le chiamate, è necessario un cast esplicito.  È tuttavia importante sottolineare che, se si definisce un operatore di conversione esplicito, sarà questo a essere chiamato e non il costruttore con un singolo argomento.  
  
## Vedere anche  
 [Dichiarazioni di membri in una classe o interfaccia \(C\+\+\/CLI\)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)