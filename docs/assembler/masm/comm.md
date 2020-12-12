---
description: 'Altre informazioni su: COMM'
title: COMM
ms.date: 12/06/2019
f1_keywords:
- COMM
helpviewer_keywords:
- COMM directive
ms.assetid: a23548c4-ad04-41fa-91da-945f228de742
ms.openlocfilehash: dc8a9ed97d55b4b6e45cb8057f46885536ba0b2f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97120952"
---
# <a name="comm"></a>COMM

Crea una variabile comune con gli attributi specificati nella *definizione*.

## <a name="syntax"></a>Sintassi

>  *Definizione* di comunicazione ⟦__,__ *definizione* ... ⟧

## <a name="remarks"></a>Commenti

Le variabili comuni sono allocate dal linker e non possono essere inizializzate. Ciò significa che non è possibile dipendere dalla posizione o dalla sequenza di tali variabili.

Ogni *definizione* ha il formato seguente:

⟦*Language-Type*⟧ ⟦**nearly**  |  ⟧ _Label_**:**_Type_⟦**:**_count_⟧

Gli argomenti del *tipo di linguaggio*, **near** e **lontano** sono validi solo in MASM a 32 bit.

Il *tipo di linguaggio* facoltativo consente di impostare le convenzioni di denominazione per il nome che segue. Esegue l'override di qualsiasi lingua specificata da **. Direttiva MODEL** . L'oggetto facoltativo **vicino o a** **distanza** sostituisce il modello di memoria corrente. L' *etichetta* è il nome della variabile. Il *tipo* può essere qualsiasi identificatore di tipo ([byte](byte-masm.md), [parola](word.md)e così via) o un Integer che specifica il numero di byte. Il *conteggio* facoltativo specifica il numero di elementi nell'oggetto dati dichiarato. Il *conteggio* predefinito è uno.

## <a name="example"></a>Esempio

In questo esempio viene creata una matrice di elementi di 512 BYTE:

```asm
COMM FAR ByteArray:BYTE:512
```

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
