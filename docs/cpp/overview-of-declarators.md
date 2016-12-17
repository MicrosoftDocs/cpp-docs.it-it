---
title: "Cenni preliminari sui dichiaratori | Microsoft Docs"
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
  - "dichiaratori, informazioni sui dichiaratori"
ms.assetid: 0f2e2312-80bd-4154-8345-718bd9ed2173
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Cenni preliminari sui dichiaratori
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I dichiaratori sono componenti di una dichiarazione che specifica i nomi di oggetti o funzioni. I dichiaratori specificano anche se l'oggetto denominato è un oggetto, un puntatore, un riferimento o una matrice o meno.  Mentre i dichiaratori non specificano il tipo di base, modificano tuttavia le informazioni sul tipo nel tipo di base per specificare i tipi derivati come puntatori, riferimenti e matrici.  Applicato alle funzioni, il dichiaratore funziona con l'identificatore di tipo per specificare completamente il tipo restituito di una funzione come oggetto, puntatore o riferimento. (Gli identificatori, descritti in [Dichiarazioni](../misc/declarations.md), trasferiscono proprietà come tipo e classe di archiviazione. Modificatori, descritti in questa sezione e in [modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md), modificare i dichiaratori.) Nella figura seguente viene illustrata una dichiarazione completa di `MyFunction` e vengono indicati i componenti della dichiarazione.  
  
 ![Modificatori, identificatori e dichiaratori](../cpp/media/vc38qy1.png "vc38QY1")  
Identificatori, modificatori e dichiaratori  
  
 **Sezione specifica Microsoft**  
  
 Per la maggior parte, le parole chiave estese Microsoft possono essere usate come modificatori per formare i tipi derivati. Tali parole chiave non sono identificatori né dichiaratori. (Vedere [Modificatori Microsoft-Specific](../cpp/microsoft-specific-modifiers.md).)  
  
 **FINE sezione specifica Microsoft**  
  
 I dichiaratori vengono visualizzati nella sintassi della dichiarazione dopo un elenco facoltativo di identificatori. Questi identificatori sono descritti in [dichiarazioni.](../misc/declarations.md) Una dichiarazione può contenere più di un dichiaratore, ma ogni dichiaratore dichiara un solo nome.  
  
 Nell'esempio di dichiarazione seguente viene illustrata la combinazione di identificatori e dichiaratori per formare una dichiarazione completa:  
  
```  
const char *pch, ch;  
```  
  
 Nella dichiarazione precedente, le parole chiave **const** e `char` costituiscono l'elenco di identificatori. Vengono elencati due dichiaratori, ovvero `*pch` e `ch`.  Una dichiarazione che dichiara più entità è costituita da un identificatore di tipo e da un elenco di dichiaratori separato da virgole, terminato con un punto e virgola.  
  
 **Dichiaratori per oggetti semplici**  
  
 Il dichiaratore di un oggetto semplice come int o double è semplicemente il nome relativo, con parentesi facoltative.  
  
 `int i; // declarator is i`  
  
 `int (i); // declarator is (i)`  
  
 **Dichiaratori per puntatori, riferimenti e matrici**  
  
 Gli operatori puntatore inseriti davanti al nome indicano che l'oggetto diventa un puntatore o un riferimento.  Il **\*** operatore dichiara il nome come puntatore, mentre il **&** operatore dichiara come riferimento.  
  
```  
int *i; // declarator is *i  
int **i; // declarator is **i;  
int &i = x; // declaratory is &i  
```  
  
 Se si aggiunge `const` o `volatile`, al puntatore vengono assegnate queste proprietà speciali.  L'uso di tali identificatori in un dichiaratore (anziché nell'identificatore di tipo) modificare le proprietà del puntatore e non dell'oggetto cui si fa riferimento:  
  
```  
char *const cpc; // const pointer to char   
const char *pcc; // pointer to const char   
const char *const cpcc; // const pointer to const char  
```  
  
 Ulteriori informazioni sono disponibili [puntatori const e volatile](../cpp/const-and-volatile-pointers.md).  
  
 Un puntatore a un membro di una classe o di uno struct viene dichiarato con l'identificatore di nome annidato appropriato:  
  
```  
int X::* pIntMember;   
int ::X::* pIntMember; // the initial :: specifies X is in global scope  
char Outer::Inner::* pIntMember; // pointer to char in a nested class  
```  
  
 Se un'espressione costante facoltativa dopo il nome è racchiusa tra parentesi, l'oggetto diventa una matrice.  Le parentesi successive dichiarano dimensioni aggiuntive della matrice.  
  
```  
int i[5]; // array with five elements of type int numbered from 0 to 4  
int i[]; // array of unknown size  
char *s[4]; // array of pointers to char  
int i[2][2]; // two dimensional array  
```  
  
 **Dichiaratori per funzioni**  
  
 Le parentesi che contengono l'elenco di argomenti vengono usate dopo il nome per dichiarare una funzione.  Di seguito viene dichiarata una funzione con tipo restituito `int` e tre argomenti di tipo `int`.  
  
```  
int f(int a, int b, int c);  
```  
  
 Per informazioni sugli elenchi di argomenti, vedere [dichiarazioni di funzione](http://msdn.microsoft.com/it-it/3f9b4e14-60d2-47c1-acd8-4fa8fc988be7).  
  
 I puntatori e i riferimenti alle funzioni vengono dichiarati facendo precedere l'operatore puntatore o riferimento al nome di funzione, come illustrato di seguito.  Le parentesi, in genere facoltative, sono necessarie per distinguere un puntatore a una funzione da una funzione il cui risultato è un puntatore:  
  
```  
int (*pf)(int); // pointer to function returning int  
int *f(int i); // function returning pointer to int  
int (&pf)(int); // reference to function   
```  
  
 I puntatori a funzioni membro sono distinti dagli identificatori di nome annidati:  
  
```  
int (X::* pmf)(); // pointer to member function of X returning int  
int* (X::* pmf)(); // pointer to member function returning pointer to int  
```  
  
 Vedere anche [i puntatori ai membri](../cpp/pointers-to-members.md).  
  
 **Funzioni e oggetti nella stessa dichiarazione**  
  
 Le funzioni e gli oggetti possono essere dichiarati nella stessa dichiarazione nel modo seguente:  
  
```  
int i, *j, f(int k);  // int, pointer to int, function returning int  
```  
  
 In alcune circostanze la sintassi può essere fuorviante.  La dichiarazione seguente  
  
```  
int* i, f(int k);  // pointer to int, function returning int (not int*)  
```  
  
 può sembrare la dichiarazione di un puntatore `int` e di una funzione che restituisce `int*`, ma non lo è.  Ciò accade perché * fa parte del dichiaratore per `i`, ma non fa parte del dichiaratore per `f`.  
  
 **Semplificazione della sintassi dei dichiaratori con typedef**  
  
 Una tecnica migliore, tuttavia, è quella di usare `typedef` o una combinazione di parentesi e la parola chiave `typedef`. Si consideri la dichiarazione di una matrice di puntatori a funzioni:  
  
```  
//  Function returning type int that takes one   
//   argument of type char *.  
typedef int (*PIFN)( char * );  
//  Declare an array of 7 pointers to functions   
//   returning int and taking one argument of type   
//   char *.  
PIFN pifnDispatchArray[7];  
```  
  
 La dichiarazione equivalente può essere scritta senza la dichiarazione `typedef`, ma è così complessa che la possibilità di errore supera i vantaggi:  
  
```  
int ( *pifnDispatchArray[7] )( char * );  
```  
  
 Per ulteriori informazioni su typedef, vedere [identificatore typedef](http://msdn.microsoft.com/it-it/cc96cf26-ba93-4179-951e-695d1f5fdcf1).  
  
 Puntatori, riferimenti e matrici di un solo tipo di base possono essere combinati in una singola dichiarazione (separati da virgole) come illustrato di seguito:  
  
```  
int a, *b, c[5], **d, &e=a;  
```  
  
 **Sintassi di dichiaratori più complessi**  
  
-   I dichiaratori di puntatori, riferimenti, matrici e funzioni possono essere combinati per specificare oggetti diversi, quali matrici di puntatori a funzioni, puntatori a matrici e così via.  
  
-   La grammatica ricorsiva seguente descrive completamente la sintassi di dichiaratori di puntatore.  
  
-   Un `declarator` viene definito come uno degli elementi seguenti:  
  
```  
1. identifier   
2. qualified-name   
3. declarator ( argument-list ) [cv-qualfiers] [exception-spec]  
4. declarator [ [ constant-expression ] ]   
  
5. pointer-operatordeclarator   
6. ( declarator )  
```  
  
-   e *operatore puntatore* è uno di:  
  
```  
  
      * [cv-qualifiers]  
& [cv-qualifiers]  
::nested-name-specifier * [cv-qualfiers]  
```  
  
 Poiché un dichiaratore può contenere altri dichiaratori, è possibile costruire i tipi derivati più complessi come matrici di puntatori e funzioni che restituiscono matrici di puntatori a funzione, usando le regole precedenti.  Per ogni passaggio della costruzione, iniziare con l'identificatore che rappresenta il tipo di dati di base e applicare la regola di sintassi precedente con l'espressione precedente come `declarator`.  L'ordine in cui si applicano le regole di sintassi deve essere l'opposto della modalità con cui l'espressione viene dichiarata in inglese.  Se l'applicazione di *operatore puntatore* regola di sintassi in un'espressione di matrice o una funzione, utilizzare le parentesi, se si desidera che un puntatore alla matrice o alla funzione, come nell'ultima riga nella tabella seguente.  
  
 Nell'esempio seguente viene illustrata la costruzione di "puntatore a una matrice di 10 puntatori a int".  
  
|Espressione verbale|Dichiaratore|Regola di sintassi applicata|  
|-----------------------|----------------|-------------------------|  
||`i`|1|  
|puntatore/i a|`*i`|5|  
|matrice di 10|`(*i)[10]`|4|  
|puntatore a|`*((*i)[10])`|6 e quindi 5|  
  
 Quando vengono usati più modificatori di puntatore, di riferimento, di matrice o di funzione, i dichiaratori possono diventare piuttosto complessi.  L'argomento [interpretazione dei dichiaratori più complessi](../c-language/interpreting-more-complex-declarators.md) viene descritto come leggere la sintassi di dichiaratori più complessi.  L'argomento è applicabile a C e C++, sebbene in C++, in un punto qualsiasi di * viene utilizzato per indicare un puntatore, un nome completo come MyClass::\* può essere utilizzato per specificare un puntatore a un membro di una classe.