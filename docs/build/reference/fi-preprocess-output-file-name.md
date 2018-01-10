---
title: -Fi (pre-elaborazione nome File di Output) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /Fi
dev_langs: C++
helpviewer_keywords:
- Fi compiler option (C++)
- -Fi compiler option (C++)
- /Fi compiler option (C++)
- preprocessing output files, file name
ms.assetid: 6d0ba983-a8b7-41ec-84f5-b4688ef8efee
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9bc3076a529984358aed16902f509ceb01423f9e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fi-preprocess-output-file-name"></a>/Fi (pre-elaborazione nome file di output)
Specifica il nome del file di output a cui il [/P (pre-elabora in un File)](../../build/reference/p-preprocess-to-a-file.md) l'opzione del compilatore scrive l'output pre-elaborato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Fipathname  
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`pathname`|Il nome e percorso del file di output prodotti dal **/p** l'opzione del compilatore.|  
  
## <a name="remarks"></a>Note  
 Utilizzare il **/Fi** opzione del compilatore in combinazione con il **/p** l'opzione del compilatore.  
  
 Se si specifica solo un percorso per il `pathname` parametro, il nome base del file di origine viene utilizzato come nome di base del file di output pre-elaborato. Il `pathname` parametro non richiede un'estensione di file specifico. Tuttavia, un'estensione di "i" viene utilizzata se non si specifica un'estensione di file.  
  
## <a name="example"></a>Esempio  
 La seguente riga di comando pre-elabora effettuata, conserva i commenti, aggiunge [#line](../../preprocessor/hash-line-directive-c-cpp.md) direttive e scrive il risultato nel file myProcess.  
  
```  
CL /P /FiMYPROCESS.I PROGRAM.CPP  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [/P (pre-elaborazione in un File)](../../build/reference/p-preprocess-to-a-file.md)   
 [Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)