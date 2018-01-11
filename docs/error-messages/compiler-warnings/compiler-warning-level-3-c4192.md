---
title: Compilatore (livello 3) Avviso C4192 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4192
dev_langs: C++
helpviewer_keywords: C4192
ms.assetid: ea5f91fa-8c96-4f3f-ac42-0c8a86d4e5df
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 022c0e0aac8d231963ddf6d5d3715d55f726a8b9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-3-c4192"></a>Compilatore (livello 3) Avviso C4192
esclusione automatica 'name' durante l'importazione libreria dei tipi 'library'  
  
 A `#import` libreria contiene un elemento, *nome*, che viene definito anche nelle intestazioni di sistema Win32. A causa delle limitazioni delle librerie dei tipi, i nomi **IUnknown** o GUID vengono spesso definiti in una libreria dei tipi, la definizione di intestazioni di sistema di duplicazione. `#import`rileva questi elementi e rifiutare di includerli nei file di intestazione con estensione tlh e tli.  
  
 Per eseguire l'override di questo comportamento, utilizzare `#import` attributi [no_auto_exclude](../../preprocessor/no-auto-exclude.md) e [include ()](../../preprocessor/include-parens.md).