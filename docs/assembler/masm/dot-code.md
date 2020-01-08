---
title: .CODE
ms.date: 12/17/2019
f1_keywords:
- .CODE
helpviewer_keywords:
- .CODE directive
ms.assetid: 2b8c882c-c0d2-4fa3-8335-e6b12717a4f4
ms.openlocfilehash: 0975e96e670400b7fa221ae2d1b9982b5cee613b
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75314146"
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

