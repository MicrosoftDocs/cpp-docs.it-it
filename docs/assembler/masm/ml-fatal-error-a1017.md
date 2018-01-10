---
title: Errore ML irreversibile A1017 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: A1017
dev_langs: C++
helpviewer_keywords: A1017
ms.assetid: bef0b312-5431-4e5a-b637-c19919acf01b
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0603ccb1de5767294afcfc012c1b9c8b18ac776d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ml-fatal-error-a1017"></a>Errore ML irreversibile A1017
**manca un nome di file di origine**  
  
 Machine Learning non è riuscito a trovare un file per assemblare o passare al linker.  
  
 Questo errore viene generato quando si assegnano le opzioni della riga di comando ML senza specificare un nome di file per eseguire un'azione. Per assemblare i file che non contengono un'estensione asm, utilizzare il **/Ta** opzione della riga di comando.  
  
 Questo errore può essere generato anche richiamando ML senza parametri, se la variabile di ambiente ML contiene le opzioni della riga di comando.  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)