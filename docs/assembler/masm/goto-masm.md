---
title: GOTO (MASM)
ms.date: 08/30/2018
f1_keywords:
- goto
helpviewer_keywords:
- GOTO directive
ms.assetid: 6a5f73e7-6784-4eae-ac52-4fc77a7f369f
ms.openlocfilehash: a03cbda5a8ff64f6c167766f416e7744a5382ad5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62203082"
---
# <a name="goto-masm"></a>GOTO (MASM)

Trasferisce assieme alla riga contrassegnata **:**_macrolabel_.

## <a name="syntax"></a>Sintassi

> **GOTO** *macrolabel*

## <a name="remarks"></a>Note

**GOTO** è consentito solo all'interno [MACRO](macro.md), [per](for-masm.md), [fil](forc.md), [ripetere](repeat.md), e [durante](while-masm.md)blocchi. Il *macrolabel* destinazione deve essere l'unica direttiva sulla riga e deve essere preceduto da due punti iniziali.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>
