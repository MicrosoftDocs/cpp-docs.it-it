---
title: Avviso del compilatore di risorse RC4005
ms.date: 11/04/2016
f1_keywords:
- RC4005
helpviewer_keywords:
- RC4005
ms.assetid: 71f03b4a-c9a9-415d-920f-bf2e58507f93
ms.openlocfilehash: 571c4ac285e9477b017dbc21cf9ff733539759d2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50613603"
---
# <a name="resource-compiler-warning-rc4005"></a>Avviso del compilatore di risorse RC4005

'identifier': ridefinizione macro

L'identificatore è definito due volte. Il compilatore ha utilizzato la seconda definizione macro.

Questo avviso può essere causato dalla definizione di una macro nella riga di comando e nel codice con un `#define` direttiva. Può essere causato anche da macro importate da file di inclusione.

Per eliminare l'avviso, rimuovere una delle definizioni o usare un `#undef` direttiva prima della definizione della seconda.