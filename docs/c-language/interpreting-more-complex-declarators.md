---
title: "Interpretazione di più dichiaratori complessi | Microsoft Docs"
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
- complex declarators
- interpreting complex declarators
ms.assetid: dd5b7019-c86d-4645-a5cc-21f834de6f4a
caps.latest.revision: 7
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
ms.openlocfilehash: c5bd11f2056bae9588a28c443d2b5c3d287c672d
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="interpreting-more-complex-declarators"></a>Interpretazione di più dichiaratori complessi
È possibile racchiudere qualsiasi dichiaratore tra parentesi per specificare un'interpretazione particolare di un "dichiaratore complesso". Un dichiaratore complesso è un identificatore qualificato da più matrici, puntatori o modificatori di funzione. È possibile applicare varie combinazioni di matrice, puntatore e modificatori di funzione a un singolo identificatore. `typedef` può essere utilizzato in genere per semplificare dichiarazioni. Vedere [Dichiarazioni typedef](../c-language/typedef-declarations.md).  
  
 Nell'interpretazione dei dichiaratori complessi, le parentesi quadre e le parentesi (ovvero modificatori a destra dell'identificatore) hanno la precedenza sugli asterischi (ovvero modificatori a sinistra dell'identificatore). Parentesi quadre e parentesi tonde hanno la stessa precedenza e vengono associate da sinistra a destra. Dopo che il dichiaratore è stato completamente interpretato, l'identificatore del tipo viene applicato come ultimo passaggio. Utilizzando le parentesi tonde è possibile eseguire l'override dell'ordine di associazione predefinito e forzare un'interpretazione particolare. Non utilizzare mai le parentesi, tuttavia, attorno al nome di un identificatore da solo. Ciò potrebbe essere interpretato erroneamente come un elenco di parametri.  
  
 Un modo semplice per interpretare i dichiaratori complessi consiste nel leggerli da "dall'interno verso l'esterno", utilizzando i quattro passaggi seguenti:  
  
1.  Iniziare con l'identificatore e individuare direttamente le eventuali parentesi quadre o le parentesi tonde presenti sulla destra.  
  
2.  Interpretare queste parentesi quadre o parentesi tonde, quindi individuare gli asterischi sulla sinistra.  
  
3.  Se durante una delle fasi si rileva una parentesi chiusa, tornare indietro e applicare le regole 1 e 2 a qualsiasi elemento all'interno delle parentesi.  
  
4.  Applicare l'identificatore di tipo.  
  
    ```  
    char *( *(*var)() )[10];  
     ^   ^  ^ ^ ^   ^    ^  
     7   6  4 2 1   3    5  
    ```  
  
 In questo esempio, i passaggi sono numerati in ordine e possono essere interpretati come segue:  
  
1.  L'identificatore `var` viene dichiarato come  
  
2.  un puntatore a  
  
3.  una funzione che restituisce  
  
4.  un puntatore a  
  
5.  una matrice di 10 elementi, che sono  
  
6.  puntatori a  
  
7.  valori `char`.  
  
## <a name="examples"></a>Esempi  
 Negli esempi seguenti vengono illustrate altre dichiarazioni complesse e mostrato come le parentesi possono influire sul significato di una dichiarazione.  
  
```  
int *var[5]; /* Array of pointers to int values */  
```  
  
 Il modificatore di matrice ha priorità più alta rispetto al modificatore del puntatore, quindi `var` viene dichiarato come una matrice. Il modificatore del puntatore viene applicato al tipo degli elementi di matrice; pertanto, gli elementi di matrice sono puntatori ai valori `int`.  
  
```  
int (*var)[5]; /* Pointer to array of int values */  
```  
  
 In questa dichiarazione per `var`, mediante le parentesi viene associata al modificatore di puntatore una priorità più elevata rispetto al modificatore di matrice e `var` viene dichiarato come puntatore a una matrice di cinque valori `int`.  
  
```  
long *var( long, long ); /* Function returning pointer to long */  
```  
  
 I modificatori di funzione dispongono anche di priorità più alta rispetto ai modificatori del puntatore, pertanto questa dichiarazione per `var` dichiara che `var` è una funzione che restituisce un puntatore a un valore **long**. La funzione viene dichiarata come in grado di accettare come argomenti due valori **long**.  
  
```  
long (*var)( long, long ); /* Pointer to function returning long */  
```  
  
 Questo esempio è simile al precedente. Le parentesi assegnano priorità più elevata al modificatore del puntatore rispetto al modificatore di funzione e `var` viene dichiarato come puntatore a una funzione che restituisce un valore **long**. Anche in questo caso la funzione accetta due argomenti **long**.  
  
```  
struct both       /* Array of pointers to functions */  
{                 /*   returning structures         */  
    int a;  
    char b;  
} ( *var[5] )( struct both, struct both );  
```  
  
 Gli elementi di una matrice non possono essere funzioni, ma questa dichiarazione dimostra come dichiarare una matrice di puntatori a funzioni. In questo esempio, `var` viene dichiarato come una matrice di cinque puntatori a funzioni che restituiscono strutture con due membri. Gli argomenti alle funzioni vengono dichiarati come due strutture con lo stesso tipo di struttura, `both`. Si noti che le parentesi che racchiudono `*var[5]` sono necessarie. Senza di esse, la dichiarazione è un tentativo non valido di dichiarare una matrice di funzioni, come illustrato di seguito:  
  
```  
/* ILLEGAL */  
struct both *var[5](struct both, struct both);  
```  
  
 L'istruzione seguente dichiara una matrice di puntatori.  
  
```  
unsigned int *(* const *name[5][10] ) ( void );  
```  
  
 La matrice `name` dispone di 50 elementi organizzati in una matrice multidimensionale. Gli elementi sono puntatori a un puntatore che è una costante. Questo puntatore constant fa riferimento a una funzione non ha alcun parametro e restituisce un puntatore a un tipo unsigned.  
  
 L'esempio seguente è una funzione che restituisce un puntatore a una matrice di tre valori **double**.  
  
```  
double ( *var( double (*)[3] ) )[3];  
```  
  
 In questa dichiarazione, una funzione restituisce un puntatore a una matrice, poiché le funzioni che restituiscono matrici non sono consentite. In questo caso `var` è dichiarato come funzione che restituisce un puntatore a una matrice di tre valori **double**. La funzione `var` accetta un argomento. L'argomento, come il valore restituito, è un puntatore a una matrice di tre valori **double**. Il tipo di argomento viene specificato da un *abstract-declarator* complesso. Le parentesi che racchiudono l'asterisco nel tipo di argomento sono necessarie; senza parentesi il tipo di argomento sarebbe una matrice di tre puntatori a valori **double**. Per informazioni ed esempi di dichiaratori abstract, vedere [Dichiaratori abstract](../c-language/c-abstract-declarators.md).  
  
```  
union sign         /* Array of arrays of pointers */  
{                  /* to pointers to unions       */  
     int x;  
     unsigned y;  
} **var[5][5];  
```  
  
 Come illustrato nell'esempio precedente, un puntatore può indicare un altro puntatore e una matrice può contenere matrici come elementi. In questo caso `var` è una matrice di cinque elementi. Ogni elemento è una matrice di cinque elementi di puntatori ai puntatori a unioni con due membri.  
  
```  
union sign *(*var[5])[5]; /* Array of pointers to arrays  
                             of pointers to unions        */  
```  
  
 In questo esempio viene mostrato come la posizione delle parentesi modifica il significato della dichiarazione. In questo esempio, `var` è una matrice di cinque elementi dei puntatori a matrici di cinque elementi dei puntatori a unioni. Per esempi dell'uso di `typedef` per evitare dichiarazioni complesse, vedere [Dichiarazioni typedef](../c-language/typedef-declarations.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni e tipi](../c-language/declarations-and-types.md)
