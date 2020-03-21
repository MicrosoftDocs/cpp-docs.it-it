---
title: .CODE
ms.date: 12/17/2019
f1_keywords:
- .CODE
helpviewer_keywords:
- .CODE directive
ms.assetid: 2b8c882c-c0d2-4fa3-8335-e6b12717a4f4
ms.openlocfilehash: 7e53befcc46319d0ecf2287ab96a19a73a0b0b85
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80076270"
---
# <a name="code"></a>.CODE

(solo MASM a 32 bit). Se usato con [. MODEL](dot-model.md), indica l'inizio di un segmento di codice.

## <a name="syntax"></a>Sintassi

> **.** *Nome*⟦ del codice ⟧ \
> ⟦ *segmentItem* ⟧... \
> ⟦ *codesegmentnameId* **termina**;; ⟧\

### <a name="parameters"></a>Parametri

*nome*\
Parametro facoltativo che specifica il nome del segmento di codice. Il nome predefinito è **_TEXT** per i [modelli](dot-model.md)piccoli, piccoli, compatti e Flat. Il nome predefinito è *modulename*_TEXT per altri modelli.

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](directives-reference.md)\
[.\ dati](dot-data.md)
[Grammatica BNF di MASM](masm-bnf-grammar.md)
