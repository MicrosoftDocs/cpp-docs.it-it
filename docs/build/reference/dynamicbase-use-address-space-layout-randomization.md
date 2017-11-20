---
title: "-DYNAMICBASE (utilizzare funzionalità address space layout randomization) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: VC.Project.VCLinkerTool.RandomizedBaseAddress
dev_langs: C++
helpviewer_keywords:
- -DYNAMICBASE linker option
- /DYNAMICBASE linker option
- DYNAMICBASE linker option
ms.assetid: 6c0ced8e-fe9c-4b63-b956-eb8a55fbceb2
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 2bce480d906210ebd8eb597902c7f1aac855c6ad
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="dynamicbase-use-address-space-layout-randomization"></a>/DYNAMICBASE (utilizzo della funzionalità ASLR)
Specifica se generare un'immagine eseguibile che può essere riassegnata in modo casuale in fase di caricamento utilizzando la funzionalità di indirizzo space layout randomization (ASLR) di [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```  
/DYNAMICBASE[:NO]  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, l'opzione /DYNAMICBASE è attivata.  
  
 Questa opzione Modifica l'intestazione di un file eseguibile per indicare se l'applicazione deve essere riassegnata in modo casuale in fase di caricamento.  
  
 ASLR è supportato in [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)].  
  
### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Espandere il **Linker** nodo.  
  
4.  Selezionare il **avanzate** pagina delle proprietà.  
  
5.  Modificare il **indirizzo di Base casuale** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.RandomizedBaseAddress%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)