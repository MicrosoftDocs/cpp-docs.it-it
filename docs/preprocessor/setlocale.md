---
description: Altre informazioni sulla pragma direttiva setlocale in Microsoft C/C++
title: setlocale pragma
ms.date: 01/22/2021
f1_keywords:
- setlocale_CPP
- vc-pragma.setlocale
helpviewer_keywords:
- pragma, setlocale
- setlocale pragma
no-loc:
- pragma
ms.openlocfilehash: 936aa1c2eb26798438b48e61ec28007a12080f28
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713207"
---
# <a name="setlocale-no-locpragma"></a>`setlocale` pragma

Definisce le *impostazioni locali*, il paese, l'area geografica e la lingua da usare per la conversione di costanti a caratteri "wide" e valori letterali stringa.

## <a name="syntax"></a>Sintassi

> **`#pragma setlocale( "`** [ *impostazioni locali-stringa* ] **`" )`**

## <a name="remarks"></a>Osservazioni

Poiché l'algoritmo per la conversione di caratteri multibyte in caratteri wide può variare in base alle impostazioni locali, oppure la compilazione può essere eseguita in impostazioni locali diverse da cui verrà eseguito un file eseguibile, in questo pragma modo si consente di specificare le impostazioni locali di destinazione in fase di compilazione. Garantisce che le stringhe a caratteri wide vengano archiviate nel formato corretto.

Il valore predefinito delle *impostazioni locali* è la stringa vuota, specificata da `#pragma setlocale( "" )` .

Le **`"C"`** impostazioni locali esegue il mapping di ogni carattere nella stringa al relativo valore come **`wchar_t`** . Gli altri valori validi per `setlocale` sono le voci presenti nell'elenco delle [stringhe della lingua](../c-runtime-library/language-strings.md) . Ad esempio, è possibile specificare:

```cpp
#pragma setlocale("dutch")
```

La possibilità di specificare una stringa di lingua dipende dalla tabella codici e dal supporto dell'ID lingua nel computer.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
