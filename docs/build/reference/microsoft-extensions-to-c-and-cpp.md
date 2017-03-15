---
title: "Estensioni Microsoft a C e C++ | Microsoft Docs"
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
  - "! operatore, estensione a C++"
  - "!= (operatore)"
  - "& (operatore), estensioni a C e C++"
  - "&& (operatore)"
  - "&= (operatore)"
  - "^ (operatore), estensioni a C e C++"
  - "^= (operatore), estensioni a C++"
  - "| (operatore), estensioni"
  - "|| (operatore)"
  - "|= (operatore)"
  - "~ (operatore), estensioni a C e C++"
  - "And (operatore), estensioni a C e C++"
  - "and_eq (operatore)"
  - "compl (metodo)"
  - "estensioni"
  - "estensioni, linguaggio C"
  - "iso646.h (intestazione)"
  - "estensioni Microsoft a C e C++"
  - "NOT (operatore)"
  - "not_eq (operatore)"
  - "Or (operatore), estensioni Microsoft a C e C++"
  - "or_eq (operatore)"
  - "Visual C, estensioni Microsoft"
  - "Visual C++, estensioni a C e C++"
  - "Xor (operatore), estensioni Microsoft a C e C++"
  - "xor_eq (operatore)"
ms.assetid: e811a74a-45ba-4c00-b206-2f2321b8689a
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Estensioni Microsoft a C e C++
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Visual C\+\+ estende gli standard ANSI C e ANSI C\+\+ come segue.  
  
## Parole chiave  
 Diverse parole chiave vengono aggiunte.  Nell'elenco in [Parole chiave C\+\+](../../cpp/keywords-cpp.md), le parole chiave con due caratteri di sottolineatura sono estensioni di Visual C\+\+.  
  
## Definizione out of class di membri integrali const static \(o enum\)  
 All'interno dello standard \(**\/Za**\) è necessario effettuare una definizione out\-of\-class per i membri dati, come mostrato qui:  
  
```  
class CMyClass  {  
   static const int max = 5;  
   int m_array[max];  
}  
...  
const int CMyClass::max;   // out of class definition  
```  
  
 In **\/Ze** la definizione out\-of\-class è facoltativa per membri dati static, const integral, e const enum.  Solo gli integrali e gli enum che sono static e const possono avere inizializzatori in una classe. L'espressione che inizializza deve essere un'espressione const.  
  
 Per evitare errori quando una definizione out\-of\-class viene fornita in un file di intestazione e il file di intestazione è incluso in più file di origine, utilizzare [selectany](../../cpp/selectany.md).  Di seguito è riportato un esempio.  
  
```  
__declspec(selectany) const int CMyClass::max = 5;  
```  
  
## Cast  
 Sia il compilatore C\+\+ sia il compilatore C supportano questi tipi di cast non ANSI:  
  
-   Cast non ANSI per produrre valori I.  Di seguito è riportato un esempio.  
  
    ```  
    char *p;  
    (( int * ) p )++;  
    ```  
  
    > [!NOTE]
    >  Questa estensione è disponibile solo nel linguaggio C.  È possibile utilizzare il seguente formato di standard ANSI C nel codice C\+\+ per modificare un puntatore come se fosse un puntatore a un tipo diverso.  
  
     L'esempio precedente potrebbe essere riscritto come segue per essere conforme allo standard ANSI C.  
  
    ```  
    p = ( char * )(( int * )p + 1 );  
    ```  
  
-   Cast non ANSI di un puntatore a funzione a un puntatore di dati.  Di seguito è riportato un esempio.  
  
    ```  
    int ( * pfunc ) ();   
    int *pdata;  
    pdata = ( int * ) pfunc;  
    ```  
  
     Per eseguire lo stesso cast conservando la compatibilità ANSI, è possibile eseguire il casting del puntatore a funzione a un `uintptr_t` prima di eseguirne il casting a un puntatore dati:  
  
    ```  
    pdata = ( int * ) (uintptr_t) pfunc;  
    ```  
  
## Elenchi di argomenti a lunghezza variabile  
 Sia il compilatore C\+\+ sia il compilatore C supportano l'utilizzo di un dichiaratore di funzione che specifica un numero variabile di argomenti, seguito da una definizione di funzione che fornisce invece un tipo:  
  
```  
void myfunc( int x, ... );  
void myfunc( int x, char * c )  
{ }  
```  
  
## Commenti a riga singola  
 Il compilatore C supporta commenti a riga singola, introdotti usando due caratteri di barra \(\/\/\):  
  
```  
// This is a single-line comment.  
```  
  
## Ambito  
 Il compilatore C supporta le seguenti funzionalità relative all'ambito.  
  
