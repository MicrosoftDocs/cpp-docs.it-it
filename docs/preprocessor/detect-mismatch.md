---
title: detect_mismatch | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- vc-pragma.detect_mismatch
- detect_mismatch_CPP
dev_langs:
- C++
helpviewer_keywords:
- pragmas, detect_mismatch
- detect_mismatch pragma
ms.assetid: ddb13ac9-0e2f-40ce-be69-7e44c04f5a12
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 55d7c3b81b3b8c43fb9024f2a58c27028950b144
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50064173"
---
# <a name="detectmismatch"></a>detect_mismatch
Inserisce un record in un oggetto. Il linker controlla tali record per potenziali dati non corrispondenti.

## <a name="syntax"></a>Sintassi

```
#pragma detect_mismatch( "name", "value"))
```

## <a name="remarks"></a>Note

Quando si collega il progetto, il linker genera un errore `LNK2038` se il progetto contiene due oggetti con lo stesso `name` ma ciascuno con un `value` diverso. Utilizzare questo pragma per impedire ai file oggetto incoerenti di collegarsi.

Sia il nome che il valore sono valori letterali stringa e obbediscono a regole per valori letterali stringa in relazione ai caratteri di escape e alla concatenazione. Sono tra maiuscole e minuscole e non può contenere una virgola, segno di uguale, racchiusi tra virgolette, o la **null** carattere.

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

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)