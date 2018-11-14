---
title: LOCAL (MASM)
ms.date: 08/30/2018
f1_keywords:
- Local
helpviewer_keywords:
- LOCAL directive
ms.assetid: 76147e2d-23ca-4f1e-8817-81428becd113
ms.openlocfilehash: 94af498865151ff5c49fac9dbc03de65c4ecb934
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51327603"
---
# <a name="local-masm"></a>LOCAL (MASM)

Nella prima direttiva, all'interno di una macro **locale** definisce le etichette che sono univoche per ogni istanza della macro.

## <a name="syntax"></a>Sintassi

> LOCALE *localname* \[, *localname*]...
>
> LOCALE *label* \[ __\[__ *conteggio*__]__ ] \[ __:__  *tipo di*] \[ __,__ *etichetta* \[ __\[__ *conteggio* __]__  ] \[ *tipo*]]...

## <a name="remarks"></a>Note

Nella seconda direttiva, all'interno di una definizione di procedura (**PROC**), **locale** crea variabili basato su stack che esistono per la durata della procedura. Il *label* può essere una variabile semplice o una matrice contenente *conteggio* elementi.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>