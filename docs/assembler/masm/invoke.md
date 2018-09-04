---
title: RICHIAMARE | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- Invoke
dev_langs:
- C++
helpviewer_keywords:
- INVOKE directive
ms.assetid: 12d9bb40-33b9-411e-b801-45a1d675967e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3e5698acf9986903a1d6d731c1047484a0ce6904
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43676517"
---
# <a name="invoke"></a>INVOKE

La routine viene chiamata in corrispondenza dell'indirizzo specificato da *espressione*, passando gli argomenti nello stack o nei registri in base alle convenzioni di chiamata standard del tipo di linguaggio.

## <a name="syntax"></a>Sintassi

> INVOKE *espressione* [[, *argomenti*]]

## <a name="remarks"></a>Note

Ogni argomento passato alla routine può essere un'espressione, una coppia di registro o un'espressione di indirizzo (l'espressione preceduta da `ADDR`).

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>