---
title: '&lt;mutex&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- <mutex>
dev_langs:
- C++
ms.assetid: efb60c89-687a-4e38-8fe4-694e11c4e8a3
caps.latest.revision: 17
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
ms.openlocfilehash: 7e6aaf9ae1817da4a532b00fe0bf54afc5e9cd17
ms.lasthandoff: 02/24/2017

---
# <a name="ltmutexgt"></a>&lt;mutex&gt;
Includere l'intestazione standard \<mutex> per definire le classi `mutex`, `recursive_mutex`, `timed_mutex` e `recursive_timed_mutex`, nonché i modelli `lock_guard` e `unique_lock` e i tipi e le funzioni di supporto che definiscono aree di codice a esclusione reciproca.  
  
> [!WARNING]
>  I tipi di sincronizzazione della libreria standard C++ in Visual Studio 2015 si basano sulle primitive di sincronizzazione di Windows e non usano più ConcRT (tranne quando la piattaforma di destinazione è Windows XP). I tipi definiti in \<mutex> non devono essere usati con qualsiasi tipo o funzione ConcRT.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
#include <mutex>  
```  
  
## <a name="remarks"></a>Note  
  
> [!NOTE]
>  Nel codice che viene compilato mediante **/clr**, questa intestazione è bloccata.  
  
 Le classi `mutex` e `recursive_mutex` sono *tipi mutex*. Un tipo mutex dispone di un costruttore e di un distruttore predefiniti che non generano eccezioni. Questi oggetti dispongono di metodi che forniscono l'esclusione reciproca quando più thread tentano di bloccare l'oggetto stesso. In particolare, un tipo mutex contiene i metodi `lock`, `try_lock` e `unlock`:  
  
-   Il metodo `lock` blocca il thread chiamante finché il thread non diventa proprietario del mutex. Il valore restituito viene ignorato.  
  
-   Il metodo `try_lock` tenta di ottenere la proprietà del tipo mutex senza blocco. Il tipo restituito è convertibile in `bool` e `true` se il metodo ottiene la proprietà, mentre altrimenti è `false`.  
  
-   Il metodo `unlock` rilascia la proprietà del tipo mutex dal thread chiamante.  
  
 È possibile utilizzare i tipi di mutex come argomenti di tipo per creare i modelli `lock_guard` e `unique_lock`. È possibile usare oggetti di questi tipi come argomento `Lock` delle funzioni membro di attesa nel modello [condition_variable_any](../standard-library/condition-variable-any-class.md).  
  
 Un *tipo mutex programmato* soddisfa i requisiti per un tipo mutex. Inoltre, includi i metodi `try_lock_for` e `try_lock_until` che devono essere richiamabili tramite un argomento e devono restituire un tipo convertibile in `bool`. Un tipo di mutex programmato consente di definire queste funzioni con argomenti aggiuntivi, purché tali argomenti aggiuntivi dispongano tutti di valori predefiniti.  
  
-   Il metodo `try_lock_for` deve essere chiamabile tramite un solo argomento, `Rel_time`, il cui tipo è un'istanza specifica di [chrono::duration](../standard-library/duration-class.md). Il metodo tenta di ottenere la proprietà del tipo mutex, ma restituisce un risultato entro l'orario indicato da `Rel_time`, indipendentemente dall'esito. Il valore restituito viene convertito in `true` se il metodo ottiene la proprietà; in caso contrario, il valore restituito viene convertito in `false`.  
  
-   Il metodo `try_lock_until` deve essere chiamabile tramite un solo argomento, `Abs_time`, il cui tipo è un'istanza specifica di [chrono::time_point](../standard-library/time-point-class.md). Il metodo tenta di ottenere la proprietà del tipo mutex, ma restituisce un risultato entro e non oltre l'orario indicato da `Abs_time`, indipendentemente dall'esito. Il valore restituito viene convertito in `true` se il metodo ottiene la proprietà; in caso contrario, il valore restituito viene convertito in `false`.  
  
 Un tipo mutex è noto anche come *tipo bloccabile*. Se non fornisce la funzione membro `try_lock`, si tratta di un *tipo bloccabile di base*. Un tipo mutex programmato è noto anche come *tipo bloccabile programmato*.  
  
### <a name="classes"></a>Classi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe lock_guard](../standard-library/lock-guard-class.md)|Rappresenta un modello di cui è possibile creare un’istanza per la creazione di un oggetto il cui distruttore sblocca un tipo `mutex`.|  
|[Classe mutex (libreria standard C++)](../standard-library/mutex-class-stl.md)|Rappresenta un tipo mutex. Gli oggetti di questo tipo possono essere utilizzati per gestire l'esclusione reciproca in un programma.|  
|[Classe recursive_mutex](../standard-library/recursive-mutex-class.md)|Rappresenta un tipo mutex. Contrariamente alla classe `mutex`, il comportamento di chiamata di metodi di blocco per gli oggetti che sono già stati bloccati è ben definito.|  
|[Classe recursive_timed_mutex](../standard-library/recursive-timed-mutex-class.md)|Rappresenta un tipo mutex programmato. Gli oggetti di questo tipo possono essere utilizzati per gestire l'esclusione reciproca con un blocco a tempo limitato all’interno di un programma. A differenza degli oggetti di tipo `timed_mutex`, l'effetto della chiamata di metodi di blocco per oggetti `recursive_timed_mutex` è ben definito.|  
|[Classe timed_mutex](../standard-library/timed-mutex-class.md)|Rappresenta un tipo mutex programmato. Gli oggetti di questo tipo possono essere utilizzati per gestire l'esclusione reciproca con un blocco a tempo limitato all’interno di un programma.|  
|[Classe unique_lock](../standard-library/unique-lock-class.md)|Rappresenta un modello di cui è possibile creare un’istanza per la creazione di oggetti che gestiscono il blocco e lo sblocco di un tipo `mutex`.|  
  
### <a name="functions"></a>Funzioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Funzione call_once](../standard-library/mutex-functions.md#call_once_function)|Fornisce un meccanismo per chiamare un oggetto richiamabile esattamente una sola volta l'esecuzione.|  
|[Funzione lock](../standard-library/mutex-functions.md#lock_function)|Tenta di bloccare tutti gli argomenti senza deadlock.|  
  
### <a name="structs"></a>Strutture  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Struttura adopt_lock_t](../standard-library/adopt-lock-t-structure.md)|Rappresenta un tipo che viene utilizzato per definire un `adopt_lock`.|  
|[Struttura defer_lock_t](../standard-library/defer-lock-t-structure.md)|Rappresenta un tipo che definisce un oggetto `defer_lock` che consente di selezionare uno dei costruttori di overload di `unique_lock`.|  
|[Struttura once_flag](../standard-library/once-flag-structure.md)|Rappresenta una `struct` utilizzata con la funzione di modello `call_once` per garantire che il codice di inizializzazione venga richiamato una sola volta, anche in presenza di più thread di esecuzione.|  
|[Struttura try_to_lock_t](../standard-library/try-to-lock-t-structure.md)|Rappresenta una `struct` che definisce un oggetto `try_to_lock` utilizzato per selezionare uno dei costruttori di overload di `unique_lock`.|  
  
### <a name="variables"></a>Variabili  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Variabile adopt_lock](../standard-library/mutex-functions.md#adopt_lock_variable)|Rappresenta un oggetto che è possibile passare ai costruttori di `lock_guard` e `unique_lock` per indicare che l'oggetto mutex, anch'esso passato al costruttore è bloccato.|  
|[Variabile defer_lock](../standard-library/mutex-functions.md#defer_lock_variable)|Rappresenta un oggetto che può essere passato al costruttore di `unique_lock` per indicare che il costruttore non deve bloccare l'oggetto mutex anch’esso passato al costruttore.|  
|[Variabile try_to_lock](../standard-library/mutex-functions.md#try_to_lock_variable)|Rappresenta un oggetto che può essere passato al costruttore di `unique_lock` per indicare che il costruttore deve provare a sbloccare l’oggetto `mutex` anch’esso passato al costruttore senza blocco.|  
  
## <a name="see-also"></a>Vedere anche  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md) (Riferimento file di intestazione)




