---
title: Estensioni Microsoft a C e C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- or_eq operator
- ~ operator, extensions to C/C++
- '& operator, extensions to C/C++'
- '&= operator'
- iso646.h header
- Xor operator, Microsoft extensions to C/C++
- '!= operator'
- '! operator, extension to C++'
- Or operator, Microsoft extensions to C/C++
- ^ operator, extensions to C/C++
- ^= operator, C++ extensions
- xor_eq operator
- and_eq operator
- Microsoft extensions to C/C++
- '|= operator'
- '|| operator'
- And operator, extensions to C/C++
- NOT operator
- '&& operator'
- extensions, C language
- Visual C++, extensions to C/C++
- '| operator, extensions'
- not_eq operator
- Visual C, Microsoft extensions
- extensions
- compl method
ms.assetid: e811a74a-45ba-4c00-b206-2f2321b8689a
caps.latest.revision: "18"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d8453209a92b8f7485a9e7f575fb8810196d27fb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="microsoft-extensions-to-c-and-c"></a>Estensioni Microsoft a C e C++
Visual C++ estende gli standard ANSI C e ANSI C++ come segue.  
  
## <a name="keywords"></a>Parole chiave  
 Sono state aggiunte diverse parole chiave. Nell'elenco [parole chiave](../../cpp/keywords-cpp.md), le parole chiave che dispone di due caratteri di sottolineatura iniziali sono estensioni di Visual C++.  
  
## <a name="out-of-class-definition-of-static-const-integral-or-enum-members"></a>I membri di definizione della classe dell'integrale const statico (o enumerazione)  
 Nello standard (**/Za**), è necessario creare una definizione out-of-class per i membri di dati, come illustrato di seguito:  
  
```  
  
      class CMyClass  {  
   static const int max = 5;  
   int m_array[max];  
}  
...  
const int CMyClass::max;   // out of class definition  
```  
  
 In **/Ze**, la definizione out-of-class è facoltativa per i membri dati statici, const integral e const enum. Solo gli integrali e gli enum che sono static e const possono disporre di inizializzatori in una classe. L'espressione che inizializza deve essere un'espressione const.  
  
 Per evitare errori quando una definizione out-of-class viene specificato in un'intestazione di file e il file di intestazione è inclusa in più file di origine, utilizzare [selectany](../../cpp/selectany.md). Ad esempio:  
  
```  
__declspec(selectany) const int CMyClass::max = 5;  
```  
  
## <a name="casts"></a>Cast  
 Il compilatore C++ e il compilatore C supportano i seguenti tipi di cast non ANSI:  
  
-   Cast non ANSI per produrre I-value. Ad esempio:  
  
    ```  
    char *p;  
    (( int * ) p )++;  
    ```  
  
    > [!NOTE]
    >  Questa estensione è disponibile solo nel linguaggio C. È possibile utilizzare il seguente formato dello standard ANSI C nel codice C++ per modificare un puntatore come se fosse un puntatore per un tipo diverso.  
  
     L'esempio precedente potrebbe essere riscritto come segue per essere conforme allo standard ANSI C.  
  
    ```  
    p = ( char * )(( int * )p + 1 );  
    ```  
  
-   Cast non ANSI di un puntatore a funzione a un puntatore di dati. Ad esempio:  
  
    ```  
    int ( * pfunc ) ();   
    int *pdata;  
    pdata = ( int * ) pfunc;  
    ```  
  
     Per eseguire lo stesso cast conservando la compatibilità ANSI, è possibile eseguire il casting del puntatore a funzione a un `uintptr_t` prima di eseguirne il casting a un puntatore dati:  
  
    ```  
    pdata = ( int * ) (uintptr_t) pfunc;  
    ```  
  
## <a name="variable-length-argument-lists"></a>Elenchi di argomenti a lunghezza variabile  
 Il compilatore C++ e il compilatore C supportano l'utilizzo di un dichiaratore di funzione che specifica un numero variabile di argomenti, seguito da una definizione di funzione che fornisce un tipo:  
  
