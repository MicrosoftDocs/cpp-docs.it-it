---
title: LOCAL (MASM)
ms.date: 08/30/2018
f1_keywords:
- Local
helpviewer_keywords:
- LOCAL directive
ms.assetid: 76147e2d-23ca-4f1e-8817-81428becd113
ms.openlocfilehash: 94af498865151ff5c49fac9dbc03de65c4ecb934
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62178007"
---
# <a name="local-masm"></a>LOCAL (MASM)

Nella prima direttiva, all'interno di una macro **locale** definisce le etichette che sono univoche per ogni istanza della macro.

## <a name="syntax"></a>Sintassi

> LOCALE *localname* \[, *localname*]...
>
> LOCAL *label* \[ __\[__*count*__]__ ] \[__:__*type*] \[__,__ *label* \[ __\[__*count*__]__ ] \[*type*] ] ...

## <a name="remarks"></a>Note

Nella seconda direttiva, all'interno di una definizione di procedura (**PROC**), **locale** crea variabili basato su stack che esistono per la durata della procedura. Il *label* può essere una variabile semplice o una matrice contenente *conteggio* elementi.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>