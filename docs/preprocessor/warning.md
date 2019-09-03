---
title: Pragma warning
ms.date: 08/29/2019
f1_keywords:
- warning_CPP
- vc-pragma.warning
helpviewer_keywords:
- pragmas, warning
- push pragma warning
- pop warning pragma
- warning pragma
ms.assetid: 8e9a0dec-e223-4657-b21d-5417ebe29cc8
ms.openlocfilehash: 9a79f0c4a9eed6b62e42f056f9d1994b44b57297
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70216467"
---
# <a name="warning-pragma"></a>Pragma warning

Consente la modifica selettiva del comportamento dei messaggi di avviso del compilatore.

## <a name="syntax"></a>Sintassi

> **avviso #pragma (** \
> &nbsp;&nbsp;&nbsp;&nbsp;*avviso-identificatore* **:** *Avviso-numero-elenco*\
> &nbsp;&nbsp;&nbsp;&nbsp;[ **;** *avviso-identificatore* **:** *Avviso-numero-elenco* ...] **)** \
> **avviso #pragma (push** [ **,** *n* ] **)** \
> **avviso #pragma (pop)**

## <a name="remarks"></a>Note

Sono disponibili i seguenti parametri identificatore-avviso.

|identificatore-avviso|Significato|
|------------------------|-------------|
|*1, 2, 3, 4*|Applica il livello specificato agli avvisi specificati. Attiva anche un avviso specificato che è disattivato per impostazione predefinita.|
|*default*|Reimposta il comportamento dell'avviso sul valore predefinito. Attiva anche un avviso specificato che è disattivato per impostazione predefinita. L'avviso verrà generato nel suo livello predefinito e documentato.<br /><br /> Per ulteriori informazioni, vedere [avvisi del compilatore disattivati per impostazione predefinita](../preprocessor/compiler-warnings-that-are-off-by-default.md).|
|*disable*|Non emettere i messaggi di avviso specificati.|
|*error*|Segnala gli avvisi specificati come errori.|
|*once*|Visualizza i messaggi specificati solo una volta.|
|*sopprimere*|Inserisce lo stato corrente del pragma nello stack, disabilita l'avviso specificato per la riga successiva, quindi estrae lo stack di avvisi in modo che venga ripristinato lo stato del pragma.|

Nell'istruzione di codice seguente viene illustrato che un parametro `warning-number-list` può contenere più numeri di avviso e che è possibile specificare più parametri `warning-specifier` nella stessa direttiva pragma.

```cpp
#pragma warning( disable : 4507 34; once : 4385; error : 164 )
```

Questa direttiva è funzionalmente equivalente al codice seguente:

```cpp
// Disable warning messages 4507 and 4034.
#pragma warning( disable : 4507 34 )

// Issue warning 4385 only once.
#pragma warning( once : 4385 )

// Report warning 4164 as an error.
#pragma warning( error : 164 )
```

Il compilatore aggiunge 4000 a qualsiasi numero di avviso compreso tra 0 e 999.

Per i numeri di avviso compresi tra 4700 e 4999, che sono quelli associati alla generazione del codice, lo stato dell'avviso attivo al momento della rilevazione della parentesi graffa di apertura di una funzione da parte del compilatore sarà attivo per il resto della funzione. L'utilizzo del pragma **warning** nella funzione per modificare lo stato di un numero di avviso maggiore di 4699 ha effetto solo dopo la fine della funzione. Nell'esempio seguente viene illustrata la posizione corretta dei pragma **warning** per disabilitare un messaggio di avviso di generazione del codice e quindi ripristinarlo.

```cpp
// pragma_warning.cpp
// compile with: /W1
#pragma warning(disable:4700)
void Test() {
   int x;
   int y = x;   // no C4700 here
   #pragma warning(default:4700)   // C4700 enabled after Test ends
}

int main() {
   int x;
   int y = x;   // C4700
}
```

Si noti che in tutto il corpo di una funzione, l'ultima impostazione del pragma **warning** sarà valida per l'intera funzione.

## <a name="push-and-pop"></a>Push e pull

Il pragma **warning** supporta anche la sintassi seguente, dove *n* rappresenta un livello di avviso (da 1 a 4).

`#pragma warning( push [ , n ] )`

`#pragma warning( pop )`

Il pragma `warning( push )` archivia lo stato di avviso corrente per ogni avviso. Il pragma `warning( push, n )` archivia lo stato corrente per ogni avviso e imposta il livello di avviso globale su *n*.

Il pragma `warning( pop )` estrae l'ultimo stato di avviso inserito nello stack. Tutte le modifiche apportate allo stato di avviso tra *push* e *pop* vengono annullate. Si consideri l'esempio seguente:

```cpp
#pragma warning( push )
#pragma warning( disable : 4705 )
#pragma warning( disable : 4706 )
#pragma warning( disable : 4707 )
// Some code
#pragma warning( pop )
```

Alla fine di questo codice, *pop* ripristina lo stato di ogni avviso (include 4705, 4706 e 4707) a quello che si trovava all'inizio del codice.

Quando si scrivono file di intestazione, è possibile usare *push* e *pop* per garantire che le modifiche dello stato di avviso apportate da un utente non impediscano la compilazione corretta delle intestazioni. Usare *push* all'inizio dell'intestazione e *pop* alla fine. Se, ad esempio, si dispone di un'intestazione che non viene compilata in modo corretto a livello di avviso 4, il codice seguente imposta il livello di avviso su 3, quindi Ripristina il livello di avviso originale alla fine dell'intestazione.

```cpp
#pragma warning( push, 3 )
// Declarations/definitions
#pragma warning( pop )
```

Per ulteriori informazioni sulle opzioni del compilatore che consentono di non visualizzare gli avvisi, vedere [/Fi](../build/reference/fi-name-forced-include-file.md) e [/w](../build/reference/compiler-option-warning-level.md).

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
