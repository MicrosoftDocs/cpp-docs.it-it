---
description: 'Altre informazioni su: EXTERN'
title: EXTERN (MASM)
ms.date: 12/06/2019
helpviewer_keywords:
- EXTERN directive
ms.assetid: 667d703d-3aaf-4139-a586-29bc5dab1aff
ms.openlocfilehash: 354a390a16fb663dc6e907e37022a362c3ab5648
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97130351"
---
# <a name="extern"></a>EXTERN

Definisce una o più variabili esterne, etichette o simboli chiamati *nome* il cui tipo è *Type*.

## <a name="syntax"></a>Sintassi

> **Extern** ⟦*Language-Type*⟧ *nome* ⟦ __(__*altid*__)__ ⟧ __:__ *Type* ⟦__,__ ⟦*Language-Type*⟧ *Name* ⟦ __(__*altid*__)__ ⟧ __:__ *Type* ... ⟧

## <a name="remarks"></a>Commenti

L'argomento del *tipo di linguaggio* è valido solo in MASM a 32 bit.

Il *tipo* può essere [ABS](operator-abs.md), che importa il *nome* come costante. Uguale a [EXTRN](extrn.md).

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
