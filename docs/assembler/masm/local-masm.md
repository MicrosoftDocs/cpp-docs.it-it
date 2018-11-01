---
title: LOCAL (MASM)
ms.date: 08/30/2018
f1_keywords:
- Local
helpviewer_keywords:
- LOCAL directive
ms.assetid: 76147e2d-23ca-4f1e-8817-81428becd113
ms.openlocfilehash: c8ea49b9862159a5a56bfb3d2c3cd0c1f4cd7413
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50596872"
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