---
description: Ulteriori informazioni su:. CODICE
title: .CODE
ms.date: 12/17/2019
f1_keywords:
- .CODE
helpviewer_keywords:
- .CODE directive
ms.assetid: 2b8c882c-c0d2-4fa3-8335-e6b12717a4f4
ms.openlocfilehash: 3f47b3bf9f345ae39f68b1b21e8f3807f554ea2d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97132276"
---
# <a name="code"></a>.CODE

(solo MASM a 32 bit). Se usato con [. MODEL](dot-model.md), indica l'inizio di un segmento di codice.

## <a name="syntax"></a>Sintassi

> **.***Nome*⟦ del codice ⟧ \
> ⟦ *segmentItem* ⟧... \
> ⟦ *codesegmentnameId* **termina**;; ⟧\

### <a name="parameters"></a>Parametri

*nome*\
Parametro facoltativo che specifica il nome del segmento di codice. Il nome predefinito è **_TEXT** per i [modelli](dot-model.md)piccoli, piccoli, compatti e Flat. Il nome predefinito è *modulename* _TEXT per altri modelli.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[. DATI](dot-data.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
