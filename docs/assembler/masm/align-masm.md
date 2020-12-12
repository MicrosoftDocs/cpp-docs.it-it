---
description: 'Altre informazioni su: allinea'
title: ALIGN (MASM)
ms.date: 12/17/2019
f1_keywords:
- align
helpviewer_keywords:
- ALIGN directive
ms.assetid: 1c386b23-439f-4ec3-a6de-74427b25e47f
ms.openlocfilehash: d13fce5d70d96e4e88a3f1044f633be0145a3fc7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97121771"
---
# <a name="align"></a>ALIGN

La direttiva **align** allinea l'elemento dati successivo o l'istruzione su un indirizzo che è un multiplo del relativo parametro. Il parametro deve essere una potenza di 2 (ad esempio 1, 2, 4 e così via) minore o uguale all'allineamento del segmento.

## <a name="syntax"></a>Sintassi

> **Align** ⟦*constantExpression*⟧

## <a name="remarks"></a>Commenti

La direttiva **align** consente di specificare l'offset iniziale di un elemento dati o di un'istruzione. I dati allineati possono migliorare le prestazioni, a scapito dello spazio sprecato tra gli elementi dati. I miglioramenti delle prestazioni di grandi dimensioni possono verificarsi quando gli accessi ai dati si trovano sui limiti che rientrano nelle righe della cache. L'accesso ai limiti naturali per i tipi nativi comporta un minor tempo impiegato nel microcodice interno di riallineamento hardware.

La necessità di istruzioni allineate è rara nei processori moderni che usano un modello di indirizzamento Flat, ma potrebbe essere necessario per le destinazioni di salto nel codice precedente per altri modelli di indirizzamento.

Quando i dati sono allineati, lo spazio ignorato viene riempito con zeri. Quando le istruzioni sono allineate, lo spazio ignorato viene riempito con le istruzioni NOP di dimensioni appropriate.

## <a name="see-also"></a>Vedi anche

[ANCHE](even.md)\
[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
