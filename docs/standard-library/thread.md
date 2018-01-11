---
title: '&lt;thread&gt; | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: <thread>
dev_langs: C++
ms.assetid: 0c858405-4efb-449d-bf76-70d3693c9234
caps.latest.revision: "18"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0847d92d890026ce6cfb963b022a3859370877fe
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ltthreadgt"></a>&lt;thread&gt;
Includere l'intestazione standard \<thread > per definire la classe `thread` e varie funzioni di supporto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
#include <thread>  
```  
  
## <a name="remarks"></a>Note  
  
> [!NOTE]
>  Nel codice compilato tramite **/clr**, questa intestazione è bloccata.  
  
 Il `__STDCPP_THREADS__` macro viene definita come un valore diverso da zero per indicare che i thread sono supportati da questa intestazione.  
  
## <a name="members"></a>Membri  
  
### <a name="public-classes"></a>Classi pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe thread](../standard-library/thread-class.md)|Definisce un oggetto che è possibile osservare e gestire un thread di esecuzione in un'applicazione.|  
  
### <a name="public-structures"></a>Strutture pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Struttura hash (libreria standard C++)](../standard-library/hash-structure-stl.md)|Definisce una funzione membro che restituisce un valore che viene determinato in modo univoco da un `thread::id`. Definisce la funzione membro un [hash](../standard-library/hash-class.md) funzione adatto per i valori di mapping di tipo `thread::id` una distribuzione dei valori di indice.|  
  
### <a name="public-functions"></a>Funzioni pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[get_id](../standard-library/thread-functions.md#get_id)|Identifica in modo univoco il thread di esecuzione corrente.|  
|[sleep_for](../standard-library/thread-functions.md#sleep_for)|Blocca il thread chiamante.|  
|[sleep_until](../standard-library/thread-functions.md#sleep_until)|La funzione blocca il thread chiamante almeno fino all'ora specificata.|  
|[swap](../standard-library/thread-functions.md#swap)|Scambia gli stati di due `thread` oggetti.|  
|[yield](../standard-library/thread-functions.md#yield)|Segnala al sistema operativo di eseguire altri thread, anche se in genere l'esecuzione del thread corrente dovrebbe continuare.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore > = (operatore)](../standard-library/thread-operators.md#op_gt_eq)|Determina se un oggetto `thread::id` è maggiore o uguale a un altro.|  
|[operatore > (operatore)](../standard-library/thread-operators.md#op_gt)|Determina se un oggetto `thread::id` è maggiore di un altro.|  
|[operatore < = (operatore)](../standard-library/thread-operators.md#op_lt_eq)|Determina se un oggetto `thread::id` è minore o uguale a un altro.|  
|[operatore < (operatore)](../standard-library/thread-operators.md#op_lt)|Determina se un oggetto `thread::id` è minore di un altro.|  
|[operatore! = (operatore)](../standard-library/thread-operators.md#op_neq)|Confronta due oggetti `thread::id` per stabilirne la disuguaglianza.|  
|[operatore Operator = =](../standard-library/thread-operators.md#op_eq_eq)|Confronta due oggetti `thread::id` per stabilirne l'uguaglianza.|  
|[operatore << (operatore)](../standard-library/thread-operators.md#op_lt_lt)|Inserisce una rappresentazione testo di un oggetto `thread::id` in un flusso.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

