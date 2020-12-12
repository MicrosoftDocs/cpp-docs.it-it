---
description: 'Altre informazioni su: check_stack pragma'
title: Pragma check_stack
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.check_stack
- check_stack_CPP
helpviewer_keywords:
- check_stack pragma
- pragmas, check_stack
- pragmas, check_stack usage table
ms.assetid: f18e20cc-9abb-48b7-ad62-8d384875b996
ms.openlocfilehash: 55a639e22ded788bd731aad83eb7918e1006ae4c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97300853"
---
# <a name="check_stack-pragma"></a>Pragma check_stack

Indica al compilatore di disabilitare i probe dello stack se è impostata su **off** (o **-** ) oppure per attivare i probe dello stack se si specifica **on** (o **+** ).

## <a name="syntax"></a>Sintassi

> **#pragma check_stack (** [{ **on**  |  **off** }] **)**\
> **#pragma check_stack** { **+**  |  **-** }

## <a name="remarks"></a>Commenti

Il pragma viene applicato alla prima funzione definita dopo che è stato rilevato il pragma. Le ricerche dello stack non sono né una parte delle macro né delle funzioni generate inline.

Se non si assegna un argomento per il pragma **check_stack** , il controllo dello stack ripristina il comportamento specificato nella riga di comando. Per ulteriori informazioni, vedere [Opzioni del compilatore](../build/reference/compiler-options.md). `#pragma check_stack`Nella tabella seguente viene riepilogata l'interazione tra e l'opzione [/GS](../build/reference/gs-control-stack-checking-calls.md) .

### <a name="using-the-check_stack-pragma"></a>Utilizzo del pragma check_stack

|Sintassi|Compilato con<br /><br /> l'opzione /Gs?|Azione|
|------------|------------------------------------|------------|
|`#pragma check_stack( )` oppure<br /><br /> `#pragma check_stack`|Sì|Disabilita lo stack che controlla se sono presenti funzioni che seguono|
|`#pragma check_stack( )` oppure<br /><br /> `#pragma check_stack`|No|Abilita lo stack che controlla se sono presenti funzioni che seguono|
|`#pragma check_stack(on)`<br /><br /> o `#pragma check_stack +`|Sì o No|Abilita lo stack che controlla se sono presenti funzioni che seguono|
|`#pragma check_stack(off)`<br /><br /> o `#pragma check_stack -`|Sì o No|Disabilita lo stack che controlla se sono presenti funzioni che seguono|

## <a name="see-also"></a>Vedi anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
