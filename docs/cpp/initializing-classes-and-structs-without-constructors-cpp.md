---
title: Inizializzazione di classi e struct senza costruttori (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 3e55c3d6-1c6b-4084-b9e5-221b151402f4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9a547dbe4d5668439ea3002249568962a50a0036
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="initializing-classes-and-structs-without-constructors-c"></a>Inizializzazione di classi e struct senza costruttori (C++)
Non è sempre necessario definire un costruttore per una classe, in particolare quelli relativamente semplici. Gli utenti possono inizializzare oggetti di una classe o uno struct usando l'inizializzazione uniforme, come illustrato nell'esempio seguente:  
  
```  
#include "stdafx.h"  
#include <Windows.h>  
  
// No constructor  
struct TempData  
{  
    int StationId;  
    time_t time;  
    double current;  
    double maxTemp;  
    double minTemp;  
};  
  
// Has a constructor  
struct TempData2  
{  
    TempData2(double minimum, double maximum, double cur, int id, time_t t) :  
       minTemp(minimum), maxTemp(maximum), current(cur), stationId(id), time(t) {}  
    int stationId;  
    time_t time;  
    double current;  
    double maxTemp;  
    double minTemp;  
};  
  
int main()  
{  
    // Member initialization (in order of declaration):  
    TempData td{ 45978, GetCurrentTime(), 28.9, 37.0, 16.7 };  
  
    // Default initialization = {0,0,0,0,0}  
    TempData td_default{};  
  
    //Error C4700 uninitialized local variable  
    TempData td_noInit;  
  
    // Member declaration (in order of ctor parameters)  
    TempData2 td2{ 16.7, 37.0, 28.9, 45978, GetCurrentTime() };  
  
    return 0;  
}  
  
```  
  
 Si noti che quando una classe o struct non ha costruttore, si forniscono gli elementi dell'elenco nell'ordine che i membri vengono dichiarati nella classe. Se la classe ha un costruttore, specificare gli elementi nell'ordine i parametri.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi e struct](../cpp/classes-and-structs-cpp.md)   
 [Costruttori](../cpp/constructors-cpp.md)