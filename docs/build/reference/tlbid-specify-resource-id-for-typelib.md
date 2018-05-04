---
title: -TLBID (specifica l'ID di risorsa per la libreria dei tipi) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /tlbid
- VC.Project.VCLinkerTool.TypeLibraryResourceID
dev_langs:
- C++
helpviewer_keywords:
- tlb files, specifying resource ID
- -TLBID linker option
- .tlb files, specifying resource ID
- /TLBID linker option
- TLBID linker option
- type libraries, specifying resource ID
ms.assetid: 434b28a2-4656-4d52-ac82-8b18bf486fb2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: acea8de3f656da54a0697dc5b980dd4913054a00
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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