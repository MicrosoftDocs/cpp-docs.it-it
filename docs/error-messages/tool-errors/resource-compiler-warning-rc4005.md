---
description: 'Altre informazioni su: avviso del compilatore di risorse risorse RC4005'
title: Avviso del compilatore di risorse RC4005
ms.date: 11/04/2016
f1_keywords:
- RC4005
helpviewer_keywords:
- RC4005
ms.assetid: 71f03b4a-c9a9-415d-920f-bf2e58507f93
ms.openlocfilehash: 138037e48356448550308abee8dc43cd06b9ac06
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97237127"
---
# <a name="resource-compiler-warning-rc4005"></a>Avviso del compilatore di risorse RC4005

' Identifier ': ridefinizione della macro

L'identificatore è definito due volte. Il compilatore ha usato la seconda definizione di macro.

Questo avviso può essere causato dalla definizione di una macro nella riga di comando e nel codice con una `#define` direttiva. Può anche essere causato da macro importate dai file di inclusione.

Per eliminare l'avviso, rimuovere una delle definizioni oppure utilizzare una `#undef` direttiva prima della seconda definizione.
