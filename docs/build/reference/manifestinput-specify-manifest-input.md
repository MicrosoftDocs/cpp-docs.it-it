---
title: -MANIFESTINPUT (specificare Input del manifesto) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: a0b0c21e-1f9b-4d8c-bb3f-178f57fa7f1b
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e1eec78675845e3f738bb0b6b440b3a71f1fd572
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="manifestinput-specify-manifest-input"></a>/MANIFESTDEPENDENCY (specifica l'input del manifesto)
Specifica un file di input del manifesto da includere nel manifesto incorporato nell'immagine.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/MANIFESTINPUT:filename  
```  
  
#### <a name="parameters"></a>Parametri  
 `filename`  
 Il file manifesto da includere nel manifesto incorporato.  
  
## <a name="remarks"></a>Note  
 Il **/MANIFESTINPUT** opzione specifica il percorso di file di input da utilizzare per creare il manifesto incorporato in un'immagine eseguibile. Se si dispone di un manifesto più file di input, utilizzare l'opzione più volte, una volta per ogni file di input. I file manifesto di input vengono uniti per creare il manifesto incorporato. Questa opzione richiede il **/manifest: incorporare** opzione.  
  
 Questa opzione non può essere impostata direttamente nel [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)]. Utilizzare invece il **file manifesto aggiuntivi** proprietà del progetto per specificare il file manifesto aggiuntivi da includere. Per ulteriori informazioni, vedere [Input e Output, strumento manifesto, proprietà di configurazione, \<Projectname > finestra di dialogo Pagine delle proprietà](../../ide/input-and-output-manifest-tool.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)