---
title: COMM | Documenti Microsoft
ms.custom: ''
ms.date: 05/22/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- COMM
dev_langs:
- C++
helpviewer_keywords:
- COMM directive
ms.assetid: a23548c4-ad04-41fa-91da-945f228de742
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1df6c729ab130a7ff38d7f7cf83224e7425e7dba
ms.sourcegitcommit: da7b7533d1a4dc141cc0f09149e4e4196f2fe329
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/23/2018
ms.locfileid: "34463023"
---
# <a name="comm"></a>COMM

Crea una variabile comunale con gli attributi specificati *definizione*.

## <a name="syntax"></a>Sintassi

> **COMM** *definizione* [, *definizione*]...

## <a name="remarks"></a>Note

Variabili comuni vengono allocate per il linker e non possono essere inizializzate. Ciò significa che non possono dipendere il percorso o la sequenza di tali variabili.

Ogni *definizione* ha il formato seguente:

[*langtype*] [**NEAR** &#124; **ESTREMO**] _etichetta_**:**_tipo_[**:**_conteggio_]

Il parametro facoltativo *langtype* imposta le convenzioni di denominazione per il nome che segue. Esegue l'override di qualsiasi lingua specificata dal **. MODELLO** direttiva. Il parametro facoltativo **NEAR** oppure **ESTREMO** eseguire l'override del modello di memoria corrente. Il *etichetta* è il nome della variabile. Il *tipo* può essere qualsiasi identificatore di tipo ([BYTE](../../assembler/masm/byte-masm.md), [WORD](../../assembler/masm/word.md)e così via) o un numero intero che specifica il numero di byte. Il parametro facoltativo *conteggio* specifica il numero di elementi nell'oggetto dati dichiarato; il valore predefinito è uno.

## <a name="example"></a>Esempio

In questo esempio crea una matrice di elementi da 512 BYTE:

```masm
COMM FAR ByteArray:BYTE:512
```

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)
