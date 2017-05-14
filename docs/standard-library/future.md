---
title: '&lt;future&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- <future>
dev_langs:
- C++
ms.assetid: 2f5830fc-455d-44f9-9e3d-94ea051596a2
caps.latest.revision: 23
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 86978cd4549f0672dac7cad0e4713380ea189c27
ms.openlocfilehash: e2ebbb8eb6e6f250376b0ef2b43dae261a642d69
ms.contentlocale: it-it
ms.lasthandoff: 04/18/2017

---
# <a name="ltfuturegt"></a>&lt;future&gt;
Includere l'intestazione standard \<future> per definire le classi modello e i modelli di supporto che semplificano l'esecuzione di una funzione, possibilmente in un thread separato, e il recupero del relativo risultato. Quest'ultimo è il valore restituito dalla funzione o un'eccezione generata dalla funzione, ma non rilevata nella funzione.  
  
 Questa intestazione usa il runtime di concorrenza (ConcRT) in modo che sia utilizzabile con altri meccanismi ConcRT. Per altre informazioni su ConcRT, vedere [Runtime di concorrenza](../parallel/concrt/concurrency-runtime.md).  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
#include <future>  
```  
  
## <a name="remarks"></a>Note  
  
> [!NOTE]
>  Nel codice compilato tramite **/clr**, questa intestazione è bloccata.  
  
 Un *provider asincrono* archivia il risultato di una chiamata di funzione. Un *oggetto restituito asincrono* viene usato per recuperare il risultato di una chiamata di funzione. Uno *stato asincrono associato* consente la comunicazione tra un provider asincrono e uno o più oggetti restituiti asincroni.  
  
 Un programma non crea direttamente alcun oggetto di stato asincrono associato. Il programma crea un provider asincrono ogni volta che ne è necessario uno e da questo crea un oggetto restituito asincrono che condivide il proprio stato asincrono associato con il provider. I provider asincroni e gli oggetti restituiti asincroni gestiscono gli oggetti che includono il relativo stato asincrono associato condiviso. Quando l'ultimo oggetto che fa riferimento allo stato asincrono associato lo rilascia, l'oggetto che include tale stato viene eliminato.  
  
 Un provider asincrono o un oggetto restituito asincrono privo di uno stato asincrono associato è *vuoto*.  
  
 Lo stato asincrono associato è *ready* solo se il relativo provider asincrono ha archiviato un valore restituito o un'eccezione.  
  
 La funzione modello `async` e le classi modello `promise` e `packaged_task` sono provider asincroni. Le classi modello `future` e `shared_future` descrivono gli oggetti restituiti asincroni.  
  
 Ognuna delle classi modello `promise`, `future` e `shared_future` ha una specializzazione per il tipo `void` e una specializzazione parziale per l'archiviazione e il recupero di un valore per riferimento. Queste specializzazioni si differenziano dal modello principale solo nelle firme e nella semantica delle funzioni che archiviano e recuperano il valore restituito.  
  
 Le classi modello `future` e `shared_future` non si bloccano mai nei relativi distruttori, con l'eccezione di un unico caso che viene mantenuto per compatibilità con le versioni precedenti. Infatti, a differenza di quanto avviene con tutti gli altri oggetti future, per un oggetto `future` o l'ultimo oggetto `shared_future` associato a un'attività avviata con `std::async`, il distruttore si blocca se l'attività non è stata completata. In altri termini, si blocca se il thread non ha ancora chiamato `.get()` o `.wait()` e l'attività è ancora in esecuzione. Alla descrizione di `std::async` nella bozza dello standard è stata aggiunta una nota di usabilità che spiega quanto segue: se un oggetto future ottenuto da std::async viene spostato al di fuori dell'ambito locale, l'altro codice che usa l'oggetto future deve tenere presente che il distruttore di tale oggetto può bloccarsi per consentire allo stato condiviso di diventare ready. In tutti gli altri casi, i distruttori `future` e `shared_future` sono necessari ed è garantito che non si blocchino mai.  
  
## <a name="members"></a>Membri  
  
### <a name="classes"></a>Classi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe future](../standard-library/future-class.md)|Descrive un oggetto restituito asincrono.|  
|[Classe future_error](../standard-library/future-error-class.md)|Descrive un oggetto eccezione che può essere generato dai metodi dei tipi che gestiscono gli oggetti `future`.|  
|[Classe packaged_task](../standard-library/packaged-task-class.md)|Descrive un provider asincrono che è un wrapper di chiamata la cui firma di chiamata è `Ty(ArgTypes...)`. Lo stato asincrono associato include una copia dell'oggetto chiamabile oltre al potenziale risultato.|  
|[Classe promise](../standard-library/promise-class.md)|Descrive un provider asincrono.|  
|[Classe shared_future](../standard-library/shared-future-class.md)|Descrive un oggetto restituito asincrono. Diversamente da un oggetto `future`, un provider asincrono può essere associato a un numero qualsiasi di oggetti `shared_future`.|  
  
### <a name="structures"></a>Strutture  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Struttura is_error_code_enum](../standard-library/is-error-code-enum-structure.md)|Specializzazione che indica che `future_errc` è adatto per l'archiviazione di un oggetto `error_code`.|  
|[Struttura uses_allocator](../standard-library/uses-allocator-structure.md)|Specializzazione che restituisce sempre true.|  
  
### <a name="functions"></a>Funzioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[async](../standard-library/future-functions.md#async)|Rappresenta un provider asincrono.|  
|[future_category](../standard-library/future-functions.md#future_category)|Restituisce un riferimento all'oggetto `error_category` che caratterizza gli errori associati agli oggetti `future`.|  
|[make_error_code](../standard-library/future-functions.md#make_error_code)|Crea un oggetto `error_code` che dispone dell'oggetto `error_category` che caratterizza gli errori `future`.|  
|[make_error_condition](../standard-library/future-functions.md#make_error_condition)|Crea un oggetto `error_condition` che dispone dell'oggetto `error_category` che caratterizza gli errori `future`.|  
|[swap](../standard-library/future-functions.md#swap)|Scambia lo stato asincrono associato di un oggetto `promise` con quello di un altro oggetto.|  
  
### <a name="enumerations"></a>Enumerazioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[future_errc](../standard-library/future-enums.md#future_errc)|Fornisce i nomi simbolici per tutti gli errori segnalati dalla classe `future_error`.|  
|[future_status](../standard-library/future-enums.md#future_status)|Fornisce i nomi simbolici per i motivi che una funzione di attesa temporizzata può restituire.|  
|[avvio veloce](../standard-library/future-enums.md#launch)|Rappresenta un tipo di maschera di bit che descrive le possibili modalità per la funzione modello `async`.|  
  
## <a name="see-also"></a>Vedere anche  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md) (Riferimento file di intestazione)




