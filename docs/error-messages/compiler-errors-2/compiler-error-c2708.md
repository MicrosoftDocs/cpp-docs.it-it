---
title: Errore del compilatore C2708 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2708
dev_langs:
- C++
helpviewer_keywords:
- C2708
ms.assetid: d52d3088-1141-42f4-829c-74755a7fcc3a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d30b2e5c1856a604ae314316cd71d6acc00a7c74
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33234760"
---
# <a name="compiler-error-c2708"></a>Errore del compilatore C2708
'identifier': lunghezza in byte effettivi dei parametri è diverso dal precedente chiamata o di riferimento  
  
 Oggetto [stdcall](../../cpp/stdcall.md) funzione deve essere preceduta da un prototipo. In caso contrario, il compilatore interpreta la prima chiamata alla funzione come un prototipo e questo errore si verifica quando il compilatore rileva una chiamata non corrispondente.  
  
 Per correggere questo errore, aggiungere un prototipo di funzione.