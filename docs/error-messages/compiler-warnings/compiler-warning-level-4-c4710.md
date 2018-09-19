---
title: Compilatore avviso (livello 4) C4710 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4710
dev_langs:
- C++
helpviewer_keywords:
- C4710
ms.assetid: 76381ec7-3fc1-4bee-9a0a-c2c8307b92e2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1f6de17f7005db3834bfcfc93aff03f12f0293ce
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46046095"
---
# <a name="compiler-warning-level-4-c4710"></a>Avviso del compilatore (livello 4) C4710

'function': funzione non resa inline

La funzione specificata è stata selezionata per l'espansione inline, ma il compilatore non ha eseguito l'incorporamento.

L'inlining viene eseguita a discrezione del compilatore. Il **inline** parola chiave, ad esempio le **registrare** parola chiave, viene utilizzata come hint per il compilatore. Il compilatore Usa l'euristica per determinare se dovrebbe essere inline una funzione specifica per velocizzare il codice durante la compilazione per la velocità o dovrebbe essere inline una funzione specifica per ridurne il codice durante la compilazione per lo spazio. Il compilatore creerà inline solo molto piccole funzioni durante la compilazione per lo spazio.

In alcuni casi, il compilatore creerà non inline una funzione specifica per motivi di meccanici. Visualizzare [C4714](../../error-messages/compiler-warnings/compiler-warning-level-4-c4714.md) per un elenco di motivi il compilatore potrebbe non inline una funzione.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .