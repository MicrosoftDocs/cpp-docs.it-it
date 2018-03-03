---
title: Errore irreversibile C1854 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1854
dev_langs:
- C++
helpviewer_keywords:
- C1854
ms.assetid: 8c21a9cc-1737-475c-9e57-8725cd8937c1
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0e0a26e902b1a40203bb4323bce8e28e687e9647
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1854"></a>Errore irreversibile C1854
  
> non è possibile sovrascrivere le informazioni generate durante la creazione dell'intestazione precompilata nel file oggetto: '*filename*'  
  
È specificato il [/Yu (utilizza il File intestazione precompilata)](../../build/reference/yu-use-precompiled-header-file.md) opzione dopo aver specificato il [/Yc (Crea precompilata File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md) opzione per lo stesso file.  
  
Per risolvere questo problema, in generale, impostare solo un file nel progetto per essere compilato utilizzando il **/Yc** opzione e impostare tutti gli altri file per la compilazione utilizzando il **/Yu** opzione. Per informazioni dettagliate sull'utilizzo del **/Yc** opzione e come impostarla nell'IDE di Visual Studio, vedere [/Yc (Crea precompilata File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md). Per ulteriori informazioni sull'utilizzo di intestazioni precompilate, vedere [creazione di file di intestazione precompilati](../../build/reference/creating-precompiled-header-files.md).  
