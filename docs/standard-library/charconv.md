---
description: 'Altre informazioni su: &lt; charconv&gt;'
title: '&lt;charconv&gt;'
ms.date: 07/22/2020
f1_keywords:
- <charconv>
helpviewer_keywords:
- charconv header
ms.openlocfilehash: 9faab40d2b601317e9dd739053c31000da5ea18b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325208"
---
# <a name="ltcharconvgt"></a>&lt;charconv&gt;

Convertire rapidamente una sequenza di caratteri in un valore integer o a virgola mobile e viceversa.
Un modo per usare questa libreria è scrivere e quindi eseguire il round trip dei valori a virgola mobile nei file JSON e di testo.

Le funzioni di conversione sono ottimizzate per le prestazioni e supportano anche il comportamento di round trip più breve. Il comportamento di round trip più breve indica quando un numero viene convertito in caratteri, viene scritta solo una precisione sufficiente per consentire il recupero del numero originale durante la conversione di tali caratteri in un punto a virgola mobile. Nessun'altra funzione CRT o STL offre questa funzionalità.

Di seguito sono elencati alcuni dei vantaggi derivanti dall'utilizzo della `<charconv>` libreria:

- La sequenza di caratteri che rappresenta un valore numerico non deve essere con terminazione null. Analogamente, quando un numero viene convertito in caratteri, il risultato non è con terminazione null.
- Le funzioni di conversione non allocano memoria. Si è proprietari del buffer in tutti i casi.
- Le funzioni di conversione non generano. Restituiscono una struttura che contiene informazioni sull'errore.
- Le conversioni non sono sensibili alla modalità di arrotondamento in fase di esecuzione.
- Le conversioni non sono compatibili con le impostazioni locali. Stampano sempre e analizzano i punti decimali come ' .' mai come ',' per le impostazioni locali che usano virgole.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<charconv>

**Spazio dei nomi:** std

/STD: è necessario c++ 17 o versione successiva.

## <a name="members"></a>Membri

### <a name="types"></a>Tipi

| Tipo | Description |
|-|:-|
| [chars_format](chars-format-class.md) | Specifica il tipo di formattazione, ad esempio scientifico, esadecimale e così via. |
| [from_chars_result](from-chars-result-structure.md) | Include il risultato di una `from_chars` conversione. |
| [to_chars_result](to-chars-result-structure.md) | Include il risultato di una `to_chars` conversione. |

### <a name="functions"></a>Funzioni

| Funzione | Descrizione |
|-|:-|
| [from_chars](charconv-functions.md#from_chars) | Converte i caratteri in un Integer, float o Double. |
| [to_chars](charconv-functions.md#to_chars)| Converte un valore integer, float o Double in chars. |

## <a name="see-also"></a>Vedi anche

[Riferimento file di intestazione](cpp-standard-library-header-files.md)
