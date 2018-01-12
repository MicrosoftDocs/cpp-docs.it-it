---
title: modulo (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::modulus
dev_langs: C++
helpviewer_keywords: modulus function [STL/CLR]
ms.assetid: 49907edd-6e32-4c81-8ef2-e9c6f512437f
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: db51146858db1d1f6624943aa4fc5f357f918334
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="modulus-stlclr"></a>modulus (STL/CLR)
La classe modello descrive una funzione che, quando viene chiamato, restituisce il primo argomento modulo il secondo. Utilizzare, specificare un oggetto funzione in relazione al relativo tipo di argomento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Arg>  
    ref class modulus  
    { // wrap operator()  
public:  
    typedef Arg first_argument_type;  
    typedef Arg second_argument_type;  
    typedef Arg result_type;  
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<  
        first_argument_type, second_argument_type, result_type>  
        delegate_type;  
  
    modulus();  
    modulus(modulus<Arg>% right);  
  
    result_type operator()(first_argument_type left,  
        second_argument_type right);  
    operator delegate_type^();  
    };  
```  
  
#### <a name="parameters"></a>Parametri  
 Arg  
 Il tipo di argomenti e il valore restituito.  
  
## <a name="member-functions"></a>Funzioni membro  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|delegate_type|Il tipo del delegato generico.|  
|first_argument_type|Il tipo del primo argomento funtore.|  
|result_type|Il tipo del risultato funtore.|  
|second_argument_type|Il tipo del secondo argomento funtore.|  
  
|Member|Descrizione|  
|------------|-----------------|  
|modulo|Costruisce il funtore.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|operator()|Calcola la funzione desiderata.|  
|operatore delegate_type ^|Esegue il cast il funtore a un delegato.|  
  
## <a name="remarks"></a>Note  
 La classe modello descrive un funtore di due argomenti. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, restituisce il primo argomento modulo il secondo.  
  
 È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_modulus.cpp   
// compile with: /clr   
#include <cliext/algorithm>   
#include <cliext/functional>   
#include <cliext/vector>   
  
typedef cliext::vector<int> Myvector;   
int main()   
    {   
    Myvector c1;   
    c1.push_back(4);   
    c1.push_back(2);   
    Myvector c2;   
    c2.push_back(3);   
    c2.push_back(1);   
    Myvector c3(2, 0);   
  
// display initial contents " 4 2" and " 3 1"   
    for each (int elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    for each (int elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// transform and display   
    cliext::transform(c1.begin(), c1.begin() + 2,   
        c2.begin(), c3.begin(), cliext::modulus<int>());   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
4 2  
3 1  
1 0  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext funzionali >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [Divide (STL/CLR)](../dotnet/divides-stl-clr.md)   
 [multiplies (STL/CLR)](../dotnet/multiplies-stl-clr.md)