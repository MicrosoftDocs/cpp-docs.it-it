---
title: Tipo restituito | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- function return types
- return values [C++], function procedures
- function return types, syntax
- return values [C++]
- data types [C++], function return types
- return keyword [C++], function return types
- functions [C++], return types
ms.assetid: 3e5b8a97-b341-48c5-8be8-8986980ef586
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 4faa6143342d8765fce460a653090152c0b10417
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="return-type"></a>Tipo restituito
Il tipo restituito di una funzione determina la dimensione e il tipo del valore restituito dalla funzione e corrisponde all'identificatore di tipo nella sintassi seguente:  
  
## <a name="syntax"></a>Sintassi  
 *function-definition*:  
 *declaration-specifiers* opt*attribute-seq* opt*declarator declaration-list* opt*compound-statement*  
  
 /\* *attribute-seq* è specifico di Microsoft */  
  
 *declaration-specifiers*:  
 *storage-class-specifier declaration-specifiers* opt  
  
 *type-specifier declaration-specifiers* opt  
  
 *type-qualifier declaration-specifiers* opt  
  
 *type-specifier*:  
 **void**  
  
 **char**  
  
 **short**  
  
 **int**  
  
 **long**  
  
 **float**  
  
 **double**  
  
 **signed**  
  
 **unsigned**  
  
 *struct-or-union-specifier*  
  
 *enum-specifier*  
  
 *typedef-name*  
  
 *type-specifier* può specificare qualsiasi struttura o tipo di unione fondamentale. Se non si include *type-specifier*, viene presupposto il tipo restituito `int`.  
  
 Il tipo restituito fornito nella definizione di funzione deve corrispondere al tipo restituito nelle dichiarazioni della funzione in altre parti del programma. Una funzione restituisce un valore quando un'istruzione `return` che contiene un'espressione viene eseguita. L'espressione viene valutata, convertita in un tipo di valore restituito se necessario e viene restituita al punto in cui la funzione è stata chiamata. Se una funzione è dichiarata con il tipo restituito `void`, un'istruzione return che contiene un'espressione genera un avviso e l'espressione non viene valutata.  
  
 Negli esempi seguenti vengono illustrati i valori restituiti dalla funzione.  
  
```  
typedef struct    
{  
    char name[20];  
    int id;  
    long class;  
} STUDENT;  
  
/* Return type is STUDENT: */  
  
STUDENT sortstu( STUDENT a, STUDENT b )  
{  
    return ( (a.id < b.id) ? a : b );  
}  
```  
  
 Viene definito il tipo `STUDENT` con una dichiarazione `typedef` e viene definita la funzione `sortstu` per avere il tipo restituito `STUDENT`. La funzione selezionata e restituisce uno dei propri argomenti struttura. Nelle successive chiamate alla funzione, il compilatore controlla per verificare che i tipi di argomento siano `STUDENT`.  
  
> [!NOTE]
>  L'efficienza risulta miglioratala passando di puntatori alla struttura, piuttosto che l'intera struttura.  
  
```  
char *smallstr( char s1[], char s2[] )  
{  
    int i;  
  
    i = 0;  
    while ( s1[i] != '\0' && s2[i] != '\0' )  
        i++;  
    if ( s1[i] == '\0' )  
        return ( s1 );  
    else  
        return ( s2 );  
}  
```  
  
 Nell'esempio seguente viene definita una funzione che restituisce un puntatore a una matrice di caratteri. La funzione accetta due matrici di caratteri (stringhe) come argomenti e restituisce un puntatore alla più breve delle due stringhe. Un puntatore a un elemento punta al primo degli elementi della matrice e ha il suo tipo; pertanto, il tipo restituito della funzione è un puntatore al tipo `char`.  
  
 Non è necessario dichiarare le funzioni con il tipo restituito `int` prima di chiamarle, sebbene i prototipi siano consigliati in modo da consentire il controllo del tipo corretto per gli argomenti e i valori restituiti.  
  
## <a name="see-also"></a>Vedere anche  
 [Definizioni di funzioni C](../c-language/c-function-definitions.md)