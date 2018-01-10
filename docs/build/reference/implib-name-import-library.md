---
title: -IMPLIB (libreria di importazione nome) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /implib
- VC.Project.VCLinkerTool.ImportLIbrary
dev_langs: C++
helpviewer_keywords:
- IMPLIB linker option
- /IMPLIB linker option
- -IMPLIB linker option
- import libraries, overriding default name
ms.assetid: fe8f71ab-7055-41b5-8ef8-2b97cfa4a432
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 523fc171aa8df3d0b4c6e09909db7c2c1dc0b833
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="implib-name-import-library"></a>/IMPLIB (Assegna un nome alla libreria di importazione)
  
> /IMPLIB:*filename*  
  
## <a name="parameters"></a>Parametri  
  
*filename*  
Un nome utente specificato per la libreria di importazione. Sostituisce il nome predefinito.  
  
## <a name="remarks"></a>Note  
  
L'opzione /IMPLIB sostituisce il nome predefinito per la libreria di importazione che viene creato quando compila un programma che contiene esportazioni. Il nome predefinito è costituito dal nome di base del file di output principale e l'estensione. lib. Un programma contiene esportazioni se vengono specificati uno o più delle operazioni seguenti:  
  
-   Il [dllexport](../../cpp/dllexport-dllimport.md) (parola chiave) nel codice sorgente  
  
-   [ESPORTAZIONI](../../build/reference/exports.md) istruzione in un file. def  
  
-   Un [/esportazione](../../build/reference/export-exports-a-function.md) specifica in un comando LINK  
  
 COLLEGAMENTO /IMPLIB viene ignorata quando non viene creata una libreria di importazione. Se viene specificata alcuna esportazione, non verrà creata una libreria di importazione. Se viene utilizzato un file di esportazione nella compilazione, collegamento si presuppone che esista già una libreria di importazione e non crearne uno. Per informazioni sulle librerie di importazione e file di esportazione, vedere [riferimenti a LIB](../../build/reference/lib-reference.md).  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **avanzate** pagina delle proprietà.  
  
4.  Modificare il **libreria di importazione** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ImportLibrary%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)