---
title: Avviso del compilatore (livello 1) C4276
ms.date: 11/04/2016
f1_keywords:
- C4276
helpviewer_keywords:
- C4276
ms.assetid: 9d738c2d-29e5-408a-b9ff-be1a850b2238
ms.openlocfilehash: 87f13f7da12a3f7e40aaad180e2a3bc83e121771
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50586914"
---
# <a name="compiler-warning-level-1-c4276"></a>Avviso del compilatore (livello 1) C4276

'function': nessun prototipo fornito. non verranno utilizzati parametri

Quando si accetta l'indirizzo di una funzione con il [stdcall](../../cpp/stdcall.md) convenzione di chiamata, è necessario fornire un prototipo in modo che il compilatore può creare nome decorato della funzione. Poiché *funzione* non dispone di alcun prototipo, il compilatore, quando si crea il nome decorato, si presuppone che la funzione non ha parametri.