---
title: Compilatore avviso (livello 1) C4276 | Documenti Microsoft
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
ms.openlocfilehash: afedab27c2fb93075aa33053c12ec6973824f144
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4276"></a>Avviso del compilatore (livello 1) C4276
'function': nessun prototipo fornito. verrà utilizzato senza parametri  
  
 Quando si accetta l'indirizzo di una funzione con il [stdcall](../../cpp/stdcall.md) convenzione di chiamata, è necessario fornire un prototipo, il compilatore consente di creare nome decorato della funzione. Poiché *funzione* non dispone di alcun prototipo, il compilatore, quando si crea il nome decorato, si presuppone che la funzione non ha parametri.