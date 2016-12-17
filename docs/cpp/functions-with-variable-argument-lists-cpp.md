---
title: "Funzioni con elenchi di argomenti variabili (C++) | Microsoft Docs"
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
  - "elenchi di argomenti [C++], numero variabile di"
  - "argomenti [C++], numero variabile di"
  - "dichiaratori, funzioni"
  - "dichiarazione di funzioni, variabili"
  - "chiamate di funzione, numero variabile di argomenti"
  - "elenchi di argomenti variabili"
ms.assetid: 27c2f83a-21dd-44c6-913c-2834cb944703
caps.latest.revision: 16
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzioni con elenchi di argomenti variabili (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le dichiarazioni di funzione, in cui l'ultimo membro sono i puntini di sospensione \(...\), possono accettare un numero variabile di argomenti.  In questi casi, C\+\+ fornisce il controllo di tipo solo per gli argomenti dichiarati esplicitamente.  È possibile usare elenchi di argomenti variabili quando è necessario rendere una funzione così generale che anche il numero e i tipi di argomenti possono variare.  La famiglia di funzioni è un esempio delle funzioni che usano elenchi di argomenti variabili.`printf`*argument\-declaration\-list*  
  
## Funzioni con elenchi di argomenti variabili  
 Per accedere agli argomenti dopo quelli dichiarati, usare le macro contenute nel file di inclusione standard STDARG.H come descritto più avanti.  
  
 **Sezione specifica Microsoft**  
  
 Microsoft C\+\+ consente di specificare i puntini di sospensione come argomento se i puntini di sospensione sono l'ultimo argomento e sono preceduti da una virgola.  Di conseguenza, la dichiarazione `int Func( int i, ... );` è valida, ma `int Func( int i ... );` non lo è.  
  
 **Fine sezione specifica Microsoft**  
  
 La dichiarazione di una funzione che accetta un numero variabile di argomenti richiede almeno un argomento segnaposto, anche se non viene usato.  Se questo argomento segnaposto non viene fornito, non è possibile accedere agli argomenti restanti.  
  
 Quando gli argomenti di tipo `char` vengono passati come argomenti variabili, vengono convertiti nel tipo `int`.  Analogamente, quando gli argomenti di tipo **float** vengono passati come argomenti variabili, vengono convertiti nel tipo **double**.  Gli argomenti di altri tipi sono soggetti alle consuete promozioni a virgola mobile e integrali.  Vedere [Promozioni integrali](../misc/integral-promotions.md) per altre informazioni.  
  
 Le funzioni che richiedono elenchi di variabili vengono dichiarate usando i puntini di sospensione \(...\) nell'elenco di argomenti.  Usare i tipi e le macro descritti nel file di inclusione STDARG.H per accedere agli argomenti passati da un elenco di variabili.  Per altre informazioni su queste macro, vedere [va\_arg, va\_copy, va\_end, va\_start](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md).  nella documentazione per la libreria di runtime C.  
  
 L'esempio seguente illustra il modo in cui le macro possono essere usate insieme al tipo \(dichiarato in STDARG.H\): `va_list` `va_end` `va_arg` `va_start`  
  
```  
// variable_argument_lists.cpp  
#include <stdio.h>  
#include <stdarg.h>  
  
//  Declaration, but not definition, of ShowVar.  
void ShowVar( char *szTypes, ... );  
int main() {  
   ShowVar( "fcsi", 32.4f, 'a', "Test string", 4 );  
}  
  
//  ShowVar takes a format string of the form  
//   "ifcs", where each character specifies the  
//   type of the argument in that position.  
//  
//  i = int  
//  f = float  
//  c = char  
//  s = string (char *)  
//  
//  Following the format specification is a variable   
//  list of arguments. Each argument corresponds to   
//  a format character in the format string to which   
// the szTypes parameter points   
void ShowVar( char *szTypes, ... ) {  
   va_list vl;  
   int i;  
  
   //  szTypes is the last argument specified; you must access   
   //  all others using the variable-argument macros.  
   va_start( vl, szTypes );  
  
   // Step through the list.  
   for( i = 0; szTypes[i] != '\0'; ++i ) {  
      union Printable_t {  
         int     i;  
         float   f;  
         char    c;  
         char   *s;  
      } Printable;  
  
      switch( szTypes[i] ) {   // Type to expect.  
         case 'i':  
            Printable.i = va_arg( vl, int );  
            printf_s( "%i\n", Printable.i );  
         break;  
  
         case 'f':  
             Printable.f = va_arg( vl, double );  
             printf_s( "%f\n", Printable.f );  
         break;  
  
         case 'c':  
             Printable.c = va_arg( vl, char );  
             printf_s( "%c\n", Printable.c );  
         break;  
  
         case 's':  
             Printable.s = va_arg( vl, char * );  
             printf_s( "%s\n", Printable.s );  
         break;  
  
         default:  
         break;  
      }  
   }  
   va_end( vl );  
}  
//Output:   
// 32.400002  
// a  
// Test string  
```  
  
 Nell'esempio precedente vengono illustrati questi concetti importanti:  
  
1.  È necessario stabilire un marcatore di elenco come una variabile di tipo `va_list` prima che venga eseguito l'accesso a qualsiasi argomento di variabile.  Nell'esempio precedente il marcatore viene denominato `vl`.  
  
2.  Ai singoli argomenti si accede usando la macro `va_arg`.  È necessario indicare alla macro `va_arg` il tipo di argomento da recuperare in modo che sia possibile trasferire il numero corretto di byte dallo stack.  Se si specifica un tipo non corretto di dimensione diversa da quella fornita dal programma chiamante a `va_arg`, i risultati sono imprevedibili.  
  
3.  È necessario eseguire esplicitamente il cast del risultato ottenuto al tipo desiderato usando la macro `va_arg`.  
  
 È necessario chiamare la macro per terminare l'elaborazione dell'argomento della variabile.`va_end`