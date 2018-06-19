---
title: Avviso del compilatore di risorse RC4005 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RC4005
dev_langs:
- C++
helpviewer_keywords:
- RC4005
ms.assetid: 71f03b4a-c9a9-415d-920f-bf2e58507f93
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 724764e443d4ab999c1df1247e9f5572ebdb2078
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33322484"
---
# <a name="resource-compiler-warning-rc4005"></a>Avviso del compilatore di risorse RC4005
'identifier': ridefinizione (macro)  
  
 L'identificatore è definito due volte. Il compilatore ha usato la seconda definizione di macro.  
  
 Questo avviso può essere causato dalla definizione di una macro nella riga di comando e nel codice con un `#define` direttiva. Può essere causato anche da macro importate da file di inclusione.  
  
 Per eliminare l'avviso, rimuovere una delle definizioni o utilizzare un `#undef` direttiva prima della seconda definizione.