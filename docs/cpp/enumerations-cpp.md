---
title: "Enumerazioni (C++) | Microsoft Docs"
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
  - "enum"
  - "enum_cpp"
  - "enum class"
  - "enum struct"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dichiarazioni, enumerazioni"
  - "enumeratori, dichiarazione"
  - "enum (parola chiave) [C++]"
  - "costanti denominate, dichiarazioni di enumerazioni"
  - "dichiarazione di enumerazioni"
ms.assetid: 081829db-5dca-411e-a53c-bffef315bcb3
caps.latest.revision: 27
caps.handback.revision: 27
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Enumerazioni (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un'enumerazione è un tipo definito dall'utente costituito da un set di costanti integrali note come enumeratori.  
  
> [!NOTE]
>  In questo articolo vengono descritti il tipo di enumerazione `enum` del linguaggio C\+\+ con standard ISO e il tipo di enumerazione `enum class` con ambito \(o fortemente tipizzato\) introdotto in C\+\+11.  Per informazioni sui tipi `public enum class` o `private enum class` in C\+\+\/CLI e C\+\+\/CX, vedere la [enum class](../windows/enum-class-cpp-component-extensions.md).  
  
## Sintassi  
  
```  
// unscoped enum:  
enum [identifier] [: type]  
  
{enum-list};   
  
// scoped enum:  
enum [class|struct]   
[identifier] [: type]   
{enum-list};  
```  
  
```  
// Forward declaration of enumerations  (C++11):  
enum A : int; // non-scoped enum must have type specified  
enum class B; // scoped enum defaults to int  
enum class C : short;  
```  
  
#### Parametri  
 `identifier`  
 Nome del tipo assegnato all'enumerazione.  
  
 `type`  
 Tipo sottostante degli enumeratori. Tutti gli enumeratori dispongono dello stesso tipo sottostante.  Può essere un tipo integrale qualsiasi.  
  
 `enum-list`  
 Elenco degli enumeratori nell'enumerazione separati da virgola.  Ogni enumeratore o nome della variabile nell'ambito deve essere univoco.  I valori possono essere tuttavia duplicati.  In un'enumerazione senza ambito, l'ambito è quello circostante. In un'enumerazione con ambito, l'ambito è lo stesso `enum-list`.  
  
 `class`  
 Usando questa parola chiave nella dichiarazione, si specifica che si tratta di un'enumerazione con ambito ed è necessario fornire un `identifier`.  È inoltre possibile usare la parola chiave `struct` invece di `class`, dal momento che in questo contesto sono equivalenti dal punto di vista semantico.  
  
## Note  
 Un'enumerazione fornisce contesto per descrivere un intervallo di valori rappresentati come costanti denominate e che vengono chiamati anche enumeratori.  Nei tipi di enumerazione C e C\+\+ gli enumeratori non qualificati sono visibili in tutto l'ambito in cui viene dichiarata l'enumerazione.  Nelle enumerazioni con ambito il nome dell'enumeratore deve essere qualificato dal nome del tipo di enumerazione.  Nell'esempio seguente viene illustrata questa differenza di base tra i due tipi di enumerazioni:  
  
```cpp  
namespace CardGame_Scoped  
{  
    enum class Suit { Diamonds, Hearts, Clubs, Spades };  
  
    void PlayCard(Suit suit)  
    {  
        if (suit == Suit::Clubs) // Enumerator must be qualified by enum type  
        { /*...*/}  
    }  
}  
  
namespace CardGame_NonScoped  
{  
    enum Suit { Diamonds, Hearts, Clubs, Spades };  
  
    void PlayCard(Suit suit)  
    {  
        if (suit == Clubs) // Enumerator is visible without qualification  
        { /*...*/  
        }  
    }  
}  
```  
  
 A ogni nome nell'enumerazione viene assegnato un valore integrale che corrisponde alla posizione di tale valore nell'ordine dei valori nell'enumerazione.  Per impostazione predefinita, al primo valore viene assegnato 0, a quello successivo viene assegnato 1 e così via, ma è possibile impostare in modo esplicito il valore di un enumeratore, come illustrato di seguito:  
  
```cpp  
  
enum Suit { Diamonds = 1, Hearts, Clubs, Spades };  
  
```  
  
 All'enumeratore `Diamonds` viene assegnato al valore `1`.  Gli enumeratori successivi, se viene loro assegnato un valore esplicito, ricevono il valore dell'enumeratore precedente più uno.  Nell'esempio precedente `Hearts` avrebbe il valore 2, `Clubs` avrebbe il valore 3 e così via.  
  
 Ogni enumeratore viene considerato come costante e deve avere un nome univoco all'interno dell'ambito in cui viene definito `enum` \(per le enumerazioni senza ambito\) o all'interno dell'enumerazione stessa \(per le enumerazioni con ambito\).  I valori assegnati ai nomi non devono essere univoci.  Ad esempio, se la dichiarazione di un'enumerazione senza ambito `Suit` è la seguente:  
  
```cpp  
enum Suit { Diamonds = 5, Hearts, Clubs = 4, Spades };  
```  
  
 I valori di `Diamonds`, `Hearts`, `Clubs` e `Spades` sono rispettivamente 5, 6, 4 e 5.  Si noti che 5 viene usato più di una volta. Questo è consentito anche se potrebbe non essere previsto.  Queste regole sono identiche a quelle delle enumerazioni con ambito.  
  
 **Regole di cast**  
  
 Le costanti di enumerazione senza ambito possono essere convertite in modo implicito in `int`, ma un `int` non è mai convertibile in modo implicito in un valore enum.  Nell'esempio seguente viene mostrato cosa avviene se si tenta di assegnare a `hand` un valore che non sia `Suit`:  
  
```cpp  
int account_num = 135692;  
Suit hand;  
hand = account_num; // error C2440: '=' : cannot convert from 'int' to 'Suit'  
  
```  
  
 Un cast viene richiesto per convertire un `int` in un enumeratore con ambito o senza ambito.  È tuttavia possibile alzare di livello un enumeratore senza ambito in un Integer senza un cast.  
  
```cpp  
int account_num = Hearts; //OK if Hearts is in a unscoped enum  
```  
  
 L'uso di conversioni implicite in questo modo può generare effetti collaterali imprevisti.  Per eliminare gli errori di programmazione associati alle enumerazioni senza ambito, i valori delle enumerazioni con ambito sono fortemente tipizzati.  Gli enumeratori con ambito devono essere qualificati dal nome del tipo di enumerazione \(identificatore\) e non possono essere convertiti in modo implicito, come illustrato nell'esempio seguente:  
  
```cpp  
namespace ScopedEnumConversions  
{  
    enum class Suit { Diamonds, Hearts, Clubs, Spades };  
  
    void AttemptConversions()  
    {  
        Suit hand;   
        hand = Clubs; // error C2065: 'Clubs' : undeclared identifier  
        hand = Suit::Clubs; //Correct.  
        int account_num = 135692;  
        hand = account_num; // error C2440: '=' : cannot convert from 'int' to 'Suit'  
        hand = static_cast<Suit>(account_num); // OK, but probably a bug!!!  
  
        account_num = Suit::Hearts; // error C2440: '=' : cannot convert from 'Suit' to 'int'  
        account_num = static_cast<int>(Suit::Hearts); // OK  
}  
  
```  
  
 Notare che la riga `hand = account_num;` causa ancora l'errore che si verifica con le enumerazioni senza ambito, come illustrato in precedenza.  È consentita con un cast esplicito.  Tuttavia, con le enumerazioni con ambito, la conversione tentata nell'istruzione successiva, `account_num = Suit::Hearts;`, non è più consentita senza un cast esplicito.  
  
## Vedere anche  
 [Dichiarazioni di enumerazioni C](../c-language/c-enumeration-declarations.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)