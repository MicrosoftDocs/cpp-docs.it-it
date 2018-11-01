---
title: Avviso del compilatore (livello 4) C4710
ms.date: 11/04/2016
f1_keywords:
- C4710
helpviewer_keywords:
- C4710
ms.assetid: 76381ec7-3fc1-4bee-9a0a-c2c8307b92e2
ms.openlocfilehash: 0f8e66982192f8af6498c9151d32a44226e0560a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50487776"
---
# <a name="compiler-warning-level-4-c4710"></a>Avviso del compilatore (livello 4) C4710

'function': funzione non resa inline

La funzione specificata è stata selezionata per l'espansione inline, ma il compilatore non ha eseguito l'incorporamento.

L'inlining viene eseguita a discrezione del compilatore. Il **inline** parola chiave, ad esempio le **registrare** parola chiave, viene utilizzata come hint per il compilatore. Il compilatore Usa l'euristica per determinare se dovrebbe essere inline una funzione specifica per velocizzare il codice durante la compilazione per la velocità o dovrebbe essere inline una funzione specifica per ridurne il codice durante la compilazione per lo spazio. Il compilatore creerà inline solo molto piccole funzioni durante la compilazione per lo spazio.

In alcuni casi, il compilatore creerà non inline una funzione specifica per motivi di meccanici. Visualizzare [C4714](../../error-messages/compiler-warnings/compiler-warning-level-4-c4714.md) per un elenco di motivi il compilatore potrebbe non inline una funzione.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .