---
title: COMM | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
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
ms.openlocfilehash: 87bf6d91de052d7ecaf637100b455e66819c748b
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43690032"
---
# <a name="comm"></a>COMM

Crea una variabile comunale con gli attributi specificati *definizione*.

## <a name="syntax"></a>Sintassi

> **COMM** *definizione* [, *definizione*]...

## <a name="remarks"></a>Note

Variabili comuni vengono allocate per il linker e non possono essere inizializzate. Ciò significa che non è necessariamente il percorso o la sequenza di tali variabili.

Ciascuna *definizione* ha il formato seguente:

[*langtype*] [**NEAR** &#124; **ESTREMO**] _etichetta_**:**_tipo_[**:**_conteggio_]

L'opzione facoltativa *langtype* imposta le convenzioni di denominazione per il nome che segue. Esegue l'override di qualsiasi lingua specificata dal **. MODELLO** direttiva. L'opzione facoltativa **NEAR** oppure **ESTREMO** eseguire l'override del modello di memoria corrente. Il *etichetta* è il nome della variabile. Il *tipo* può essere qualsiasi identificatore di tipo ([BYTE](../../assembler/masm/byte-masm.md), [WORD](../../assembler/masm/word.md)e così via) o un numero intero che specifica il numero di byte. L'opzione facoltativa *conteggio* specifica il numero di elementi nell'oggetto dati dichiarato; il valore predefinito è uno.

## <a name="example"></a>Esempio

Questo esempio crea una matrice di elementi da 512 BYTE:

```asm
COMM FAR ByteArray:BYTE:512
```

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>
