---
description: 'Altre informazioni su: presupporre'
title: ASSUME
ms.date: 11/05/2019
f1_keywords:
- ASSUME
helpviewer_keywords:
- ASSUME directive
ms.assetid: cd162070-aee9-4c65-babc-005c6cc73d7c
ms.openlocfilehash: b597e50dafe07950d87cb04cf5e697b63c55611c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97121745"
---
# <a name="assume"></a>ASSUME

Abilita il controllo degli errori per i valori di registro. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> Si **supponga***segregister*__:__*Name* ⟦__,__ *segregister*__:__*Name*... ⟧\  
> **Presupporre**  *dataregister*__:__*digitare* ⟦__,__ *dataregister*__:__*Type*... ⟧\
> **Presupposto**  *Register*__: Error__ ⟦__,__ *Register*__: Error__... ⟧\
> Si **supponga** che ⟦*Register*__:__⟧**niente** ⟦__,__ *Register*__: Nothing__... ⟧

## <a name="remarks"></a>Commenti

Dopo che è stato applicato un **presupposto** , l'assembler controlla le modifiche ai valori dei registri specificati. L' **errore** genera un errore se viene utilizzato il registro. **Nulla** rimuove il controllo degli errori di registrazione. È possibile combinare tipi diversi di presupposti in un'unica istruzione.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
