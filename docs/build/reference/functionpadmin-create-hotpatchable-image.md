---
title: -FUNCTIONPADMIN (Crea immagine hot patch) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /functionpadmin
dev_langs: C++
helpviewer_keywords:
- -FUNCTIONPADMIN linker option
- /FUNCTIONPADMIN linker option
ms.assetid: 25b02c13-1add-4fbd-add9-fcb30eb2cae7
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f737cdb412420ffb87664024b2314941e67b045b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="functionpadmin-create-hotpatchable-image"></a>/FUNCTIONPADMIN (Crea immagine con funzionalità di patch a caldo)
Prepara un'immagine per la patch a caldo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/FUNCTIONPADMIN[:space]  
```  
  
## <a name="remarks"></a>Note  
 dove  
  
 `space` (facoltativo)  
 La quantità di spaziatura interna da aggiungere all'inizio di ogni funzione, 5, 6 o 16.  x86 immagini richiedono cinque byte di riempimento, le immagini richiedono 6 byte e immagini create per la famiglia di processori Itanium richiedono 16 byte di riempimento all'inizio di ogni funzione x64.  
  
 Per impostazione predefinita, il compilatore aggiungerà la quantità corretta di spazio per l'immagine, in base al tipo di computer dell'immagine.  
  
 Per il linker di generare un'immagine di patch a caldo, è necessario che i file obj siano stati compilati con [/hotpatch (Crea immagine di patch a caldo)](../../build/reference/hotpatch-create-hotpatchable-image.md).  
  
 Quando si compila e si collega un'immagine con una singola chiamata di cl.exe, **/hotpatch** implica **/functionpadmin**.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione nel **opzioni aggiuntive** casella.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)