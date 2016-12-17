---
title: "Operatori di assegnazione | Microsoft Docs"
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
  - ">>="
  - "xor_eq"
  - "&="
  - "<<="
  - "-="
  - "and_eq"
  - "^="
  - "|="
  - "/="
  - "%="
  - "or_eq"
  - "+="
  - "*="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "%= (operatore)"
  - "&= (operatore)"
  - "*= (operatore)"
  - "/= (operatore)"
  - "^= (operatore)"
  - "|= (operatore)"
  - "+= (operatore)"
  - "<<= (operatore)"
  - "= (operatore)"
  - "-= (operatore)"
  - ">>= (operatore)"
  - "and_eq (operatore)"
  - "operatori di assegnazione"
  - "operatori di assegnazione, C++"
  - "operatore >>="
  - "operator>>="
  - "operatori [C++], assegnazione"
  - "or_eq (operatore)"
  - "xor_eq (operatore)"
ms.assetid: b028cf35-2ff1-4f14-9027-fd53ebec8aa0
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatori di assegnazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
        expression assignment-operator expression   
assignment-operator : one of  
   =   *=   /=   %=   +=   –=   <<=   >>=   &=   ^=   |=  
```  
  
## Note  
 Gli operatori di assegnamento consentono di memorizzare un valore nell'oggetto definito dall'operando sinistro.  Esistono due tipi di operazioni di assegnamento: assegnamento semplice, in cui il valore del secondo operando è memorizzato nell'oggetto specificato dal primo operando, e assegnazione composta, dove un'operazione aritmetica, un'operazione di spostamento o un'operazione bit per bit viene eseguita prima di memorizzare il risultato.  Tutti gli operatori di assegnamento nella tabella seguente, ad eccezione dell'operatore \=, sono operatori di assegnamento composti.  
  
### Operatori di assegnazione  
  
|Operatore|Significato|  
|---------------|-----------------|  
|**\=**|Memorizza il valore del secondo operando nell'oggetto specificato dal primo operando \(assegnamento semplice\).|  
|**\*\=**|Moltiplica il valore del primo operando per il valore del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|  
|`/=`|Divide il valore del primo operando per il valore del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|  
|`%=`|Calcola il modulo del primo operando specificato per il valore del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|  
|`+=`|Somma il valore del secondo operando al valore del primo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|  
|**–\=**|Sottrae il valore del secondo operando dal valore del primo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|  
|**\<\<\=**|Esegue uno spostamento a sinistra del valore del primo operando di un numero di bit specificati dal valore del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|  
|**\>\>\=**|Esegue uno spostamento a destra del valore del primo operando di un numero di bit specificati dal valore del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|  
|**&\=**|Ottiene l'AND bit per bit del primo e del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|  
|`^=`|Ottiene l'OR esclusivo bit per bit del primo e del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|  
|`&#124;=`|Ottiene l'OR inclusivo bit per bit del primo e del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|  
  
 **Parole chiave per operatori**  
  
 Tre degli operatori di assegnamento composti hanno testo equivalente.  Ad esempio:  
  
|Operatore|Equivalente|  
|---------------|-----------------|  
|**&\=**|`and_eq`|  
|`&#124;=`|`or_eq`|  
|`^=`|`xor_eq`|  
  
 Esistono due modi per accedere a queste parole chiave per operatori nei programmi, ovvero includere il file di intestazione `iso646.h` o eseguire la compilazione con l'opzione del compilatore [\/Za](../build/reference/za-ze-disable-language-extensions.md) \(disabilitazione delle estensioni di linguaggio\).  
  
## Esempio  
  
```  
// expre_Assignment_Operators.cpp  
// compile with: /EHsc  
// Demonstrate assignment operators  
#include <iostream>  
using namespace std;  
int main() {  
   int a = 3, b = 6, c = 10, d = 0xAAAA, e = 0x5555;  
  
   a += b;      // a is 9  
   b %= a;      // b is 6  
   c >>= 1;      // c is 5  
   d |= e;      // Bitwise--d is 0xFFFF   
  
   cout  << "a = 3, b = 6, c = 10, d = 0xAAAA, e = 0x5555" << endl  
         << "a += b yields " << a << endl  
         << "b %= a yields " << b << endl  
         << "c >>= 1 yields " << c << endl  
         << "d |= e yields " << hex << d << endl;  
}  
```  
  
