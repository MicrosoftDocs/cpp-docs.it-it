---
title: ASSUME
ms.date: 08/30/2018
f1_keywords:
- ASSUME
helpviewer_keywords:
- ASSUME directive
ms.assetid: cd162070-aee9-4c65-babc-005c6cc73d7c
ms.openlocfilehash: 97a57cc8a1acccf70572ff963e496aa79fa3ab43
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50500568"
---
# <a name="assume"></a>ASSUME

Abilita controllo degli errori per i valori dei registri.

## <a name="syntax"></a>Sintassi

> Si SUPPONGA *segregister*:*name* [[, *segregister*:*nome*]]...<br/>
> Si SUPPONGA *dataregister*:*tipo* [[, *dataregister*:*tipo*]]...<br/>
> Si SUPPONGA *registrare*: errore [[, *registrare*: errore]]...<br/>
> Si SUPPONGA [[*registrare*:]] NOTHING [[, *registrare*: NOTHING]]...

## <a name="remarks"></a>Note

Dopo un `ASSUME` viene reso effettivo, l'assembler controlla le modifiche apportate ai valori dei registri specificati. **ERRORE** genera un errore se viene usato il registro. **NOTHING** rimuove registrare il controllo degli errori. È possibile combinare tipi diversi di ipotesi in un'unica istruzione.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>