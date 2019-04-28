---
title: COMM
ms.date: 08/30/2018
f1_keywords:
- COMM
helpviewer_keywords:
- COMM directive
ms.assetid: a23548c4-ad04-41fa-91da-945f228de742
ms.openlocfilehash: 342c8acd95fd45de1a21dc298325de9a7b40b717
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62179107"
---
# <a name="comm"></a>COMM

Crea una variabile comunale con gli attributi specificati *definizione*.

## <a name="syntax"></a>Sintassi

> **COMM** *definizione* [, *definizione*]...

## <a name="remarks"></a>Note

Variabili comuni vengono allocate per il linker e non possono essere inizializzate. Ciò significa che non è necessariamente il percorso o la sequenza di tali variabili.

Ciascuna *definizione* ha il formato seguente:

[*langtype*] [**NEAR** &#124; **FAR**] _label_**:**_type_[**:**_count_]

L'opzione facoltativa *langtype* imposta le convenzioni di denominazione per il nome che segue. Esegue l'override di qualsiasi lingua specificata dal **. MODELLO** direttiva. L'opzione facoltativa **NEAR** oppure **ESTREMO** eseguire l'override del modello di memoria corrente. Il *etichetta* è il nome della variabile. Il *tipo* può essere qualsiasi identificatore di tipo ([BYTE](../../assembler/masm/byte-masm.md), [WORD](../../assembler/masm/word.md)e così via) o un numero intero che specifica il numero di byte. L'opzione facoltativa *conteggio* specifica il numero di elementi nell'oggetto dati dichiarato; il valore predefinito è uno.

## <a name="example"></a>Esempio

Questo esempio crea una matrice di elementi da 512 BYTE:

```asm
COMM FAR ByteArray:BYTE:512
```

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>
