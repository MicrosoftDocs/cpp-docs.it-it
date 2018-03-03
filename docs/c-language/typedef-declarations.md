---
title: Dichiarazioni di typedef | Microsoft Docs
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
- declarations, typedef
- typedef declarations
- types [C], declarations
ms.assetid: e92a3b82-9269-4bc6-834a-6f431ccac83e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 851776be55ce485d660aa46f4338235c3a1a413a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="typedef-declarations"></a>Dichiarazioni typedef
La dichiarazione typedef è una dichiarazione con typedef come classe di archiviazione. Il dichiaratore diventa un nuovo tipo. È possibile utilizzare le dichiarazioni typedef per costruire nomi più brevi o più significativi per i tipi già definiti da C o per i tipi dichiarati. I nomi di typedef consentono di incapsulare dettagli di implementazione che possono cambiare.  
  
 Una dichiarazione typedef viene interpretata come una variabile o una dichiarazione di funzione, ma l'identificatore, anziché supporre il tipo specificato dalla dichiarazione, diventa un sinonimo del tipo.  
  
## <a name="syntax"></a>Sintassi  
 `declaration`:  
 *declaration-specifiers init-declarator-list* opt**;**  
  
 *declaration-specifiers*:  
 *storage-class-specifier declaration-specifiers* opt  
  
 *type-specifier declaration-specifiers* opt  
  
 *type-qualifier declaration-specifiers* opt  
  
 *storage-class-specifier*:  
 `typedef`  
  
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
  
 *typedef-name*:  
 *identifier*  
  
 Si noti che una dichiarazione typedef non crea tipi. Crea sinonimi per i tipi esistenti o nomi per tipi che possono essere specificati in altri modi. Quando un nome di typedef viene utilizzato come identificatore di tipo, può essere combinato con certi identificatori di tipo, ma non altri. I modificatori accettabili sono **const** e `volatile`.  
  
 I nomi di typedef condividono lo spazio dei nomi con identificatori comuni. Per altre informazioni, vedere [Spazi dei nomi](../c-language/name-spaces.md). Pertanto, un programma può avere un nome di typedef e un identificatore in ambito locale dello stesso nome. Ad esempio:  
  
```  
typedef char FlagType;  
  
int main()  
{  
}  
  
int myproc( int )  
{  
    int FlagType;  
}  
```  
  
 Quando si dichiara un identificatore in ambito locale dello stesso nome di un typedef o quando si dichiara un membro di una struttura o un'unione nello stesso ambito o in un ambito interno, l'identificatore di tipo deve essere specificato. Nell'esempio viene illustrato questo vincolo:  
  
```  
typedef char FlagType;  
const FlagType x;  
```  
  
 Per riutilizzare il nome `FlagType` per un identificatore, un membro della struttura o un membro dell'unione, deve essere fornito il tipo:  
  
```  
const int FlagType;  /* Type specifier required */  
```  
  
 Non è sufficiente dire  
  
```  
const FlagType;      /* Incomplete specification */  
```  
  
 perché `FlagType` viene usato per far parte del tipo e non un identificatore che viene ridichiarato. Questa dichiarazione si suppone essere una dichiarazione non consentita quale  
  
```  
int;  /* Illegal declaration */  
```  
  
 È possibile dichiarare qualsiasi tipo con typedef, incluso il puntatore, la funzione e i tipi di matrice. È possibile dichiarare un nome di typedef per un puntatore a un tipo di unione o di struttura prima di definire il tipo di struttura o di unione, purché la definizione abbia la stessa visibilità della dichiarazione.  
  
 I nomi di typedef possono essere utilizzati per migliorare la leggibilità del codice. Tutte e tre le seguenti dichiarazioni di `signal` indicano esattamente lo stesso tipo, la prima senza utilizzare alcun nome di typedef.  
  
```  
typedef void fv( int ), (*pfv)( int );  /* typedef declarations */  
  
void ( *signal( int, void (*) (int)) ) ( int );  
fv *signal( int, fv * );   /* Uses typedef type */  
pfv signal( int, pfv );    /* Uses typedef type */  
```  
  
## <a name="examples"></a>Esempi  
 Negli esempi seguenti vengono illustrate le dichiarazioni typedef:  
  
```  
typedef int WHOLE; /* Declares WHOLE to be a synonym for int */  
```  
  
 Si noti che `WHOLE` adesso può essere utilizzato in una dichiarazione di variabile come `WHOLE i;` o `const WHOLE i;`. Tuttavia, la dichiarazione `long WHOLE i;` non è consentita.  
  
```  
typedef struct club   
{  
    char name[30];  
    int size, year;  
} GROUP;  
```  
  
 Questa istruzione dichiara `GROUP` come un tipo di struttura con tre membri. Poiché viene anche specificato un tag della struttura, `club`, nelle dichiarazioni può essere utilizzato il nome di typedef (`GROUP`) o il tag della struttura. È necessario utilizzare la parola chiave "struct" con il tag e non è possibile utilizzare la parola chiave "struct" con il nome di typedef.  
  
```  
typedef GROUP *PG; /* Uses the previous typedef name   
                      to declare a pointer            */  
```  
  
 Il tipo `PG` è dichiarato come puntatore al tipo `GROUP`, che a sua volta è definito come tipo di struttura.  
  
```  
typedef void DRAWF( int, int );  
```  
  
 Questo esempio fornisce il tipo `DRAWF` per una funzione che non restituisce valori e che accetta due argomenti di tipo int. Ciò significa, ad esempio, che la dichiarazione  
  
```  
DRAWF box;   
```  
  
 è equivalente alla dichiarazione  
  
```  
void box( int, int );  
```  
  
## <a name="see-also"></a>Vedere anche  


