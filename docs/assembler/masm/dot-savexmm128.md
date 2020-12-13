---
description: Ulteriori informazioni su:. SAVEXMM128
title: .SAVEXMM128
ms.date: 12/17/2019
f1_keywords:
- .SAVEXMM128
helpviewer_keywords:
- .SAVEXMM128 directive
ms.assetid: 551eb472-b8d0-47b1-8d82-995d1f485723
ms.openlocfilehash: 697598aa5820b029d19da62a817c60455059865e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97131118"
---
# <a name="savexmm128"></a>.SAVEXMM128

Genera una `UWOP_SAVE_XMM128` `UWOP_SAVE_XMM128_FAR` voce di codice di rimozione o per il registro XMM e l'offset specificati usando l'offset del prologo corrente. MASM sceglierà la codifica più efficiente.

## <a name="syntax"></a>Sintassi

> **. SAVEXMM128** *xmmreg* , *offset*

## <a name="remarks"></a>Commenti

**. SAVEXMM128** consente agli utenti ml64.exe di specificare la modalità di rimozione di una funzione di frame ed è consentita solo all'interno del prologo, che si estende dalla dichiarazione del frame [proc](proc.md) a [. Direttiva ENDPROLOG](dot-endprolog.md) . Queste direttive non generano codice; generano solo `.xdata` e `.pdata` . . SAVEXMM128 deve essere preceduto da istruzioni che implementano effettivamente le azioni da riportare. È consigliabile eseguire il wrapping di entrambe le direttive di rimozione e del codice di cui si intende rimuovere la rimozione in una macro per garantire l'accordo.

*offset* deve essere un multiplo di 16.

Per ulteriori informazioni, vedere [MASM per x64 (ml64.exe)](masm-for-x64-ml64-exe.md).

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
