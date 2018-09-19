---
title: Errore del compilatore C3552 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3552
dev_langs:
- C++
helpviewer_keywords:
- C3552
ms.assetid: 83401524-1bf1-44c0-8aca-a6eb35c4224c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dd9f7ae37500e115fa33fa61298cab800c88f9c7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46081260"
---
# <a name="compiler-error-c3552"></a>Errore del compilatore C3552

'typename': un tipo restituito specificato in ritardo non può contenere 'auto'

Se si usa la parola chiave `auto` come segnaposto per il tipo restituito di una funzione, è necessario fornire un tipo restituito specificato in ritardo. Tuttavia, non è possibile usare un'altra parola chiave `auto` per specificare il tipo restituito specificato in ritardo. Ad esempio, il frammento di codice seguente genera l'errore C3552.

`auto myFunction->auto; // C3552`