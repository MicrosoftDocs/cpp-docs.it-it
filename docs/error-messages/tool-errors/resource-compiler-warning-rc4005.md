---
title: Avviso del compilatore di risorse RC4005
ms.date: 11/04/2016
f1_keywords:
- RC4005
helpviewer_keywords:
- RC4005
ms.assetid: 71f03b4a-c9a9-415d-920f-bf2e58507f93
ms.openlocfilehash: c428fefa90cceed6a8bc9b7f6e4b95ec2db5e039
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80182409"
---
# <a name="resource-compiler-warning-rc4005"></a>Avviso del compilatore di risorse RC4005

' Identifier ': ridefinizione della macro

L'identificatore è definito due volte. Il compilatore ha usato la seconda definizione di macro.

Questo avviso può essere causato dalla definizione di una macro nella riga di comando e nel codice con una direttiva `#define`. Può anche essere causato da macro importate dai file di inclusione.

Per eliminare l'avviso, rimuovere una delle definizioni oppure utilizzare una direttiva `#undef` prima della seconda definizione.
