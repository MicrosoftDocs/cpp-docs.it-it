---
title: "Valori letterali numerici, booleani e puntatore (C++) | Microsoft Docs"
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
  - "costanti, valori letterali"
  - "valori letterali"
  - "valori letterali, C++"
ms.assetid: 17c09fc3-3ad7-47e2-8b48-ba8ae994edc8
caps.latest.revision: 16
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Valori letterali numerici, booleani e puntatore (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un valore letterale è un elemento del programma che rappresenta direttamente un valore.  Questo articolo illustra i valori letterali di tipo Integer, a virgola mobile, booleano e puntatore.  Per informazioni sui valori letterali di tipo stringa e carattere, vedere [Valori letterali stringa e carattere \(C\+\+\)](../cpp/string-and-character-literals-cpp.md).  È anche possibile definire valori letterali personalizzati basati su una di queste categorie. Per altre informazioni, vedere [Valori letterali definiti dall'utente \(C\+\+\)](../cpp/user-defined-literals-cpp.md)  
  
 .  È possibile usare i valori letterali in molti contesti, ma in genere vengono usati per inizializzare le variabili denominate e passare argomenti alle funzioni:  
  
```  
const int answer = 42; // integer literal  
double d = sin(108.87);     //floating point literal passed to sin function  
bool b = true;              // boolean literal  
MyClass* mc = nullptr;      // pointer literal  
  
```  
  
 In alcuni casi è importante indicare al compilatore come interpretare un valore letterale o il tipo specifico da assegnare a tale valore.  Per ottenere questo risultato, aggiungere prefissi o suffissi al valore letterale.  Ad esempio, il prefisso 0x indica al compilatore di interpretare il numero che lo segue come valore esadecimale, ad esempio 0x35.  Il suffisso ULL indica al compilatore di considerare il valore come tipo `unsigned long long`, ad esempio 5894345ULL.  Per un elenco completo di prefissi e suffissi per ogni tipo di valore letterale, vedere le sezioni seguenti.  
  
## Sintassi  
  
## Valori letterali Integer  
 I valori letterali Integer iniziano con una cifra e non includono parti frazionarie o esponenti.  È possibile specificare valori letterali Integer in formato decimale, ottale o esadecimale.  Possono specificare tipi con o senza segno e tipi long o short.  
  
 Se non sono presenti prefissi o suffissi, il compilatore fornirà un tipo di valore letterale integrale `int` \(32 bit\), se idoneo, oppure il tipo di valore `long long` \(64 bit\).  
  
 Per specificare un valore letterale integrale decimale, iniziare la specifica con un numero diverso da zero.  Di seguito è riportato un esempio:  
  
```  
int i = 157;   // Decimal literal  
int j = 0198;       // Not a decimal number; erroneous octal literal  
int k = 0365;       // Leading zero specifies octal literal, not decimal  
int m = 36'000'000  // digit separators make large values more readable  
int   
```  
  
 Per specificare un valore letterale integrale ottale, iniziare la specifica con 0, seguito da una sequenza di cifre comprese nell'intervallo da 0 a 7.  Le cifre 8 e 9 costituiscono errore nella specifica di un valore letterale ottale.  Di seguito è riportato un esempio:  
  
```  
int i = 0377;   // Octal literal  
int j = 0397;        // Error: 9 is not an octal digit  
```  
  
 Per specificare un valore letterale integrale esadecimale, iniziare la specifica con `0x` o `0X` \(la "x" può essere maiuscola o minuscola\), seguito da una sequenza di cifre comprese nell'intervallo da `0` a `9` e da `a` \(o `A`\) a `f` \(o `F`\).  Le cifre esadecimali da `a` \(o `A`\) a `f` \(o `F`\) rappresentano i valori compresi nell'intervallo da 10 a 15.  Di seguito è riportato un esempio:  
  
```  
int i = 0x3fff;   // Hexadecimal literal  
int j = 0X3FFF;        // Equal to i  
```  
  
 Per specificare un tipo senza segno, usare il suffisso **u** o **U**.  Per specificare un tipo long, usare il suffisso **l** o **L**.  Per specificare un tipo integrale a 64 bit, usare il suffisso LL o ll.  Il suffisso i64 è ancora supportato ma è consigliabile evitarlo, poiché è specifico per Microsoft e non è portabile.  Di seguito è riportato un esempio:  
  
```  
unsigned val_1 = 328u;             // Unsigned value  
long val_2 = 0x7FFFFFL;                 // Long value specified   
                                        //  as hex literal  
unsigned long val_3 = 0776745ul;        // Unsigned long value  
auto val_4 = 108LL;                           // signed long long  
auto val_4 = 0x8000000000000000ULL << 16;     // unsigned long long   
```  
  
 **Separatori cifra**: è possibile utilizzare il carattere virgoletta singola \(apostrofo\) per separare i valori sul posto nei numeri grandi per renderne più semplice la lettura per gli utenti.  I separatori non hanno effetto sulla compilazione.  
  
```  
long long i = 24'847'458'121  
```  
  
## Valori letterali a virgola mobile  
 I valori letterali a virgola mobile specificano valori che devono avere una parte decimale.  Questi valori contengono i separatori decimali \(**.**\) e possono contenere gli esponenti.  
  
 I valori letterali a virgola mobile hanno una "mantissa" che specifica il valore del numero, un "esponente" che specifica la grandezza del numero e un suffisso facoltativo che specifica il tipo del valore letterale.  La mantissa è specificata come una sequenza di cifre seguita da un punto, seguito da una sequenza facoltativa di cifre che rappresentano la parte decimale del numero.  Di seguito è riportato un esempio:  
  
```  
18.46  
38.  
```  
  
 L'esponente, se presente, specifica la grandezza del numero come potenza di 10, come illustrato nell'esempio seguente:  
  
```  
18.46e0      // 18.46  
18.46e1           // 184.6  
```  
  
 L'esponente può essere specificato usando **e** o **E**, che hanno lo stesso significato, seguito da un segno facoltativo \(\+ o \-\) e da una sequenza di cifre.  Se un esponente è presente, il separatore decimale finale è inutile in numeri interi come `18E0`.  
  
 Per impostazione predefinita, i valori letterali a virgola mobile sono di tipo **double**.  Se si usano i suffissi **f** o **l** \(o **F** o **L**: il suffisso non rileva la distinzione tra maiuscole e minuscole\), il valore letterale può essere specificato come **float** o `long double`, rispettivamente.  
  
 Sebbene `long double` e **double** abbiano la stessa rappresentazione, non sono lo stesso tipo.  Ad esempio, è possibile eseguire l'overload di funzioni quali  
  
```  
void func( double );  
```  
  
 e  
  
```  
void func( long double );  
```  
  
## Valori letterali booleani  
 I valori letterali booleani sono `true` e `false`.  
  
## Valore letterale puntatore \(C \+ \+ 11\)  
 C\+\+ offre il valore letterale [nullptr](../cpp/nullptr.md) per specificare un puntatore a inizializzazione zero.  Nel codice portabile è consigliabile usare `nullptr` invece dello zero di tipo integrale o delle macro quali NULL.  
  
## Valori letterali binari \(C\+\+14\)  
 È possibile specificare un valore letterale binario mediante il prefisso `0B` o `0b`, seguito da una sequenza di 1 e 0:  
  
```  
  
auto x = 0B001101 ; // int  
auto y = 0b000001 ; // int  
```  
  
## Evitare di usare i valori letterali come "costanti magiche"  
 È possibile usare i valori letterali direttamente in espressioni e istruzioni, anche se non è sempre una buona norma di programmazione:  
  
```  
if (num < 100)  
    return "Success";  
  
```  
  
 Nell'esempio precedente potrebbe essere meglio usare una costante denominata che fornisce un significato chiaro, ad esempio "MAXIMUM\_ERROR\_THRESHOLD".  Se il valore restituito "Success" viene visualizzato dagli utenti finali, potrebbe essere consigliabile usare una costante di stringa denominata, che può essere archiviata in un'unica posizione in un file, da cui può essere localizzata in altre lingue.  L'uso delle costanti denominate aiuta gli altri utenti e lo sviluppatore a comprendere l'intento del codice.  
  
## Vedere anche  
 [Convenzioni lessicali](../cpp/lexical-conventions.md)   
 [Costanti Integer C\+\+](http://msdn.microsoft.com/it-it/1f3b58a4-8346-4533-ba6e-df26d76f8dcf)   
 [Valori letterali carattere C\+\+](http://msdn.microsoft.com/it-it/a7901c61-524d-47c6-beb6-d9dacc2e72ed)   
 [Costanti a virgola mobile C\+\+](http://msdn.microsoft.com/it-it/f6273f24-a876-4484-a7a2-e82275692ad3)   
 [Valori letterali stringa C\+\+](../cpp/string-and-character-literals-cpp.md)   
 [Valori letterali definiti dall'utente C\+\+](../cpp/user-defined-literals-cpp.md)