---
title: "Errore del compilatore CS1906 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1906"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1906"
ms.assetid: 1a6abf5c-f673-4256-93ac-313dce50acc0
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1906
L'opzione 'option' non è valida. La visibilità della risorsa deve essere 'public' o 'private'  
  
 Questo errore indica un'opzione della riga di comando [\/resource \(incorporamento del file di risorse nell'output\)](../Topic/-resource%20\(C%23%20Compiler%20Options\).md) o [\/linkresource \(collegamento a risorsa .NET Framework\)](../Topic/-linkresource%20\(C%23%20Compiler%20Options\).md) non valida. Controllare la sintassi dell'opzione della riga di comando **\/resource** o **\/linkresource** e verificare che il modificatore di accessibilità usato sia **public** o `private`.