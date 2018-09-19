---
title: Compilatore avviso (livello 1) C4276 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4276
dev_langs:
- C++
helpviewer_keywords:
- C4276
ms.assetid: 9d738c2d-29e5-408a-b9ff-be1a850b2238
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 40a6c85b460e9718a8816598afb016e9c7a493b9
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46116022"
---
# <a name="compiler-warning-level-1-c4276"></a>Avviso del compilatore (livello 1) C4276

'function': nessun prototipo fornito. non verranno utilizzati parametri

Quando si accetta l'indirizzo di una funzione con il [stdcall](../../cpp/stdcall.md) convenzione di chiamata, è necessario fornire un prototipo in modo che il compilatore può creare nome decorato della funzione. Poiché *funzione* non dispone di alcun prototipo, il compilatore, quando si crea il nome decorato, si presuppone che la funzione non ha parametri.