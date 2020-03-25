---
title: Avviso del compilatore (livello 4) C4710
ms.date: 11/04/2016
f1_keywords:
- C4710
helpviewer_keywords:
- C4710
ms.assetid: 76381ec7-3fc1-4bee-9a0a-c2c8307b92e2
ms.openlocfilehash: c39848b9b3e94e35c4d0c0937a0974b717c6bd8d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80198176"
---
# <a name="compiler-warning-level-4-c4710"></a>Avviso del compilatore (livello 4) C4710

' Function ': funzione non inline

La funzione specificata è stata selezionata per l'espansione inline, ma il compilatore non ha eseguito l'incorporamento.

L'incorporamento viene eseguito a discrezione del compilatore. La parola chiave **inline** , come la parola chiave **Register** , viene usata come hint per il compilatore. Il compilatore usa l'euristica per determinare se deve incorporare una particolare funzione per velocizzare il codice durante la compilazione per la velocità o se deve incorporare una particolare funzione per rendere il codice più piccolo durante la compilazione per lo spazio. Il compilatore utilizzerà solo funzioni molto piccole quando si compila per lo spazio.

In alcuni casi, il compilatore non informerà una particolare funzione per motivi meccanici. Per un elenco dei motivi per cui il compilatore non può incorporare una funzione, vedere [C4714](../../error-messages/compiler-warnings/compiler-warning-level-4-c4714.md) .

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .
