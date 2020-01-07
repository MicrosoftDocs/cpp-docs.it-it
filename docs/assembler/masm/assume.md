---
title: ASSUME
ms.date: 11/05/2019
f1_keywords:
- ASSUME
helpviewer_keywords:
- ASSUME directive
ms.assetid: cd162070-aee9-4c65-babc-005c6cc73d7c
ms.openlocfilehash: a74a5336e626f561f1fc61e866792ce193332d84
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75316538"
---
# <a name="assume"></a>ASSUME

Abilita il controllo degli errori per i valori di registro. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> Si **supponga***segregister* __:__ *Name* ⟦ __,__ *segregister* __:__ *Name*... ⟧\
> **Presupporre**  *dataregister* __:__ *digitare* ⟦ __,__ *dataregister* __:__ *Type*... ⟧\
> **Presupposto**  *Register* __: Error__ ⟦ __,__ *Register* __: Error__... ⟧\
> Si **supponga** che ⟦*Register* __:__ ⟧**niente** ⟦ __,__ *Register* __: Nothing__... ⟧

## <a name="remarks"></a>Note

Dopo che è stato applicato un **presupposto** , l'assembler controlla le modifiche ai valori dei registri specificati. L' **errore** genera un errore se viene utilizzato il registro. **Nulla** rimuove il controllo degli errori di registrazione. È possibile combinare tipi diversi di presupposti in un'unica istruzione.

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
