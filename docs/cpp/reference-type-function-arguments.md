---
title: "Argomenti di funzione di tipo Reference | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "argomenti [C++], funzione"
  - "argomenti di funzioni, tipo di riferimento"
  - "funzione (parametri), tipo di riferimento"
  - "funzioni [C++], parametri"
  - "passaggio di parametri, argomenti di tipo di riferimento"
ms.assetid: 0a70e831-9e76-46c0-821d-aeba13d73cc0
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Argomenti di funzione di tipo Reference
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È spesso più efficiente passare alle funzioni riferimenti anziché oggetti di grandi dimensioni.  In questo modo il compilatore può passare l'indirizzo dell'oggetto rispettando la sintassi che sarebbe stata usata per accedere all'oggetto.  Si consideri l'esempio seguente che usa la struttura `Date`.  
  
```  
// reference_type_function_arguments.cpp  
struct Date  
{  
short DayOfWeek;  
short Month;  
short Day;  
short Year;  
};  
  
// Create a Julian date of the form DDDYYYY  
// from a Gregorian date.  
long JulianFromGregorian( Date& GDate )  
{  
static int cDaysInMonth[] = {  
31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31  
   };  
long JDate = 0;  
// Add in days for months already elapsed.  
for ( int i = 0; i < GDate.Month - 1; ++i )  
JDate += cDaysInMonth[i];  
// Add in days for this month.  
JDate += GDate.Day;  
  
// Check for leap year.  
if ( GDate.Year % 100 != 0 && GDate.Year % 4 == 0 )  
JDate++;  
// Add in year.  
JDate *= 10000;  
JDate += GDate.Year;  
  
return JDate;  
}  
  
int main()  
{  
}  
```  
  
 Il codice precedente indica che ai membri di una struttura passati per riferimento è possibile accedere usando l'operatore di selezione dei membri \(**.**\) anziché l'operatore di selezione dei membri del puntatore \(**–\>**\).  
  
 Sebbene gli argomenti passati come tipi riferimento osservino la sintassi dei tipi diversi da puntatore, non mantengono una caratteristica importante dei tipi puntatore, ovvero sono modificabili a meno che non vengano dichiarati come **const**.  Poiché lo scopo del codice precedente non è quello di modificare l'oggetto `GDate`, un prototipo di funzione più appropriato è il seguente:  
  
```  
long JulianFromGregorian( const Date& GDate );  
```  
  
 Questo prototipo garantisce che la funzione `JulianFromGregorian` non modificherà il relativo argomento.  
  
 Qualsiasi funzione con prototipo che usa un tipo riferimento può accettare un oggetto dello stesso tipo nella posizione relativa perché è presente una conversione standard da *typename* a *typename***&**.  
  
## Vedere anche  
 [Riferimenti](../cpp/references-cpp.md)