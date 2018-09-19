---
title: Errore del compilatore C2827 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2827
dev_langs:
- C++
helpviewer_keywords:
- C2827
ms.assetid: cb3e5814-0c92-40e4-b620-98578ae3003a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 139a012f9ed4dd3b6d81d92be3c441df4f899aac
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46052214"
---
# <a name="compiler-error-c2827"></a>Errore del compilatore C2827

non è possibile eseguire l'override globale di 'operator operator' con forma unaria

L'operatore non può avere una forma unaria di fuori di un oggetto.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Rendere l'operatore di overload locale a un oggetto.

1. Scegliere un operatore unario appropriate per eseguire l'overload.