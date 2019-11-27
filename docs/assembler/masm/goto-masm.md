---
title: GOTO (MASM)
ms.date: 08/30/2018
f1_keywords:
- goto
helpviewer_keywords:
- GOTO directive
ms.assetid: 6a5f73e7-6784-4eae-ac52-4fc77a7f369f
ms.openlocfilehash: 424ff295fe37e7c5ff02897a01b99a7c75876f85
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74397487"
---
# <a name="goto-masm"></a>GOTO (MASM)

Trasferisce l'assembly alla riga contrassegnata come **:** _macrolabel_.

## <a name="syntax"></a>Sintassi

> **Vai** a *macrolabel*

## <a name="remarks"></a>Note

L'istruzione **goto** è consentita solo all'interno [di](for-masm.md) [macro](macro.md), per, [Force](forc.md), [Repeat](repeat.md)e [while](while-masm.md) . La destinazione *macrolabel* deve essere l'unica direttiva sulla riga e deve essere preceduta dai due punti iniziali.

## <a name="see-also"></a>Vedere anche

[Guida di riferimento alle direttive](directives-reference.md)
