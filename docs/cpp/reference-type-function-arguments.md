---
title: Gli argomenti della funzione tipo-riferimento | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fad8fc85a37aec80d09ed6df9280a78de0540f01
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39409056"
---
# <a name="reference-type-function-arguments"></a>Argomenti della funzione tipo-riferimento
È spesso più efficiente passare alle funzioni riferimenti anziché oggetti di grandi dimensioni. In questo modo il compilatore può passare l'indirizzo dell'oggetto rispettando la sintassi che sarebbe stata usata per accedere all'oggetto. Si consideri l'esempio seguente che usa la struttura `Date`.  
  
```cpp 
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
  
 Il codice precedente mostra che si accede a membri di una struttura passata per riferimento usando l'operatore di selezione dei membri (**.**) anziché l'operatore di selezione dei membri del puntatore (**->**).  
  
 Anche se gli argomenti passati come tipi riferimento osservino la sintassi dei tipi non puntatore, mantengono una caratteristica importante dei tipi di puntatore: ovvero sono modificabili a meno che non dichiarati come **const**. Poiché lo scopo del codice precedente non è quello di modificare l'oggetto `GDate`, un prototipo di funzione più appropriato è il seguente:  
  
```cpp 
long JulianFromGregorian( const Date& GDate );  
```  
  
 Questo prototipo garantisce che la funzione `JulianFromGregorian` non modificherà il relativo argomento.  
  
 Qualsiasi funzione con prototipo che utilizza un tipo riferimento può accettare un oggetto dello stesso tipo al suo posto perché viene eseguita una conversione standard dalla *nomeTipo* a * * typename**&**.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti](../cpp/references-cpp.md)