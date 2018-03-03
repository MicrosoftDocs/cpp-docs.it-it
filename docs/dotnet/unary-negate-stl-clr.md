---
title: unary_negate (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- cliext::unary_negate
dev_langs:
- C++
helpviewer_keywords:
- unary_negate function [STL/CLR]
ms.assetid: 83bbdd86-199c-4451-9f70-72f9ade2264a
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 60e7a38ede07a3cf3b1c21b1c5fe26e9f588f2f1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="unarynegate-stlclr"></a>unary_negate (STL/CLR)
La classe modello descrive una funzione che, quando viene chiamato, restituisce l'operatore logico non del relativo stored funtore un solo argomento. Utilizzare, specificare un oggetto funzione in termini del funtore stored.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Fun>  
    ref class unary_negate  
    { // wrap operator()  
public:  
    typedef Fun stored_function_type;  
    typedef typename Fun::argument_type argument_type;  
    typedef bool result_type;  
    typedef Microsoft::VisualC::StlClr::UnaryDelegate<  
        argument_type, result_type>  
        delegate_type;  
  
    unary_negate(Fun% functor);  
    unary_negate(unary_negate<Fun>% right);  
  
    result_type operator()(argument_type left);  
    operator delegate_type^();  
    };  
```  
  
#### <a name="parameters"></a>Parametri  
 Fun  
 Tipo del funtore stored.  
  
## <a name="member-functions"></a>Funzioni membro  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|argument_type|Il tipo dell'argomento funtore.|  
|delegate_type|Il tipo del delegato generico.|  
|result_type|Il tipo del risultato funtore.|  
  
|Member|Descrizione|  
|------------|-----------------|  
|unary_negate|Costruisce il funtore.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|operator()|Calcola la funzione desiderata.|  
|delegate_type ^|Esegue il cast il funtore a un delegato.|  
  
## <a name="remarks"></a>Note  
 La classe modello descrive una funzione di un argomento che archivia un altro funtore un solo argomento. Definisce l'operatore membro `operator()` restituisce in modo che, quando l'oggetto viene chiamato come una funzione, l'operatore logico non di un funtore stored chiamato con l'argomento.  
  
 È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_unary_negate.cpp   
// compile with: /clr   
#include <cliext/algorithm>   
#include <cliext/functional>   
#include <cliext/vector>   
  
typedef cliext::vector<int> Myvector;   
int main()   
    {   
    Myvector c1;   
    c1.push_back(4);   
    c1.push_back(0);   
    Myvector c3(2, 0);   
  
// display initial contents " 4 0"   
    for each (int elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// transform and display   
    cliext::logical_not<int> not_op;   
  
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),   
        cliext::unary_negate<cliext::logical_not<int> >(not_op));   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// transform and display with function   
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),   
        cliext::not1(not_op));   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
4 0  
1 0  
1 0  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext funzionali >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [not1 (STL/CLR)](../dotnet/not1-stl-clr.md)