---
title: GOTO (MASM) | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- goto
dev_langs:
- C++
helpviewer_keywords:
- GOTO directive
ms.assetid: 6a5f73e7-6784-4eae-ac52-4fc77a7f369f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b0be678e2d39389cbc551c386c1890f799124b5b
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43694018"
---
# <a name="goto-masm"></a>GOTO (MASM)

Trasferisce assieme alla riga contrassegnata **:**_macrolabel_.

## <a name="syntax"></a>Sintassi

> **GOTO** *macrolabel*

## <a name="remarks"></a>Note

**GOTO** è consentito solo all'interno [MACRO](macro.md), [per](for-masm.md), [fil](forc.md), [ripetere](repeat.md), e [durante](while-masm.md)blocchi. Il *macrolabel* destinazione deve essere l'unica direttiva sulla riga e deve essere preceduto da due punti iniziali.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>
