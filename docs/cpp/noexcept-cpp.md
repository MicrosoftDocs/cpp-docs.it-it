---
title: noexcept (C++) | Microsoft Docs
ms.custom: ''
ms.date: 01/12/2018
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- noexcept_cpp
dev_langs:
- C++
ms.assetid: df24edb9-c6a6-4e37-9914-fd5c0c3716a8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f964e5b05999aeaf51a92f0c91479aaa17dd5b37
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39401746"
---
# <a name="noexcept-c"></a>noexcept (C++)
**C++11:** specifica se una funzione può generare eccezioni.  
  
## <a name="syntax"></a>Sintassi  
  
> *noexcept-expression*:  
> &nbsp;&nbsp;&nbsp;&nbsp;**noexcept**  
> &nbsp;&nbsp;&nbsp;&nbsp;**noexcept(** *constant-expression* **)**  
  
### <a name="parameters"></a>Parametri  
 *constant-expression*  
 Un'espressione costante di tipo **bool** che indica se il set di possibili tipi di eccezione è vuoto. La versione non condizionale è equivalente a `noexcept(true)`.  
  
## <a name="remarks"></a>Note  
 Oggetto *espressione noexcept* è un tipo di *specifica di eccezione*, un suffisso a una dichiarazione di funzione che rappresenta un set di tipi che potrebbe essere trovati da un gestore di eccezioni per qualsiasi eccezione che viene chiuso un funzione. Operatore condizionale unario `noexcept(` *constant_expression* `)` in cui *constant_expression* yeilds **true**e il relativo sinonimo non condizionale **noexcept**, specificare che il set di possibili tipi di eccezione che è possibile uscire da una funzione è vuoto. Vale a dire, la funzione non genera mai un'eccezione e non consente mai un'eccezione a essere propagati all'esterno del relativo ambito. L'operatore `noexcept(` *constant_expression* `)` in cui *constant_expression* yeilds **false**, o l'assenza di una specifica di eccezione (un valore diverso per una funzione distruttore o deallocazione), indica che il set di possibili eccezioni che è possibile uscire dalla funzione è il set di tutti i tipi.  
 
 Contrassegnare una funzione come **noexcept** solo se tutte le funzioni che chiama, direttamente o indirettamente, sono anche **noexcept** oppure **const**. Il compilatore non necessariamente controlla ogni percorso di codice per le eccezioni che potrebbero essere propagate fino a un **noexcept** (funzione). Se un'eccezione uscire dall'ambito esterno di una funzione contrassegnata `noexcept`, [std:: Terminate](../standard-library/exception-functions.md#terminate) viene richiamata immediatamente e non c'è garanzia che i distruttori di tutti gli oggetti nell'ambito verranno richiamati. Uso **noexcept** anziché l'identificatore di eccezione dinamiche `throw()`, ora deprecato nello standard. È consigliabile applicare `noexcept` a qualsiasi funzione che non consente mai un'eccezione di propagarsi fino allo stack di chiamate. Quando una funzione viene dichiarata **noexcept**, consente al compilatore di generare codice più efficiente in più contesti diversi. Per altre informazioni, vedere [specifiche di eccezione](exception-specifications-throw-cpp.md).   
  
## <a name="example"></a>Esempio  
Una funzione di modello che copia il relativo argomento può essere dichiarata **noexcept** a condizione che l'oggetto da copiare è un normale tipo di dati precedente (POD). Tale funzione potrebbe essere dichiarata come segue:  
  
```cpp  
#include <type_traits>  
  
template <typename T>  
T copy_object(const T& obj) noexcept(std::is_pod<T>)  
{  
   // ...   
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni C++](cpp-exception-handling.md)  
 [Specifiche di eccezione (throw, noexcept)](exception-specifications-throw-cpp.md)