---
title: Dichiarazioni union | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- unions
- union keyword [C], declarations
- variant records
ms.assetid: 978c6165-e0ae-4196-afa7-6d94e24f62f7
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: b68a195bc148dc56f3e5c53cffd91f4d4417ace2
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="union-declarations"></a>Dichiarazioni di unione
Una "Dichiarazione di unione" specifica un set di valori variabili e, facoltativamente, un tag per assegnare un nome all'unione. I valori variabili sono denominati "membri" dell'unione e possono includere diversi tipi. Le unioni sono simili ai "record variabili" presenti in altri linguaggi.  
  
## <a name="syntax"></a>Sintassi  
 *struct-or-union-specifier*:  
 *struct-or-union identifier* opt**{** *struct-declaration-list* **}**  
  
 *struct-or-union identifier*  
  
 *struct-or-union*:  
 **struct**  
  
 **union**  
  
 *struct-declaration-list*:  
 *struct-declaration*  
  
 *struct-declaration-list struct-declaration*  
  
 Il contenuto dell'unione viene definito come  
  
 *struct-declaration*:  
 *specifier-qualifier-list struct-declarator-list* **;**  
  
 *specifier-qualifier-list*:  
 *type-specifier specifier-qualifier-list* opt  
  
 *type-qualifier specifier-qualifier-list* opt  
  
 *struct-declarator-list*:  
 *struct-declarator*  
  
 *struct-declarator-list* **,** *struct-declarator*  
  
 Una variabile di tipo **union** archivia uno dei valori definiti dallo questo tipo. Le stesse regole si applicano alla struttura e alle dichiarazioni di unione. Le unioni possono inoltre contenere campi di bit.  
  
 I membri delle unioni non possono avere un tipo incompleto, un tipo `void` o un tipo funzione. Di conseguenza, i membri non possono essere un'istanza dell'unione ma possono essere puntatori al tipo di unione dichiarato.  
  
 Una dichiarazione del tipo di unione è solo un modello. La memoria non viene riservata fino a che la variabile non viene dichiarata.  
  
> [!NOTE]
>  Se viene dichiarata un'unione di due tipi e viene archiviato un valore, ma l'accesso all'unione viene eseguito con l'altro tipo, i risultati sono inaffidabili. Ad esempio, viene dichiarata un'unione di **float** e `int`. Un valore **float** viene archiviato, ma in seguito il programma accede al valore come `int`. In una situazione del genere il valore dipende dall'archiviazione interna di valori **float**. L'Integer non sarebbe affidabile.  
  
## <a name="examples"></a>Esempi  
 Di seguito sono riportati alcuni esempi di unioni:  
  
```  
union sign   /* A definition and a declaration */  
{  
    int svar;  
    unsigned uvar;  
} number;  
```  
  
 In questo esempio viene definita una variabile di unione con il tipo `sign` e viene dichiarata una variabile denominata `number` che contiene due membri: `svar`, un Signed Integer, e `uvar`, un Unsigned Integer. Questa dichiarazione consente di archiviare il valore corrente di `number` come valore con segno o senza. Il tag associato a questo tipo di unione è `sign`.  
  
```  
union               /* Defines a two-dimensional */  
{                   /*  array named screen */  
    struct      
    {   
      unsigned int icon : 8;    
      unsigned color : 4;  
    } window1;  
    int screenval;  
} screen[25][80];  
```  
  
 La matrice di `screen` contiene 2.000 elementi. Ogni elemento della matrice rappresenta una singola unione con due membri: `window1` e `screenval`. Il membro `window1` è una struttura con due membri del campo di bit, `icon` e `color`. Il membro `screenval` è un `int`. In qualsiasi momento, ogni elemento unione contiene l'`int` rappresentato da `screenval` o la struttura rappresentata da `window1`.  
  
 **Sezione specifica Microsoft**  
  
 Le unioni annidate possono essere dichiarate anonimamente quando sono membri di un'altra struttura o unione. Quello riportato di seguito è un esempio di unione senza nome:  
  
```  
struct str  
{  
    int a, b;  
    union            / * Unnamed union */  
    {  
      char c[4];  
      long l;  
      float f;  
   };  
   char c_array[10];  
} my_str;  
.  
.  
.  
my_str.l == 0L;  /* A reference to a field in the my_str union */  
```  
  
 Spesso le unioni sono annidate all'interno di una struttura, nella quale è presente un campo che fornisce il tipo di dati contenuti nell'unione in un qualsiasi momento. Quello riportato di seguito è un esempio di dichiarazione per questo tipo di unione:  
  
```  
struct x  
{  
    int type_tag;  
    union  
    {  
      int x;  
      float y;  
    }  
}  
```  
  
 Per informazioni sui riferimenti alle unioni, vedere [Membri di struttura e di unione](../c-language/structure-and-union-members.md).  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiaratori e dichiarazioni di variabili](../c-language/declarators-and-variable-declarations.md)
