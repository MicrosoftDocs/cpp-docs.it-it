---
title: Compilatore avviso (livello 1) C4678 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4678
dev_langs:
- C++
helpviewer_keywords:
- C4678
ms.assetid: 0c588f34-595d-4e5c-9470-8723fca2cc06
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 81eb7df618f97300c2654cc0f4f7a58d18215b26
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46076099"
---
# <a name="compiler-warning-level-1-c4678"></a>Avviso del compilatore (livello 1) C4678

classe base 'base_type' meno accessibile di 'derived_type'

Un tipo pubblico deriva da un tipo privato. Se viene creata un'istanza del tipo pubblico in un assembly di riferimento, i membri del tipo di base privato non saranno accessibili.

C4678 è raggiungibile tramite l'opzione del compilatore obsolete solo **/CLR: oldSyntax**. È corretto quando si usa **/clr**, per avere una classe base meno accessibile che alla classe derivata.