## Assegnazione singola  
 L'operatore di assegnazione semplice \(\=\) determina il valore del secondo operando per essere archiviato nell'oggetto specificato dal primo operando.  Se entrambi gli oggetti sono di tipi aritmetici, l'operando di destra viene convertito nel tipo di sinistra, prima di archiviare il valore.  
  
 Gli oggetti dei tipi const e volatile possono essere assegnati ai valori l dei tipi unicamente volatili o che non sono né const né volatili.  
  
 L'assegnazione a oggetti di tipo di classe \(tipi di struct, unione e classe\) viene eseguita da una funzione denominata operator\=.  Il comportamento predefinito di questa funzione di operatore è di eseguire una copia bit per bit; tuttavia, questo comportamento può essere modificato mediante gli operatori di overload.  \(Vedere [Operatori di overload](../cpp/operator-overloading.md) per altre informazioni\).  
  
 Un oggetto senza alcuna ambiguità di classe derivata da una classe base specificata può essere assegnato a un oggetto della classe base.  Il contrario non è consentito perché è presente una conversione implicita da classe derivata a classe base ma non da classe base a classe derivata.  Ad esempio:  
  
```  
// expre_SimpleAssignment.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
class ABase  
{  
public:  
    ABase() { cout << "constructing ABase\n"; }  
};  
  
class ADerived : public ABase  
{  
public:  
    ADerived() { cout << "constructing ADerived\n"; }  
};  
  
int main()  
{  
    ABase aBase;  
    ADerived aDerived;  
  
    aBase = aDerived; // OK  
    aDerived = aBase; // C2679  
}  
```  
  
 Le assegnazioni ai tipi di riferimento si comportano come se l'assegnazione venisse effettuata all'oggetto cui punta il riferimento.  
  
 Per gli oggetti di tipo classe, l'assegnazione è diversa dall'inizializzazione.  Per illustrare come possono essere diverse l'assegnazione e l'inizializzazione, si consideri il codice  
  
```  
UserType1 A;  
UserType2 B = A;  
```  
  
 Il codice precedente mostra un inizializzatore; chiama il costruttore per `UserType2` che accetta un argomento di tipo `UserType1`.  Dato il codice  
  
```  
UserType1 A;  
UserType2 B;  
  
B = A;  
```  
  
 l'istruzione di assegnazione  
  
```  
B = A;   
```  
  
 può avere uno dei seguenti effetti:  
  
-   Chiamare la funzione di operatore\= per `UserType2`, se l'operatore\= viene fornito con un argomento `UserType1`.  
  
-   Chiamare la funzione esplicita `UserType1::operator UserType2` di conversione, se tale funzione non esiste.  
  
-   Chiamare un costruttore `UserType2::UserType2`, se tale costruttore esiste, che accetta un argomento `UserType1` e copia il risultato.  
  
## Assegnazione composta  
 Gli operatori di assegnazione composti, illustrati nella tabella di [Operatori di assegnazione](../cpp/assignment-operators.md), vengono specificati nel formato *e1* `op`\= *e2*, dove *e1* è un l\-value non modificabile del tipo const e *e2* è uno dei seguenti:  
  
-   Un tipo aritmetico  
  
-   Un puntatore, se `op` è \+ o \-  
  
 Il formato *e1* `op`\= *e2* si comporta come *e1* *\= e1* `op` *e2*, ma *e1* viene valutato solo una volta.  
  
 L'assegnazione composta a un tipo enumerato genera un messaggio di errore.  Se l'operando sinistro è di tipo puntatore, l'operando destro deve essere di tipo puntatore o un'espressione costante che restituisce 0.  Se l'operando sinistro è di tipo integrale, l'operando destro non deve essere di tipo puntatore.  
  
## Risultato degli operatori di assegnazione  
 Gli operatori di assegnazione restituiscono il valore dell'oggetto specificato dall'operando sinistro in seguito all'assegnazione.  Il tipo risultante è il tipo dell'operando sinistro.  Il risultato di un'espressione di assegnazione è sempre un l\-value.  Questi operatori hanno un'associatività da destra a sinistra.  L'operando sinistro deve essere un l\-value modificabile.  
  
 In ANSI C, Il risultato di un'espressione di assegnazione non è un l\-value.  Pertanto, l'espressione `(a += b) += c` risulta valida in C\+\+ e non valida in C.  
  
## Vedere anche  
 [Espressioni con operatori binari](../cpp/expressions-with-binary-operators.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori di assegnazione C](../c-language/c-assignment-operators.md)