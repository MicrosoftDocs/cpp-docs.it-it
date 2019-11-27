---
title: COMM
ms.date: 08/30/2018
f1_keywords:
- COMM
helpviewer_keywords:
- COMM directive
ms.assetid: a23548c4-ad04-41fa-91da-945f228de742
ms.openlocfilehash: d36161ba54ca80fc0f576c6f0a7c2a9410bf8075
ms.sourcegitcommit: 3ee06ec53153cf21910fc8cfef78a4f25f9633f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2019
ms.locfileid: "74541027"
---
# <a name="comm"></a>COMM

Crea una variabile comune con gli attributi specificati nella *definizione*.

## <a name="syntax"></a>Sintassi

> *Definizione* di comunicazione ⟦ __,__ *definizione* ... ⟧

## <a name="remarks"></a>Note

Le variabili comuni sono allocate dal linker e non possono essere inizializzate. Ciò significa che non è possibile dipendere dalla posizione o dalla sequenza di tali variabili.

Ogni *definizione* ha il formato seguente:

⟦*Language-Type*⟧ ⟦**near** | **lontano**⟧ _Label_ **:** _Type_⟦ **:** _count_⟧

Il *tipo di linguaggio* facoltativo consente di impostare le convenzioni di denominazione per il nome che segue. Esegue l'override di qualsiasi lingua specificata da **. Direttiva MODEL** . L'oggetto facoltativo **vicino o a** **distanza** sostituisce il modello di memoria corrente. L' *etichetta* è il nome della variabile. Il *tipo* può essere qualsiasi identificatore di tipo ([byte](../../assembler/masm/byte-masm.md), [parola](../../assembler/masm/word.md)e così via) o un Integer che specifica il numero di byte. Il *conteggio* facoltativo specifica il numero di elementi nell'oggetto dati dichiarato. Il *conteggio* predefinito è uno.

## <a name="example"></a>Esempio

In questo esempio viene creata una matrice di elementi di 512 BYTE:

```asm
COMM FAR ByteArray:BYTE:512
```

## <a name="see-also"></a>Vedere anche

[Guida di riferimento alle direttive](directives-reference.md)
