---
title: ASSUME
ms.date: 11/05/2019
f1_keywords:
- ASSUME
helpviewer_keywords:
- ASSUME directive
ms.assetid: cd162070-aee9-4c65-babc-005c6cc73d7c
ms.openlocfilehash: 73ef8bcc33087a56747b80f94482fcd6c50e3bf6
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74399271"
---
# <a name="assume-32-bit-masm"></a>PRESUPPOSto (MASM a 32 bit)

Abilita il controllo degli errori per i valori di registro. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> Si **supponga***segregister* __:__ *Name* ⟦ __,__ *segregister* __:__ *Name*... ⟧\
> **Presupporre**  *dataregister* __:__ *digitare* ⟦ __,__ *dataregister* __:__ *Type*... ⟧\
> **Presupposto**  *Register* __: Error__ ⟦ __,__ *Register* __: Error__... ⟧\
> Si **supponga** che ⟦*Register* __:__ ⟧**niente** ⟦ __,__ *Register* __: Nothing__... ⟧

## <a name="remarks"></a>Note

Dopo che è stato applicato un **presupposto** , l'assembler controlla le modifiche ai valori dei registri specificati. L' **errore** genera un errore se viene utilizzato il registro. **Nulla** rimuove il controllo degli errori di registrazione. È possibile combinare tipi diversi di presupposti in un'unica istruzione.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)
