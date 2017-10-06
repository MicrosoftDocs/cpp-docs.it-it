---
title: Gli argomenti della funzione tipo-riferimento | Documenti Microsoft
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
- arguments [C++], function
- functions [C++], paramters
- function parameters [C++], reference-type
- function arguments [C++], reference-type
- passing parameters [C++], reference-type arguments
ms.assetid: 0a70e831-9e76-46c0-821d-aeba13d73cc0
caps.latest.revision: 8
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
ms.openlocfilehash: e74cbde44cad618720983fbda4a6cf9ce8b75dc1
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="reference-type-function-arguments"></a>Argomenti della funzione tipo-riferimento
È spesso più efficiente passare alle funzioni riferimenti anziché oggetti di grandi dimensioni. In questo modo il compilatore può passare l'indirizzo dell'oggetto rispettando la sintassi che sarebbe stata usata per accedere all'oggetto. Si consideri l'esempio seguente che usa la struttura `Date`.  
  
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
  
 Il codice precedente mostra che si accede a membri di una struttura passati per riferimento utilizzando l'operatore di selezione dei membri (**.**) anziché l'operatore di selezione dei membri del puntatore (**->**).  
  
 Sebbene gli argomenti passati come tipi riferimento osservino la sintassi dei tipi diversi da puntatore, mantengono una caratteristica importante dei tipi di puntatore: ovvero sono modificabili a meno che non dichiarati come **const**. Poiché lo scopo del codice precedente non è quello di modificare l'oggetto `GDate`, un prototipo di funzione più appropriato è il seguente:  
  
```  
long JulianFromGregorian( const Date& GDate );  
```  
  
 Questo prototipo garantisce che la funzione `JulianFromGregorian` non modificherà il relativo argomento.  
  
 Qualsiasi funzione con prototipo che usa un tipo di riferimento può accettare un oggetto dello stesso tipo al suo posto, poiché non esiste una conversione standard da *typename* a *typename* ** & **.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti](../cpp/references-cpp.md)
