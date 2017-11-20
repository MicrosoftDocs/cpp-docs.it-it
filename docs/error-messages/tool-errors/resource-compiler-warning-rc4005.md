---
title: Avviso del compilatore di risorse RC4005 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: RC4005
dev_langs: C++
helpviewer_keywords: RC4005
ms.assetid: 71f03b4a-c9a9-415d-920f-bf2e58507f93
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 44c7239ffc814c17966bf3777218d3f8d88c9996
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="resource-compiler-warning-rc4005"></a>Avviso del compilatore di risorse RC4005
'identifier': ridefinizione (macro)  
  
 L'identificatore è definito due volte. Il compilatore ha usato la seconda definizione di macro.  
  
 Questo avviso può essere causato dalla definizione di una macro nella riga di comando e nel codice con un `#define` direttiva. Può essere causato anche da macro importate da file di inclusione.  
  
 Per eliminare l'avviso, rimuovere una delle definizioni o utilizzare un `#undef` direttiva prima della seconda definizione.