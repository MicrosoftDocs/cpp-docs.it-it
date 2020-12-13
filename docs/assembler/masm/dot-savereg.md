---
description: Ulteriori informazioni su:. SAVEREG
title: .SAVEREG
ms.date: 12/16/2019
f1_keywords:
- .SAVEREG
helpviewer_keywords:
- .SAVEREG directive
ms.assetid: 1dbc2ef6-a197-40e7-9e55-fddcae8cef29
ms.openlocfilehash: 8b946c9b25c3f4dc6a4696b418e85487e20014eb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97131183"
---
# <a name="savereg"></a>.SAVEREG

Genera una `UWOP_SAVE_NONVOL` `UWOP_SAVE_NONVOL_FAR` voce di codice di rimozione o per il registro (*reg*) e l'offset (offset) specificati usando l'offset del prologo corrente. MASM sceglierà la codifica più efficiente.

## <a name="syntax"></a>Sintassi

> **. SAVEREG** *reg*__,__ *offset*

## <a name="remarks"></a>Commenti

**. SAVEREG** consente agli utenti ml64.exe di specificare il modo in cui una funzione frame viene rilasciata ed è consentita solo all'interno del prologo, che si estende dalla dichiarazione del frame [proc](proc.md) a [. Direttiva ENDPROLOG](dot-endprolog.md) . Queste direttive non generano codice; generano solo `.xdata` e `.pdata` . **. SAVEREG** deve essere preceduto da istruzioni che implementano effettivamente le azioni da riportare. È consigliabile eseguire il wrapping di entrambe le direttive di rimozione e del codice di cui si intende rimuovere la rimozione in una macro per garantire l'accordo.

Per ulteriori informazioni, vedere [MASM per x64 (ml64.exe)](masm-for-x64-ml64-exe.md).

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
