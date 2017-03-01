---
title: '&lt;thread&gt; | Documenti di Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- <thread>
dev_langs:
- C++
ms.assetid: 0c858405-4efb-449d-bf76-70d3693c9234
caps.latest.revision: 18
author: corob-msft
ms.author: corob
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
translationtype: Machine Translation
ms.sourcegitcommit: cc82b83860786ffc3f0aee73ede18ecadef16a7a
ms.openlocfilehash: 9b32de86d2ec84017157cccf1a05b9e9b6802e47
ms.lasthandoff: 02/24/2017

---
# <a name="ltthreadgt"></a>&lt;thread&gt;
Includere l'intestazione standard \<thread > per definire la classe `thread` e varie funzioni di supporto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
#include <thread>  
```  
  
## <a name="remarks"></a>Note  
  
> [!NOTE]
>  Nel codice che viene compilato mediante **/clr**, questa intestazione è bloccata.  
  
 Il `__STDCPP_THREADS__` macro viene definita come un valore diverso da zero per indicare che i thread sono supportati da questa intestazione.  
  
## <a name="members"></a>Membri  
  
### <a name="public-classes"></a>Classi pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe thread](../standard-library/thread-class.md)|Definisce un oggetto utilizzato per verificare e gestire un thread di esecuzione in un'applicazione.|  
  
### <a name="public-structures"></a>Strutture pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Struttura hash (libreria standard C++)](../standard-library/hash-structure-stl.md)|Definisce una funzione membro che restituisce un valore che viene determinato in modo univoco da un `thread::id`. Definisce la funzione membro di un [hash](../standard-library/hash-class.md) funzione adatto per i valori di mapping di tipo `thread::id` una distribuzione dei valori di indice.|  
  
### <a name="public-functions"></a>Funzioni pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Funzione get_id](../standard-library/thread-functions.md#get_id_function)|Identifica in modo univoco il thread di esecuzione corrente.|  
|[Funzione sleep_for](../standard-library/thread-functions.md#sleep_for_function)|Blocca il thread chiamante.|  
|[Funzione sleep_until](../standard-library/thread-functions.md#sleep_until_function)|La funzione blocca il thread chiamante almeno fino all'ora specificata.|  
|[Funzione swap](../standard-library/thread-functions.md#swap_function)|Scambia gli stati di due `thread` oggetti.|  
|[Funzione yield](../standard-library/thread-functions.md#yield_function)|Segnala al sistema operativo di eseguire altri thread, anche se in genere l'esecuzione del thread corrente dovrebbe continuare.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore > = (operatore)](../standard-library/thread-operators.md#operator_gt__eq)|Determina se un oggetto `thread::id` è maggiore o uguale a un altro.|  
|[operatore > (operatore)](../standard-library/thread-operators.md#operator_gt_)|Determina se un oggetto `thread::id` è maggiore di un altro.|  
|[(operatore)<=></=>](../standard-library/thread-operators.md#operator_lt__eq)|Determina se un oggetto `thread::id` è minore o uguale a un altro.|  
|[(operatore)<>](../standard-library/thread-operators.md#operator_lt_)|Determina se un oggetto `thread::id` è minore di un altro.|  
|[operatore! = (operatore)](../standard-library/thread-operators.md#operator_neq)|Confronta due oggetti `thread::id` per stabilirne la disuguaglianza.|  
|[operatore Operator = =](../standard-library/thread-operators.md#operator_eq_eq)|Confronta due oggetti `thread::id` per stabilirne l'uguaglianza.|  
|[(operatore)<>](../standard-library/thread-operators.md#operator_lt__lt_)|Inserisce una rappresentazione testo di un oggetto `thread::id` in un flusso.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)


