---
title: -ALIGN (Allineamento sezione) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.Alignment
- /align
dev_langs: C++
helpviewer_keywords:
- sections, specifying alignment
- ALIGN linker option
- /ALIGN linker option
- -ALIGN linker option
- section alignment
- sections
ms.assetid: f2f8ac24-e90e-4bea-8205-f2960a3b1740
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: e620719d5a69c333a45664fba5967a740224d4d5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="align-section-alignment"></a>/ALIGN (Allineamento sezione)
```  
/ALIGN[:number]  
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 `number`  
 Il valore di allineamento.  
  
## <a name="remarks"></a>Note  
 L'opzione /ALIGN specifica l'allineamento di ogni sezione entro lo spazio di indirizzi lineare del programma. Il `number` argomento è espresso in byte e deve essere una potenza di due. Il valore predefinito è 4 KB (4096). Il linker genera un avviso se l'allineamento produce un'immagine non valida.  
  
 A meno che non si sta scrivendo un'applicazione, ad esempio un driver di dispositivo, non è necessario modificare l'allineamento.  
  
 È possibile modificare l'allineamento di una particolare sezione con il parametro di allineamento per il [/sezione](../../build/reference/section-specify-section-attributes.md) opzione.  
  
 Il valore di allineamento specificato non può essere inferiore rispetto all'allineamento sezione più grande.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione nel **opzioni aggiuntive** casella.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)