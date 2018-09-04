---
title: . STACK | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- .STACK
dev_langs:
- C++
helpviewer_keywords:
- .STACK directive
ms.assetid: 70019463-5d4f-41b6-8464-023a8ac2466f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 95e8d69903fabf60fdb5bc04d90452bdad163a19
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43676236"
---
# <a name="stack"></a>.STACK

Se usato con [. MODELLO](../../assembler/masm/dot-model.md), definisce un intervallo di stack (con nome segmento STACK). L'opzione facoltativa `size` specifica il numero di byte per lo stack (impostazione predefinita a 1.024). Il `.STACK` direttiva deve essere chiuso automaticamente l'istruzione dello stack.

## <a name="syntax"></a>Sintassi

> . STACK [[size]]

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>