---
title: SI SUPPONGA | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- ASSUME
dev_langs:
- C++
helpviewer_keywords:
- ASSUME directive
ms.assetid: cd162070-aee9-4c65-babc-005c6cc73d7c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6fbba50e56ae06dc3afb64582d4a131bba75a6c8
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50055853"
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