---
title: avviso pragma
description: Altre informazioni sull'avviso pragma in Microsoft C/C++
ms.date: 01/22/2021
f1_keywords:
- warning_CPP
- vc-pragma.warning
helpviewer_keywords:
- pragma, warning
- push pragma warning
- pop warning pragma
- warning pragma
no-loc:
- pragma
ms.openlocfilehash: 97d48acc3c0e4651d3b05c0a6405d5c9c2031cf6
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98712843"
---
# <a name="warning-no-locpragma"></a>`warning` pragma

Consente la modifica selettiva del comportamento dei messaggi di avviso del compilatore.

## <a name="syntax"></a>Sintassi

> **`#pragma warning(`**\
> &nbsp;&nbsp;&nbsp;&nbsp;*`warning-specifier`* **`:`** *`warning-number-list`*\
> &nbsp;&nbsp;&nbsp;&nbsp;[**`;`** *`warning-specifier`* **`:`** *`warning-number-list`* ... ] **`)`**\
> **`#pragma warning( push`** [ **`,`** *n* ] **`)`**\
> **`#pragma warning( pop )`**

## <a name="remarks"></a>Osservazioni

Sono disponibili i seguenti parametri identificatore-avviso.

| identificatore-avviso | Significato |
|--|--|
| `1`, `2`, `3`, `4` | Applicare il livello specificato agli avvisi specificati. Attiva anche un avviso specificato che è disattivato per impostazione predefinita. |
| `default` | Reimposta il comportamento dell'avviso sul valore predefinito. Attiva anche un avviso specificato che è disattivato per impostazione predefinita. L'avviso verrà generato nel suo livello predefinito e documentato.<br /><br /> Per ulteriori informazioni, vedere [avvisi del compilatore disattivati per impostazione predefinita](../preprocessor/compiler-warnings-that-are-off-by-default.md). |
| `disable` | Non emettere i messaggi di avviso specificati. |
| `error` | Segnala gli avvisi specificati come errori. |
| `once` | Visualizza i messaggi specificati solo una volta. |
| `suppress` | Inserisce lo stato corrente dell'oggetto nello pragma stack, Disabilita l'avviso specificato per la riga successiva, quindi estrae lo stack di avvisi in modo che lo pragma stato venga reimpostato. |

Nell'istruzione del codice seguente viene illustrato che un *`warning-number-list`* parametro può contenere più numeri di avviso e che è *`warning-specifier`* possibile specificare più parametri nella stessa pragma direttiva.

```cpp
#pragma warning( disable : 4507 34; once : 4385; error : 164 )
```

Questa direttiva è funzionalmente equivalente al codice seguente:

```cpp
// Disable warning messages 4507 and 4034.
#pragma warning( disable : 4507 34 )

// Issue warning C4385 only once.
#pragma warning( once : 4385 )

// Report warning C4164 as an error.
#pragma warning( error : 164 )
```

Il compilatore aggiunge 4000 a qualsiasi numero di avviso compreso tra 0 e 999.

I numeri di avviso nell'intervallo 4700-4999 sono associati alla generazione del codice. Per questi avvisi, lo stato dell'avviso in vigore quando il compilatore raggiunge la definizione di funzione rimane attivo per il resto della funzione. L'uso di **`warning`** pragma nella funzione per modificare lo stato di un numero di avviso maggiore di 4699 ha effetto solo dopo la fine della funzione. Nell'esempio seguente viene illustrata la posizione corretta di un oggetto **`warning`** pragma per disabilitare un messaggio di avviso di generazione del codice e quindi ripristinarlo.

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

Si noti che in tutto il corpo di una funzione, l'ultima impostazione di **`warning`** pragma sarà valida per l'intera funzione.

## <a name="push-and-pop"></a>Push e pop

**`warning`** pragma Supporta inoltre la sintassi seguente, in cui il parametro *n* facoltativo rappresenta un livello di avviso (da 1 a 4).

`#pragma warning( push [ , n ] )`

`#pragma warning( pop )`

pragma `warning( push )` Archivia lo stato di avviso corrente per ogni avviso. pragma `warning( push, n )` Archivia lo stato corrente per ogni avviso e imposta il livello di avviso globale su *n*.

pragma `warning( pop )` Estrae l'ultimo stato di avviso inserito nello stack. Tutte le modifiche apportate allo stato di avviso tra `push` e `pop` vengono annullate. Prendere in considerazione questo esempio:

```cpp
#pragma warning( push )
#pragma warning( disable : 4705 )
#pragma warning( disable : 4706 )
#pragma warning( disable : 4707 )
// Some code
#pragma warning( pop )
```

Alla fine di questo codice, `pop` Ripristina lo stato di ogni avviso (include 4705, 4706 e 4707) a quello che si trovava all'inizio del codice.

Quando si scrivono file di intestazione, è possibile usare `push` e `pop` per garantire che le modifiche dello stato di avviso apportate da un utente non impediscano la compilazione corretta delle intestazioni. Utilizzare `push` all'inizio dell'intestazione e `pop` alla fine. Ad esempio, è possibile che si disponga di un'intestazione che non viene compilata in modo corretto a livello di avviso 4. Il codice seguente imposta il livello di avviso su 3, quindi Ripristina il livello di avviso originale alla fine dell'intestazione.

```cpp
#pragma warning( push, 3 )
// Declarations/definitions
#pragma warning( pop )
```

Per ulteriori informazioni sulle opzioni del compilatore che consentono di non visualizzare gli avvisi, vedere [`/FI`](../build/reference/fi-name-forced-include-file.md) e [`/w`](../build/reference/compiler-option-warning-level.md) .

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