-   Ridefinizioni di voci extern come static:  
  
    ```  
    extern int clip();  
    static int clip()  
    {}  
    ```  
  
-   Utilizzo di ridefinizioni typedef benigna all'interno dello stesso ambito:  
  
    ```  
    typedef int INT;  
    typedef int INT;  
    ```  
  
-   I dichiaratori di funzione hanno un ambito di file:  
  
    ```  
    void func1()  
    {  
        extern int func2( double );  
    }  
    int main( void )  
    {  
        func2( 4 );    //  /Ze passes 4 as type double  
    }                  //  /Za passes 4 as type int  
    ```  
  
-   Utilizzare le variabili di block\-scope inizializzate usando espressioni non costanti:  
  
    ```  
    int clip( int );  
    int bar( int );  
    int main( void )  
    {  
        int array[2] = { clip( 2 ), bar( 4 ) };  
    }  
    int clip( int x )  
    {  
        return x;  
    }  
    int bar( int x )  
    {  
        return x;  
    }  
    ```  
  
## Dichiarazioni e definizioni di dati  
 Il compilatore C supporta le seguenti funzionalità di dichiarazione e definizione dei dati.  
  
-   Carattere misto e costanti stringa in un inizializzatore:  
  
    ```  
    char arr[5] = {'a', 'b', "cde"};  
    ```  
  
-   Campi di bit che hanno tipi di base diversi da **unsigned int** o **signed int**.  
  
-   Dichiaratori che non dispongono di un tipo:  
  
    ```  
    x;  
    int main( void )  
    {  
        x = 1;  
    }  
    ```  
  
-   Matrici non dimensionate come ultimo campo in strutture e unioni:  
  
    ```  
    struct zero  
    {  
        char *c;  
        int zarray[];  
    };  
    ```  
  
-   Strutture senza nome \(anonime\):  
  
    ```  
    struct  
    {  
        int i;  
        char *s;  
    };  
    ```  
  
-   Unioni senza nome \(anonime\):  
  
    ```  
    union  
    {  
        int i;  
        float fl;  
    };  
    ```  
  
-   Membri senza nome:  
  
    ```  
    struct s  
    {  
       unsigned int flag : 1;  
       unsigned int : 31;  
    }  
    ```  
  
## Funzioni a virgola mobile intrinseche  
 Il compilatore C\+\+ e il compilatore C supportando entrambi la generazione inline **x86 Specific \>** delle funzioni `atan`, `atan2`, `cos`, `exp`, `log`, `log10`, `sin`, `sqrt`, e `tan` **END x86 Specific** quando **\/Oi** è specificato.  Per il compilatore C, la conformità ANSI viene persa quando vengono utilizzate queste funzioni intrinseche in quanto non impostano la variabile `errno`.  
  
## Passaggio di un parametro del puntatore Non\-Const a una funzione che prevede un riferimento a un parametro del puntatore Const  
 Questa è un'estensione a C\+\+.  Questo codice viene compilato con **\/Ze**:  
  
```  
typedef   int   T;  
  
const T  acT = 9;      // A constant of type 'T'  
const T* pcT = &acT;   // A pointer to a constant of type 'T'  
  
void func2 ( const T*& rpcT )   // A reference to a pointer to a constant of type 'T'  
{  
   rpcT = pcT;  
}  
  
T*   pT;               // A pointer to a 'T'  
  
void func ()  
{  
   func2 ( pT );      // Should be an error, but isn't detected  
   *pT   = 7;         // Invalidly overwrites the constant 'acT'  
}  
```  
  
## ISO646.H non attivato  
 In **\/Ze** è necessario includere iso646.h se si desidera utilizzare formati di testo dei seguenti operatori:  
  
-   && \(and\)  
  
-   &\= \(and\_eq\)  
  
-   & \(bitand\)  
  
-   &#124; \(bitor\)  
  
-   ~ \(compl\)  
  
-   \! \(not\)  
  
-   \!\= \(not\_eq\)  
  
-   &#124;&#124; \(or\)  
  
-   &#124;\= \(or\_eq\)  
  
-   ^ \(xor\)  
  
-   ^\= \(xor\_eq\)  
  
## L'indirizzo della stringa letterale ha il tipo const char \[\], non const char \(\*\) \[\]  
 Nell'esempio riportato di seguito verrà restituito char const \(\*\)\[4\] in **\/Za** e char const \[4\] in **\/Ze**.  
  
```  
#include <stdio.h>  
#include <typeinfo>  
  
int main()  
{  
    printf_s("%s\n", typeid(&"abc").name());  
}  
```  
  
## Vedere anche  
 [\/Za, \/Ze \(Disabilita estensioni linguaggio\)](../../build/reference/za-ze-disable-language-extensions.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)