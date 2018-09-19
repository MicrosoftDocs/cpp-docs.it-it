---
title: Errore del compilatore C2828 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2828
dev_langs:
- C++
helpviewer_keywords:
- C2828
ms.assetid: d8df6ed4-5954-46c2-b59b-52881d4e923d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 65d9c36946459372924adc23caa5a44c40568f33
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46051932"
---
# <a name="compiler-error-c2828"></a>Errore del compilatore C2828

non è possibile eseguire l'override globale di 'operator operator' con forma binaria

L'operatore non può avere un formato binario di fuori di un oggetto.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Rendere l'operatore di overload locale a un oggetto.

1. Scegliere un operatore unario appropriate per eseguire l'overload.