---
title: ASSUME
ms.date: 11/05/2019
f1_keywords:
- ASSUME
helpviewer_keywords:
- ASSUME directive
ms.assetid: cd162070-aee9-4c65-babc-005c6cc73d7c
ms.openlocfilehash: 4bf8f0c41e9ce3e296cf201efd4fd9be2033cbdb
ms.sourcegitcommit: 45f1d889df633f0f7e4a8e813b46fa73c9858b81
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/06/2019
ms.locfileid: "73702462"
---
# <a name="assume-32-bit-masm"></a>PRESUPPOSto (MASM a 32 bit)

Abilita il controllo degli errori per i valori di registro. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> Si SUPPONGA *segregister*:*nome* [[, *segregister*:*nome*]]...<br/>
> Presupporre *dataregister*:*tipo* [[, *dataregister*:*Type*]]...<br/>
> PRESUPPOSto *Register*: errore [[, *Register*: Error]]...<br/>
> Si SUPPONGA [[*Register*:]] Nothing [[, *Register*: Nothing]]...

## <a name="remarks"></a>Note

Dopo aver applicato un `ASSUME`, l'assembler controlla le modifiche apportate ai valori dei registri specificati. L' **errore** genera un errore se viene utilizzato il registro. **Nulla** rimuove il controllo degli errori di registrazione. È possibile combinare tipi diversi di presupposti in un'unica istruzione.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>