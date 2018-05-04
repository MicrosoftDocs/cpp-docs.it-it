---
title: -Fi (pre-elaborazione nome File di Output) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /Fi
dev_langs:
- C++
helpviewer_keywords:
- Fi compiler option (C++)
- -Fi compiler option (C++)
- /Fi compiler option (C++)
- preprocessing output files, file name
ms.assetid: 6d0ba983-a8b7-41ec-84f5-b4688ef8efee
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0e7fe5ffbb8a6ccdd5ef02d2cf3feb6b94d48233
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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