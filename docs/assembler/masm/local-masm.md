---
title: LOCALE (MASM) | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- Local
dev_langs:
- C++
helpviewer_keywords:
- LOCAL directive
ms.assetid: 76147e2d-23ca-4f1e-8817-81428becd113
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e8105bc8168ce28d468a1378c5cf7889907a7c9f
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43685063"
---
# <a name="local-masm"></a>LOCAL (MASM)

Nella prima direttiva, all'interno di una macro **locale** definisce le etichette che sono univoche per ogni istanza della macro.

## <a name="syntax"></a>Sintassi

> LOCALE *localname* [[, *localname*]]...

> LOCALE *label* [[[*conteggio*]]] [[:*tipo*]] [[, *etichetta* [[[*conteggio*]]] [[ *tipo*]]]]...

## <a name="remarks"></a>Note

Nella seconda direttiva, all'interno di una definizione di procedura (**PROC**), **locale** crea variabili basato su stack che esistono per la durata della procedura. Il *label* può essere una variabile semplice o una matrice contenente *conteggio* elementi.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>