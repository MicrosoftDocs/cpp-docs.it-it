---
description: Altre informazioni sulla direttiva detect_mismatch pragma in Microsoft C/C++
title: detect_mismatch pragma
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.detect_mismatch
- detect_mismatch_CPP
helpviewer_keywords:
- pragma, detect_mismatch
- detect_mismatch pragma
no-loc:
- pragma
ms.openlocfilehash: 33bc899eaaed73329e24e7f210fa91adc8addaa9
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713675"
---
# <a name="detect_mismatch-no-locpragma"></a>`detect_mismatch` pragma

Inserisce un record in un oggetto. Il linker controlla tali record per potenziali dati non corrispondenti.

## <a name="syntax"></a>Sintassi

> **`#pragma detect_mismatch(`** "*nome*" **`,`** "*valore*" **`)`**

## <a name="remarks"></a>Osservazioni

Quando si collega il progetto, il linker genera un errore [LNK2038](../error-messages/tool-errors/linker-tools-error-lnk2038.md) se il progetto contiene due oggetti con lo stesso *nome* , ma ognuno ha un *valore* diverso. Utilizzare questa operazione pragma per impedire il collegamento di file oggetto non coerenti.

Il *nome* e il *valore* sono valori letterali stringa e rispettano le regole per i valori letterali stringa rispetto ai caratteri di escape e alla concatenazione. Fanno distinzione tra maiuscole e minuscole e non possono contenere una virgola, un segno di uguale, virgolette o il carattere **null** .

## <a name="example"></a>Esempio

In questo esempio vengono creati due file che includono numeri di versione diversi per la stessa etichetta della versione.

```cpp
// pragma_directive_detect_mismatch_a.cpp
#pragma detect_mismatch("myLib_version", "9")
int main ()
{
   return 0;
}

// pragma_directive_detect_mismatch_b.cpp
#pragma detect_mismatch("myLib_version", "1")
```

Se questi file vengono compilati tramite la riga di comando `cl pragma_directive_detect_mismatch_a.cpp pragma_directive_detect_mismatch_b.cpp` , si riceverà l'errore LNK2038.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
