---
title: -TLBID (specifica l'ID di risorsa per la libreria dei tipi) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /tlbid
- VC.Project.VCLinkerTool.TypeLibraryResourceID
dev_langs: C++
helpviewer_keywords:
- tlb files, specifying resource ID
- -TLBID linker option
- .tlb files, specifying resource ID
- /TLBID linker option
- TLBID linker option
- type libraries, specifying resource ID
ms.assetid: 434b28a2-4656-4d52-ac82-8b18bf486fb2
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a552edab9f2de646de3b869bf84467924b5db348
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tlbid-specify-resource-id-for-typelib"></a>/TLBID (Specifica l'ID di risorsa per una libreria dei tipi)
```  
/TLBID:id  
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 `id`  
 Un valore specificato dall'utente per una libreria dei tipi creata nel linker. Esegue l'override dell'ID di risorse predefinito di 1.  
  
## <a name="remarks"></a>Note  
 Quando si compila un programma che utilizza gli attributi, il linker creerà una libreria dei tipi. Il linker verrà assegnato un ID di risorsa 1 alla libreria dei tipi.  
  
 Se questo ID di risorsa è in conflitto con una delle risorse esistenti, è possibile specificare un altro ID con /TLBID. L'intervallo di valori che è possibile passare a `id` è compreso tra 1 e 65535.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **IDL incorporato** pagina delle proprietà.  
  
4.  Modificare il **ID risorsa della libreria dei tipi** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TypeLibraryResourceID%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)