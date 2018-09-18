---
title: Avviso del compilatore di risorse RC4005 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RC4005
dev_langs:
- C++
helpviewer_keywords:
- RC4005
ms.assetid: 71f03b4a-c9a9-415d-920f-bf2e58507f93
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 589fd008b3927887a8144b2fc63d2cbbde2af913
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46028519"
---
# <a name="resource-compiler-warning-rc4005"></a>Avviso del compilatore di risorse RC4005

'identifier': ridefinizione macro

L'identificatore è definito due volte. Il compilatore ha utilizzato la seconda definizione macro.

Questo avviso può essere causato dalla definizione di una macro nella riga di comando e nel codice con un `#define` direttiva. Può essere causato anche da macro importate da file di inclusione.

Per eliminare l'avviso, rimuovere una delle definizioni o usare un `#undef` direttiva prima della definizione della seconda.