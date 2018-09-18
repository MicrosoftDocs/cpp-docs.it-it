---
title: Cenni preliminari sui dichiaratori | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- declarators, about declarators
ms.assetid: 0f2e2312-80bd-4154-8345-718bd9ed2173
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e04b92075e9871ad0cb9e753c472b445b731dbb0
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46020101"
---
# <a name="overview-of-declarators"></a>Cenni preliminari sui dichiaratori

I dichiaratori sono componenti di una dichiarazione che specifica i nomi di oggetti o funzioni. I dichiaratori specificano anche se l'oggetto denominato è un oggetto, un puntatore, un riferimento o una matrice o meno.  Mentre i dichiaratori non specificano il tipo di base, modificano tuttavia le informazioni sul tipo nel tipo di base per specificare i tipi derivati come puntatori, riferimenti e matrici.  Applicato alle funzioni, il dichiaratore funziona con l'identificatore di tipo per specificare completamente il tipo restituito di una funzione come oggetto, puntatore o riferimento. (Gli identificatori, descritti [dichiarazioni e definizioni](declarations-and-definitions-cpp.md), trasferiscono proprietà come tipo e classe di archiviazione. I modificatori, descritti in questa sezione e nella [modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md), modificano i dichiaratori.) Nella figura seguente viene illustrata una dichiarazione completa di `MyFunction` e vengono indicati i componenti della dichiarazione.

![I modificatori, identificatori e dichiaratori](../cpp/media/vc38qy1.gif "vc38QY1") identificatori, modificatori e dichiaratori

**Sezione specifica Microsoft**

Per la maggior parte, le parole chiave estese Microsoft possono essere usate come modificatori per formare i tipi derivati. Tali parole chiave non sono identificatori né dichiaratori. (Vedere [modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md).)

**Fine sezione specifica Microsoft**

I dichiaratori vengono visualizzati nella sintassi della dichiarazione dopo un elenco facoltativo di identificatori. Questi identificatori sono descritti in [dichiarazioni.](declarations-and-definitions-cpp.md) Una dichiarazione può contenere più di un dichiaratore, ma ogni dichiaratore dichiara un solo nome.

Nell'esempio di dichiarazione seguente viene illustrata la combinazione di identificatori e dichiaratori per formare una dichiarazione completa:

```cpp
const char *pch, ch;
```

Nella dichiarazione precedente, le parole chiave **const** e **char** costituiscono l'elenco degli identificatori. Vengono elencati due dichiaratori, ovvero `*pch` e `ch`.  Una dichiarazione che dichiara più entità è costituita da un identificatore di tipo e da un elenco di dichiaratori separato da virgole, terminato con un punto e virgola.

**Dichiaratori per oggetti semplici**

Il dichiaratore di un oggetto semplice come int o double è semplicemente il nome relativo, con parentesi facoltative.

`int i; // declarator is i`

`int (i); // declarator is (i)`

**Dichiaratori per puntatori, riferimenti e matrici**

Gli operatori puntatore inseriti davanti al nome indicano che l'oggetto diventa un puntatore o un riferimento.  Il <strong>\*</strong> operatore dichiara il nome come puntatore, mentre il **&** operatore lo dichiara come riferimento.

```cpp
int *i; // declarator is *i
int **i; // declarator is **i;
int &i = x; // declaratory is &i
```

Accodamento **const** oppure **volatile** al puntatore queste proprietà speciali.  L'uso di tali identificatori in un dichiaratore (anziché nell'identificatore di tipo) modificare le proprietà del puntatore e non dell'oggetto cui si fa riferimento:

```cpp
char *const cpc; // const pointer to char
const char *pcc; // pointer to const char
const char *const cpcc; // const pointer to const char
```

Ulteriori informazioni sono disponibili nel [puntatori const e volatile](../cpp/const-and-volatile-pointers.md).

Un puntatore a un membro di una classe o di uno struct viene dichiarato con l'identificatore di nome annidato appropriato:

```cpp
int X::* pIntMember;
int ::X::* pIntMember; // the initial :: specifies X is in global scope
char Outer::Inner::* pIntMember; // pointer to char in a nested class
```

Se un'espressione costante facoltativa dopo il nome è racchiusa tra parentesi, l'oggetto diventa una matrice.  Le parentesi successive dichiarano dimensioni aggiuntive della matrice.

```cpp
int i[5]; // array with five elements of type int numbered from 0 to 4
int i[]; // array of unknown size
char *s[4]; // array of pointers to char
int i[2][2]; // two dimensional array
```

**Dichiaratori per funzioni**

Le parentesi che contengono l'elenco di argomenti vengono usate dopo il nome per dichiarare una funzione.  L'esempio seguente viene dichiarata una funzione del tipo restituito **int** e da tre argomenti di tipo **int**.

```cpp
int f(int a, int b, int c);
```

I puntatori e i riferimenti alle funzioni vengono dichiarati facendo precedere l'operatore puntatore o riferimento al nome di funzione, come illustrato di seguito.  Le parentesi, in genere facoltative, sono necessarie per distinguere un puntatore a una funzione da una funzione il cui risultato è un puntatore:

```cpp
int (*pf)(int); // pointer to function returning int
int *f(int i); // function returning pointer to int
int (&pf)(int); // reference to function
```

I puntatori a funzioni membro sono distinti dagli identificatori di nome annidati:

```cpp
int (X::* pmf)(); // pointer to member function of X returning int
int* (X::* pmf)(); // pointer to member function returning pointer to int
```

Vedere anche [puntatori a membri](../cpp/pointers-to-members.md).

**Funzioni e oggetti nella stessa dichiarazione**

Le funzioni e gli oggetti possono essere dichiarati nella stessa dichiarazione nel modo seguente:

```cpp
int i, *j, f(int k);  // int, pointer to int, function returning int
```

In alcune circostanze la sintassi può essere fuorviante.  La dichiarazione seguente

```cpp
int* i, f(int k);  // pointer to int, function returning int (not int*)
```

potrebbe essere simile alla dichiarazione di un **int** puntatore e una funzione che restituisce `int*`, ma non ancora.  Infatti, il \* fa parte del dichiaratore per `i`, non fa parte del dichiaratore per `f`.

**Semplificazione della sintassi dei dichiaratori con typedef**

Una tecnica migliore, tuttavia, consiste nell'usare un **typedef** o una combinazione di parentesi e la **typedef** (parola chiave). Si consideri la dichiarazione di una matrice di puntatori a funzioni:

```cpp
//  Function returning type int that takes one
//   argument of type char *.
typedef int (*PIFN)( char * );
//  Declare an array of 7 pointers to functions
//   returning int and taking one argument of type
//   char *.
PIFN pifnDispatchArray[7];
```

La dichiarazione equivalente può essere scritta senza i **typedef** dichiarazione, ma è così complessa che la possibilità di errori supera i vantaggi:

```cpp
int ( *pifnDispatchArray[7] )( char * );
```

Per altre informazioni su typedef, vedere [alias e typedef](aliases-and-typedefs-cpp.md).

Puntatori, riferimenti e matrici di un solo tipo di base possono essere combinati in una singola dichiarazione (separati da virgole) come illustrato di seguito:

```cpp
int a, *b, c[5], **d, &e=a;
```

**Sintassi dei dichiaratori più complessa**

- I dichiaratori di puntatori, riferimenti, matrici e funzioni possono essere combinati per specificare oggetti diversi, quali matrici di puntatori a funzioni, puntatori a matrici e così via.

- La grammatica ricorsiva seguente descrive completamente la sintassi di dichiaratori di puntatore.

- Un `declarator` viene definito come uno degli elementi seguenti:

  - identifier 
  - nome completo 
  - dichiaratore (elenco di argomenti) [cv-qualfiers] [eccezione-spec]
  - dichiaratore di [[espressione costante]]
  - dichiaratore di puntatore-operatore 
  - (dichiaratore)

- e *operatore puntatore* è uno di:

  - \* [elementi cv-Qualifier]
  - & [elementi cv-Qualifier]:: identificatore di nome annidati \* [elementi cv-Qualifier]

Poiché un dichiaratore può contenere altri dichiaratori, è possibile costruire i tipi derivati più complessi come matrici di puntatori e funzioni che restituiscono matrici di puntatori a funzione, usando le regole precedenti.  Per ogni passaggio della costruzione, iniziare con l'identificatore che rappresenta il tipo di dati di base e applicare la regola di sintassi precedente con l'espressione precedente come `declarator`.  L'ordine in cui si applicano le regole di sintassi deve essere l'opposto della modalità con cui l'espressione viene dichiarata in inglese.  Se applica il *operatore puntatore* regola di sintassi in un'espressione di matrice o una funzione, utilizzare le parentesi, se si desidera che un puntatore alla matrice o funzione, come l'ultima riga nella tabella seguente.

Nell'esempio seguente viene illustrata la costruzione di "puntatore a una matrice di 10 puntatori a int".

|Espressione verbale|Dichiaratore|Regola di sintassi applicata|
|-----------------------|----------------|-------------------------|
||`i`|1|
|puntatore/i a|`*i`|5|
|matrice di 10|`(*i)[10]`|4|
|puntatore a|`*((*i)[10])`|6 e quindi 5|

Quando vengono usati più modificatori di puntatore, di riferimento, di matrice o di funzione, i dichiaratori possono diventare piuttosto complessi.  L'argomento [interpretazione dei dichiaratori più complessi](../c-language/interpreting-more-complex-declarators.md) viene descritto come leggere sintassi dei dichiaratori più complessa.  L'argomento è applicabile a C e C++, anche se in C++, in un punto qualsiasi di \* viene usato per indicare un puntatore, un nome completo come MyClass::\* può essere utilizzato per specificare un puntatore a un membro di una classe.