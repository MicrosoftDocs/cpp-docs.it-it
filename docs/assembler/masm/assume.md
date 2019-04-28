---
title: ASSUME
ms.date: 08/30/2018
f1_keywords:
- ASSUME
helpviewer_keywords:
- ASSUME directive
ms.assetid: cd162070-aee9-4c65-babc-005c6cc73d7c
ms.openlocfilehash: 97a57cc8a1acccf70572ff963e496aa79fa3ab43
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62166464"
---
# <a name="assume"></a>ASSUME

Abilita controllo degli errori per i valori dei registri.

## <a name="syntax"></a>Sintassi

> ASSUME *segregister*:*name* [[, *segregister*:*name*]]...<br/>
> ASSUME *dataregister*:*type* [[, *dataregister*:*type*]]...<br/>
> Si SUPPONGA *registrare*: errore [[, *registrare*: errore]]...<br/>
> ASSUME [[*register*:]] NOTHING [[, *register*:NOTHING]]...

## <a name="remarks"></a>Note

Dopo un `ASSUME` viene reso effettivo, l'assembler controlla le modifiche apportate ai valori dei registri specificati. **ERRORE** genera un errore se viene usato il registro. **NOTHING** rimuove registrare il controllo degli errori. È possibile combinare tipi diversi di ipotesi in un'unica istruzione.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>