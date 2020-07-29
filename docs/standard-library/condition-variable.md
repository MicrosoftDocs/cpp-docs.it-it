---
title: '&lt;condition_variable&gt;'
ms.date: 11/04/2016
f1_keywords:
- <condition_variable>
ms.assetid: 8567f7cc-20bd-42a7-9137-87c46f878009
ms.openlocfilehash: d13b58fc05055ceecb6472003d7682c41c76e23d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87222537"
---
# <a name="ltcondition_variablegt"></a>&lt;condition_variable&gt;

Definisce le classi [condition_variable](../standard-library/condition-variable-class.md) e [condition_variable_any](../standard-library/condition-variable-any-class.md) che vengono usate per creare oggetti che attendono che una condizione diventi true.

Questa intestazione usa il runtime di concorrenza (ConcRT) in modo da essere utilizzabile con altri meccanismi ConcRT. Per altre informazioni su ConcRT, vedere [Runtime di concorrenza](../parallel/concrt/concurrency-runtime.md).

## <a name="requirements"></a>Requisiti

**Intestazione:**\<condition_variable>

**Spazio dei nomi:** std

> [!NOTE]
> Nel codice compilato utilizzando **/CLR**, questa intestazione è bloccata.

### <a name="remarks"></a>Osservazioni

Il codice che è in attesa di una variabile di condizione deve usare anche un `mutex`. Un thread chiamante deve bloccare il `mutex` prima di chiamare le funzioni di attesa per la variabile di condizione. In seguito il `mutex` viene bloccato quando la funzione chiamata viene restituita. Il `mutex` non risulta bloccato mentre il thread è in attesa che la condizione diventi true. Per far sì che non vi siano risultati imprevedibili, tutti i thread in attesa di una variabile di condizione devono usare lo stesso oggetto `mutex`.

Gli oggetti di tipo `condition_variable_any` possono essere usati con un mutex di qualsiasi tipo. Il tipo di mutex usato non deve necessariamente specificare il metodo `try_lock`. Gli oggetti di tipo `condition_variable` possono essere usati solo con un mutex di tipo `unique_lock<mutex>`. Gli oggetti di questo tipo possono risultare più veloci rispetto agli oggetti di tipo `condition_variable_any<unique_lock<mutex>>`.

Per attendere un evento, per prima cosa bloccare il mutex e quindi chiamare uno dei metodi `wait` sulla variabile di condizione. La chiamata `wait` si blocca fino a quando un altro thread segnala la variabile di condizione.

Si verificano *riattivazioni spurie* quando i thread in attesa di variabili di condizione si sbloccano senza le notifiche appropriate. Per riconoscere tali riattivazioni spurie, il codice che è in attesa che una condizione diventi true deve verificare in modo esplicito la condizione quando il codice viene restituito da una funzione di attesa. Ciò avviene solitamente usando un ciclo. Per eseguire il ciclo, è possibile usare `wait(unique_lock<mutex>& lock, Predicate pred)`.

```cpp
while (condition is false)
    wait for condition variable;
```

Le classi `condition_variable_any` e `condition_variable` hanno tre metodi che attendono una condizione.

- `wait` attende per un periodo di tempo illimitato.

- `wait_until` attende fino a una condizione `time` specifica.

- `wait_for` attende una condizione `time interval` specifica.

Ognuno di questi metodi ha due versioni di overload. Una si limita ad attendere e può riattivarsi in modo spurio. L'altra accetta un argomento di modello aggiuntivo che definisce un predicato. Il metodo non restituisce alcun risultato finché il predicato non è **`true`** .

Ogni classe dispone inoltre di due metodi utilizzati per notificare a una variabile di condizione che la relativa condizione è **`true`** .

- `notify_one` attiva uno dei thread in attesa della variabile di condizione.

- `notify_all` attiva tutti i thread in attesa della variabile di condizione.

## <a name="functions-and-enums"></a>Funzioni ed enumerazioni

```cpp
void notify_all_at_thread_exit(condition_variable& cond, unique_lock<mutex> lk);

enum class cv_status { no_timeout, timeout };
```

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Classe condition_variable](../standard-library/condition-variable-class.md)\
[Classe condition_variable_any](../standard-library/condition-variable-any-class.md)
