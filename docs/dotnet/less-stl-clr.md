---
title: meno (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::less
dev_langs:
- C++
helpviewer_keywords:
- less function [STL/CLR]
ms.assetid: fae56216-af66-4cb9-a688-be58a7c7edbb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: e7f1aa80a8a4f05f398931c4c6f744ad43f824ad
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="less-stlclr"></a>less (STL/CLR)
La classe modello descrive una funzione che, quando viene chiamato, restituisce true solo se il primo argomento è minore del secondo. Utilizzare, specificare un oggetto funzione in relazione al relativo tipo di argomento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Arg>  
    ref class less  
    { // wrap operator()  
public:  
    typedef Arg first_argument_type;  
    typedef Arg second_argument_type;  
    typedef bool result_type;  
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<  
        first_argument_type, second_argument_type, result_type>  
        delegate_type;  
  
    less();  
    less(less<Arg>% right);  
  
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
|less|Costruisce il funtore.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|operator()|Calcola la funzione desiderata.|  
|operatore delegate_type ^|Esegue il cast il funtore a un delegato.|  
  
## <a name="remarks"></a>Note  
 La classe modello descrive un funtore di due argomenti. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, viene restituito true solo se il primo argomento è minore del secondo.  
  
 È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_less.cpp   
// compile with: /clr   
#include <cliext/algorithm>   
#include <cliext/functional>   
#include <cliext/vector>   
  
typedef cliext::vector<int> Myvector;   
int main()   
    {   
    Myvector c1;   
    c1.push_back(4);   
    c1.push_back(3);   
    Myvector c2;   
    c2.push_back(4);   
    c2.push_back(4);   
    Myvector c3(2, 0);   
  
// display initial contents " 4 3" and " 4 4"   
    for each (int elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    for each (int elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// transform and display   
    cliext::transform(c1.begin(), c1.begin() + 2,   
        c2.begin(), c3.begin(), cliext::less<int>());   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
4 3  
4 4  
0 1  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/funzionale >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [greater_equal (STL/CLR)](../dotnet/greater-equal-stl-clr.md)