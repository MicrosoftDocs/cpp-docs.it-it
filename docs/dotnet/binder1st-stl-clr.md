---
title: binder1st (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::binder1st
dev_langs:
- C++
helpviewer_keywords:
- binder1st function [STL/CLR]
ms.assetid: a989c9cc-a485-45d9-bd19-519018e6974b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 8ab2d0a0d5127dae39008fdce177d23f1a6f7074
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="binder1st-stlclr"></a>binder1st (STL/CLR)
La classe modello descrive una funzione di un argomento che, quando viene chiamato, restituisce il funtore di due argomenti stored chiamato con il primo argomento archiviato e il secondo argomento fornito. Utilizzare, specificare un oggetto funzione in termini del funtore stored.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Fun>  
    ref class binder1st  
    { // wrap operator()  
public:  
    typedef Fun stored_function_type;  
    typedef typename Fun::first_argument_type first_argument_type;  
    typedef typename Fun::second_argument_type second_argument_type;  
    typedef typename Fun:result_type result_type;  
    typedef Microsoft::VisualC::StlClr::UnaryDelegate<  
        second_argument_type, result_type>  
        delegate_type;  
  
    binder1st(Fun% functor, first_argument_type left);  
    binder1st(binder1st<Arg>% right);  
  
    result_type operator()(second_argument_type right);  
    operator delegate_type^();  
    };  
```  
  
#### <a name="parameters"></a>Parametri  
 Fun  
 Tipo del funtore stored.  
  
## <a name="member-functions"></a>Funzioni membro  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|delegate_type|Il tipo del delegato generico.|  
|first_argument_type|Il tipo del primo argomento funtore.|  
|result_type|Il tipo del risultato funtore.|  
|second_argument_type|Il tipo del secondo argomento funtore.|  
|stored_function_type|Tipo del funtore.|  
  
|Member|Descrizione|  
|------------|-----------------|  
|binder1st|Costruisce il funtore.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|operator()|Calcola la funzione desiderata.|  
|operatore delegate_type^()|Esegue il cast il funtore a un delegato.|  
  
## <a name="remarks"></a>Note  
 La classe modello descrive una funzione di un argomento che archivia un funtore di due argomenti e il primo argomento. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, restituisce il risultato della chiamata il funtore archiviato con il primo argomento archiviato e il secondo argomento fornito.  
  
 È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_binder1st.cpp   
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
    Myvector c3(2, 0);   
  
// display initial contents " 4 3"   
    for each (int elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// transform and display   
    cliext::minus<int> sub_op;   
    cliext::binder1st<cliext::minus<int> > subfrom3(sub_op, 3);   
  
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),   
        subfrom3);   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// transform and display with function   
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),   
        bind1st(sub_op, 3));   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
4 3  
-1 0  
-1 0  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/funzionale >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [bind1st (STL/CLR)](../dotnet/bind1st-stl-clr.md)