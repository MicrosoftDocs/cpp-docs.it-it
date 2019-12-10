---
title: .CODE
ms.date: 12/06/2019
f1_keywords:
- .CODE
helpviewer_keywords:
- .CODE directive
ms.assetid: 2b8c882c-c0d2-4fa3-8335-e6b12717a4f4
ms.openlocfilehash: 36d9c01d2a24b446ddc91fe73f3cb677067b3e4c
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74987923"
---
# <a name="code-32-bit-masm"></a>. CODICE (MASM a 32 bit)

Se usato con [. MODEL](../../assembler/masm/dot-model.md), indica l'inizio di un segmento di codice.

## <a name="syntax"></a>Sintassi

> **.** *Nome*⟦ del codice ⟧

### <a name="parameters"></a>Parametri

*nome*\
Parametro facoltativo che specifica il nome del segmento di codice. Il nome predefinito è **_TEXT** per i [modelli](../../assembler/masm/dot-model.md)piccoli, piccoli, compatti e Flat. Il nome predefinito è *modulename*_TEXT per altri modelli.

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](../../assembler/masm/directives-reference.md)\
[.DATA](../../assembler/masm/dot-data.md)
