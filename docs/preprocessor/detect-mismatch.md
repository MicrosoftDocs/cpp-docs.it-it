---
description: 'Altre informazioni su: detect_mismatch pragma'
title: Pragma detect_mismatch
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.detect_mismatch
- detect_mismatch_CPP
helpviewer_keywords:
- pragmas, detect_mismatch
- detect_mismatch pragma
ms.assetid: ddb13ac9-0e2f-40ce-be69-7e44c04f5a12
ms.openlocfilehash: e57ffac731409fb14b61d35f780ee19094108655
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97300736"
---
# <a name="detect_mismatch-pragma"></a>Pragma detect_mismatch

Inserisce un record in un oggetto. Il linker controlla tali record per potenziali dati non corrispondenti.

## <a name="syntax"></a>Sintassi

> **#pragma detect_mismatch (** "*nome*" **,** "*valore*" **)**

## <a name="remarks"></a>Commenti

Quando si collega il progetto, il linker genera un errore [LNK2038](../error-messages/tool-errors/linker-tools-error-lnk2038.md) se il progetto contiene due oggetti con lo stesso *nome* , ma ognuno ha un *valore* diverso. Utilizzare questo pragma per impedire ai file oggetto incoerenti di collegarsi.

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

Se si compilano entrambi i file tramite la riga di comando `cl pragma_directive_detect_mismatch_a.cpp pragma_directive_detect_mismatch_b.cpp`, verrà visualizzato l'errore `LNK2038`.

## <a name="see-also"></a>Vedi anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
