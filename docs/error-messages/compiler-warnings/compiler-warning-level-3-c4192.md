---
title: Compilatore (livello 3) Avviso C4192 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4192
dev_langs:
- C++
helpviewer_keywords:
- C4192
ms.assetid: ea5f91fa-8c96-4f3f-ac42-0c8a86d4e5df
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3bae9b7af95de94b8f667cb09710af21044f8b80
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33291414"
---
# <a name="compiler-warning-level-3-c4192"></a>Compilatore (livello 3) Avviso C4192
esclusione automatica 'name' durante l'importazione libreria dei tipi 'library'  
  
 A `#import` libreria contiene un elemento, *nome*, che viene definito anche nelle intestazioni di sistema Win32. A causa delle limitazioni delle librerie dei tipi, i nomi **IUnknown** o GUID vengono spesso definiti in una libreria dei tipi, la definizione di intestazioni di sistema di duplicazione. `#import` rileverà questi elementi e non riavviarsi incorporarli nei file di intestazione con estensione tlh e con estensione tli.  
  
 Per eseguire l'override di questo comportamento, utilizzare `#import` attributi [no_auto_exclude](../../preprocessor/no-auto-exclude.md) e [include ()](../../preprocessor/include-parens.md).