---
title: -MANIFESTINPUT (specificare Input del manifesto) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
ms.assetid: a0b0c21e-1f9b-4d8c-bb3f-178f57fa7f1b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: eecf1740855c2feef0d7cac4bbcc85ad95eade6f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32372851"
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