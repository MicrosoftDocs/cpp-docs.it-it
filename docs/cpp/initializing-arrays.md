---
title: Inizializzazione di matrici | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- initializing arrays [C++]
- arrays [C++], initializing
ms.assetid: 41efe5f0-15b5-4f49-9196-c4902f8fc705
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 5370633ac0d73815c048153f7025ea50b990a3f4
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="initializing-arrays"></a>Inizializzazione di matrici
Se una classe dispone di un costruttore, le matrici di tale classe vengono inizializzate da un costruttore. Se vi sono meno elementi nell'elenco di inizializzatori rispetto agli elementi nella matrice, il costruttore predefinito viene usato per gli elementi rimanenti. Se nessun costruttore predefinito è definito per la classe, l'elenco di inizializzatori deve essere completo, ovvero deve esserci un inizializzatore per ogni elemento della matrice.  
  
 Si consideri la classe `Point` che definisce due costruttori:  
  
```  
// initializing_arrays1.cpp  
class Point  
{  
public:  
   Point()   // Default constructor.  
   {  
   }  
   Point( int, int )   // Construct from two ints  
   {  
   }  
};  
  
// An array of Point objects can be declared as follows:  
Point aPoint[3] = {  
   Point( 3, 3 )     // Use int, int constructor.  
};  
  
int main()  
{  
}  
```  
  
 Il primo elemento `aPoint` viene costruito usando il costruttore `Point( int, int )`; i due elementi rimanenti vengono costruiti usando il costruttore predefinito.  
  
 Matrici membro statico (se **const** o non) possono essere inizializzati nelle relative definizioni (all'esterno della dichiarazione di classe). Ad esempio:  
  
```  
// initializing_arrays2.cpp  
class WindowColors  
{  
public:  
    static const char *rgszWindowPartList[7];  
};  
  
const char *WindowColors::rgszWindowPartList[7] = {  
    "Active Title Bar", "Inactive Title Bar", "Title Bar Text",  
    "Menu Bar", "Menu Bar Text", "Window Background", "Frame"   };  
int main()  
{  
}  
```  
  