```  
void myfunc( int x, ... );  
void myfunc( int x, char * c )  
{ }  
```  
  
## <a name="single-line-comments"></a>Commenti a riga singola  
 Il compilatore C supporta commenti a riga singola, introdotti usando due caratteri di barra (//):  
  
```  
// This is a single-line comment.  
```  
  
## <a name="scope"></a>Ambito  
 Il compilatore C supporta le seguenti funzionalità relative all'ambito.  
  
-   Ridefinizioni di voci extern come statico:  
  
    ```  
    extern int clip();  
    static int clip()  
    {}  
    ```  
  
-   Utilizzo di ridefinizioni typedef benigna nello stesso ambito:  
  
    ```  
    typedef int INT;  
    typedef int INT;  
    ```  
  
-   Dichiaratori di funzione hanno ambito file:  
  
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
  
-   Utilizzare le variabili di block-scope inizializzate usando espressioni non costanti:  
  
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
  
## <a name="data-declarations-and-definitions"></a>Le definizioni e dichiarazioni di dati  
 Il compilatore C supporta le seguenti funzionalità di dichiarazione e definizione dei dati.  
  
-   Costanti carattere e stringa miste in un inizializzatore di:  
  
    ```  
    char arr[5] = {'a', 'b', "cde"};  
    ```  
  
-   Campi di bit che hanno tipi di base diverso da **int senza segno** o **tipo signed int**.  
  
-   Dichiaratori che non dispongono di un tipo:  
  
    ```  
    x;  
    int main( void )  
    {  
        x = 1;  
    }  
    ```  
  
-   Matrici non dimensionate come l'ultimo campo di strutture e unioni:  
  
    ```  
    struct zero  
    {  
        char *c;  
        int zarray[];  
    };  
    ```  
  
-   Strutture (anonime) senza nome:  
  
    ```  
    struct  
    {  
        int i;  
        char *s;  
    };  
    ```  
  
-   Unioni (anonime) senza nome:  
  
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
  
## <a name="intrinsic-floating-point-functions"></a>Funzioni a virgola mobile intrinseche  
 Il compilatore C++ e il compilatore C supporta la generazione inline **x86 specifico >** del `atan`, `atan2`, `cos`, `exp`, `log`, `log10`, `sin`, `sqrt`, e `tan` funzioni **x86 di fine specifico** quando **/Oi** specificato. Per il compilatore C, la conformità ANSI viene persa quando vengono utilizzate queste funzioni intrinseche in quanto non impostano la variabile `errno`.  
  
## <a name="passing-a-non-const-pointer-parameter-to-a-function-that-expects-a-reference-to-a-const-pointer-parameter"></a>Passando un parametro del puntatore Non-Const a una funzione che prevede un riferimento a un parametro del puntatore Const  
 Si tratta di un'estensione a C++. Questo codice viene compilato con **/Ze**:  
  
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
  
## <a name="iso646h-not-enabled"></a>ISO646. H non abilitato  
 In **/Ze**, è necessario includere iso646. h, se si desidera utilizzare i formati di testo degli operatori seguenti:  
  
-   && (and)  
  
-   &= (and_eq)  
  
-   & (bitand)  
  
-   &#124; (bitor)  
  
-   ~ (compl)  
  
-   ! (not)  
  
-   ! = (not_eq)  
  
-   &#124; &#124; (o)  
  
-   &#124; = (or_eq)  
  
-   ^ (xor)  
  
-   ^ = (xor_eq)  
  
## <a name="address-of-string-literal-has-type-const-char--not-const-char--"></a>L'indirizzo della stringa letterale ha il tipo const char [], non const char (*) []  
 Nell'esempio seguente genera char const (\*) [4] in **/Za**, char const [4] in **/Ze**.  
  
```  
#include <stdio.h>  
#include <typeinfo>  
  
int main()  
{  
    printf_s("%s\n", typeid(&"abc").name());  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [/Za, /Ze (Disabilita estensioni linguaggio)](../../build/reference/za-ze-disable-language-extensions.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)