---
title: "Inizializzazione di matrici | Microsoft Docs"
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
  - "inizializzazione di matrici"
  - "inizializzazione di matrici [C++]"
ms.assetid: 41efe5f0-15b5-4f49-9196-c4902f8fc705
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Inizializzazione di matrici
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

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
  
 Matrici statiche del membro (se **const** o non) possono essere inizializzate nelle relative definizioni (all'esterno della dichiarazione di classe). Ad esempio:  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [(NOTINBUILD) Funzioni membro speciali](http://msdn.microsoft.com/it-it/82223d73-64cb-4923-b678-78f9568ff3ca)