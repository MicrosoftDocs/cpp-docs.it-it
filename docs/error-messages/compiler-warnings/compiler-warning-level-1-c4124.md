---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4124'
title: Avviso del compilatore (livello 1) C4124
ms.date: 11/04/2016
f1_keywords:
- C4124
helpviewer_keywords:
- C4124
ms.assetid: c08c3a65-9584-47a1-a147-44f00c4b230e
ms.openlocfilehash: 97fe65f8513f656d85059714ae598ffad9f7a49c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97267391"
---
# <a name="compiler-warning-level-1-c4124"></a>Avviso del compilatore (livello 1) C4124

__fastcall con controllo dello stack non è efficiente

La **`__fastcall`** parola chiave è stata usata con il controllo dello stack abilitato.

La **`__fastcall`** convenzione genera codice più veloce, ma il controllo dello stack causa il rallentamento del codice. Quando si usa **`__fastcall`** , disattivare il controllo dello stack con il **check_stack** pragma o/GS.

Questo avviso viene generato solo per la prima funzione dichiarata in queste condizioni.
