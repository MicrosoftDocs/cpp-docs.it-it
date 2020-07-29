---
title: Avviso del compilatore (livello 4) C4710
ms.date: 11/04/2016
f1_keywords:
- C4710
helpviewer_keywords:
- C4710
ms.assetid: 76381ec7-3fc1-4bee-9a0a-c2c8307b92e2
ms.openlocfilehash: c30b98204f447f4d9d0ab8d687602a361d909363
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218065"
---
# <a name="compiler-warning-level-4-c4710"></a>Avviso del compilatore (livello 4) C4710

' Function ': funzione non inline

La funzione specificata è stata selezionata per l'espansione inline, ma il compilatore non ha eseguito l'incorporamento.

L'incorporamento viene eseguito a discrezione del compilatore. La **`inline`** parola chiave, come la **`register`** parola chiave, viene usata come hint per il compilatore. Il compilatore usa l'euristica per determinare se deve incorporare una particolare funzione per velocizzare il codice durante la compilazione per la velocità o se deve incorporare una particolare funzione per rendere il codice più piccolo durante la compilazione per lo spazio. Il compilatore utilizzerà solo funzioni molto piccole quando si compila per lo spazio.

In alcuni casi, il compilatore non informerà una particolare funzione per motivi meccanici. Per un elenco dei motivi per cui il compilatore non può incorporare una funzione, vedere [C4714](../../error-messages/compiler-warnings/compiler-warning-level-4-c4714.md) .

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .
