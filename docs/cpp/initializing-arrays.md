---
title: Inizializzazione di matrici | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- initializing arrays [C++]
- arrays [C++], initializing
ms.assetid: 41efe5f0-15b5-4f49-9196-c4902f8fc705
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: eacd447d27f3dd8bd2d2d88e6d975cdb29a82026
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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
  
