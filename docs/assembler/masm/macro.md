---
title: MACRO | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- MACRO
dev_langs:
- C++
helpviewer_keywords:
- MACRO directive
ms.assetid: 89434f7c-bc2c-4e91-8940-fe2db8785233
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9d957935c9ca91d2d09a093350c8d23a848e58b2
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43688868"
---
# <a name="macro"></a>MACRO

Contrassegna un blocco di macro chiamato *name* e stabilisce *parametro* segnaposto per gli argomenti passati quando viene chiamata la macro.

## <a name="syntax"></a>Sintassi

> *nome* MACRO [[*parametro* [[: REQ |: =*predefinita* |: VARARG]]]]...<br/>
> *Istruzioni*<br/>
> ENDM [[*valore*]]

## <a name="remarks"></a>Note

Restituisce una funzione di macro *valore* all'istruzione di chiamata.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>