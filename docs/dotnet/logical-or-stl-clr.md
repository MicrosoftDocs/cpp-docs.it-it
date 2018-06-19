---
title: logical_or (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::logical_or
dev_langs:
- C++
helpviewer_keywords:
- logical_or function [STL/CLR]
ms.assetid: 3b5eac9b-4aaf-4395-8d76-49100487d85a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 225064209417da2ffefbaa62fdd7d1add2267c5b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33137263"
---
# <a name="logicalor-stlclr"></a>logical_or (STL/CLR)
La classe modello descrive una funzione che, quando viene chiamato, restituisce true solo se il primo argomento o il secondo test come true. Utilizzare, specificare un oggetto funzione in relazione al relativo tipo di argomento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Arg>  
    ref class logical_or  
    { // wrap operator()  
public:  
    typedef Arg first_argument_type;  
    typedef Arg second_argument_type;  
    typedef bool result_type;  
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<  
        first_argument_type, second_argument_type, result_type>  
        delegate_type;  
  
    logical_or();  
    logical_or(logical_or<Arg>% right);  
  
    result_type operator()(first_argument_type left,  
        second_argument_type right);  
    operator delegate_type^();  
    };  
```  
  
#### <a name="parameters"></a>Parametri  
 Arg  
 Tipo degli argomenti.  
  
## <a name="member-functions"></a>Funzioni membro  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|delegate_type|Il tipo del delegato generico.|  
|first_argument_type|Il tipo del primo argomento funtore.|  
|result_type|Il tipo del risultato funtore.|  
|second_argument_type|Il tipo del secondo argomento funtore.|  
  
|Member|Descrizione|  
|------------|-----------------|  
|logical_or|Costruisce il funtore.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|operator()|Calcola la funzione desiderata.|  
|operatore delegate_type ^|Esegue il cast il funtore a un delegato.|  
  
## <a name="remarks"></a>Note  
 La classe modello descrive un funtore di due argomenti. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, viene restituito true solo se il primo argomento o il secondo test come true.  
  
 È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_logical_or.cpp   
// compile with: /clr   
#include <cliext/algorithm>   
#include <cliext/functional>   
#include <cliext/vector>   
  
typedef cliext::vector<int> Myvector;   
int main()   
    {   
    Myvector c1;   
    c1.push_back(2);   
    c1.push_back(0);   
    Myvector c2;   
    c2.push_back(0);   
    c2.push_back(0);   
    Myvector c3(2, 0);   
  
// display initial contents " 2 0" and " 0 0"   
    for each (int elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    for each (int elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// transform and display   
    cliext::transform(c1.begin(), c1.begin() + 2,   
        c2.begin(), c3.begin(), cliext::logical_or<int>());   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
2 0  
0 0  
1 0  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/funzionale >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [logical_and (STL/CLR)](../dotnet/logical-and-stl-clr.md)