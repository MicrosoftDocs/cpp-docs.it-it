---
title: Errore del compilatore C2212 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2212
dev_langs:
- C++
helpviewer_keywords:
- C2212
ms.assetid: 3fdab304-272c-4d07-bfd4-fad75170e536
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 152b38be30b50684684bb0c2c39a035b748915b6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33168737"
---
# <a name="compiler-error-c2212"></a>Errore del compilatore C2212
'identifier': based non disponibile per puntatori a funzioni  
  
 Puntatori a funzioni non possono essere dichiarati `__based`. Se sono necessari dati basata su codice, utilizzare il `__declspec` parola chiave o `data_seg` pragma.