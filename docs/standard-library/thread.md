---
title: "&lt; thread &gt; | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "<thread>"
dev_langs: 
  - "C++"
ms.assetid: 0c858405-4efb-449d-bf76-70d3693c9234
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt; thread &gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Includere l'intestazione standard \< thread> per definire la classe `thread` e varie funzioni di supporto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
#include <thread>  
```  
  
## <a name="remarks"></a>Note  
  
> [!NOTE]
>  Nel codice che viene compilato mediante **/clr** o **/clr: pure**, questa intestazione è bloccata.  
  
 Il `__STDCPP_THREADS__` macro viene definita come un valore diverso da zero per indicare che i thread sono supportati da questa intestazione.  
  
## <a name="members"></a>Membri  
  
### <a name="public-classes"></a>Classi pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe thread](../standard-library/thread-class.md)|Definisce un oggetto utilizzato per verificare e gestire un thread di esecuzione in un'applicazione.|  
  
### <a name="public-structures"></a>Strutture pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[hash struttura (STL)](../standard-library/hash-structure-stl.md)|Definisce una funzione membro che restituisce un valore che viene determinato in modo univoco da un `thread::id`. Definisce la funzione membro di un [hash](hash%20Class.md) funzione adatto per i valori di mapping di tipo `thread::id` una distribuzione dei valori di indice.|  
  
### <a name="public-functions"></a>Funzioni pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Funzione get_id](../Topic/%3Cthread%3E%20functions.md#get_id_function)|Identifica il thread di esecuzione corrente.|  
|[Funzione sleep_for](../Topic/%3Cthread%3E%20functions.md#sleep_for_function)|Blocca il thread chiamante.|  
|[Funzione sleep_until](../Topic/%3Cthread%3E%20functions.md#sleep_until_function)|Blocca il thread chiamante almeno fino all'ora specificata.|  
|[Funzione swap](../Topic/%3Cthread%3E%20functions.md#swap_function)|Scambia gli stati di due `thread` oggetti.|  
|[Funzione yield](../Topic/%3Cthread%3E%20functions.md#yield_function)|Segnala al sistema operativo di eseguire altri thread, anche se il thread corrente continuerà a funzionare normalmente.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore > = (operatore)](../Topic/%3Cthread%3E%20operators.md#operator_gt__eq)|Determina se un `thread::id` oggetto è maggiore o uguale a un altro.|  
|[operatore > (operatore)](../Topic/%3Cthread%3E%20operators.md#operator_gt_)|Determina se un `thread::id` è maggiore di un altro oggetto.|  
|[operatore < = (operatore)](../Topic/%3Cthread%3E%20operators.md#operator_lt__eq)|Determina se un `thread::id` oggetto è minore o uguale a un altro.|  
|[operatore < (operatore)](../Topic/%3Cthread%3E%20operators.md#operator_lt_)|Determina se un `thread::id` oggetto è minore di un altro.|  
|[operatore! = (operatore)](../Topic/%3Cthread%3E%20operators.md#operator_neq)|Confronta due oggetti `thread::id` per stabilirne la disuguaglianza.|  
|[operatore Operator = =](../Topic/%3Cthread%3E%20operators.md#operator_eq_eq)|Confronta due oggetti `thread::id` per stabilirne l'uguaglianza.|  
|[operatore << (operatore)](../Topic/%3Cthread%3E%20operators.md#operator_lt__lt_)|Inserisce una rappresentazione testuale di un `thread::id` oggetto in un flusso.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

