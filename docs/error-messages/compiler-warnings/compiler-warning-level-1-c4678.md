---
title: Avviso del compilatore (livello 1) C4678
ms.date: 11/04/2016
f1_keywords:
- C4678
helpviewer_keywords:
- C4678
ms.assetid: 0c588f34-595d-4e5c-9470-8723fca2cc06
ms.openlocfilehash: 9e61d919f08bbbf4f3e74da7ba4f2388516d3152
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50624628"
---
# <a name="compiler-warning-level-1-c4678"></a>Avviso del compilatore (livello 1) C4678

classe base 'base_type' meno accessibile di 'derived_type'

Un tipo pubblico deriva da un tipo privato. Se viene creata un'istanza del tipo pubblico in un assembly di riferimento, i membri del tipo di base privato non saranno accessibili.

C4678 è raggiungibile tramite l'opzione del compilatore obsolete solo **/CLR: oldSyntax**. È corretto quando si usa **/clr**, per avere una classe base meno accessibile che alla classe derivata.
