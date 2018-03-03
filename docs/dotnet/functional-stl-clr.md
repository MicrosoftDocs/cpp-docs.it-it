---
title: funzionale (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- <cliext/functional>
dev_langs:
- C++
helpviewer_keywords:
- <functional> header [STL/CLR]
- <cliext/functional> header [STL/CLR]
- functional functions [STL/CLR]
ms.assetid: 88738b8c-5d37-4375-970e-a4442bf5efde
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 8e731767401964045307635a428d7606d628aca8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="functional-stlclr"></a>functional (STL/CLR)
Includere l'intestazione STL/CLR `<cliext/functional>` per definire le numerose funzioni e i delegati modello correlati e classi modello.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <functional>  
```  
  
## <a name="declarations"></a>Dichiarazioni  
  
|delegato|Descrizione|  
|--------------|-----------------|  
|[binary_delegate (STL/CLR)](../dotnet/binary-delegate-stl-clr.md)|Delegato di due argomenti.|  
|[binary_delegate_noreturn (STL/CLR)](../dotnet/binary-delegate-noreturn-stl-clr.md)|Delegato di due argomenti restituzione `void`.|  
|[unary_delegate (STL/CLR)](../dotnet/unary-delegate-stl-clr.md)|Delegato di un solo argomento.|  
|[unary_delegate_noreturn (STL/CLR)](../dotnet/unary-delegate-noreturn-stl-clr.md)|Delegato di un solo argomento restituzione `void`.|  
  
|Classe|Descrizione|  
|-----------|-----------------|  
|[binary_negate (STL/CLR)](../dotnet/binary-negate-stl-clr.md)|Funtore per negare un funtore di due argomenti.|  
|[binder1st (STL/CLR)](../dotnet/binder1st-stl-clr.md)|Funtore di associare primo argomento a una funzione di due argomenti.|  
|[binder2nd (STL/CLR)](../dotnet/binder2nd-stl-clr.md)|Funtore di associare secondo argomento a una funzione di due argomenti.|  
|[divides (STL/CLR)](../dotnet/divides-stl-clr.md)|Dividere funtore.|  
|[equal_to (STL/CLR)](../dotnet/equal-to-stl-clr.md)|Funtore di confronto uguale.|  
|[greater (STL/CLR)](../dotnet/greater-stl-clr.md)|Maggiore funtore di confronto.|  
|[greater_equal (STL/CLR)](../dotnet/greater-equal-stl-clr.md)|Funtore di confronto maggiore o uguale a.|  
|[less (STL/CLR)](../dotnet/less-stl-clr.md)|Meno funtore di confronto.|  
|[less_equal (STL/CLR)](../dotnet/less-equal-stl-clr.md)|Funtore di confronto minore o uguale.|  
|[logical_and (STL/CLR)](../dotnet/logical-and-stl-clr.md)|Funtore AND logico.|  
|[logical_not (STL/CLR)](../dotnet/logical-not-stl-clr.md)|Logico non funtore.|  
|[logical_or (STL/CLR)](../dotnet/logical-or-stl-clr.md)|Funtore OR logico.|  
|[minus (STL/CLR)](../dotnet/minus-stl-clr.md)|Sottrarre il funtore.|  
|[modulus (STL/CLR)](../dotnet/modulus-stl-clr.md)|Funtore di modulo.|  
|[multiplies (STL/CLR)](../dotnet/multiplies-stl-clr.md)|Moltiplicare funtore.|  
|[negate (STL/CLR)](../dotnet/negate-stl-clr.md)|Funtore per restituire il relativo argomento negato.|  
|[not_equal_to (STL/CLR)](../dotnet/not-equal-to-stl-clr.md)|Funtore di confronto non è uguale.|  
|[plus (STL/CLR)](../dotnet/plus-stl-clr.md)|Aggiungere funtore.|  
|[unary_negate (STL/CLR)](../dotnet/unary-negate-stl-clr.md)|Funtore per negare un funtore un solo argomento.|  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|[bind1st (STL/CLR)](../dotnet/bind1st-stl-clr.md)|Genera un binder1st per un argomento e il funtore.|  
|[bind2nd (STL/CLR)](../dotnet/bind2nd-stl-clr.md)|Genera un binder2nd per un argomento e il funtore.|  
|[not1 (STL/CLR)](../dotnet/not1-stl-clr.md)|Genera un unary_negate per una funzione.|  
|[not1 (STL/CLR)](../dotnet/not1-stl-clr.md)|Genera un binary_negate per una funzione.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext funzionali >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)