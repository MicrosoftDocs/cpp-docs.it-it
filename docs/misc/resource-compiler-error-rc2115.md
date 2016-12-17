---
title: "Errore del compilatore di risorse RC2115 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "RC2115"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC2115"
ms.assetid: 1b90feb0-f1fb-4f3c-8a9a-c44f9f8dc366
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Errore del compilatore di risorse RC2115
stringa di testo o ordinale previsto nel controllo  
  
 Il campo *text* di un'istruzione di CONTROL nell'istruzione **DIALOG** deve essere una stringa di testo o un riferimento ordinale al tipo di controllo. Se si usa un ordinale, assicurarsi di avere un'istruzione `#define` per il controllo.